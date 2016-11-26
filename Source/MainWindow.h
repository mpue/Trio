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

#ifndef __JUCE_HEADER_1A7C0314FA0C68BA__
#define __JUCE_HEADER_1A7C0314FA0C68BA__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Model.h"
#include "PluginProcessor.h"
#include "PresetWindow.h"
#include "Oszillator.h"
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
                    public ButtonListener,
                    public AudioProcessorListener
{
public:
    //==============================================================================
    // MainWindow ();
    ~MainWindow();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    MainWindow (TrioAudioProcessor* p);
    virtual void audioProcessorParameterChanged (AudioProcessor* processor,
                                                 int parameterIndex,
                                                 float newValue) override;
    
    inline virtual void audioProcessorChanged (AudioProcessor* processor) override {};
    
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void visibilityChanged() override;

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
    TrioAudioProcessor *processor;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachement;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc1VolAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc2VolAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc3VolAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc1PitchAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc2PitchAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc3PitchAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc1FineAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc2FineAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> osc3FineAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterModAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> cutoffAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> resoAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo1RateAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo2RateAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo1ShapeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo2ShapeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo1AmountAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> lfo2AmountAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterAttackAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterDecayAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterSustainAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterReleaseAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> ampAttackAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> ampDecayAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> ampSustainAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> ampReleaseAttachment;
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> modSourceAttachment;
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> mod1TargetAttachment;
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> mod2TargetAttachment;
    
    ScopedPointer<PresetWindow> presetPanel;
    
    Oszillator::OscMode mode1;
    Oszillator::OscMode mode2;
    Oszillator::OscMode mode3;

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
    ScopedPointer<Label> statusLabel;
    Image cachedImage_trio_png_1;



    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A7C0314FA0C68BA__
