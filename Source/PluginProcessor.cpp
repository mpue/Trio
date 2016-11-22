/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "LowPassFilter.h"
#include "Filter.h"

#include <iostream>
#include "math.h"
#include "ADSR.h"

using namespace std;

//==============================================================================
TrioAudioProcessor::TrioAudioProcessor()
{
    globalPitch = 0;
    currentProgramNumber = 0;
    leftFilter = new LowPassFilter();
    rightFilter = new LowPassFilter();
    filterCutoff = 12000.0f;
    filterEnvelope = new ADSR();
    leftFilter->setModulator(filterEnvelope);
    rightFilter->setModulator(filterEnvelope);
    
    this->parameters = new AudioProcessorValueTreeState(*this,nullptr);
    parameters->createAndAddParameter("volume", "Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("osc1vol", "Osc 1 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc2vol", "Osc 2 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc3vol", "Osc 3 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("osc1pitch", "Osc 1 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc2pitch", "Osc 2 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc3pitch", "Osc 3 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("osc1fine", "Osc 1 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc2fine", "Osc 2 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc3fine", "Osc 3 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr);

    parameters->createAndAddParameter("osc1shape", "Osc 1 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc2shape", "Osc 2 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("osc3shape", "Osc 3 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("filtermod", "Filter Env Mod", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("cutoff", "Filter cutoff", String(), NormalisableRange<float>(0.1f,20.0f), 12.0f, nullptr, nullptr);
    parameters->createAndAddParameter("reso", "Filter Resonance", String(), NormalisableRange<float>(0.1f,20.0f), 0.1f, nullptr, nullptr);
    
    parameters->createAndAddParameter("lfo1rate", "LFO 1 Rate", String(), NormalisableRange<float>(0.1f,10.0f), 1.0f, nullptr, nullptr);
    parameters->createAndAddParameter("lfo2rate", "LFO 2 Rate", String(), NormalisableRange<float>(0.1f,10.0f), 1.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("lfo1shape", "LFO 1 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("lfo2shape", "LFO 2 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("lfo1amount", "LFO 1 Mod Amount", String(), NormalisableRange<float>(0.0f,10.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("lfo2amount", "LFO 2 Mod AMount", String(), NormalisableRange<float>(0.0f,10.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("filterattack", "Filter attack", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("filterdecay", "Filter decay", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("filtersustain", "Filter sustain", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("filterrelease", "Filter release", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("ampattack", "Amp attack", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("ampdecay", "Amp decay", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("ampsustain", "Amp sustain", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr);
    parameters->createAndAddParameter("amprelease", "Amp release", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr);
    
    parameters->createAndAddParameter("modsource", "Mod source", String(), NormalisableRange<float>(1.0f,4.0f), 1.0f, nullptr, nullptr);
    parameters->createAndAddParameter("mod1target", "Mod 1 target", String(), NormalisableRange<float>(1.0f,5.0f), 1.0f, nullptr, nullptr);
    parameters->createAndAddParameter("mod2target", "Mod 2 target", String(), NormalisableRange<float>(1.0f,5.0f), 1.0f, nullptr, nullptr);
    
    
    parameters->state = ValueTree (Identifier ("default"));
    
    String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
    String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
    
    File presets = File(presetPath);
    
    if(presets.exists() && presets.isDirectory()) {
        ScopedPointer<DirectoryIterator> iter = new DirectoryIterator(presets, false);
        while(iter->next()) {
            cout << "Found preset : " << iter->getFile().getFileNameWithoutExtension() << endl;
            programNames.push_back(iter->getFile().getFileNameWithoutExtension());
        }
        iter = nullptr;
        
    }
    
    parameters->addParameterListener("volume", this);
    parameters->addParameterListener("osc1vol", this);
    parameters->addParameterListener("osc2vol", this);
    parameters->addParameterListener("osc3vol", this);
    parameters->addParameterListener("osc1pitch", this);
    parameters->addParameterListener("osc2pitch", this);
    parameters->addParameterListener("osc3pitch", this);
    parameters->addParameterListener("osc1fine", this);
    parameters->addParameterListener("osc2fine", this);
    parameters->addParameterListener("osc3fine", this);
    parameters->addParameterListener("osc1shape", this);
    parameters->addParameterListener("osc2shape", this);
    parameters->addParameterListener("osc3shape", this);
    parameters->addParameterListener("filtermod", this);
    parameters->addParameterListener("cutoff", this);
    parameters->addParameterListener("reso", this);
    parameters->addParameterListener("lfo1rate", this);
    parameters->addParameterListener("lfo2rate", this);
    parameters->addParameterListener("lfo1shape", this);
    parameters->addParameterListener("lfo2shape", this);
    parameters->addParameterListener("lfo1rate", this);
    parameters->addParameterListener("lfo2rate", this);
    parameters->addParameterListener("lfo1amount", this);
    parameters->addParameterListener("lfo2amount", this);
    parameters->addParameterListener("filterattack", this);
    parameters->addParameterListener("filterdecay", this);
    parameters->addParameterListener("filtersustain", this);
    parameters->addParameterListener("filterrelease", this);
    parameters->addParameterListener("ampattack", this);
    parameters->addParameterListener("ampdecay", this);
    parameters->addParameterListener("ampsustain", this);
    parameters->addParameterListener("amprelease", this);
    parameters->addParameterListener("modsource", this);
    parameters->addParameterListener("amprelease", this);
    parameters->addParameterListener("modsource", this);
    parameters->addParameterListener("mod1target", this);
    parameters->addParameterListener("mod2target", this);
}

TrioAudioProcessor::~TrioAudioProcessor()
{
    this->leftFilter = nullptr;
    this->rightFilter = nullptr;
    this->parameters = nullptr;
    this->filterEnvelope = nullptr;
    
    this->cleanupVoices();
    
}

//==============================================================================
const String TrioAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool TrioAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool TrioAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

double TrioAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int TrioAudioProcessor::getNumPrograms()
{
    int size = programNames.size();
    return size;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int TrioAudioProcessor::getCurrentProgram()
{
    return this->currentProgramNumber;
}

void TrioAudioProcessor::setCurrentProgram (int index)
{
    
    String name = programNames.at(index);
    
    this->currentProgramNumber = index;
    
    String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
    String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
    
    String filename = name + ".xml";
    File preset = File(presetPath+filename);
    
    if (preset.exists()) {
        ScopedPointer<XmlElement> xml = XmlDocument(preset).getDocumentElement();
        ValueTree state = ValueTree::fromXml(*xml.get());
        setState(&state);
        xml = nullptr;
        
        if (this->programCombo != 0) {
            this->programCombo->setText(name, NotificationType::dontSendNotification);
        }
        
        setSelectedProgram(name);
    }
    
}

const String TrioAudioProcessor::getProgramName (int index)
{
    return getProgramNames().at(index);
}

void TrioAudioProcessor::changeProgramName (int index, const String& newName)
{
}

vector<String> TrioAudioProcessor::getProgramNames() {
    return this->programNames;
}

String TrioAudioProcessor::getSelectedProgram() {
    return this->selectedProgram;
}

void TrioAudioProcessor::setSelectedProgram(juce::String program) {
    this->selectedProgram = program;
}

//==============================================================================
void TrioAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    cout << "PrepareToPlay" << endl;
    this->sampleRate = sampleRate;
    this->samplesPerBlock = samplesPerBlock;
    
    filterEnvelope->setAttackRate(0 * sampleRate);  // 1 second
    filterEnvelope->setDecayRate(0 * sampleRate);
    filterEnvelope->setReleaseRate(0 * sampleRate);
    filterEnvelope->setSustainLevel(.8);
    
    // WhiteNoise* whiteNoise = new WhiteNoise(sampleRate);
    
    configureOscillators(Oszillator::OscMode::SAW, Oszillator::OscMode::SAW, Oszillator::OscMode::SAW);
    
    lfo1 = new Sine(sampleRate);
    lfo2 = new Sine(sampleRate);
    
    this->model = new Model(voices, getLeftFilter(), getRightFilter(),getFilterEnv(), lfo1, lfo2, 44100);
    
    leftFilter->coefficients(filterCutoff, 0.1f );
    rightFilter->coefficients(filterCutoff, 0.1f);
    
    // voice->addOszillator(whiteNoise);
    
}

Oszillator* TrioAudioProcessor::createOscillator(Oszillator::OscMode mode) {
    
    Oszillator* osc = nullptr;
    
    switch (mode) {
        case Oszillator::OscMode::SAW : {
            osc = new MultimodeOscillator(sampleRate);
            osc->setMode(Oszillator::OscMode::SAW);
            break;
        }
        case Oszillator::OscMode::SINE : {
            osc = new MultimodeOscillator(sampleRate);
            osc->setMode(Oszillator::OscMode::SINE);
            break;
        }
            
        default:
            break;
    }
    
    if (osc != nullptr) {
        osc->setPitch(0);
    }
    
    return osc;
    
}

void TrioAudioProcessor::configureOscillators(Oszillator::OscMode mode1, Oszillator::OscMode mode2, Oszillator::OscMode mode3) {
    for (int i = 0; i < 127; i++) {
        Voice* v = new Voice(sampleRate);

        Oszillator* osc1 = createOscillator(mode1);
        Oszillator* osc2 = createOscillator(mode2);
        Oszillator* osc3 = createOscillator(mode3);
        
        v->addOszillator(osc1);
        v->addOszillator(osc2);
        v->addOszillator(osc3);
        
        // v->setModulator(lfo1);
        
        voices.push_back(v);
    }
}

void TrioAudioProcessor::setupOscillators(Oszillator::OscMode mode1, Oszillator::OscMode mode2, Oszillator::OscMode mode3) {
    for (int i = 0; i < voices.size(); i++) {
        voices.at(i)->getOszillators().at(0)->setMode(mode1);
        voices.at(i)->getOszillators().at(1)->setMode(mode2);
        voices.at(i)->getOszillators().at(2)->setMode(mode3);
        voices.at(i)->setModulator(lfo1);
    }
}

void TrioAudioProcessor::cleanupVoices() {
    for(std::vector<Voice*>::iterator it = voices.begin(); it != voices.end(); ++it) {
        delete *it;
    }
    voices.clear();
}

void TrioAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}
/*
#ifndef JucePlugin_PreferredChannelConfigurations
bool TrioAudioProcessor::setPreferredBusArrangement (bool isInput, int bus, const AudioChannelSet& preferredSet)
{
    // Reject any bus arrangements that are not compatible with your plugin

    const int numChannels = preferredSet.size();

   #if JucePlugin_IsMidiEffect
    if (numChannels != 0)
        return false;
   #elif JucePlugin_IsSynth
    if (isInput || (numChannels != 1 && numChannels != 2))
        return false;
   #else
    if (numChannels != 1 && numChannels != 2)
        return false;

    if (! AudioProcessor::setPreferredBusArrangement (! isInput, bus, preferredSet))
        return false;
   #endif

    return AudioProcessor::setPreferredBusArrangement (isInput, bus, preferredSet);
}
#endif
*/
void TrioAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    MidiMessage m;
    int time;
    
    for (MidiBuffer::Iterator i (midiMessages); i.getNextEvent (m, time);)
    {
        if (m.isNoteOn())
        {
            if (getVoicesPlaying() == 0) {
                filterEnvelope->gate(true);
            }
            Note* note = new Note();
            cout << "Note on " << m.getNoteNumber() << ", " << "velocity : " << static_cast<int>(m.getVelocity()) << endl;
            cout << "Volume : " << model->getVolume() << endl;
            note->setMidiNote(m.getNoteNumber());
            note->setVelocity(m.getVelocity());
            voices.at(m.getNoteNumber())->setNote(note);
            voices.at(m.getNoteNumber())->setPlaying(true);
            
 
          
        }
        else if (m.isNoteOff())
        {
            cout << "Note off " << m.getNoteNumber() << endl;
            voices.at(m.getNoteNumber())->setPlaying(false);
            if (getVoicesPlaying() == 0) {
                filterEnvelope->gate(false);
            }
            
        }
        else if (m.isAftertouch())
        {
        }
        else if (m.isPitchWheel())
        {
            int pitch = m.getPitchWheelValue();
            
            if (pitch != globalPitch) {
                
                globalPitch = pitch;
                
                /*
                cout << "PitchWheel : " << globalPitch << endl;
                voice->setPitch(globalPitch / 4);
                voice->updateOscillator(0);
                voice->updateOscillator(1);
                voice->updateOscillator(2);
                 */
            }

        }
        else if (m.isController()) {
            cout << "Control change : "<< m.getControllerNumber() << " : " << m.getControllerValue() << endl;
        }
        
    }
    
    float* leftIn = (float*)buffer.getReadPointer(0);
    float* rightIn = (float*)buffer.getReadPointer(1);
    
    float* const leftOut = buffer.getWritePointer(0);
    float* const rightOut = buffer.getWritePointer(1);
    
    for (int sample = 0; sample < buffer.getNumSamples(); ++sample) {
        
        float value = 0;
        
        for (int i = 0; i < voices.size();i++) {
            // if (voices.at(i)->isPlaying()) {
                value += voices.at(i)->process();
            // }
        }
        
        leftOut[sample] = value * model->getVolume();
        rightOut[sample] = value * model->getVolume();
        
        
        // cout << "Value : " << value << endl;
        
        // leftFilter->process (&leftIn[sample], &leftOut[sample]);
        // rightFilter->process(&rightIn[sample], &rightOut[sample]);

        if(filterEnvelope->getState() != ADSR::env_idle) {
            filterEnvelope->process();
        }
        else {
            filterEnvelope->reset();
        }
        
        if (model->getModsource() == 2) {
            lfo1->process();
        }
        else if (model->getModsource() == 3) {
            lfo2->process();
        }
        else if (model->getModsource() == 4) {
            lfo1->process();
            lfo2->process();
        }
        
    }
    
    // is there at least one modulation target?
    if(model->getModsource() > 1) {
        
        // LFO 1
        if (model->getModsource() == 2) {
            // Osc 1 pitch
            if (model->getMod1Target() == 3) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(0)->setFine(lfo1->process() * 10);
                }
            }
            // Osc 2 pitch
            else if (model->getMod1Target() == 4) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(1)->setFine(lfo1->process() * 10);
                }
            }
            // Osc 1 pitch
            else if (model->getMod1Target() == 5) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(2)->setFine(lfo1->process() * 10);
                }
            }
            
        }
        // LFO 2
        else if (model->getModsource() == 3) {
            // Osc 1 pitch
            if (model->getMod2Target() == 3) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(0)->setFine(lfo2->process() * 10);
                }
            }
            // Osc 2 pitch
            else if (model->getMod2Target() == 4) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(1)->setFine(lfo2->process() * 10);
                }
            }
            // Osc 3 pitch
            else if (model->getMod2Target() == 5) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(2)->setFine(lfo2->process() * 10);
                }
            }
        }
        // LFO 1+2
        else if (model->getModsource() == 4) {
            
            // Osc 1 pitch
            if (model->getMod1Target() == 3) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(0)->setFine(lfo1->process() * 10);
                }
            }
            // Osc 2 pitch
            else if (model->getMod1Target() == 4) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(1)->setFine(lfo1->process() * 10);
                }
            }
            // Osc 3 pitch
            else if (model->getMod1Target() == 5) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(2)->setFine(lfo1->process() * 10);
                }
            }
            
            // Osc 1 pitch
            if (model->getMod2Target() == 3) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(0)->setFine(lfo2->process() * 10);
                }
            }
            // Osc 2 pitch
            else if (model->getMod2Target() == 4) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(1)->setFine(lfo2->process() * 10);
                }
            }
            // Osc 3 pitch
            else if (model->getMod2Target() == 5) {
                for (int i = 0; i < voices.size();i++) {
                    voices.at(i)->getOszillators().at(2)->setFine(lfo2->process() * 10);
                }
            }
        }
    }

    // buffer.applyGain(model->getVolume());
    
    leftFilter->process(leftOut,0,buffer.getNumSamples());
    rightFilter->process(rightOut, 0,buffer.getNumSamples());
    
}

//==============================================================================
bool TrioAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* TrioAudioProcessor::createEditor()
{
    return new TrioAudioProcessorEditor (*this);
}

//==============================================================================
void TrioAudioProcessor::getStateInformation (MemoryBlock& destData) 
{
    cout << "getStateInformation" << endl;
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    ScopedPointer<XmlElement> xml (parameters->state.createXml());
    copyXmlToBinary (*xml, destData);
}

void TrioAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    cout << "setStateInformation" << endl;
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    ScopedPointer<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
    if (xmlState != nullptr)
        if (xmlState->hasTagName (parameters->state.getType()))
            parameters->state = ValueTree::fromXml (*xmlState);
    
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    cout << "createPluginFilter" << endl;
    return new TrioAudioProcessor();
}

int TrioAudioProcessor::getVoicesPlaying() {
    int num = 0;
    
    for (int i = 0; i < voices.size();i++) {
        if (voices.at(i)->isPlaying()) {
            num++;
        }
    }
    return num;
}

void TrioAudioProcessor::parameterChanged(const juce::String &parameterID, float newValue) {
    cout << "Parameter " << parameterID << " changed to " << newValue << endl;
    
    if (parameterID == "volume") {
        model->setVolume(newValue);
    }
    if (parameterID == "osc1vol") {
        model->setOsc1Volume(newValue);
    }
    if (parameterID == "osc2vol") {
        model->setOsc2Volume(newValue);
    }
    if (parameterID == "osc3vol") {
        model->setOsc3Volume(newValue);
    }
    if (parameterID == "osc1pitch") {
        model->setOsc1Pitch(newValue);
    }
    if (parameterID == "osc2pitch") {
        model->setOsc2Pitch(newValue);
    }
    if (parameterID == "osc3pitch") {
        model->setOsc2Pitch(newValue);
    }
    if (parameterID == "osc1shape") {
    }
    if (parameterID == "osc2shape") {
    }
    if (parameterID == "osc3shape") {
    }
    if (parameterID == "filtermod") {
        model->setFilterModAmount(newValue);
    }
    if (parameterID == "cutoff") {
        model->setFilterCutoff(newValue);
    }
    if (parameterID == "reso") {
        model->setFilterResonance(newValue);
    }
    if (parameterID == "lfo1rate") {
        model->setLfo1Rate(newValue);
    }
    if (parameterID == "lfo2rate") {
        model->setLfo2Rate(newValue);
    }
    if (parameterID == "lfo1shape") {

    }
    if (parameterID == "lfo2shape") {
        
    }
    if (parameterID == "lfo1amount") {
        model->setLfo1Amount(newValue);
    }
    if (parameterID == "lfo2amount") {
        model->setLfo2Amount(newValue);
    }
    if (parameterID == "filterattack") {
        model->setFilterEnvAttack(newValue);
    }
    if (parameterID == "filterdecay") {
        model->setFilterEnvDecay(newValue);
    }
    if (parameterID == "filtersustain") {
        model->setFilterEnvSustain(newValue);
    }
    if (parameterID == "filterrelease") {
        model->setFilterEnvRelease(newValue);
    }
    if (parameterID == "ampattack") {
        model->setAmpEnvAttack(newValue);
    }
    if (parameterID == "ampdecay") {
        model->setAmpEnvDecay(newValue);
    }
    if (parameterID == "ampsustain") {
        model->setAmpEnvSustain(newValue);
    }
    if (parameterID == "amprelease") {
        model->setAmpEnvRelease(newValue);
    }
    if (parameterID == "modsource") {
        model->setModsource(newValue);
    }
    if (parameterID == "mod1target") {
        model->setMod1Target(newValue);
    }
     if (parameterID == "mod2target") {
        model->setMod2Target(newValue);
    }
}

vector<Voice*> TrioAudioProcessor::getVoices() const {
    return this->voices;
}

Filter* TrioAudioProcessor::getLeftFilter() {
    return leftFilter;
}

Filter* TrioAudioProcessor::getRightFilter() {
    return rightFilter;
}

ADSR* TrioAudioProcessor::getFilterEnv() {
    return this->filterEnvelope;
}

Model* TrioAudioProcessor::getModel() {
    return this->model;
}

AudioProcessorValueTreeState* TrioAudioProcessor::getValueTreeState() {
    return this->parameters;
}

void TrioAudioProcessor::setState(ValueTree* state) {
    
    Oszillator::OscMode mode1 = Oszillator::OscMode::SAW;
    Oszillator::OscMode mode2 = Oszillator::OscMode::SAW;
    Oszillator::OscMode mode3 = Oszillator::OscMode::SAW;
    
    for (int i = 0; i < state->getNumChildren();i++) {
        // cout << state->getChild(i).getProperty("id").toString()<< ":" << state->getChild(i).getProperty("value").toString().getFloatValue() << endl;
        String id = state->getChild(i).getProperty("id").toString();
        String value = state->getChild(i).getProperty("value").toString();
        // parameters->getParameter(id)->setValue(value.getFloatValue());
        float nval = this->parameters->getParameterRange(id).convertTo0to1(value.getFloatValue());
        parameters->getParameter(id)->setValueNotifyingHost(nval);
        cout << " param " << id << "has now value " << nval << endl;
    
        
        if (id == "osc1shape") {
            if (nval == 0.0f) {
                mode1 = Oszillator::OscMode::SAW;
            }
            else if (nval == 0.5f) {
                mode1 = Oszillator::OscMode::SINE;
            }
            else if (nval == 1.0f) {
                mode1 = Oszillator::OscMode::PULSE;
            }
        }
        else if (id == "osc2shape") {
            if (nval == 0.0f) {
                mode2 = Oszillator::OscMode::SAW;
            }
            else if (nval == 0.5f) {
                mode2 = Oszillator::OscMode::SINE;
            }
            else if (nval == 1.0f) {
                mode2 = Oszillator::OscMode::PULSE;
            }
        }
        else if (id == "osc3shape") {
            if (nval == 0.0f) {
                mode3 = Oszillator::OscMode::SAW;
            }
            else if (nval == 0.5f) {
                mode3 = Oszillator::OscMode::SINE;
            }
            else if (nval == 1.0f) {
                mode3 = Oszillator::OscMode::PULSE;
            }
        }
        else if (id == "modsource") {
            
        }
    }
    
    setupOscillators(mode1, mode2, mode3);
    
}

void TrioAudioProcessor::comboBoxChanged(juce::ComboBox *comboBoxThatHasChanged) {
    if (comboBoxThatHasChanged->getName() == "presetCombo")
    {
        
        this->programCombo = comboBoxThatHasChanged;
        String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
        String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
        
        String filename = comboBoxThatHasChanged->getText() + ".xml";
        File preset = File(presetPath+filename);
        
        if (preset.exists()) {
            ScopedPointer<XmlElement> xml = XmlDocument(preset).getDocumentElement();
            ValueTree state = ValueTree::fromXml(*xml.get());
            setState(&state);
            xml = nullptr;
        }
        
        cout << "Program select : " << comboBoxThatHasChanged->getText() << endl;
        
        setSelectedProgram(comboBoxThatHasChanged->getText());
        this->currentProgramNumber = comboBoxThatHasChanged->getItemId(comboBoxThatHasChanged->getSelectedItemIndex()) - 1;
        
        try {
            this->programNames.at(this->currentProgramNumber);
        }
        catch(const std::out_of_range& oor) {
            this->programNames.push_back(comboBoxThatHasChanged->getText());
        }
        
        updateHostDisplay();
        
    }
}

void TrioAudioProcessor::selectFilterModulator(TrioAudioProcessor::ModulatorType type) {
    switch(type) {
        case ENV :
            leftFilter->setModulator(filterEnvelope);
            rightFilter->setModulator(filterEnvelope);
            break;
        case LFO1:
            leftFilter->setModulator(lfo1);
            rightFilter->setModulator(lfo1);
            break;
        case LFO2:
            leftFilter->setModulator(lfo2);
            rightFilter->setModulator(lfo2);
            break;
        default:
            break;
    }
}
