/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_2BAD1EB567EACD74__
#define __JUCE_HEADER_2BAD1EB567EACD74__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "ModMatrix.h"
#include "ModSlotConfig.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ModSlot  : public Component,
                public ComboBox::Listener,
                public Slider::Listener,
                public Button::Listener
{
public:
    //==============================================================================
    ModSlot (ModMatrix*  m, int index);
    ~ModSlot();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setTitle(String text);
    void addSource(int id, String source);
    void addTarget(int id, String target);

    void setSelectedSource(int id);
    void setSelectedTarget1(int id);
    void setSelectedTarget2(int id);

    int getSelectedSource();
    int getSelectedTarget1();
    int getSelectedTarget2();
	void setSlotEnabled(bool enabled);
    bool isSlotEnabled();
    int getIndex();
	ModSlotConfig getConfig();
	void setConfig(ModSlotConfig config);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    bool slotEnabled;
    ModMatrix* matrix;
    int index;
	ModSlotConfig config;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label;
    ScopedPointer<ComboBox> sourceCombo;
    ScopedPointer<Label> targetLabel1;
    ScopedPointer<ComboBox> targetCombo1;
    ScopedPointer<Slider> modAmountSlider1;
    ScopedPointer<Label> targetLabel2;
    ScopedPointer<ComboBox> targetCombo2;
    ScopedPointer<Slider> modAmountSlider2;
    ScopedPointer<Label> titleLabel;
    ScopedPointer<ToggleButton> enableButton;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ModSlot)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_2BAD1EB567EACD74__
