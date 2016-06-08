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

#include <vector>

using namespace std;

class Model {
    
public:
    
    Model(vector<Voice*> voices);
    
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
    
    
private:
    
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
    
    vector<Voice*> voices;
    
};



#endif  // MODEL_H_INCLUDED
