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

#ifndef __JUCE_HEADER_FC206EB6C4DA2904__
#define __JUCE_HEADER_FC206EB6C4DA2904__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class FXPanel  : public Component,
                 public ChangeListener,
                 public KeyListener,
                 public SliderListener,
                 public ButtonListener,
                 public ComboBoxListener
{
public:
    //==============================================================================
    FXPanel (TrioAudioProcessor* p);
    ~FXPanel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void changeListenerCallback (ChangeBroadcaster* source) override;
    // void mouseWheelMove(const MouseEvent &event, const MouseWheelDetails &wheel) override;
    bool keyPressed (const KeyPress& key, Component* originatingComponent)override;
    void valueUp(TextEditor* editor);
    void valueDown(TextEditor * editor);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void mouseDown (const MouseEvent& e) override;
    void mouseDrag (const MouseEvent& e) override;

    // Binary resources:
    static const char* fx_panel_png;
    static const int fx_panel_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    TrioAudioProcessor* processor;

    ScopedPointer<AudioProcessorValueTreeState::ButtonAttachment> fxreverb_enabled_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_damping_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_drylevel_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_wetlevel_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_freeze_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_size_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxreverb_width_att;

    ScopedPointer<AudioProcessorValueTreeState::ButtonAttachment> fxdelay_enabled_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_timeleft_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_timeright_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_fbleft_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_fbright_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_mixleft_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdelay_mixright_att;

    ScopedPointer<AudioProcessorValueTreeState::ButtonAttachment> fxdist_enabled_att;
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> fxdist_mode_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdist_mix_att;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> fxdist_drive_att;

    ScopedPointer<PopupMenu> popup;
    ScopedPointer<GlowEffect> glow;
    vector<String> notenames;
    vector<String> items;
    vector<ToggleButton*> stepButtons;
    vector<TextEditor*> offsetFields;
    vector<TextEditor*> velocityFields;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> dampSlider;
    ScopedPointer<Slider> freezeSlider;
    ScopedPointer<Slider> sizeSlider;
    ScopedPointer<Slider> widthSlider;
    ScopedPointer<Slider> wetSlider;
    ScopedPointer<Slider> drySlider;
    ScopedPointer<ToggleButton> enableReverbButton;
    ScopedPointer<Slider> delayTimeLeftSlider;
    ScopedPointer<ToggleButton> enableDelayButton;
    ScopedPointer<Slider> delayTimeRightSlider;
    ScopedPointer<Slider> delayFBLeftSlider;
    ScopedPointer<Slider> delayFBRightSlider;
    ScopedPointer<Slider> delayMixLeftSlider;
    ScopedPointer<Slider> delayMixRightSlider;
    ScopedPointer<Slider> driveSlider;
    ScopedPointer<Slider> mixSlider;
    ScopedPointer<ComboBox> modeCombo;
    ScopedPointer<ToggleButton> enableDistButton;
    ScopedPointer<ToggleButton> enableSeqButton;
    ScopedPointer<ToggleButton> stepButton1;
    ScopedPointer<ToggleButton> stepButton2;
    ScopedPointer<ToggleButton> stepButton3;
    ScopedPointer<ToggleButton> stepButton4;
    ScopedPointer<ToggleButton> stepButton5;
    ScopedPointer<ToggleButton> stepButton6;
    ScopedPointer<ToggleButton> stepButton7;
    ScopedPointer<ToggleButton> stepButton8;
    ScopedPointer<ToggleButton> stepButton9;
    ScopedPointer<ToggleButton> stepButton10;
    ScopedPointer<ToggleButton> stepButton11;
    ScopedPointer<ToggleButton> stepButton12;
    ScopedPointer<ToggleButton> stepButton13;
    ScopedPointer<ToggleButton> stepButton14;
    ScopedPointer<ToggleButton> stepButton15;
    ScopedPointer<ToggleButton> stepButton16;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> note1;
    ScopedPointer<TextEditor> note2;
    ScopedPointer<TextEditor> note3;
    ScopedPointer<TextEditor> note4;
    ScopedPointer<TextEditor> note5;
    ScopedPointer<TextEditor> note6;
    ScopedPointer<TextEditor> note7;
    ScopedPointer<TextEditor> note8;
    ScopedPointer<TextEditor> note9;
    ScopedPointer<TextEditor> note10;
    ScopedPointer<TextEditor> note11;
    ScopedPointer<TextEditor> note12;
    ScopedPointer<TextEditor> note13;
    ScopedPointer<TextEditor> note14;
    ScopedPointer<TextEditor> note15;
    ScopedPointer<TextEditor> note16;
    ScopedPointer<TextEditor> vel1;
    ScopedPointer<TextEditor> vel2;
    ScopedPointer<TextEditor> vel3;
    ScopedPointer<TextEditor> vel4;
    ScopedPointer<TextEditor> vel5;
    ScopedPointer<TextEditor> vel6;
    ScopedPointer<TextEditor> vel7;
    ScopedPointer<TextEditor> vel8;
    ScopedPointer<TextEditor> vel9;
    ScopedPointer<TextEditor> vel10;
    ScopedPointer<TextEditor> vel11;
    ScopedPointer<TextEditor> vel12;
    ScopedPointer<TextEditor> vel13;
    ScopedPointer<TextEditor> vel14;
    ScopedPointer<TextEditor> vel15;
    ScopedPointer<TextEditor> vel16;
    ScopedPointer<ComboBox> octavesCombo;
    ScopedPointer<Label> label3;
    ScopedPointer<ComboBox> notesCombo;
    ScopedPointer<Label> notesLabel;
    Image cachedImage_fx_panel_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FXPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_FC206EB6C4DA2904__
