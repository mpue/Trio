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

class Model {
public:
    Model(Voice* voice);
    int getOsc1Pitch();
    void setOsc1Pitch(int pitch);
private:
    int osc1Pitch;
    Voice* voice;
};



#endif  // MODEL_H_INCLUDED
