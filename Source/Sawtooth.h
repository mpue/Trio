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
    virtual float process() override;
    
    virtual void setFine(float fine) override;
    virtual float getFine() const override;
    
    Sawtooth(float sampleRate);
    float currentValue;
    float stepSize;
    float fine;
    void setFrequency(float frequency) override;
};



#endif  // SAWTOOTH_H_INCLUDED
