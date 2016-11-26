//
//  Pulse.hpp
//  Trio
//
//  Created by Matthias Pueski on 23.11.16.
//
//

#ifndef Pulse_h
#define Pulse_h

#include <stdio.h>
#include "Oszillator.h"
#include "Modulator.h"

class Pulse : public Oszillator , public Modulator {
    
    
public:
    Pulse(float sampleRate);
    virtual float process() override;
    virtual void setFine(float fine) override;
    virtual float getFine() const override;
    virtual void setFrequency(double frequency) override;
    virtual float getOutput() override;
private:
    float fine;
    double step;
    double phase;
    double value;
};

#endif /* Pulse_hpp */
