/*
  ==============================================================================

    TrioLookAndFeel.h
    Created: 2 Jun 2016 6:39:10pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef TRIOLOOKANDFEEL_H_INCLUDED
#define TRIOLOOKANDFEEL_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"


class TrioLookAndFeel : public LookAndFeel_V1 {
    
public:
    
    TrioLookAndFeel();
    
    ~TrioLookAndFeel();
    
    void drawRotarySlider	(	Graphics & 	g,
                             int 	x,
                             int 	y,
                             int 	width,
                             int 	height,
                             float 	sliderPosProportional,
                             float 	rotaryStartAngle,
                             float 	rotaryEndAngle,
                             Slider & 	slider ) override;
    
};



#endif  // TRIOLOOKANDFEEL_H_INCLUDED
