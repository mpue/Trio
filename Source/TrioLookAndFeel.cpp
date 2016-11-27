/*
  ==============================================================================

    TrioLookAndFeel.cpp
    Created: 2 Jun 2016 6:38:57pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "TrioLookAndFeel.h"

TrioLookAndFeel::TrioLookAndFeel() {
    
}

TrioLookAndFeel::~TrioLookAndFeel() {
    
}

void TrioLookAndFeel::drawRotarySlider	(	Graphics & 	g,
                                             int 	x,
                                             int 	y,
                                             int 	width,
                                             int 	height,
                                             float 	sliderPosProportional,
                                             float 	rotaryStartAngle,
                                             float 	rotaryEndAngle,
                                             Slider & 	slider )
{
    //LookAndFeel_V2::drawRotarySlider(g, x, y, width, height, sliderPosProportional, rotaryStartAngle, rotaryEndAngle, slider);
    
    // This is the binary image data that uses very little CPU when rotating
    Image myStrip = ImageCache::getFromMemory (BinaryData::Knob_64_png, BinaryData::Knob_64_pngSize);
    
    const float angle = rotaryStartAngle + sliderPosProportional * (rotaryEndAngle - rotaryStartAngle);
    const float radius = jmin (width / 2.0f, height / 2.0f) ;
    const float centreX = x + width * 0.5f;
    const float centreY = y + height * 0.5f;
    const float rx = centreX - radius - 1.0f;
    const float ry = centreY - radius - 1.0f;
    const float rw = radius * 2.0f;
    const float thickness = 0.9f;
    
    const double fractRotation = (slider.getValue() - slider.getMinimum())  /
                                 (slider.getMaximum() - slider.getMinimum()); //value between 0 and 1 for current amount of rotation
    
    const int nFrames = myStrip.getHeight()/myStrip.getWidth(); // number of frames for vertical film strip
    const int frameIdx = (int)ceil(sliderPosProportional  * ((double)nFrames-1.0) ); // current index from 0 --> nFrames-1
    
    // Logger::getCurrentLogger()->writeToLog("==========" +String(sliderPosProportional));
    
    g.setColour(Colours::darkorange);
    {
        Path filledArc;
        filledArc.addPieSegment (rx+1, ry+1, rw-0.5, rw-0.5, rotaryStartAngle, angle, thickness);
        g.fillPath (filledArc);
    }
    
    g.drawImage(myStrip,
                (int)rx,
                (int)ry,
                2*(int)radius,
                2*(int)radius,   //Dest
                0,
                frameIdx*myStrip.getWidth(),
                myStrip.getWidth(),
                myStrip.getWidth()); //Source
    
}


void TrioLookAndFeel::drawToggleButton (Graphics& g, ToggleButton& button,
                                        bool isMouseOverButton, bool isButtonDown)
{
    
    if (button.getToggleState()) {
        LookAndFeel_V2::drawShinyButtonShape(g,
                                             0,0,
                                             button.getHeight(),button.getHeight(),
                                             5.0f,
                                             Colours::darkorange,
                                             1.0f,
                                             false,false,false,false);
    }
    
    else {
        LookAndFeel_V2::drawShinyButtonShape(g,
                                             0,0,
                                             button.getHeight(),button.getHeight(),
                                             5.0f,
                                             Colours::darkgrey,
                                             1.0f,
                                             false,false,false,false);
    }
    
    /*
    if (button.hasKeyboardFocus (true))
    {
        g.setColour (button.findColour (TextEditor::focusedOutlineColourId));
        g.drawRect (0, 0, button.getWidth(), button.getHeight());
    }
    
    float fontSize = jmin (15.0f, button.getHeight() * 0.75f);
    const float tickWidth = fontSize * 1.1f;
    
    drawTickBox (g, button, 4.0f, (button.getHeight() - tickWidth) * 0.5f,
                 tickWidth, tickWidth,
                 button.getToggleState(),
                 button.isEnabled(),
                 isMouseOverButton,
                 isButtonDown);
    
    g.setColour (button.findColour (ToggleButton::textColourId));
    g.setFont (fontSize);
    
    if (! button.isEnabled())
        g.setOpacity (0.5f);
    
    const int textX = (int) tickWidth + 5;
    
    */
    
    float fontSize = jmin (15.0f, button.getHeight() * 0.75f);
    g.setColour (button.findColour (ToggleButton::textColourId));
    g.setFont (fontSize);
    
    const int textX = button.getWidth() / 2 + 5;
     
    g.drawFittedText (button.getButtonText(),
                      textX, 0,
                      button.getWidth() - textX - 2, button.getHeight(),
                      Justification::centredLeft, 10);
    
}
