/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "WhiteNoise.h"
#include "Sawtooth.h"
#include "Voice.h"
#include "ADSR.h"
#include "Filter.h"
#include "Model.h"

#include <stack>
#include <vector>
#include "ADSR.h"

using namespace std;

//==============================================================================
/**
*/
class TrioAudioProcessor  : public AudioProcessor, public AudioProcessorValueTreeState::Listener
{
public:
    //==============================================================================
    TrioAudioProcessor();
    ~TrioAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    // bool setPreferredBusArrangement (bool isInput, int bus, const AudioChannelSet& preferredSet) override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    
    void parameterChanged(const String &parameterID, float newValue) override;
    
    vector<Voice*> getVoices() const;

    Filter* getLeftFilter();
    Filter* getRightFilter();
    ADSR* getFilterEnv();
    Model* getModel();
    
    AudioProcessorParameter* volumeParam;
    
    AudioProcessorParameter* osc1VolParam;
    AudioProcessorParameter* osc2VolParam;
    AudioProcessorParameter* osc3VolParam;

    AudioProcessorParameter* osc1PitchParam;
    AudioProcessorParameter* osc2PitchParam;
    AudioProcessorParameter* osc3PitchParam;
    
    AudioProcessorParameter* osc1FineParam;
    AudioProcessorParameter* osc2FineParam;
    AudioProcessorParameter* osc3FineParam;
    
    AudioProcessorParameter* filterModParam;
    AudioProcessorParameter* cutoffParam;
    AudioProcessorParameter* resoParam;
    
    AudioProcessorParameter* lfo1RateParam;
    AudioProcessorParameter* lfo2RateParam;
    
    AudioProcessorParameter* lfo1ShapeParam;
    AudioProcessorParameter* lfo2ShapeParam;
    
    AudioProcessorParameter* lfo1AmountParam;
    AudioProcessorParameter* lfo2AmountParam;
    
    AudioProcessorParameter* filterAttackParam;
    AudioProcessorParameter* filterDecayParam;
    AudioProcessorParameter* filterSustainParam;
    AudioProcessorParameter* filterReleaseParam;
    
    AudioProcessorParameter* ampAttackParam;
    AudioProcessorParameter* ampDecayParam;
    AudioProcessorParameter* ampSustainParam;
    AudioProcessorParameter* ampReleaseParam;
    
    int currentProgramNumber;
    AudioProcessorValueTreeState* getValueTreeState();
    void setState(ValueTree* state);
    
    vector<String> getProgramNames();
    String getSelectedProgram();
    void setSelectedProgram(String program);

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TrioAudioProcessor)
    
    double sampleRate;
    int samplesPerBlock;
    
    int globalPitch;
    
    Filter* leftFilter;
    Filter* rightFilter;
    
    IIRCoefficients ic;
    
    float filterCutoff;
    
    vector<Voice*> voices;
    int getVoicesPlaying();
    ADSR* filterEnvelope;
    Model* model;
    
    AudioProcessorValueTreeState* parameters;
    
    vector<String> programNames;
    String selectedProgram;
    
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
