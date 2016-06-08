/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

#include <iostream>
#include "math.h"

using namespace std;

//==============================================================================
TrioAudioProcessor::TrioAudioProcessor()
{
    globalPitch = 0;
    leftFilter = new IIRFilter();
    rightFilter = new IIRFilter();
    filterCutoff = 12000.0f;
}

TrioAudioProcessor::~TrioAudioProcessor()
{
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
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int TrioAudioProcessor::getCurrentProgram()
{
    return 0;
}

void TrioAudioProcessor::setCurrentProgram (int index)
{
}

const String TrioAudioProcessor::getProgramName (int index)
{
    return String();
}

void TrioAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void TrioAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    this->sampleRate = sampleRate;
    this->samplesPerBlock = samplesPerBlock;
        
    WhiteNoise* whiteNoise = new WhiteNoise(sampleRate);
    
    for (int i = 0; i < 127; i++) {
        Voice* v = new Voice(sampleRate);
        
        Sawtooth* osc1 = new Sawtooth(sampleRate);
        Sawtooth* osc2 = new Sawtooth(sampleRate);
        Sawtooth* osc3 = new Sawtooth(sampleRate);
        
        osc1->setPitch(0);
        osc2->setPitch(0);
        osc3->setPitch(0);
                
        v->addOszillator(osc1);
        v->addOszillator(osc2);
        v->addOszillator(osc3);
        
        voices.push_back(v);

    }
    
    ic = IIRCoefficients::makeLowPass (sampleRate, filterCutoff );
    
    leftFilter->setCoefficients(ic);
    rightFilter->setCoefficients(ic);
    
    // voice->addOszillator(whiteNoise);
    
}

void TrioAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

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

void TrioAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    MidiMessage m;
    int time;
    
    for (MidiBuffer::Iterator i (midiMessages); i.getNextEvent (m, time);)
    {
        if (m.isNoteOn())
        {
            Note* note = new Note();
            cout << "Note on " << m.getNoteNumber() << ", " << "velocity : " << static_cast<int>(m.getVelocity()) << endl;
            note->setMidiNote(m.getNoteNumber());
            note->setVelocity(m.getVelocity());
            voices.at(m.getNoteNumber())->setNote(note);
            voices.at(m.getNoteNumber())->setPlaying(true);
          
        }
        else if (m.isNoteOff())
        {
            cout << "Note off " << m.getNoteNumber() << endl;
            voices.at(m.getNoteNumber())->setPlaying(false);
            
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
        
    }

    float* const left = buffer.getWritePointer(0);
    float* const right = buffer.getWritePointer(1);
    
    for (int sample = 0; sample < buffer.getNumSamples(); ++sample) {
        
        float value = 0;
        
        for (int i = 0; i < voices.size();i++) {
            // if (voices.at(i)->isPlaying()) {
                value += voices.at(i)->process();
            // }
        }
        
        left[sample] = value;
        right[sample] = value;
        
    }

    
    leftFilter->processSamples (left, buffer.getNumSamples());
    rightFilter->processSamples (right, buffer.getNumSamples());
    
    
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
}

void TrioAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
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

vector<Voice*> TrioAudioProcessor::getVoices() const {
    return this->voices;
}

IIRFilter* TrioAudioProcessor::getLeftFilter() {
    return leftFilter;
}

IIRFilter* TrioAudioProcessor::getRightFilter() {
    return rightFilter;
}


