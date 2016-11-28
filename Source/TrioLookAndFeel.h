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
#include "juce_LookAndFeel_V2.h"


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
    void drawToggleButton (Graphics& g, ToggleButton& button,
                           bool isMouseOverButton, bool isButtonDown) override;
    
    void drawPopupMenuItem (Graphics& g, const Rectangle<int>& area,
                            const bool isSeparator, const bool isActive,
                            const bool isHighlighted, const bool isTicked,
                            const bool hasSubMenu, const String& text,
                            const String& shortcutKeyText,
                            const Drawable* icon, const Colour* const textColourToUse) override;

    
    void drawComboBox (Graphics& g, int width, int height, const bool isButtonDown,
                 int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& box) override;
    
    Font getPopupMenuFont() override;
    void drawLabel (Graphics& g, Label& label) override;
};



#endif  // TRIOLOOKANDFEEL_H_INCLUDED
