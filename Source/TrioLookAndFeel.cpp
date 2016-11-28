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
    
    
    float fontSize = jmin (15.0f, button.getHeight() * 0.75f);
    g.setColour (button.findColour (ToggleButton::textColourId));
    g.setFont (fontSize);
    
    const int textX = button.getWidth() / 2 + 5;
     
    g.drawFittedText (button.getButtonText(),
                      textX, 0,
                      button.getWidth() - textX - 2, button.getHeight(),
                      Justification::centredLeft, 10);
    
}

Font TrioLookAndFeel::getPopupMenuFont()
{
    return Font (17.0f);
}

void TrioLookAndFeel::drawPopupMenuItem (Graphics& g, const Rectangle<int>& area,
                                        const bool isSeparator, const bool isActive,
                                        const bool isHighlighted, const bool isTicked,
                                        const bool hasSubMenu, const String& text,
                                        const String& shortcutKeyText,
                                        const Drawable* icon, const Colour* const textColourToUse)
{
    if (isSeparator)
    {
        Rectangle<int> r (area.reduced (5, 0));
        r.removeFromTop (r.getHeight() / 2 - 1);
        
        g.setColour (Colour (0x33000000));
        g.fillRect (r.removeFromTop (1));
        
        g.setColour (Colour (0x66ffffff));
        g.fillRect (r.removeFromTop (1));
    }
    else
    {
        Colour textColour (findColour (PopupMenu::textColourId));
        
        if (textColourToUse != nullptr)
            textColour = *textColourToUse;
        
        Rectangle<int> r (area.reduced (1));
        
        if (isHighlighted)
        {
            g.setColour (findColour (PopupMenu::highlightedBackgroundColourId));
            g.fillRect (r);
            
            g.setColour (findColour (PopupMenu::highlightedTextColourId));
        }
        else
        {
            g.setColour (textColour);
        }
        
        if (! isActive)
            g.setOpacity (0.3f);
        
        Font font (getPopupMenuFont());
        
        const float maxFontHeight = area.getHeight() / 1.3f;
        
        if (font.getHeight() > maxFontHeight)
            font.setHeight (maxFontHeight);
        
        g.setFont (font);
        
        Rectangle<float> iconArea (r.removeFromLeft ((r.getHeight() * 5) / 4).reduced (3).toFloat());
        
        if (icon != nullptr)
        {
            icon->drawWithin (g, iconArea, RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize, 1.0f);
        }
        else if (isTicked)
        {
            const Path tick (getTickShape (1.0f));
            g.fillPath (tick, tick.getTransformToScaleToFit (iconArea, true));
        }
        
        if (hasSubMenu)
        {
            const float arrowH = 0.6f * getPopupMenuFont().getAscent();
            
            const float x = (float) r.removeFromRight ((int) arrowH).getX();
            const float halfH = (float) r.getCentreY();
            
            Path p;
            p.addTriangle (x, halfH - arrowH * 0.5f,
                           x, halfH + arrowH * 0.5f,
                           x + arrowH * 0.6f, halfH);
            
            g.fillPath (p);
        }
        
        r.removeFromRight (3);
        g.drawFittedText (text, r, Justification::centredLeft, 1);
        
        if (shortcutKeyText.isNotEmpty())
        {
            Font f2 (font);
            f2.setHeight (f2.getHeight() * 0.75f);
            f2.setHorizontalScale (0.95f);
            g.setFont (f2);
            
            g.drawText (shortcutKeyText, r, Justification::centredRight, true);
        }
    }
}

void TrioLookAndFeel::drawLabel (Graphics& g, Label& label)
{
    g.fillAll (label.findColour (Label::backgroundColourId));
    
    if (! label.isBeingEdited())
    {
        const float alpha = label.isEnabled() ? 1.0f : 0.5f;
        const Font font (getLabelFont (label));
        
        g.setColour (label.findColour (Label::textColourId).withMultipliedAlpha (alpha));
        g.setFont (font);
        
        Rectangle<int> textArea (label.getBorderSize().subtractedFrom (label.getLocalBounds()).expanded(3, 1));
        
        // Rectangle<int> textArea (label.getLocalBounds());
        
        
        g.drawText(label.getText(), textArea ,label.getJustificationType(),false);
        
        /*
        g.drawFittedText (label.getText(), textArea, label.getJustificationType(),
                          jmax (1, (int) (textArea.getHeight() / font.getHeight())),
                          label.getMinimumHorizontalScale());
        */
         
        g.setColour (label.findColour (Label::outlineColourId).withMultipliedAlpha (alpha));
    }
    else if (label.isEnabled())
    {
        g.setColour (label.findColour (Label::outlineColourId));
    }
    
    g.drawRect (label.getLocalBounds());
}

void TrioLookAndFeel::drawComboBox (Graphics& g, int width, int height, const bool isButtonDown,
                                   int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& box)
{
    g.fillAll (box.findColour (ComboBox::backgroundColourId));
    
    if (box.isEnabled() && box.hasKeyboardFocus (false))
    {
        g.setColour (box.findColour (ComboBox::buttonColourId));
        g.drawRect (0, 0, width, height, 2);
    }
    else
    {
        g.setColour (box.findColour (ComboBox::outlineColourId));
        g.drawRect (0, 0, width, height);
    }
    
    const float outlineThickness = box.isEnabled() ? (isButtonDown ? 1.2f : 0.5f) : 0.3f;
    
    /*
    const Colour baseColour (LookAndFeelHelpers::createBaseColour (box.findColour (ComboBox::buttonColourId),
                                                                   box.hasKeyboardFocus (true),
                                                                   false, isButtonDown)
                             .withMultipliedAlpha (box.isEnabled() ? 1.0f : 0.5f));
    
    drawGlassLozenge (g,
                      buttonX + outlineThickness, buttonY + outlineThickness,
                      buttonW - outlineThickness * 2.0f, buttonH - outlineThickness * 2.0f,
                      baseColour, outlineThickness, -1.0f,
                      true, true, true, true);
    
    if (box.isEnabled())
    {
        const float arrowX = 0.3f;
        const float arrowH = 0.2f;
        
        Path p;
        p.addTriangle (buttonX + buttonW * 0.5f,            buttonY + buttonH * (0.45f - arrowH),
                       buttonX + buttonW * (1.0f - arrowX), buttonY + buttonH * 0.45f,
                       buttonX + buttonW * arrowX,          buttonY + buttonH * 0.45f);
        
        p.addTriangle (buttonX + buttonW * 0.5f,            buttonY + buttonH * (0.55f + arrowH),
                       buttonX + buttonW * (1.0f - arrowX), buttonY + buttonH * 0.55f,
                       buttonX + buttonW * arrowX,          buttonY + buttonH * 0.55f);
        
        g.setColour (box.findColour (ComboBox::arrowColourId));
        g.fillPath (p);
    }
     */
}
