/*
  ==============================================================================

    Sawtooth.h
    Created: 3 Jun 2016 9:02:16pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef SAWTOOTH_H_INCLUDED
#define SAWTOOTH_H_INCLUDED


#include "Oszillator.h"

class Sawtooth : public Oszillator {
    
public:
    virtual float process();
    
    Sawtooth(float sampleRate);
    float currentValue;
    float stepSize;
    
    void setFrequency(float frequency);
};



#endif  // SAWTOOTH_H_INCLUDED
