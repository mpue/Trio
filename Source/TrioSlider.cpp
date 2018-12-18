/*
  ==============================================================================

    TrioSlider.cpp
    Created: 18 Dec 2018 8:41:40am
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "TrioSlider.h"

TrioSlider::TrioSlider(const juce::String& name) :Slider(name) {
    
}


void TrioSlider::mouseDown(const MouseEvent &e) {
    if (e.mods.isRightButtonDown()) {
        PopupMenu m;
        m.addItem(1, "MIDI learn");
        
        const int result = m.show();
        
        if (result == 1) {
            
        }
        
    }
}
