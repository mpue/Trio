/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_1A7C0314FA0C68BA__
#define __JUCE_HEADER_1A7C0314FA0C68BA__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainWindow  : public Component,
                    public SliderListener,
                    public ComboBoxListener,
                    public ButtonListener
{
public:
    //==============================================================================
    MainWindow ();
    ~MainWindow();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* trio_png;
    static const int trio_pngSize;
    static const char* oscillator_saw_48_png;
    static const int oscillator_saw_48_pngSize;
    static const char* oscillator_sine_48_png;
    static const int oscillator_sine_48_pngSize;
    static const char* oscillator_square_48_png;
    static const int oscillator_square_48_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> cutoffSlider;
    ScopedPointer<Slider> resoSlider;
    ScopedPointer<Slider> osc1PitchSlider;
    ScopedPointer<Slider> osc1FineSlider;
    ScopedPointer<ComboBox> lfo1ModCombo;
    ScopedPointer<ComboBox> lfo2ModCombo;
    ScopedPointer<ComboBox> modCombo;
    ScopedPointer<Slider> osc1VolumeSlider;
    ScopedPointer<Slider> osc2PitchSlider;
    ScopedPointer<Slider> osc2FineSlider;
    ScopedPointer<Slider> osc2VolumeSlider;
    ScopedPointer<Slider> osc3PitchSlider;
    ScopedPointer<Slider> osc3FineSlider;
    ScopedPointer<Slider> osc3VolumeSlider;
    ScopedPointer<Slider> filterModSlider;
    ScopedPointer<Slider> lfo1RateSlider;
    ScopedPointer<Slider> lfo1ShapeSlider;
    ScopedPointer<Slider> lfo1AmountSlider;
    ScopedPointer<Slider> lfo2RateSlider;
    ScopedPointer<Slider> lfo2ShapeSlider;
    ScopedPointer<Slider> lfo2AmountSlider;
    ScopedPointer<Slider> filterAttackSlider;
    ScopedPointer<Slider> filterDecaySlider;
    ScopedPointer<Slider> filterSustainSlider;
    ScopedPointer<Slider> filterReleaseSlider;
    ScopedPointer<Slider> ampAttackSlider;
    ScopedPointer<Slider> ampDecaySlider;
    ScopedPointer<Slider> ampSustainSlider;
    ScopedPointer<Slider> ampReleaseSlider;
    ScopedPointer<Slider> ampVolSlider;
    ScopedPointer<Label> presetLabel;
    ScopedPointer<ComboBox> presetCombo;
    ScopedPointer<TextButton> storeButton;
    ScopedPointer<ImageButton> imageButton;
    ScopedPointer<ImageButton> imageButton3;
    ScopedPointer<ImageButton> imageButton2;
    ScopedPointer<ImageButton> imageButton4;
    ScopedPointer<ImageButton> imageButton5;
    ScopedPointer<ImageButton> imageButton6;
    ScopedPointer<ImageButton> imageButton7;
    ScopedPointer<ImageButton> imageButton8;
    ScopedPointer<ImageButton> imageButton9;
    Image cachedImage_trio_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A7C0314FA0C68BA__
