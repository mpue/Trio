/*
  ==============================================================================

    Oszillator.h
    Created: 3 Jun 2016 8:50:44pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef OSZILLATOR_H_INCLUDED
#define OSZILLATOR_H_INCLUDED

class Oszillator {
    
public:
    Oszillator();
    Oszillator(double sampleRate);
    virtual ~Oszillator();

    void setFrequency(float frequency);
    void setPhase(float phase);
    void setAmplitude(float amplitude);
    
    virtual float process() = 0;
    
protected:
       
    double phase;
    float amplitude;
    float frequency;
    double sampleRate;
    float phaseIncrement;
};



#endif  // OSZILLATOR_H_INCLUDED
