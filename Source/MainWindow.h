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
#include "PresetDialog.h"
#include "Oszillator.h"
#include "FXPanel.h"
#include "BrowserPanel.h"
#include "ModPanel.h"

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
                    public ButtonListener,
                    public ComboBoxListener,
                    public AudioProcessorListener,
                    public Timer,
                    public ChangeBroadcaster,
                    public KeyListener,
                    public ChangeListener
{
public:
    //==============================================================================
    MainWindow (TrioAudioProcessor* p);
    ~MainWindow();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    enum PanelDisplay {
        MAIN,
        FX,
        MOD,
        BROWSER,
        SETUP
    };

    virtual void audioProcessorParameterChanged (AudioProcessor* processor,
                                                 int parameterIndex,
                                                 float newValue) override;

    inline virtual void audioProcessorChanged (AudioProcessor* processor) override {};
    void visibilityChanged() override;
    void timerCallback() override;
    void toggleView(PanelDisplay display);
    bool keyPressed (const KeyPress& key, Component* originatingComponent) override;
    void changeListenerCallback (ChangeBroadcaster* source) override;
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
    static const char* oscillator_noise_48_png;
    static const int oscillator_noise_48_pngSize;


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
    ScopedPointer<AudioProcessorValueTreeState::ButtonAttachment> filtermodeAttachment;

    ScopedPointer<ModPanel> modPanel;
    ScopedPointer<PresetDialog> presetPanel;
    ScopedPointer<FXPanel> fxPanel;
    ScopedPointer<BrowserPanel> browserPanel;

    Oszillator::OscMode mode1;
    Oszillator::OscMode mode2;
    Oszillator::OscMode mode3;
    ScopedPointer<ComponentAnimator> animator;

    PanelDisplay currentDisplay = MAIN;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> cutoffSlider;
    ScopedPointer<Slider> resoSlider;
    ScopedPointer<Slider> osc1PitchSlider;
    ScopedPointer<Slider> osc1FineSlider;
    ScopedPointer<Slider> osc1VolumeSlider;
    ScopedPointer<Slider> osc2PitchSlider;
    ScopedPointer<Slider> osc2FineSlider;
    ScopedPointer<Slider> osc2VolumeSlider;
    ScopedPointer<Slider> osc3PitchSlider;
    ScopedPointer<Slider> osc3FineSlider;
    ScopedPointer<Slider> osc3VolumeSlider;
    ScopedPointer<Slider> filterModSlider;
    ScopedPointer<Slider> lfo1RateSlider;
    ScopedPointer<Slider> lfo1AmountSlider;
    ScopedPointer<Slider> lfo2RateSlider;
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
    ScopedPointer<TextButton> browseButton;
    ScopedPointer<TextButton> setupButton;
    ScopedPointer<TextButton> fxButton;
    ScopedPointer<ImageButton> noiseButton;
    ScopedPointer<ToggleButton> lowPassPutton;
    ScopedPointer<ToggleButton> highPassButton;
    ScopedPointer<Label> oscLabel1;
    ScopedPointer<Label> oscLabel2;
    ScopedPointer<Label> oscLabel3;
    ScopedPointer<Label> pitchLabel1;
    ScopedPointer<Label> fineLabel1;
    ScopedPointer<Label> volumeLabel1;
    ScopedPointer<Label> pitchLabel2;
    ScopedPointer<Label> fineLabel2;
    ScopedPointer<Label> volumeLabel2;
    ScopedPointer<Label> pitchLabel3;
    ScopedPointer<Label> fineLabel3;
    ScopedPointer<Label> volumeLabel3;
    ScopedPointer<Label> cutoffLabel;
    ScopedPointer<Label> resoLabel;
    ScopedPointer<Label> modLabel;
    ScopedPointer<Label> rateLabel1;
    ScopedPointer<Label> amountLabel1;
    ScopedPointer<Label> lfoLabel1;
    ScopedPointer<Label> rateLabel2;
    ScopedPointer<Label> amountLabel2;
    ScopedPointer<Label> lfoLabel2;
    ScopedPointer<Label> filterLabel;
    ScopedPointer<Label> ampEnvLabel;
    ScopedPointer<Label> modEnvLabel;
    ScopedPointer<Label> ampLabel;
    ScopedPointer<Label> volumeLabel;
    ScopedPointer<Label> attackLabel;
    ScopedPointer<Label> decayLabel;
    ScopedPointer<Label> sustainLabel;
    ScopedPointer<Label> releaseLabel;
    ScopedPointer<Label> attackLabel2;
    ScopedPointer<Label> decayLabel2;
    ScopedPointer<Label> sustainLabel2;
    ScopedPointer<Label> releaseLabel2;
    ScopedPointer<Slider> leftVolSLider;
    ScopedPointer<Slider> rightVolSlider;
    ScopedPointer<Label> volumeLabel4;
    ScopedPointer<TextButton> modEditButton;
    ScopedPointer<TextButton> mainButton;
    Image cachedImage_trio_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A7C0314FA0C68BA__
