//
//  MultimodeOscillator.hpp
//  Trio
//
//  Created by Matthias Pueski on 20.11.16.
//
//

#ifndef MultimodeOscillator_hpp
#define MultimodeOscillator_hpp

#include <stdio.h>

#include "Oszillator.h"
#include "Sine.h"
#include "Sawtooth.h"
#include "Pulse.h"

class MultimodeOscillator : public Oszillator{
    
    
public:
    MultimodeOscillator(float sampleRate);
    ~MultimodeOscillator();
    virtual float process() override;
    virtual void setFine(float fine) override;
    virtual float getFine() const override;
    virtual void setFrequency(double frequency) override;
    virtual void setVolume(float volume) override;
    
private:
    float fine;
    Sawtooth* saw;
    Sine* sine;
    Pulse* pulse;
};

#endif /* MultimodeOscillator_hpp */
