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
    
private:
    
    int osc1Pitch;
    int osc2Pitch;
    int osc3Pitch;
    
    float osc1Fine;
    float osc2Fine;
    float osc3Fine;
    
    vector<Voice*> voices;
};



#endif  // MODEL_H_INCLUDED
