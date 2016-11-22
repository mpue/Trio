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
#include "ADSR.h"
#include "Oszillator.h"
#include "Sine.h"

#include "../JuceLibraryCode/JuceHeader.h"

#include <vector>

using namespace std;

class Model {
    
public:

    Model(vector<Voice*> voices, Filter* leftFilter, Filter* rightFilter, ADSR* filterEnv,Sine* lfo1, Sine* lfo2, int sampleRate);
    ~Model();
    
    int getOsc1Pitch();
    void setOsc1Pitch(int pitch);
    int getOsc2Pitch();
    void setOsc2Pitch(int pitch);
    int getOsc3Pitch();
    void setOsc3Pitch(int pitch);
    
    int getOsc1Fine();
    void setOsc1Fine(float fine);
    int getOsc2Fine();
    void setOsc2Fine(float fine);
    int getOsc3Fine();
    void setOsc3Fine(float fine);
    
    int getOsc1Volume();
    void setOsc1Volume(float volume);
    int getOsc2Volume();
    void setOsc2Volume(float volume);
    int getOsc3Volume();
    void setOsc3Volume(float volume);
    
    float getAmpEnvAttack();
    void setAmpEnvAttack(float attack);
    float getAmpEnvDecay();
    void setAmpEnvDecay(float decay);
    float getAmpEnvSustain();
    void setAmpEnvSustain(float sustain);
    float getAmpEnvRelease();
    void setAmpEnvRelease(float release);
    
    float getFilterEnvAttack();
    void setFilterEnvAttack(float attack);
    float getFilterEnvDecay();
    void setFilterEnvDecay(float decay);
    float getFilterEnvSustain();
    void setFilterEnvSustain(float sustain);
    float getFilterEnvRelease();
    void setFilterEnvRelease(float release);
    
    float getFilterCutoff();
    void setFilterCutoff(float cutoff);
    
    float getFilterResonance();
    void setFilterResonance(float resonance);
    
    float getFilterModAmount();
    void setFilterModAmount(float amount);
    
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
    
    float filterEnvAttack;
    float filterEnvDecay;
    float filterEnvSustain;
    float filterEnvRelease;
    float filterModAmount;
    
    vector<Voice*> voices;
    Filter* leftFilter;
    Filter* rightFilter;
    ADSR* filterEnv;
    Sine* lfo1;
    Sine* lfo2;
    int sampleRate;
    
    float lfo1Rate;
    float lfo1Amount;
    
    float lfo2Rate;
    float lfo2Amount;
    
    int modsource;
    int mod1target;
    int mod2target;
};



#endif  // MODEL_H_INCLUDED
