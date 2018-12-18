/*
  ==============================================================================

    TrioSlider.h
    Created: 18 Dec 2018 8:41:40am
    Author:  Matthias Pueski

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class TrioSlider : public Slider {
    
public:
    TrioSlider(const juce::String& name);
    void mouseDown (const MouseEvent&) override;
};
