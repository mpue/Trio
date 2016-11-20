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
    
    enum OscMode {
        SAW,
        SINE,
        PULSE
    };
    
    Oszillator();
    Oszillator(double sampleRate);
    virtual ~Oszillator();

    virtual void setFrequency(double frequency);
    void setPhase(double phase);
    virtual void setVolume(float volume);
    
    virtual float process() = 0;
    void setPitch(int pitch);
    int getPitch() const;
    
    virtual void setFine(float fine) = 0;
    virtual float getFine() const = 0;
    
    void setMode(OscMode mode);
    
protected:
    
    double phase;
    float volume;
    double frequency;
    double sampleRate;
    double phaseIncrement;
    int pitch; // halftones
    OscMode mode;

};



#endif  // OSZILLATOR_H_INCLUDED
