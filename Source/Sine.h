//
//  Sine.hpp
//  Trio
//
//  Created by Matthias Pueski on 20.11.16.
//
//

#ifndef Sine_hpp
#define Sine_hpp

#include <stdio.h>
#include "Oszillator.h"

class Sine : public Oszillator{
    
    
public:
    Sine(float sampleRate);
    virtual float process() override;
    virtual void setFine(float fine) override;
    virtual float getFine() const override;
    virtual void setFrequency(double frequency) override;
    
private:
    float fine;
    double step;
    double phase;
};

#endif /* Sine_hpp */
