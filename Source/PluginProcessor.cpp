/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "MultimodeFilter.h"
#include "Filter.h"

#include <iostream>
#include "math.h"
#include "ADSR.h"

using namespace std;

//==============================================================================
TrioAudioProcessor::TrioAudioProcessor()
{
	// setPlayConfigDetails(0, 2, 44100, 512);

    globalPitch = 0;
    currentProgramNumber = 0;
    
    currentTime = 0;
    lastTime = 0;
    elapsed = 0;
    deltaTime = 0;
    bpm = 0;
    
    lastppq = 0;
    currentppq = 0;
    deltappq = 0;
    
    this->parameters = new AudioProcessorValueTreeState(*this,nullptr);
    registeredParams.push_back(parameters->createAndAddParameter("volume", "Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("osc1vol", "Osc 1 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc2vol", "Osc 2 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc3vol", "Osc 3 Volume", String(), NormalisableRange<float>(0.0f,1.0f), 1.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("osc1pitch", "Osc 1 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc2pitch", "Osc 2 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc3pitch", "Osc 3 Pitch", String(), NormalisableRange<float>(-36.0f,36.0f, 1.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("osc1fine", "Osc 1 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc2fine", "Osc 2 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc3fine", "Osc 3 Fine", String(), NormalisableRange<float>(-2.0f,2.0f), 0.0f, nullptr, nullptr));

    registeredParams.push_back(parameters->createAndAddParameter("osc1shape", "Osc 1 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc2shape", "Osc 2 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("osc3shape", "Osc 3 Shape", String(), NormalisableRange<float>(0.0f,3.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("filtermod", "Filter Env Mod", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("filtermode", "Filtermode", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("cutoff", "Filter cutoff", String(), NormalisableRange<float>(0.1f,20.0f), 12.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("reso", "Filter Resonance", String(), NormalisableRange<float>(0.1f,20.0f), 0.1f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("lfo1rate", "LFO 1 Rate", String(), NormalisableRange<float>(0.1f,10.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("lfo2rate", "LFO 2 Rate", String(), NormalisableRange<float>(0.1f,10.0f), 1.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("lfo1shape", "LFO 1 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("lfo2shape", "LFO 2 Shape", String(), NormalisableRange<float>(0.0f,2.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("lfo1amount", "LFO 1 Mod Amount", String(), NormalisableRange<float>(0.0f,10.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("lfo2amount", "LFO 2 Mod AMount", String(), NormalisableRange<float>(0.0f,10.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("filterattack", "Filter attack", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("filterdecay", "Filter decay", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("filtersustain", "Filter sustain", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("filterrelease", "Filter release", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("ampattack", "Amp attack", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("ampdecay", "Amp decay", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("ampsustain", "Amp sustain", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("amprelease", "Amp release", String(), NormalisableRange<float>(0.0f,5.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("modsource", "Mod source", String(), NormalisableRange<float>(1.0f,5.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("mod1target", "Mod 1 target", String(), NormalisableRange<float>(1.0f,5.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("mod2target", "Mod 2 target", String(), NormalisableRange<float>(1.0f,5.0f), 1.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_enabled", "Reverb enabled", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_damping", "Reverb Damping", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_drylevel", "Reverb Dry level", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_wetlevel", "Reverb Wet level", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_freeze", "Reverb Freeze level", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_size", "Reverb Room size", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxreverb_width", "Reverb Width", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_enabled", "Delay enabled", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_mixleft", "Delay mix left", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_mixright", "Delay mix right", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_fbleft", "Delay feedback left", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_fbright", "Delay feedback right", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_timeleft", "Delay time left", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdelay_timeright", "Delay time right", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    
    registeredParams.push_back(parameters->createAndAddParameter("fxdist_enabled", "Distortion enabled", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdist_mode", "Distortion mode", String(), NormalisableRange<float>(1.0f,3.0f), 1.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdist_mix", "Distortion mix", String(), NormalisableRange<float>(0.0f,1.0f), 0.0f, nullptr, nullptr));
    registeredParams.push_back(parameters->createAndAddParameter("fxdist_drive", "Distortion drive", String(), NormalisableRange<float>(0.0f,10.0f), 0.0f, nullptr, nullptr));
    
    parameters->state = ValueTree (Identifier ("default"));
    
    String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
    String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
    
    File presets = File(presetPath);
    
    if(presets.exists() && presets.isDirectory()) {
        ScopedPointer<DirectoryIterator> iter = new DirectoryIterator(presets, false);
        while(iter->next()) {
            programNames.push_back(iter->getFile().getFileNameWithoutExtension());
        }
        iter = nullptr;
        
    }
    
    for (int i = 0; i < registeredParams.size();i++) {
        String id = static_cast<AudioProcessorParameterWithID*>(registeredParams.at(i))->paramID;
        parameters->addParameterListener(id, this);
		Logger::getCurrentLogger()->writeToLog("Adding listener for param : " + id);

    }
    
    multimodeFilter = new MultimodeFilter();
    multimodeFilter->setMode(MultimodeFilter::LOWPASS);
    outputFilter = new MultimodeFilter();
    outputFilter->setMode(MultimodeFilter::HIGHPASS);
    
    filterCutoff = 12000.0f;
    filterEnvelope = new ADSR();
    multimodeFilter->setModulator(filterEnvelope);

    reverbParams.damping = 0.0;
    reverbParams.dryLevel = 0.0;
    reverbParams.freezeMode = 0.0;
    reverbParams.roomSize = 0.0;
    reverbParams.wetLevel = 0.0;
    reverbParams.width = 0.0;
    
    reverb = new StereoReverb();
    reverb->setParameters(reverbParams);
    
    fxReverbEnabled = false;
    fxDelayEnabled = false;
    
    distortion = new Distortion();
    stereoDelay = new StereoDelay();
    sequencer = new Sequencer();
    
    this->effects.push_back(multimodeFilter);
    this->effects.push_back(stereoDelay);
    this->effects.push_back(reverb);
    this->effects.push_back(outputFilter);
    
}

TrioAudioProcessor::~TrioAudioProcessor()
{
    this->registeredParams.clear();
    this->multimodeFilter = nullptr;
    this->outputFilter = nullptr;
    this->parameters = nullptr;
    this->filterEnvelope = nullptr;
    this->reverb = nullptr;
    this->distortion = nullptr;
    this->stereoDelay = nullptr;
    this->sequencer = nullptr;
    this->cleanupVoices();
    
}

StereoReverb* TrioAudioProcessor::getReverb() {
    return reverb;
}

Sequencer* TrioAudioProcessor::getSequencer() {
    return this->sequencer;
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
        setState(&state, true);
		getValueTreeState()->state = state;

        xml = nullptr;
        
        if (this->programCombo != 0) {
            this->programCombo->setText(name, NotificationType::dontSendNotification);
        }
        
        setSelectedProgram(name);
        sendChangeMessage();
    }
    
}

const String TrioAudioProcessor::getProgramName (int index)
{
    return getProgramNames().at(index);
}

void TrioAudioProcessor::changeProgramName (int index, const String& newName)
{
}

void TrioAudioProcessor::addProgram(String name) {
	this->programNames.push_back(name);
}

vector<String> TrioAudioProcessor::getProgramNames() {
    return this->programNames;
}

String TrioAudioProcessor::getSelectedProgram() {
    return this->selectedProgram;
}

void TrioAudioProcessor::setSelectedProgram(juce::String program) {
    this->selectedProgram = program;
    updateHostDisplay();
}

//==============================================================================
void TrioAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
	Logger::getCurrentLogger()->writeToLog("SampleRate : " + String(sampleRate) + ", SamplesPerBlock : " + String(samplesPerBlock));
		

    this->sampleRate = sampleRate;
    this->samplesPerBlock = samplesPerBlock;
    
    filterEnvelope->setAttackRate(0 * sampleRate);  // 1 second
    filterEnvelope->setDecayRate(0 * sampleRate);
    filterEnvelope->setReleaseRate(0 * sampleRate);
    filterEnvelope->setSustainLevel(.8);
    
    configureOscillators(Oszillator::OscMode::SAW, Oszillator::OscMode::SAW, Oszillator::OscMode::SAW);
    
    lfo1 = new Sine(sampleRate);
    lfo2 = new Sine(sampleRate);
    
    this->model = new Model(voices, multimodeFilter ,getFilterEnv(), lfo1, lfo2, 44100);
    
    multimodeFilter->coefficients(filterCutoff, 0.1f );    
    outputFilter->coefficients(30,0.1);
    
    stereoDelay->resetDelay();
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

void TrioAudioProcessor::setupOscillator(int osc, Oszillator::OscMode mode)
{
	for (int i = 0; i < voices.size(); i++) {
		voices.at(i)->getOszillators().at(osc)->setMode(mode);
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

void TrioAudioProcessor::processSequencer(double sampleRate, int numSamples) {
    float duration = (1000 / sampleRate) * numSamples;
    
    elapsed += duration;
    
    if (elapsed > lastTime) {
        deltaTime = elapsed - lastTime;
        lastTime = elapsed;
    }
    
    getPlayHead()->getCurrentPosition(this->result);
    
    currentppq = result.ppqPosition;
    
    if (currentppq > lastppq) {
        deltappq  = currentppq - lastppq;
        lastppq = currentppq;
    }
    
    bpm = (deltappq / (deltaTime / 1000)) * 60;
    
    if (result.isPlaying && sequencer->isEnabled()) {
        
        // 8th
        // Logger::getCurrentLogger()->writeToLog("ppq : "+String(currentppq));
        tick = (int)(currentppq * sequencer->getRaster() / 4);
        
        if (tick != lastTick) {
            sequencer->tick();
            lastTick = tick;
            
            if (sequencer->isCurrentStepEnabled()) {
                
                if(!sequencer->isModulator()) {
                    
                    for (int i = 0; i < voices.size();i++) {
                        
                        if (voices.at(i)->isPlaying()) {
                            voices.at(i)->setOctave(sequencer->getOctave());
                            voices.at(i)->setOffset(sequencer->getOffset());
                            filterEnvelope->gate(true);
                            voices.at(i)->getAmpEnvelope()->gate(true);
                            // Logger::getCurrentLogger()->writeToLog("on");
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
}

void TrioAudioProcessor::processMidi(MidiBuffer& midiMessages) {
    
    MidiMessage m;
    int time;
    
    for (MidiBuffer::Iterator i (midiMessages); i.getNextEvent (m, time);)
    {
        
        if (m.isNoteOn())
        {
            
            filterEnvelope->gate(true);
            
            Note* note = new Note();
            note->setMidiNote(m.getNoteNumber());
            note->setVelocity(m.getVelocity());
            voices.at(m.getNoteNumber())->setNote(note);
            voices.at(m.getNoteNumber())->setPlaying(true);
            voices.at(m.getNoteNumber())->getAmpEnvelope()->gate(true);
            voices.at(m.getNoteNumber())->setDuration(250);
            voices.at(m.getNoteNumber())->setTime(elapsed);
            
        }
        else if (m.isNoteOff())
        {
            voices.at(m.getNoteNumber())->getNote();
            
            if (voices.at(m.getNoteNumber())->isPlaying()) {
                voices.at(m.getNoteNumber())->setPlaying(false);
                voices.at(m.getNoteNumber())->getAmpEnvelope()->gate(false);
            }
            
            filterEnvelope->gate(false);
            
        }
        else if (m.isAftertouch())
        {
        }
        else if (m.isPitchWheel())
        {
            int pitch = m.getPitchWheelValue();
            
            float nPitch = ((float)pitch - (float)0x3fff/2.0) / 8192;
            float semitones = 2;
            
            nPitch = (nPitch * semitones) / 12;
            nPitch = pow(2, nPitch);
            
            for (int i = 0; i < voices.size();i++) {
                voices.at(i)->setPitchBend(nPitch);
            }
            
            globalPitch = nPitch;
            
        }
        else if (m.isController()) {
            
            // Modulation wheel
            if (m.getControllerNumber() == 1) {
                
                String paramName = "cutoff";
                float max = this->parameters->getParameterRange(paramName).getRange().getEnd();
                float min = this->parameters->getParameterRange(paramName).getRange().getStart();
                
                float range = abs(min) + max;
                
                float rate = (range / 127.0f) * m.getControllerValue() - range / 2;
                // getModel()->setLfo1Rate(rate);
                float nval = this->parameters->getParameterRange(paramName).convertTo0to1(rate);
                parameters->getParameter(paramName)->setValueNotifyingHost(nval);
            }
        }
        else {
            Logger::getCurrentLogger()->writeToLog("Other message : " + String(m.getTimeStamp()));
        }
        
    }
}

void TrioAudioProcessor::processLFOs() {
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
    else if (model->getModsource() == 5) {
        lfo1->process();
        lfo2->process();
    }
}

void TrioAudioProcessor::processModulation() {
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
    
}

void TrioAudioProcessor::processFX(float* left, float* right, int numSamples) {
    for (int i = 0; i < effects.size();i++) {
        effects.at(i)->processStereo(left, right, numSamples);
    }
}

void TrioAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages) {
    
    this->processSequencer(this->sampleRate, buffer.getNumSamples());
    this->processMidi(midiMessages);
    
    float* const leftOut = buffer.getWritePointer(0);
    float* const rightOut = buffer.getWritePointer(1);
    
    for (int sample = 0; sample < buffer.getNumSamples(); ++sample) {

        float value = 0;
        
        for (int i = 0; i < voices.size();i++) {
            value += voices.at(i)->process();
        }
        
        leftOut[sample] = value * model->getVolume();
        rightOut[sample] = value * model->getVolume();
        
        if(filterEnvelope->getState() != ADSR::env_idle) {
            filterEnvelope->process();
        }
        else {
            filterEnvelope->reset();
        }
        
        processLFOs();

    }
    
    processModulation();
    processFX(leftOut, rightOut, buffer.getNumSamples());
    
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
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    
    parameters->state.setProperty("program", getCurrentProgram(),nullptr);
    
    ScopedPointer<XmlElement> xml (parameters->state.createXml());
    copyXmlToBinary (*xml, destData);
}

void TrioAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    ScopedPointer<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
    if (xmlState != nullptr)
        if (xmlState->hasTagName (parameters->state.getType())) {
            parameters->state = ValueTree::fromXml (*xmlState);
            if (parameters->state.hasProperty("program")) {
                setSelectedProgram(getProgramName(parameters->state.getProperty("program")));
            }
        }
    
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
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
	this->updateParam(parameterID, newValue);   
}

void TrioAudioProcessor::setFxReverbEnabled(bool enabled) {
    this->fxReverbEnabled = enabled;
    this->reverb->setEnabled(enabled);
    this->reverb->reset();
}

void TrioAudioProcessor::setFxDelayEnabled(bool enabled) {
    this->fxDelayEnabled = enabled;
    this->stereoDelay->setEnabled(enabled);
    this->stereoDelay->resetDelay();
 }

void TrioAudioProcessor::setFxDistEnabled(bool enabled) {
    this->fxDistortionEnabled = enabled;
}

void TrioAudioProcessor::updateParam(const juce::String & parameterID, float newValue)
{
	Logger::getCurrentLogger()->writeToLog("Parameter " + parameterID + " changed to " + String(newValue));

	if (parameterID == "osc1shape") {
		if (newValue == 0) {
			this->setupOscillator(0, Oszillator::OscMode::SAW);
		}
		else if (newValue == 1) {
			this->setupOscillator(0, Oszillator::OscMode::SINE);
		}
		else if (newValue == 2) {
			this->setupOscillator(0, Oszillator::OscMode::PULSE);
		}
	}
	else if (parameterID == "osc2shape") {
		if (newValue == 0) {
			this->setupOscillator(1, Oszillator::OscMode::SAW);
		}
		else if (newValue == 1) {
			this->setupOscillator(1, Oszillator::OscMode::SINE);
		}
		else if (newValue == 2) {
			this->setupOscillator(1, Oszillator::OscMode::PULSE);
		}

	}
	else if (parameterID == "osc3shape") {
		if (newValue == 0) {
			this->setupOscillator(2, Oszillator::OscMode::SAW);
		}
		else if (newValue == 1) {
			this->setupOscillator(2, Oszillator::OscMode::SINE);
		}
		else if (newValue == 2) {
			this->setupOscillator(2, Oszillator::OscMode::PULSE);
		}
		else if (newValue == 3) {
			this->setupOscillator(2, Oszillator::OscMode::NOISE);
		}
	}
	else if (parameterID == "modsource") {
		model->setModsource(newValue);
	}

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
		model->setOsc3Pitch(newValue);
	}
	if (parameterID == "osc1pitch") {
		model->setOsc1Pitch(newValue);
	}
	if (parameterID == "osc2pitch") {
		model->setOsc2Pitch(newValue);
	}
	if (parameterID == "osc3pitch") {
		model->setOsc3Pitch(newValue);
	}
	if (parameterID == "osc1fine") {
		model->setOsc1Fine(newValue);
	}
	if (parameterID == "osc2fine") {
		model->setOsc2Fine(newValue);
	}
	if (parameterID == "osc3fine") {
		model->setOsc3Fine(newValue);
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

		if (newValue == 1) {
			selectFilterModulator(TrioAudioProcessor::ModulatorType::ENV);
		}
		else if (newValue == 5) {
			selectFilterModulator(TrioAudioProcessor::ModulatorType::SEQUENCER);
		}

	}
	if (parameterID == "mod1target") {
		model->setMod1Target(newValue);
	}
	if (parameterID == "mod2target") {
		model->setMod2Target(newValue);
	}
	if (parameterID == "fxreverb_enabled") {

		if (newValue > 0) {
			this->fxReverbEnabled = true;
			reverb->setEnabled(true);
		}
		else {
			this->fxReverbEnabled = false;
			reverb->setEnabled(false);
		}

	}
	if (parameterID == "fxreverb_damping") {
		reverbParams.damping = newValue;
	}
	if (parameterID == "fxreverb_drylevel") {
		reverbParams.dryLevel = newValue;
	}
	if (parameterID == "fxreverb_wetlevel") {
		reverbParams.wetLevel = newValue;
	}
	if (parameterID == "fxreverb_freeze") {
		reverbParams.freezeMode = newValue;
	}
	if (parameterID == "fxreverb_size") {
		reverbParams.roomSize = newValue;
	}
	if (parameterID == "fxreverb_width") {
		reverbParams.width = newValue;
	}

	if (parameterID == "fxdelay_enabled") {

		if (newValue > 0) {
			this->fxDelayEnabled = true;
			stereoDelay->setEnabled(true);
		}
		else {
			this->fxDelayEnabled = false;
			stereoDelay->setEnabled(false);
		}

	}
	if (parameterID == "fxdelay_mixleft") {
		stereoDelay->setMix(StereoDelay::Channel::LEFT, newValue);
	}
	if (parameterID == "fxdelay_mixright") {
		stereoDelay->setMix(StereoDelay::Channel::RIGHT, newValue);
	}
	if (parameterID == "fxdelay_fbleft") {
		stereoDelay->setFeedback(StereoDelay::Channel::LEFT, newValue);
	}
	if (parameterID == "fxdelay_fbright") {
		stereoDelay->setFeedback(StereoDelay::Channel::RIGHT, newValue);
	}
	if (parameterID == "fxdelay_timeleft") {
		stereoDelay->setDelay(StereoDelay::Channel::LEFT, newValue * 1000);
	}
	if (parameterID == "fxdelay_timeright") {
		stereoDelay->setDelay(StereoDelay::Channel::RIGHT, newValue * 1000);
	}
	if (parameterID == "fxdist_enabled") {

		if (newValue > 0) {
			this->fxDistortionEnabled = true;
		}
		else {
			this->fxDistortionEnabled = false;
		}

	}
	if (parameterID == "fxdist_mode") {
		distortion->controls.mode = (int)newValue;
	}
	if (parameterID == "fxdist_mix") {
		distortion->controls.mix = newValue;
	}
	if (parameterID == "fxdist_drive") {
		distortion->controls.drive = newValue;
	}
	if (parameterID == "filtermode") {
		if (newValue == 0) {
			this->multimodeFilter->setMode(MultimodeFilter::LOWPASS);
		}
		else {
			this->multimodeFilter->setMode(MultimodeFilter::HIGHPASS);
		}
	}

	this->reverb->setParameters(reverbParams);
}

StereoDelay* TrioAudioProcessor::getStereoDelay() {
    return this->stereoDelay;
}


Distortion* TrioAudioProcessor::getDistortion() {
    return this->distortion;
}

vector<Voice*> TrioAudioProcessor::getVoices() const {
    return this->voices;
}

MultimodeFilter* TrioAudioProcessor::getFilter() {
    return multimodeFilter;
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

void TrioAudioProcessor::setState(ValueTree* state, bool normalized) {
    

    if (state->getChildWithName("sequencer").isValid()) {
        
        ValueTree v = state->getChildWithName("sequencer");
        
        int raster = v.getProperty("raster").toString().getIntValue();
        int octaves = v.getProperty("octaves").toString().getIntValue();
        int stepconfig = v.getProperty("stepconfig");
        bool enabled = v.getProperty("enabled");
        
        ValueTree offsets = v.getChildWithName("offsets");
        
        if (offsets.isValid()) {
            for (int j = 0; j < 16;j++) {
                int offset = offsets.getProperty("offset_"+String(j));
                sequencer->setOffset(j, offset);
            }
        }
        
        ValueTree velocities = v.getChildWithName("velocities");
        
        if (velocities.isValid()) {
            for (int j = 0; j < 16;j++) {
                int velocity = velocities.getProperty("velocity_"+String(j));
                sequencer->setVelocity(j, velocity);
            }
        }
        
        sequencer->setNumOctaves(octaves);
        sequencer->setStepConfig(stepconfig);
        sequencer->setRaster(raster);
        sequencer->setEnabled(enabled);
    }
    else {
        sequencer->setNumOctaves(1);
        sequencer->setStepConfig(0);
        sequencer->setRaster(16);
        sequencer->setEnabled(false);
    }
        
    for (int i = 0; i < state->getNumChildren();i++) {
        
        String id = state->getChild(i).getProperty("id").toString();

        AudioProcessorParameter* p = parameters->getParameter(id);
        
        if (nullptr == p)
            continue;
        
        String value = state->getChild(i).getProperty("value").toString();
        float val = value.getFloatValue();

        float nval = this->parameters->getParameterRange(id).convertTo0to1(val);       
        parameters->getParameter(id)->setValueNotifyingHost(nval);

		this->updateParam(id, val);
        
    }
    

    sendChangeMessage();
}

void TrioAudioProcessor::comboBoxChanged(juce::ComboBox *comboBoxThatHasChanged) {

    
}

void TrioAudioProcessor::selectFilterModulator(TrioAudioProcessor::ModulatorType type) {
    switch(type) {
        case ENV :
            multimodeFilter->setModulator(filterEnvelope);
            sequencer->setModulator(false);
            break;
        case LFO1:
            multimodeFilter->setModulator(lfo1);
            sequencer->setModulator(false);
            break;
        case LFO2:
            multimodeFilter->setModulator(lfo2);
            sequencer->setModulator(false);
            break;
        case SEQUENCER:
            sequencer->setModulator(true);
            multimodeFilter->setModulator(sequencer);
            break;
        default:
            break;
    }
}

