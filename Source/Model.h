/*
  ==============================================================================

    Model.h
    Created: 4 Jun 2016 8:56:23pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include "Voice.h"
#include "Filter.h"
#include "MultimodeFilter.h"
#include "ADSR.h"
#include "Oszillator.h"
#include "Sine.h"
#include "MultimodeOscillator.h"
#include "Sequencer.h"

#include "../JuceLibraryCode/JuceHeader.h"

#include <vector>

using namespace std;

class Model {
    
public:

    Model(vector<Voice*> voices, MultimodeFilter* mainFilter, vector<ADSR*> modEnv,MultimodeOscillator* lfo1, MultimodeOscillator* lfo2,  Sequencer* seq, int sampleRate);
    ~Model();
    
	float getOsc1Pitch();
    void setOsc1Pitch(int pitch);
	float getOsc2Pitch();
    void setOsc2Pitch(int pitch);
	float getOsc3Pitch();
    void setOsc3Pitch(int pitch);
    
    float getOsc1Fine();
    void setOsc1Fine(float fine);
	float getOsc2Fine();
    void setOsc2Fine(float fine);
	float getOsc3Fine();
    void setOsc3Fine(float fine);
    
	float getOsc1Volume();
    void setOsc1Volume(float volume);
	float getOsc2Volume();
    void setOsc2Volume(float volume);
	float getOsc3Volume();
    void setOsc3Volume(float volume);
    
    float getAmpEnvAttack();
    void setAmpEnvAttack(float attack);
    float getAmpEnvDecay();
    void setAmpEnvDecay(float decay);
    float getAmpEnvSustain();
    void setAmpEnvSustain(float sustain);
    float getAmpEnvRelease();
    void setAmpEnvRelease(float release);
    
    float getFilterEnvAttack(int index);
    void setFilterEnvAttack(int index, float attack);
    float getFilterEnvDecay(int index);
    void setFilterEnvDecay(int index, float decay);
    float getFilterEnvSustain(int index);
    void setFilterEnvSustain(int index, float sustain);
    float getFilterEnvRelease(int index);
    void setFilterEnvRelease(int index, float release);
    
    float getFilterCutoff();
    void setFilterCutoff(float cutoff);
    
    float getFilterResonance();
    void setFilterResonance(float resonance);
    
    float getFilterModAmount();
    void setFilterModAmount(float amount);
    
    int getFilterMode();
    void setFilterMode(int mode);
    
    float getVolume();
    void setVolume(float volume);

    float getLfo1Amount();
    void setLfo1Amount(float amount);
 
    float getLfo1Rate();
    void setLfo1Rate(float rate);
    
    float getLfo2Amount();
    void setLfo2Amount(float amount);
    
    float getLfo2Rate();
    void setLfo2Rate(float rate);
    
    int getModsource();
    void setModsource(int source);
    
    int getMod1Target();
    void setMod1Target(int target);
   
    int getMod2Target();
    void setMod2Target(int target);
    
    vector <ADSR*> getModEnvelopes();
    MultimodeFilter* getFilter();
    MultimodeOscillator* getLfo1();
    MultimodeOscillator* getLfo2();
    
    vector<Voice*> getVoices();
    Sequencer* getSequencer();
    void setCurrentModEnvIdx(int idx);
    int getCurrentModEnvIdx();
    
private:
    
    float volume;
    
    float filterCutoff;
    float filterResonance;
    
    int osc1Pitch;
    int osc2Pitch;
    int osc3Pitch;
    
    float osc1Fine;
    float osc2Fine;
    float osc3Fine;
    
    float osc1Volume;
    float osc2Volume;
    float osc3Volume;
    
    float ampEnvAttack;
    float ampEnvDecay;
    float ampEnvSustain;
    float ampEnvRelease;
    
    float filterEnvAttack[3]  = { 0 };
    float filterEnvDecay[3]   = { 0 };
    float filterEnvSustain[3] = { 0 };
    float filterEnvRelease[3] = { 0 };

    float filterModAmount;
    
	vector<Voice*> voices;

    MultimodeFilter* mainFilter;
    vector<ADSR*> modEnv;
    MultimodeOscillator* lfo1;
    MultimodeOscillator* lfo2;
    int sampleRate;
    
    float lfo1Rate;
    float lfo1Amount;
    
    float lfo2Rate;
    float lfo2Amount;
    
    int modsource;
    int mod1target;
    int mod2target;
    
    int currentModEnvIdx = 0;
    
    Sequencer* seq;
    
};



#endif  // MODEL_H_INCLUDED
