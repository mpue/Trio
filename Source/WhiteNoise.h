/*
  ==============================================================================

    WhiteNoise.h
    Created: 3 Jun 2016 9:05:43pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef WHITENOISE_H_INCLUDED
#define WHITENOISE_H_INCLUDED

#include "Oszillator.h"
#include "../JuceLibraryCode/JuceHeader.h"

class WhiteNoise : public Oszillator {
    
public:
    
    WhiteNoise(double sampleRate);
    
    virtual float process() override;
  
    
    
private:
    Random random;
    
};



#endif  // WHITENOISE_H_INCLUDED
