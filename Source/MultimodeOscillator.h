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
#include "WhiteNoise.h"

class MultimodeOscillator : public Oszillator, public Modulator{
    
    
public:
    MultimodeOscillator(float sampleRate);
    ~MultimodeOscillator();
    virtual float process() override;
    virtual void setFine(float fine) override;
    virtual float getFine() const override;
    virtual void setFrequency(double frequency) override;
    virtual void setVolume(float volume) override;
    virtual float getOutput() override;
    
private:
    float fine;
    Sawtooth* saw;
    Sine* sine;
    Pulse* pulse;
    WhiteNoise* noise;
};

#endif /* MultimodeOscillator_hpp */
