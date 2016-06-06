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

    virtual void setFrequency(double frequency);
    void setPhase(double phase);
    void setAmplitude(float amplitude);
    
    virtual float process() = 0;
    void setPitch(int pitch);
    int getPitch() const;
    
    virtual void setFine(float fine) = 0;
    virtual float getFine() const = 0;
    
protected:
       
    double phase;
    float amplitude;
    double frequency;
    double sampleRate;
    double phaseIncrement;
    int pitch; // halftones

};



#endif  // OSZILLATOR_H_INCLUDED
