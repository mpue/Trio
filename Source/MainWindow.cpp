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

//[Headers] You can add your own extra header files here...


//[/Headers]

#include "MainWindow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
/*
MainWindow::MainWindow (AudioProcessor* p) : MainWindow() {
    this->processor = p;
}
 */

//[/MiscUserDefs]

//==============================================================================
MainWindow::MainWindow (TrioAudioProcessor* p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->processor = p;

    //[/Constructor_pre]

    addAndMakeVisible (cutoffSlider = new Slider ("cutoffSlider"));
    cutoffSlider->setRange (0.1, 12, 0.1);
    cutoffSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    cutoffSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    cutoffSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    cutoffSlider->addListener (this);

    addAndMakeVisible (resoSlider = new Slider ("resoSlider"));
    resoSlider->setRange (0, 10, 0);
    resoSlider->setSliderStyle (Slider::Rotary);
    resoSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    resoSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    resoSlider->addListener (this);

    addAndMakeVisible (osc1PitchSlider = new Slider ("osc1PitchSlider"));
    osc1PitchSlider->setRange (-36, 36, 1);
    osc1PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1PitchSlider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    osc1PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1PitchSlider->addListener (this);

    addAndMakeVisible (osc1FineSlider = new Slider ("osc1FineSlider"));
    osc1FineSlider->setRange (-2, 2, 0.01);
    osc1FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc1FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1FineSlider->addListener (this);

    addAndMakeVisible (osc1VolumeSlider = new Slider ("osc1VolumeSlider"));
    osc1VolumeSlider->setRange (0, 1, 0.02);
    osc1VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc1VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1VolumeSlider->addListener (this);

    addAndMakeVisible (osc2PitchSlider = new Slider ("osc2PitchSlider"));
    osc2PitchSlider->setRange (-36, 36, 1);
    osc2PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2PitchSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2PitchSlider->addListener (this);

    addAndMakeVisible (osc2FineSlider = new Slider ("osc2FineSlider"));
    osc2FineSlider->setRange (-2, 2, 0.01);
    osc2FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2FineSlider->addListener (this);

    addAndMakeVisible (osc2VolumeSlider = new Slider ("osc2VolumeSlider"));
    osc2VolumeSlider->setRange (0, 1, 0.02);
    osc2VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2VolumeSlider->addListener (this);

    addAndMakeVisible (osc3PitchSlider = new Slider ("osc3PitchSlider"));
    osc3PitchSlider->setRange (-36, 36, 1);
    osc3PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3PitchSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3PitchSlider->addListener (this);

    addAndMakeVisible (osc3FineSlider = new Slider ("osc3FineSlider"));
    osc3FineSlider->setRange (-2, 2, 0.01);
    osc3FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3FineSlider->addListener (this);

    addAndMakeVisible (osc3VolumeSlider = new Slider ("osc3VolumeSlider"));
    osc3VolumeSlider->setRange (0, 1, 0.02);
    osc3VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3VolumeSlider->addListener (this);

    addAndMakeVisible (filterModSlider = new Slider ("resoSlider"));
    filterModSlider->setRange (0, 1, 0.02);
    filterModSlider->setSliderStyle (Slider::Rotary);
    filterModSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterModSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterModSlider->addListener (this);

    addAndMakeVisible (lfo1RateSlider = new Slider ("lfo1RateSlider"));
    lfo1RateSlider->setRange (0, 10, 0);
    lfo1RateSlider->setSliderStyle (Slider::Rotary);
    lfo1RateSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo1RateSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo1RateSlider->addListener (this);

    addAndMakeVisible (lfo1AmountSlider = new Slider ("lfo1AmountSlider"));
    lfo1AmountSlider->setRange (0, 1, 0.02);
    lfo1AmountSlider->setSliderStyle (Slider::Rotary);
    lfo1AmountSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo1AmountSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo1AmountSlider->addListener (this);

    addAndMakeVisible (lfo2RateSlider = new Slider ("lfo2RateSlider"));
    lfo2RateSlider->setRange (0, 10, 0);
    lfo2RateSlider->setSliderStyle (Slider::Rotary);
    lfo2RateSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo2RateSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo2RateSlider->addListener (this);

    addAndMakeVisible (lfo2AmountSlider = new Slider ("lfo2AmountSlider"));
    lfo2AmountSlider->setRange (0, 1, 0.02);
    lfo2AmountSlider->setSliderStyle (Slider::Rotary);
    lfo2AmountSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo2AmountSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo2AmountSlider->addListener (this);

    addAndMakeVisible (filterAttackSlider = new Slider ("filterAttackSlider"));
    filterAttackSlider->setRange (0, 5, 0.1);
    filterAttackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterAttackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterAttackSlider->setColour (Slider::thumbColourId, Colour (0xffff7900));
    filterAttackSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterAttackSlider->addListener (this);

    addAndMakeVisible (filterDecaySlider = new Slider ("filterDecaySlider"));
    filterDecaySlider->setRange (0, 5, 0.1);
    filterDecaySlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterDecaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterDecaySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterDecaySlider->addListener (this);

    addAndMakeVisible (filterSustainSlider = new Slider ("filterSustainSlider"));
    filterSustainSlider->setRange (0, 1, 0.02);
    filterSustainSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterSustainSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterSustainSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterSustainSlider->addListener (this);

    addAndMakeVisible (filterReleaseSlider = new Slider ("filterReleaseSlider"));
    filterReleaseSlider->setRange (0, 5, 0.1);
    filterReleaseSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterReleaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterReleaseSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterReleaseSlider->addListener (this);

    addAndMakeVisible (ampAttackSlider = new Slider ("ampAttackSlider"));
    ampAttackSlider->setRange (0, 5, 0.1);
    ampAttackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampAttackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampAttackSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampAttackSlider->addListener (this);

    addAndMakeVisible (ampDecaySlider = new Slider ("ampDecaySlider"));
    ampDecaySlider->setRange (0, 5, 0.1);
    ampDecaySlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampDecaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampDecaySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampDecaySlider->addListener (this);

    addAndMakeVisible (ampSustainSlider = new Slider ("ampSustainSlider"));
    ampSustainSlider->setRange (0, 1, 0.02);
    ampSustainSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampSustainSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampSustainSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampSustainSlider->addListener (this);

    addAndMakeVisible (ampReleaseSlider = new Slider ("ampReleaseSlider"));
    ampReleaseSlider->setRange (0, 5, 0.1);
    ampReleaseSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampReleaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampReleaseSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampReleaseSlider->addListener (this);

    addAndMakeVisible (ampVolSlider = new Slider ("ampVolSlider"));
    ampVolSlider->setRange (0, 1, 0.02);
    ampVolSlider->setSliderStyle (Slider::Rotary);
    ampVolSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampVolSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampVolSlider->addListener (this);

    addAndMakeVisible (presetCombo = new ComboBox ("presetCombo"));
    presetCombo->setEditableText (false);
    presetCombo->setJustificationType (Justification::centredLeft);
    presetCombo->setTextWhenNothingSelected (String());
    presetCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    presetCombo->addListener (this);

    addAndMakeVisible (storeButton = new TextButton ("storeButton"));
    storeButton->setButtonText (TRANS("Store"));
    storeButton->addListener (this);

    addAndMakeVisible (imageButton = new ImageButton ("new button"));
    imageButton->setButtonText (TRANS("Sawtooth"));
    imageButton->addListener (this);

    imageButton->setImages (false, true, true,
                            ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                            ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                            Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton3 = new ImageButton ("new button"));
    imageButton3->setButtonText (TRANS("Pulse"));
    imageButton3->addListener (this);

    imageButton3->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
    imageButton2->setButtonText (TRANS("Sine"));
    imageButton2->addListener (this);

    imageButton2->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton4 = new ImageButton ("new button"));
    imageButton4->setButtonText (TRANS("Sawtooth"));
    imageButton4->addListener (this);

    imageButton4->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton5 = new ImageButton ("new button"));
    imageButton5->setButtonText (TRANS("Pulse"));
    imageButton5->setRadioGroupId (1);
    imageButton5->addListener (this);

    imageButton5->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton6 = new ImageButton ("new button"));
    imageButton6->setButtonText (TRANS("Sine"));
    imageButton6->addListener (this);

    imageButton6->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton7 = new ImageButton ("new button"));
    imageButton7->setButtonText (TRANS("Sawtooth"));
    imageButton7->addListener (this);

    imageButton7->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton8 = new ImageButton ("new button"));
    imageButton8->setButtonText (TRANS("Pulse"));
    imageButton8->setRadioGroupId (1);
    imageButton8->addListener (this);

    imageButton8->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton9 = new ImageButton ("new button"));
    imageButton9->setButtonText (TRANS("Sine"));
    imageButton9->addListener (this);

    imageButton9->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (statusLabel = new Label ("statusLabel",
                                                TRANS("\n")));
    statusLabel->setFont (Font (15.00f, Font::plain));
    statusLabel->setJustificationType (Justification::centredLeft);
    statusLabel->setEditable (false, false, false);
    statusLabel->setColour (Label::textColourId, Colours::white);
    statusLabel->setColour (TextEditor::textColourId, Colours::black);
    statusLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (browseButton = new TextButton ("browseButton"));
    browseButton->setButtonText (TRANS("Browser"));
    browseButton->addListener (this);

    addAndMakeVisible (setupButton = new TextButton ("setupButton"));
    setupButton->setButtonText (TRANS("Setup"));
    setupButton->addListener (this);

    addAndMakeVisible (fxButton = new TextButton ("fxButton"));
    fxButton->setButtonText (TRANS("FX"));
    fxButton->addListener (this);

    addAndMakeVisible (noiseButton = new ImageButton ("noiseButton"));
    noiseButton->setButtonText (TRANS("Pulse"));
    noiseButton->setRadioGroupId (1);
    noiseButton->addListener (this);

    noiseButton->setImages (false, true, true,
                            ImageCache::getFromMemory (oscillator_noise_48_png, oscillator_noise_48_pngSize), 1.000f, Colours::white,
                            ImageCache::getFromMemory (oscillator_noise_48_png, oscillator_noise_48_pngSize), 1.000f, Colour (0xffff7e00),
                            Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (lowPassPutton = new ToggleButton ("lowPassPutton"));
    lowPassPutton->setButtonText (TRANS("LP"));
    lowPassPutton->setRadioGroupId (111);
    lowPassPutton->addListener (this);
    lowPassPutton->setToggleState (true, dontSendNotification);
    lowPassPutton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (highPassButton = new ToggleButton ("highPassButton"));
    highPassButton->setButtonText (TRANS("HP"));
    highPassButton->setRadioGroupId (111);
    highPassButton->addListener (this);
    highPassButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (oscLabel1 = new Label ("label",
                                              TRANS("Osc 1")));
    oscLabel1->setFont (Font ("Verdana", 24.00f, Font::bold));
    oscLabel1->setJustificationType (Justification::centredLeft);
    oscLabel1->setEditable (false, false, false);
    oscLabel1->setColour (Label::textColourId, Colours::white);
    oscLabel1->setColour (TextEditor::textColourId, Colours::black);
    oscLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oscLabel2 = new Label ("label",
                                              TRANS("Osc 2")));
    oscLabel2->setFont (Font ("Verdana", 24.00f, Font::bold));
    oscLabel2->setJustificationType (Justification::centredLeft);
    oscLabel2->setEditable (false, false, false);
    oscLabel2->setColour (Label::textColourId, Colours::white);
    oscLabel2->setColour (TextEditor::textColourId, Colours::black);
    oscLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oscLabel3 = new Label ("label",
                                              TRANS("Osc 3\n")));
    oscLabel3->setFont (Font ("Verdana", 24.00f, Font::bold));
    oscLabel3->setJustificationType (Justification::centredLeft);
    oscLabel3->setEditable (false, false, false);
    oscLabel3->setColour (Label::textColourId, Colours::white);
    oscLabel3->setColour (TextEditor::textColourId, Colours::black);
    oscLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (pitchLabel1 = new Label ("label",
                                                TRANS("Pitch")));
    pitchLabel1->setFont (Font ("Verdana", 18.00f, Font::plain));
    pitchLabel1->setJustificationType (Justification::centredLeft);
    pitchLabel1->setEditable (false, false, false);
    pitchLabel1->setColour (Label::textColourId, Colours::white);
    pitchLabel1->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (fineLabel1 = new Label ("label",
                                               TRANS("Fine\n")));
    fineLabel1->setFont (Font ("Verdana", 18.00f, Font::plain));
    fineLabel1->setJustificationType (Justification::centredLeft);
    fineLabel1->setEditable (false, false, false);
    fineLabel1->setColour (Label::textColourId, Colours::white);
    fineLabel1->setColour (TextEditor::textColourId, Colours::black);
    fineLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volumeLabel1 = new Label ("label",
                                                 TRANS("Volume")));
    volumeLabel1->setFont (Font ("Verdana", 18.00f, Font::plain));
    volumeLabel1->setJustificationType (Justification::centredLeft);
    volumeLabel1->setEditable (false, false, false);
    volumeLabel1->setColour (Label::textColourId, Colours::white);
    volumeLabel1->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (pitchLabel2 = new Label ("label",
                                                TRANS("Pitch")));
    pitchLabel2->setFont (Font ("Verdana", 18.00f, Font::plain));
    pitchLabel2->setJustificationType (Justification::centredLeft);
    pitchLabel2->setEditable (false, false, false);
    pitchLabel2->setColour (Label::textColourId, Colours::white);
    pitchLabel2->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (fineLabel2 = new Label ("label",
                                               TRANS("Fine\n")));
    fineLabel2->setFont (Font ("Verdana", 18.00f, Font::plain));
    fineLabel2->setJustificationType (Justification::centredLeft);
    fineLabel2->setEditable (false, false, false);
    fineLabel2->setColour (Label::textColourId, Colours::white);
    fineLabel2->setColour (TextEditor::textColourId, Colours::black);
    fineLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volumeLabel2 = new Label ("label",
                                                 TRANS("Volume")));
    volumeLabel2->setFont (Font ("Verdana", 18.00f, Font::plain));
    volumeLabel2->setJustificationType (Justification::centredLeft);
    volumeLabel2->setEditable (false, false, false);
    volumeLabel2->setColour (Label::textColourId, Colours::white);
    volumeLabel2->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (pitchLabel3 = new Label ("label",
                                                TRANS("Pitch")));
    pitchLabel3->setFont (Font ("Verdana", 18.00f, Font::plain));
    pitchLabel3->setJustificationType (Justification::centredLeft);
    pitchLabel3->setEditable (false, false, false);
    pitchLabel3->setColour (Label::textColourId, Colours::white);
    pitchLabel3->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (fineLabel3 = new Label ("label",
                                               TRANS("Fine\n")));
    fineLabel3->setFont (Font ("Verdana", 18.00f, Font::plain));
    fineLabel3->setJustificationType (Justification::centredLeft);
    fineLabel3->setEditable (false, false, false);
    fineLabel3->setColour (Label::textColourId, Colours::white);
    fineLabel3->setColour (TextEditor::textColourId, Colours::black);
    fineLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volumeLabel3 = new Label ("label",
                                                 TRANS("Volume")));
    volumeLabel3->setFont (Font ("Verdana", 18.00f, Font::plain));
    volumeLabel3->setJustificationType (Justification::centredLeft);
    volumeLabel3->setEditable (false, false, false);
    volumeLabel3->setColour (Label::textColourId, Colours::white);
    volumeLabel3->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cutoffLabel = new Label ("label",
                                                TRANS("Cutoff")));
    cutoffLabel->setFont (Font ("Verdana", 18.00f, Font::plain));
    cutoffLabel->setJustificationType (Justification::centredLeft);
    cutoffLabel->setEditable (false, false, false);
    cutoffLabel->setColour (Label::textColourId, Colours::white);
    cutoffLabel->setColour (TextEditor::textColourId, Colours::black);
    cutoffLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (resoLabel = new Label ("label",
                                              TRANS("Reso")));
    resoLabel->setFont (Font ("Verdana", 18.00f, Font::plain));
    resoLabel->setJustificationType (Justification::centredLeft);
    resoLabel->setEditable (false, false, false);
    resoLabel->setColour (Label::textColourId, Colours::white);
    resoLabel->setColour (TextEditor::textColourId, Colours::black);
    resoLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (modLabel = new Label ("label",
                                             TRANS("ModAmt")));
    modLabel->setFont (Font ("Verdana", 18.00f, Font::plain));
    modLabel->setJustificationType (Justification::centredLeft);
    modLabel->setEditable (false, false, false);
    modLabel->setColour (Label::textColourId, Colours::white);
    modLabel->setColour (TextEditor::textColourId, Colours::black);
    modLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rateLabel1 = new Label ("label",
                                               TRANS("Rate")));
    rateLabel1->setFont (Font ("Verdana", 18.00f, Font::plain));
    rateLabel1->setJustificationType (Justification::centredLeft);
    rateLabel1->setEditable (false, false, false);
    rateLabel1->setColour (Label::textColourId, Colours::white);
    rateLabel1->setColour (TextEditor::textColourId, Colours::black);
    rateLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (amountLabel1 = new Label ("label",
                                                 TRANS("Amount")));
    amountLabel1->setFont (Font ("Verdana", 18.00f, Font::plain));
    amountLabel1->setJustificationType (Justification::centredLeft);
    amountLabel1->setEditable (false, false, false);
    amountLabel1->setColour (Label::textColourId, Colours::white);
    amountLabel1->setColour (TextEditor::textColourId, Colours::black);
    amountLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lfoLabel1 = new Label ("label",
                                              TRANS("LFO 1")));
    lfoLabel1->setFont (Font ("Verdana", 24.00f, Font::bold));
    lfoLabel1->setJustificationType (Justification::centredLeft);
    lfoLabel1->setEditable (false, false, false);
    lfoLabel1->setColour (Label::textColourId, Colours::white);
    lfoLabel1->setColour (TextEditor::textColourId, Colours::black);
    lfoLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rateLabel2 = new Label ("label",
                                               TRANS("Rate")));
    rateLabel2->setFont (Font ("Verdana", 18.00f, Font::plain));
    rateLabel2->setJustificationType (Justification::centredLeft);
    rateLabel2->setEditable (false, false, false);
    rateLabel2->setColour (Label::textColourId, Colours::white);
    rateLabel2->setColour (TextEditor::textColourId, Colours::black);
    rateLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (amountLabel2 = new Label ("label",
                                                 TRANS("Amount")));
    amountLabel2->setFont (Font ("Verdana", 18.00f, Font::plain));
    amountLabel2->setJustificationType (Justification::centredLeft);
    amountLabel2->setEditable (false, false, false);
    amountLabel2->setColour (Label::textColourId, Colours::white);
    amountLabel2->setColour (TextEditor::textColourId, Colours::black);
    amountLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lfoLabel2 = new Label ("label",
                                              TRANS("LFO 2")));
    lfoLabel2->setFont (Font ("Verdana", 24.00f, Font::bold));
    lfoLabel2->setJustificationType (Justification::centredLeft);
    lfoLabel2->setEditable (false, false, false);
    lfoLabel2->setColour (Label::textColourId, Colours::white);
    lfoLabel2->setColour (TextEditor::textColourId, Colours::black);
    lfoLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (filterLabel = new Label ("label",
                                                TRANS("Filter")));
    filterLabel->setFont (Font ("Verdana", 24.00f, Font::bold));
    filterLabel->setJustificationType (Justification::centredLeft);
    filterLabel->setEditable (false, false, false);
    filterLabel->setColour (Label::textColourId, Colours::white);
    filterLabel->setColour (TextEditor::textColourId, Colours::black);
    filterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ampEnvLabel = new Label ("label",
                                                TRANS("Amp Envelope")));
    ampEnvLabel->setFont (Font ("Verdana", 24.00f, Font::bold));
    ampEnvLabel->setJustificationType (Justification::centredLeft);
    ampEnvLabel->setEditable (false, false, false);
    ampEnvLabel->setColour (Label::textColourId, Colours::white);
    ampEnvLabel->setColour (TextEditor::textColourId, Colours::black);
    ampEnvLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (modEnvLabel = new Label ("label",
                                                TRANS("Mod Envelope")));
    modEnvLabel->setFont (Font ("Verdana", 24.00f, Font::bold));
    modEnvLabel->setJustificationType (Justification::centredLeft);
    modEnvLabel->setEditable (false, false, false);
    modEnvLabel->setColour (Label::textColourId, Colours::white);
    modEnvLabel->setColour (TextEditor::textColourId, Colours::black);
    modEnvLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ampLabel = new Label ("label",
                                             TRANS("Amp")));
    ampLabel->setFont (Font ("Verdana", 24.00f, Font::bold));
    ampLabel->setJustificationType (Justification::centredLeft);
    ampLabel->setEditable (false, false, false);
    ampLabel->setColour (Label::textColourId, Colours::white);
    ampLabel->setColour (TextEditor::textColourId, Colours::black);
    ampLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (volumeLabel = new Label ("label",
                                                TRANS("Volume")));
    volumeLabel->setFont (Font ("Verdana", 18.00f, Font::plain));
    volumeLabel->setJustificationType (Justification::centredLeft);
    volumeLabel->setEditable (false, false, false);
    volumeLabel->setColour (Label::textColourId, Colours::white);
    volumeLabel->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attackLabel = new Label ("label",
                                                TRANS("A")));
    attackLabel->setFont (Font (18.00f, Font::bold));
    attackLabel->setJustificationType (Justification::centred);
    attackLabel->setEditable (false, false, false);
    attackLabel->setColour (Label::textColourId, Colours::white);
    attackLabel->setColour (TextEditor::textColourId, Colours::black);
    attackLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (decayLabel = new Label ("label",
                                               TRANS("D\n")));
    decayLabel->setFont (Font (18.00f, Font::bold));
    decayLabel->setJustificationType (Justification::centred);
    decayLabel->setEditable (false, false, false);
    decayLabel->setColour (Label::textColourId, Colours::white);
    decayLabel->setColour (TextEditor::textColourId, Colours::black);
    decayLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sustainLabel = new Label ("label",
                                                 TRANS("S")));
    sustainLabel->setFont (Font (18.00f, Font::bold));
    sustainLabel->setJustificationType (Justification::centred);
    sustainLabel->setEditable (false, false, false);
    sustainLabel->setColour (Label::textColourId, Colours::white);
    sustainLabel->setColour (TextEditor::textColourId, Colours::black);
    sustainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (releaseLabel = new Label ("label",
                                                 TRANS("R")));
    releaseLabel->setFont (Font (18.00f, Font::bold));
    releaseLabel->setJustificationType (Justification::centred);
    releaseLabel->setEditable (false, false, false);
    releaseLabel->setColour (Label::textColourId, Colours::white);
    releaseLabel->setColour (TextEditor::textColourId, Colours::black);
    releaseLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attackLabel2 = new Label ("label",
                                                 TRANS("A")));
    attackLabel2->setFont (Font (18.00f, Font::bold));
    attackLabel2->setJustificationType (Justification::centred);
    attackLabel2->setEditable (false, false, false);
    attackLabel2->setColour (Label::textColourId, Colours::white);
    attackLabel2->setColour (TextEditor::textColourId, Colours::black);
    attackLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (decayLabel2 = new Label ("label",
                                                TRANS("D\n")));
    decayLabel2->setFont (Font (18.00f, Font::bold));
    decayLabel2->setJustificationType (Justification::centred);
    decayLabel2->setEditable (false, false, false);
    decayLabel2->setColour (Label::textColourId, Colours::white);
    decayLabel2->setColour (TextEditor::textColourId, Colours::black);
    decayLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sustainLabel2 = new Label ("label",
                                                  TRANS("S")));
    sustainLabel2->setFont (Font (18.00f, Font::bold));
    sustainLabel2->setJustificationType (Justification::centred);
    sustainLabel2->setEditable (false, false, false);
    sustainLabel2->setColour (Label::textColourId, Colours::white);
    sustainLabel2->setColour (TextEditor::textColourId, Colours::black);
    sustainLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (releaseLabel2 = new Label ("label",
                                                  TRANS("R")));
    releaseLabel2->setFont (Font (18.00f, Font::bold));
    releaseLabel2->setJustificationType (Justification::centred);
    releaseLabel2->setEditable (false, false, false);
    releaseLabel2->setColour (Label::textColourId, Colours::white);
    releaseLabel2->setColour (TextEditor::textColourId, Colours::black);
    releaseLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (leftVolSLider = new Slider ("leftVolSLider"));
    leftVolSLider->setRange (0, 1, 0.01);
    leftVolSLider->setSliderStyle (Slider::LinearBar);
    leftVolSLider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    leftVolSLider->setColour (Slider::backgroundColourId, Colours::grey);
    leftVolSLider->setColour (Slider::thumbColourId, Colour (0xffe28600));

    addAndMakeVisible (rightVolSlider = new Slider ("rightVolSlider"));
    rightVolSlider->setRange (0, 1, 0.01);
    rightVolSlider->setSliderStyle (Slider::LinearBar);
    rightVolSlider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    rightVolSlider->setColour (Slider::backgroundColourId, Colours::grey);
    rightVolSlider->setColour (Slider::thumbColourId, Colour (0xffe28600));

    addAndMakeVisible (volumeLabel4 = new Label ("label",
                                                 TRANS("Output")));
    volumeLabel4->setFont (Font ("Verdana", 18.00f, Font::plain));
    volumeLabel4->setJustificationType (Justification::centredLeft);
    volumeLabel4->setEditable (false, false, false);
    volumeLabel4->setColour (Label::textColourId, Colours::white);
    volumeLabel4->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (modEditButton = new TextButton ("modEditButton"));
    modEditButton->setButtonText (TRANS("Modulation"));
    modEditButton->addListener (this);

    addAndMakeVisible (mainButton = new TextButton ("mainButton"));
    mainButton->setButtonText (TRANS("Main"));
    mainButton->addListener (this);

    cachedImage_trio_png_1 = ImageCache::getFromMemory (trio_png, trio_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (910, 600);


    //[Constructor] You can add your own custom stuff here..

    animator = new ComponentAnimator();

    osc1PitchSlider->setValue(0);
    ampSustainSlider->setValue(0.8);
    filterSustainSlider->setValue(0.8);

    osc1VolumeSlider->setValue(1.0f);
    osc2VolumeSlider->setValue(1.0f);
    osc3VolumeSlider->setValue(1.0f);

    cutoffSlider->setValue(12);

    ampVolSlider->setValue(1.0f);

    //presetCombo->addItem("init", 1);
    //presetCombo->setSelectedItemIndex(0);

    presetCombo->addListener(processor);

    this->volumeAttachement = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"volume", *this->ampVolSlider);
    this->osc1VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1vol", *this->osc1VolumeSlider);
    this->osc2VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2vol", *this->osc2VolumeSlider);
    this->osc3VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3vol", *this->osc3VolumeSlider);
    this->osc1PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1pitch", *this->osc1PitchSlider);
    this->osc2PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2pitch", *this->osc2PitchSlider);
    this->osc3PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3pitch", *this->osc3PitchSlider);
    this->osc1FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1fine", *this->osc1FineSlider);
    this->osc2FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2fine", *this->osc2FineSlider);
    this->osc3FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3fine", *this->osc3FineSlider);
    this->filterModAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filtermod", *this->filterModSlider);
    this->cutoffAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"cutoff", *this->cutoffSlider);
    this->resoAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"reso", *this->resoSlider);
    this->lfo1RateAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1rate", *this->lfo1RateSlider);
    this->lfo1AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1amount", *this->lfo1AmountSlider);
    this->lfo2RateAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2rate", *this->lfo2RateSlider);
    this->lfo2AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2amount", *this->lfo2AmountSlider);
    this->filterAttackAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterattack", *this->filterAttackSlider);
    this->filterDecayAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterdecay", *this->filterDecaySlider);
    this->filterSustainAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filtersustain", *this->filterSustainSlider);
    this->filterReleaseAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterrelease", *this->filterReleaseSlider);
    this->ampAttackAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampattack", *this->ampAttackSlider);
    this->ampDecayAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampdecay", *this->ampDecaySlider);
    this->ampSustainAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampsustain", *this->ampSustainSlider);
    this->ampReleaseAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"amprelease", *this->ampReleaseSlider);
    // this->filtermodeAttachment = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"filtermode", *this->lowPassPutton);

    /*
    this->modSourceAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"modsource", *this->modCombo);
    this->mod1TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod1target", *this->lfo1ModCombo);
    this->mod2TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod2target", *this->lfo2ModCombo);
    */
    int x = getScreenX();
    int y = getScreenY();

    presetPanel = new PresetDialog(this->presetCombo.get());
    presetPanel->setBounds(x,y,getWidth(),getHeight());

    this->fxPanel = new FXPanel(processor);
    fxPanel->setBounds(x,y,getWidth(),getHeight());
    p->addChangeListener(this);
    p->addChangeListener(this->fxPanel);
    p->getSequencer()->addChangeListener(this->fxPanel);

    this->browserPanel = new BrowserPanel(processor);
    browserPanel->setBounds(x,y,getWidth(),getHeight());

    this->modPanel = new ModPanel();
    this->modPanel->setBounds(x,y,getWidth(),getHeight());

    addChildComponent(fxPanel);
    addChildComponent(presetPanel);
    addChildComponent(browserPanel);
    addChildComponent(modPanel);

    mainButton->toFront(false);
    fxButton->toFront(false);
    storeButton->toFront(false);
    modEditButton->toFront(false);
    browseButton->toFront(false);
    setupButton->toFront(false);
    volumeLabel4->toFront(true);
    
    leftVolSLider->toFront(false);
    rightVolSlider->toFront(false);

    presetCombo->toFront(false);
    statusLabel->toFront(false);

    for(int i = 0; i < processor->getProgramNames().size();i++) {
        presetCombo->addItem(processor->getProgramNames().at(i), i + 1);
    }

    // presetCombo->setSelectedId(1);

    LookAndFeel::getDefaultLookAndFeel().setColour(CaretComponent::caretColourId, Colours::darkorange);

    imageButton->setRadioGroupId(1);
    imageButton2->setRadioGroupId(1);
    imageButton3->setRadioGroupId(1);

    imageButton->setToggleState(true, NotificationType::dontSendNotification);

    imageButton->setClickingTogglesState(true);
    imageButton2->setClickingTogglesState(true);
    imageButton3->setClickingTogglesState(true);

    imageButton4->setRadioGroupId(2);
    imageButton5->setRadioGroupId(2);
    imageButton6->setRadioGroupId(2);

    imageButton4->setToggleState(true, NotificationType::dontSendNotification);

    imageButton4->setClickingTogglesState(true);
    imageButton5->setClickingTogglesState(true);
    imageButton6->setClickingTogglesState(true);

    imageButton7->setRadioGroupId(3);
    imageButton8->setRadioGroupId(3);
    imageButton9->setRadioGroupId(3);
    noiseButton->setRadioGroupId(3);

    imageButton7->setToggleState(true, NotificationType::dontSendNotification);

    imageButton7->setClickingTogglesState(true);
    imageButton8->setClickingTogglesState(true);
    imageButton9->setClickingTogglesState(true);
    noiseButton->setClickingTogglesState(true);

    // infoText->setEnabled(false);

    mode1 = Oszillator::OscMode::SAW;
    mode2 = Oszillator::OscMode::SAW;
    mode3 = Oszillator::OscMode::SAW;


    float val = processor->getValueTreeState()->getParameter("osc1shape")->getValue() ;
    float nval = processor->getValueTreeState()->getParameterRange("osc1shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton2->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton3->setToggleState(true, NotificationType::dontSendNotification);
    }


    val = processor->getValueTreeState()->getParameter("osc2shape")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("osc2shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton4->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton6->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton5->setToggleState(true, NotificationType::dontSendNotification);
    }

    val = processor->getValueTreeState()->getParameter("osc3shape")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("osc3shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton7->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton9->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton8->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 3) {
        noiseButton->setToggleState(true, NotificationType::dontSendNotification);
    }

    processor->addListener(this);
    // processor->addListener(fxPanel);

    statusLabel->setColour(Label::textColourId, Colours::darkorange);

    /*
    cutoffSlider->setSkewFactorFromMidPoint(3.0f);
    resoSlider->setSkewFactorFromMidPoint(2.0f);

    ampAttackSlider->setSkewFactorFromMidPoint(1.0f);
    ampDecaySlider->setSkewFactorFromMidPoint(0.5f);
    ampSustainSlider->setSkewFactorFromMidPoint(0.5f);
    ampReleaseSlider->setSkewFactorFromMidPoint(1.0f);

    filterAttackSlider->setSkewFactorFromMidPoint(1.0f);
    filterDecaySlider->setSkewFactorFromMidPoint(1.0f);
    filterSustainSlider->setSkewFactorFromMidPoint(0.5f);
    filterReleaseSlider->setSkewFactorFromMidPoint(1.0f);

    osc1VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    osc2VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    osc3VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    ampVolSlider->setSkewFactorFromMidPoint(0.3f);
     */

    startTimer(50);

    //[/Constructor]
}

MainWindow::~MainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    processor->removeListener(this);
    processor->removeAllChangeListeners();
    this->volumeAttachement = nullptr;
    this->osc1VolAttachment = nullptr;
    this->osc2VolAttachment = nullptr;
    this->osc3VolAttachment = nullptr;
    this->osc1PitchAttachment = nullptr;
    this->osc2PitchAttachment = nullptr;
    this->osc3PitchAttachment = nullptr;
    this->osc1FineAttachment = nullptr;
    this->osc2FineAttachment = nullptr;
    this->osc3FineAttachment = nullptr;
    this->filterModAttachment = nullptr;
    this->cutoffAttachment = nullptr;
    this->resoAttachment = nullptr;
    this->lfo1RateAttachment = nullptr;
    this->lfo1ShapeAttachment = nullptr;
    this->lfo1AmountAttachment = nullptr;
    this->lfo2RateAttachment = nullptr;
    this->lfo2ShapeAttachment = nullptr;
    this->lfo2AmountAttachment = nullptr;
    this->filterAttackAttachment = nullptr;
    this->filterDecayAttachment = nullptr;
    this->filterSustainAttachment = nullptr;
    this->filterReleaseAttachment = nullptr;
    this->ampAttackAttachment = nullptr;
    this->ampDecayAttachment = nullptr;
    this->ampSustainAttachment = nullptr;
    this->ampReleaseAttachment = nullptr;
    this->presetPanel = nullptr;
    this->animator = nullptr;
    this->browserPanel = nullptr;
    this->fxPanel = nullptr;
    this->filtermodeAttachment = nullptr;

    //[/Destructor_pre]

    cutoffSlider = nullptr;
    resoSlider = nullptr;
    osc1PitchSlider = nullptr;
    osc1FineSlider = nullptr;
    osc1VolumeSlider = nullptr;
    osc2PitchSlider = nullptr;
    osc2FineSlider = nullptr;
    osc2VolumeSlider = nullptr;
    osc3PitchSlider = nullptr;
    osc3FineSlider = nullptr;
    osc3VolumeSlider = nullptr;
    filterModSlider = nullptr;
    lfo1RateSlider = nullptr;
    lfo1AmountSlider = nullptr;
    lfo2RateSlider = nullptr;
    lfo2AmountSlider = nullptr;
    filterAttackSlider = nullptr;
    filterDecaySlider = nullptr;
    filterSustainSlider = nullptr;
    filterReleaseSlider = nullptr;
    ampAttackSlider = nullptr;
    ampDecaySlider = nullptr;
    ampSustainSlider = nullptr;
    ampReleaseSlider = nullptr;
    ampVolSlider = nullptr;
    presetCombo = nullptr;
    storeButton = nullptr;
    imageButton = nullptr;
    imageButton3 = nullptr;
    imageButton2 = nullptr;
    imageButton4 = nullptr;
    imageButton5 = nullptr;
    imageButton6 = nullptr;
    imageButton7 = nullptr;
    imageButton8 = nullptr;
    imageButton9 = nullptr;
    statusLabel = nullptr;
    browseButton = nullptr;
    setupButton = nullptr;
    fxButton = nullptr;
    noiseButton = nullptr;
    lowPassPutton = nullptr;
    highPassButton = nullptr;
    oscLabel1 = nullptr;
    oscLabel2 = nullptr;
    oscLabel3 = nullptr;
    pitchLabel1 = nullptr;
    fineLabel1 = nullptr;
    volumeLabel1 = nullptr;
    pitchLabel2 = nullptr;
    fineLabel2 = nullptr;
    volumeLabel2 = nullptr;
    pitchLabel3 = nullptr;
    fineLabel3 = nullptr;
    volumeLabel3 = nullptr;
    cutoffLabel = nullptr;
    resoLabel = nullptr;
    modLabel = nullptr;
    rateLabel1 = nullptr;
    amountLabel1 = nullptr;
    lfoLabel1 = nullptr;
    rateLabel2 = nullptr;
    amountLabel2 = nullptr;
    lfoLabel2 = nullptr;
    filterLabel = nullptr;
    ampEnvLabel = nullptr;
    modEnvLabel = nullptr;
    ampLabel = nullptr;
    volumeLabel = nullptr;
    attackLabel = nullptr;
    decayLabel = nullptr;
    sustainLabel = nullptr;
    releaseLabel = nullptr;
    attackLabel2 = nullptr;
    decayLabel2 = nullptr;
    sustainLabel2 = nullptr;
    releaseLabel2 = nullptr;
    leftVolSLider = nullptr;
    rightVolSlider = nullptr;
    volumeLabel4 = nullptr;
    modEditButton = nullptr;
    mainButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..




    //[/Destructor]
}

//==============================================================================
void MainWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff747474));

    g.setColour (Colours::black);
    g.drawImage (cachedImage_trio_png_1,
                 0, 0, 910, 600,
                 0, 0, cachedImage_trio_png_1.getWidth(), cachedImage_trio_png_1.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    cutoffSlider->setBounds (304, 96, 64, 64);
    resoSlider->setBounds (392, 96, 64, 64);
    osc1PitchSlider->setBounds (32, 96, 64, 64);
    osc1FineSlider->setBounds (109, 96, 64, 64);
    osc1VolumeSlider->setBounds (184, 96, 64, 64);
    osc2PitchSlider->setBounds (32, 256, 64, 64);
    osc2FineSlider->setBounds (109, 256, 64, 64);
    osc2VolumeSlider->setBounds (184, 256, 64, 64);
    osc3PitchSlider->setBounds (32, 416, 64, 64);
    osc3FineSlider->setBounds (109, 416, 64, 64);
    osc3VolumeSlider->setBounds (184, 416, 64, 64);
    filterModSlider->setBounds (488, 96, 64, 64);
    lfo1RateSlider->setBounds (304, 256, 67, 64);
    lfo1AmountSlider->setBounds (488, 256, 64, 64);
    lfo2RateSlider->setBounds (304, 416, 67, 64);
    lfo2AmountSlider->setBounds (488, 416, 64, 64);
    filterAttackSlider->setBounds (613, 96, 64, 64);
    filterDecaySlider->setBounds (681, 96, 64, 64);
    filterSustainSlider->setBounds (750, 96, 64, 64);
    filterReleaseSlider->setBounds (819, 96, 64, 64);
    ampAttackSlider->setBounds (613, 256, 64, 64);
    ampDecaySlider->setBounds (681, 256, 64, 64);
    ampSustainSlider->setBounds (750, 256, 64, 64);
    ampReleaseSlider->setBounds (819, 256, 64, 64);
    ampVolSlider->setBounds (616, 416, 64, 64);
    presetCombo->setBounds (600, 16, 296, 24);
    storeButton->setBounds (24, 544, 100, 24);
    imageButton->setBounds (96, 64, 24, 24);
    imageButton3->setBounds (160, 64, 24, 24);
    imageButton2->setBounds (128, 64, 24, 24);
    imageButton4->setBounds (104, 224, 24, 24);
    imageButton5->setBounds (168, 224, 24, 24);
    imageButton6->setBounds (136, 224, 24, 24);
    imageButton7->setBounds (104, 384, 24, 24);
    imageButton8->setBounds (168, 384, 24, 24);
    imageButton9->setBounds (136, 384, 24, 24);
    statusLabel->setBounds (728, 544, 150, 24);
    browseButton->setBounds (472, 544, 100, 24);
    setupButton->setBounds (584, 544, 104, 24);
    fxButton->setBounds (248, 544, 100, 24);
    noiseButton->setBounds (200, 384, 24, 24);
    lowPassPutton->setBounds (446, 64, 48, 24);
    highPassButton->setBounds (494, 64, 48, 24);
    oscLabel1->setBounds (24, 59, 80, 32);
    oscLabel2->setBounds (24, 217, 80, 32);
    oscLabel3->setBounds (24, 377, 80, 32);
    pitchLabel1->setBounds (40, 160, 50, 32);
    fineLabel1->setBounds (119, 160, 50, 32);
    volumeLabel1->setBounds (184, 160, 64, 32);
    pitchLabel2->setBounds (40, 320, 50, 32);
    fineLabel2->setBounds (119, 320, 50, 32);
    volumeLabel2->setBounds (184, 320, 64, 32);
    pitchLabel3->setBounds (40, 480, 50, 32);
    fineLabel3->setBounds (119, 480, 50, 32);
    volumeLabel3->setBounds (184, 480, 64, 32);
    cutoffLabel->setBounds (307, 160, 64, 32);
    resoLabel->setBounds (400, 160, 48, 32);
    modLabel->setBounds (488, 160, 70, 32);
    rateLabel1->setBounds (313, 320, 50, 32);
    amountLabel1->setBounds (488, 320, 64, 32);
    lfoLabel1->setBounds (296, 216, 80, 32);
    rateLabel2->setBounds (313, 480, 50, 32);
    amountLabel2->setBounds (488, 480, 64, 32);
    lfoLabel2->setBounds (296, 376, 80, 32);
    filterLabel->setBounds (296, 56, 80, 32);
    ampEnvLabel->setBounds (616, 216, 160, 32);
    modEnvLabel->setBounds (616, 56, 160, 32);
    ampLabel->setBounds (616, 376, 160, 32);
    volumeLabel->setBounds (616, 480, 64, 32);
    attackLabel->setBounds (627, 160, 32, 32);
    decayLabel->setBounds (696, 160, 32, 32);
    sustainLabel->setBounds (765, 160, 32, 32);
    releaseLabel->setBounds (834, 160, 32, 32);
    attackLabel2->setBounds (627, 320, 32, 32);
    decayLabel2->setBounds (696, 320, 32, 32);
    sustainLabel2->setBounds (765, 320, 32, 32);
    releaseLabel2->setBounds (834, 320, 32, 32);
    leftVolSLider->setBounds (360, 16, 208, 8);
    rightVolSlider->setBounds (360, 32, 208, 8);
    volumeLabel4->setBounds (296, 12, 64, 32);
    modEditButton->setBounds (360, 544, 100, 24);
    mainButton->setBounds (136, 544, 100, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainWindow::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]


    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == cutoffSlider)
    {
        //[UserSliderCode_cutoffSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterCutoff(cutoffSlider->getValue());
        statusLabel->setText("Cutoff "  + juce::String(cutoffSlider->getValue() * 1000) + "Hz", juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_cutoffSlider]
    }
    else if (sliderThatWasMoved == resoSlider)
    {
        //[UserSliderCode_resoSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterResonance(resoSlider->getValue());
        statusLabel->setText("Resonance "  + juce::String(resoSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_resoSlider]
    }
    else if (sliderThatWasMoved == osc1PitchSlider)
    {
        //[UserSliderCode_osc1PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Pitch(osc1PitchSlider->getValue());
        statusLabel->setText("Osc 1 Pitch : "  + juce::String(osc1PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1PitchSlider]
    }
    else if (sliderThatWasMoved == osc1FineSlider)
    {
        //[UserSliderCode_osc1FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Fine(osc1FineSlider->getValue());
        statusLabel->setText("Osc 1 Fine : "  + juce::String(osc1FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1FineSlider]
    }
    else if (sliderThatWasMoved == osc1VolumeSlider)
    {
        //[UserSliderCode_osc1VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Volume(osc1VolumeSlider->getValue());
        statusLabel->setText("Osc 1 Volume : "  + juce::String(osc1VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1VolumeSlider]
    }
    else if (sliderThatWasMoved == osc2PitchSlider)
    {
        //[UserSliderCode_osc2PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Pitch(osc2PitchSlider->getValue());
        statusLabel->setText("Osc 2 Pitch : "  + juce::String(osc2PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2PitchSlider]
    }
    else if (sliderThatWasMoved == osc2FineSlider)
    {
        //[UserSliderCode_osc2FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Fine(osc2FineSlider->getValue());
        statusLabel->setText("Osc 2 Fine : "  + juce::String(osc2FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2FineSlider]
    }
    else if (sliderThatWasMoved == osc2VolumeSlider)
    {
        //[UserSliderCode_osc2VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Volume(osc2VolumeSlider->getValue());
        statusLabel->setText("Osc 2 Volume : "  + juce::String(osc2VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2VolumeSlider]
    }
    else if (sliderThatWasMoved == osc3PitchSlider)
    {
        //[UserSliderCode_osc3PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Pitch(osc3PitchSlider->getValue());
        statusLabel->setText("Osc 3 Pitch : "  + juce::String(osc3PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3PitchSlider]
    }
    else if (sliderThatWasMoved == osc3FineSlider)
    {
        //[UserSliderCode_osc3FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Fine(osc3FineSlider->getValue());
        statusLabel->setText("Osc 3 Fine : "  + juce::String(osc3FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3FineSlider]
    }
    else if (sliderThatWasMoved == osc3VolumeSlider)
    {
        //[UserSliderCode_osc3VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Volume(osc3VolumeSlider->getValue());
        statusLabel->setText("Osc 3 Volume : "  + juce::String(osc3VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3VolumeSlider]
    }
    else if (sliderThatWasMoved == filterModSlider)
    {
        //[UserSliderCode_filterModSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterModAmount(filterModSlider->getValue());
        statusLabel->setText("Filter mod : "  + juce::String(filterModSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterModSlider]
    }
    else if (sliderThatWasMoved == lfo1RateSlider)
    {
        //[UserSliderCode_lfo1RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Rate(lfo1RateSlider->getValue());
        statusLabel->setText("LFO1 rate : "  + juce::String(lfo1RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1RateSlider]
    }
    else if (sliderThatWasMoved == lfo1AmountSlider)
    {
        //[UserSliderCode_lfo1AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Amount(lfo1AmountSlider->getValue());
        statusLabel->setText("LFO1 amount : "  + juce::String(lfo1AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1AmountSlider]
    }
    else if (sliderThatWasMoved == lfo2RateSlider)
    {
        //[UserSliderCode_lfo2RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Rate(lfo2RateSlider->getValue());
        statusLabel->setText("LFO2 rate : "  + juce::String(lfo2RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2RateSlider]
    }
    else if (sliderThatWasMoved == lfo2AmountSlider)
    {
        //[UserSliderCode_lfo2AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Amount(lfo2AmountSlider->getValue());
        statusLabel->setText("LFO2 amount : "  + juce::String(lfo2AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2AmountSlider]
    }
    else if (sliderThatWasMoved == filterAttackSlider)
    {
        //[UserSliderCode_filterAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvAttack(filterAttackSlider->getValue());
        statusLabel->setText("Filter attack : "  + juce::String(filterAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterAttackSlider]
    }
    else if (sliderThatWasMoved == filterDecaySlider)
    {
        //[UserSliderCode_filterDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvDecay(filterDecaySlider->getValue());
        statusLabel->setText("Filter decay : "  + juce::String(filterDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterDecaySlider]
    }
    else if (sliderThatWasMoved == filterSustainSlider)
    {
        //[UserSliderCode_filterSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvSustain(filterSustainSlider->getValue());
        statusLabel->setText("Filter sustain : "  + juce::String(filterSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterSustainSlider]
    }
    else if (sliderThatWasMoved == filterReleaseSlider)
    {
        //[UserSliderCode_filterReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvRelease(filterReleaseSlider->getValue());
        statusLabel->setText("Filter release : "  + juce::String(filterReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterReleaseSlider]
    }
    else if (sliderThatWasMoved == ampAttackSlider)
    {
        //[UserSliderCode_ampAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvAttack(ampAttackSlider->getValue());
        statusLabel->setText("Amp attack : "  + juce::String(ampAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampAttackSlider]
    }
    else if (sliderThatWasMoved == ampDecaySlider)
    {
        //[UserSliderCode_ampDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvDecay(ampDecaySlider->getValue());
        statusLabel->setText("Amp decay : "  + juce::String(ampDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampDecaySlider]
    }
    else if (sliderThatWasMoved == ampSustainSlider)
    {
        //[UserSliderCode_ampSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvSustain(ampSustainSlider->getValue());
        statusLabel->setText("Amp sustain : "  + juce::String(ampSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampSustainSlider]
    }
    else if (sliderThatWasMoved == ampReleaseSlider)
    {
        //[UserSliderCode_ampReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvRelease(ampReleaseSlider->getValue());
        statusLabel->setText("Amp release : "  + juce::String(ampReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampReleaseSlider]
    }
    else if (sliderThatWasMoved == ampVolSlider)
    {
        //[UserSliderCode_ampVolSlider] -- add your slider handling code here..
        this->processor->getModel()->setVolume(ampVolSlider->getValue());
        statusLabel->setText("Amp volume : "  + juce::String(ampVolSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampVolSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainWindow::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == presetCombo)
    {
        //[UserComboBoxCode_presetCombo] -- add your combo box handling code here..

        if (comboBoxThatHasChanged->getName() == "presetCombo")
        {

            String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
            String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";

			String name = comboBoxThatHasChanged->getText();

            String filename = name + ".xml";
            File preset = File(presetPath+filename);

            if (preset.exists()) {
                ScopedPointer<XmlElement> xml = XmlDocument(preset).getDocumentElement();
                ValueTree state = ValueTree::fromXml(*xml.get());
                processor->setState(&state, true);
                xml = nullptr;
            }

			vector<String> v = processor->getProgramNames();

			if (std::find(v.begin(), v.end(), name) == v.end()) {
				processor->addProgram(name);
				browserPanel->addProgram(name);
			}

            processor->setSelectedProgram(name);
            processor->setCurrentProgram(comboBoxThatHasChanged->getItemId(comboBoxThatHasChanged->getSelectedItemIndex()) - 1);

            processor->updateHostDisplay();

        }

        //[/UserComboBoxCode_presetCombo]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainWindow::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == storeButton)
    {
        //[UserButtonCode_storeButton] -- add your button handler code here..

        ValueTree seq = processor->getValueTreeState()->state.getChildWithName("sequencer");

        while (seq.isValid()) {
            processor->getValueTreeState()->state.removeChild(seq, nullptr);
            seq = processor->getValueTreeState()->state.getChildWithName("sequencer");
        }

        seq = ValueTree (Identifier ("sequencer"));
        processor->getValueTreeState()->state.addChild(seq, 0, nullptr);


        seq.setProperty("raster", processor->getSequencer()->getRaster(), nullptr);
        seq.setProperty("octaves", processor->getSequencer()->getNumOctaves(), nullptr);
        seq.setProperty("stepconfig", processor->getSequencer()->getStepConfig(), nullptr);
        seq.setProperty("enabled", processor->getSequencer()->isEnabled(), nullptr);

        ValueTree offsets = ValueTree (Identifier ("offsets"));

        for (int i = 0; i < 16;i++ ) {
            offsets.setProperty("offset_"+String(i), processor->getSequencer()->getOffsetAt(i), nullptr);
        }

        seq.removeAllChildren(nullptr);

        seq.addChild(offsets, 0, nullptr);

        ValueTree velocities = ValueTree (Identifier ("velocities"));

        for (int i = 0; i < 16;i++ ) {
            velocities.setProperty("velocity_"+String(i), processor->getSequencer()->getVelocityAt(i), nullptr);
        }

        seq.addChild(velocities, 0, nullptr);

        ScopedPointer<XmlElement> xml (processor->getValueTreeState()->state.createXml());
        presetPanel->setData(xml);

        animator->fadeIn(presetPanel, 100);

        // presetPanel->setVisible(true);

        //[/UserButtonCode_storeButton]
    }
    else if (buttonThatWasClicked == imageButton)
    {
        //[UserButtonCode_imageButton] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);

        //[/UserButtonCode_imageButton]
    }
    else if (buttonThatWasClicked == imageButton3)
    {
        //[UserButtonCode_imageButton3] -- add your button handler code here..
        mode1 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);

        //[/UserButtonCode_imageButton3]
    }
    else if (buttonThatWasClicked == imageButton2)
    {
        //[UserButtonCode_imageButton2] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton2]
    }
    else if (buttonThatWasClicked == imageButton4)
    {
        //[UserButtonCode_imageButton4] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton4]
    }
    else if (buttonThatWasClicked == imageButton5)
    {
        //[UserButtonCode_imageButton5] -- add your button handler code here..
        mode2 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton5]
    }
    else if (buttonThatWasClicked == imageButton6)
    {
        //[UserButtonCode_imageButton6] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton6]
    }
    else if (buttonThatWasClicked == imageButton7)
    {
        //[UserButtonCode_imageButton7] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);
        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton7]
    }
    else if (buttonThatWasClicked == imageButton8)
    {
        //[UserButtonCode_imageButton8] -- add your button handler code here..
        cout << "imageButton8" << endl;

        mode3 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton8]
    }
    else if (buttonThatWasClicked == imageButton9)
    {
        //[UserButtonCode_imageButton9] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);
        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton9]
    }
    else if (buttonThatWasClicked == browseButton)
    {
        //[UserButtonCode_browseButton] -- add your button handler code here..
        toggleView(PanelDisplay::BROWSER);
        //[/UserButtonCode_browseButton]
    }
    else if (buttonThatWasClicked == setupButton)
    {
        //[UserButtonCode_setupButton] -- add your button handler code here..
        toggleView(PanelDisplay::SETUP);
        //[/UserButtonCode_setupButton]
    }
    else if (buttonThatWasClicked == fxButton)
    {
        //[UserButtonCode_fxButton] -- add your button handler code here..
        toggleView(PanelDisplay::FX);
        //[/UserButtonCode_fxButton]
    }
    else if (buttonThatWasClicked == noiseButton)
    {
        //[UserButtonCode_noiseButton] -- add your button handler code here..
        mode3 = Oszillator::OscMode::NOISE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(3.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_noiseButton]
    }
    else if (buttonThatWasClicked == lowPassPutton)
    {
        //[UserButtonCode_lowPassPutton] -- add your button handler code here..

		float nval;
		String id = "filtermode";

		if (lowPassPutton->getToggleState()) {
			processor->getFilter()->setMode(MultimodeFilter::Mode::LOWPASS);
			nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
		}
		else {
			processor->getFilter()->setMode(MultimodeFilter::Mode::HIGHPASS);
			nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
		}

        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_lowPassPutton]
    }
    else if (buttonThatWasClicked == highPassButton)
    {
        //[UserButtonCode_highPassButton] -- add your button handler code here..
		/*
        processor->getFilter()->setMode(MultimodeFilter::Mode::HIGHPASS);
        String id = "filtermode";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
		*/
        //[/UserButtonCode_highPassButton]
    }
    else if (buttonThatWasClicked == modEditButton)
    {
        //[UserButtonCode_modEditButton] -- add your button handler code here..
        toggleView(PanelDisplay::MOD);
        //[/UserButtonCode_modEditButton]
    }
    else if (buttonThatWasClicked == mainButton)
    {
        //[UserButtonCode_mainButton] -- add your button handler code here..
        toggleView(PanelDisplay::MAIN);
        //[/UserButtonCode_mainButton]
    }

    //[UserbuttonClicked_Post]


    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void MainWindow::timerCallback() {
    this->leftVolSLider->setValue(processor->getMagnitudeLeft());
    this->rightVolSlider->setValue(processor->getMagnitudeRight());
}

void MainWindow::visibilityChanged() {

    // String currentProgram = processor->getSelectedProgram();

    /*
    if (currentProgram == "") {
        for (int i = 0; i < processor->getNumPrograms();i++) {
            if (processor->getProgramName(i) == "init") {
                processor->setCurrentProgram(i);
                break;
            }
        }

    }
     */

    presetCombo->setText(processor->getSelectedProgram(),NotificationType::dontSendNotification);
    // processor->updateHostDisplay();
}

void MainWindow::audioProcessorParameterChanged (AudioProcessor* processor, int parameterIndex, float newValue) {

    // cout << "Parameter " << parameterIndex << " changed to " << newValue << endl;

    String id = processor->getParameterID(parameterIndex);

    float value = processor->getParameter(parameterIndex);
    float nval = this->processor->getValueTreeState()->getParameterRange(id).convertFrom0to1(value);

    if (id == "osc1shape") {
        imageButton ->setToggleState(false, NotificationType::dontSendNotification);
        imageButton2->setToggleState(false, NotificationType::dontSendNotification);
        imageButton3->setToggleState(false, NotificationType::dontSendNotification);

        if (nval == 0.0f) {
            imageButton->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 1.0f) {
            imageButton2->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 2.0f) {
            imageButton3->setToggleState(true, NotificationType::dontSendNotification);
        }
    }
    else if (id == "osc2shape") {
        imageButton4->setToggleState(false, NotificationType::dontSendNotification);
        imageButton5->setToggleState(false, NotificationType::dontSendNotification);
        imageButton6->setToggleState(false, NotificationType::dontSendNotification);
        if (nval == 0.0f) {
            imageButton4->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 1.0f) {
            imageButton6->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 2.0f) {
            imageButton5->setToggleState(true, NotificationType::dontSendNotification);
        }
    }
    else if (id == "osc3shape") {
        imageButton7->setToggleState(false, NotificationType::dontSendNotification);
        imageButton8->setToggleState(false, NotificationType::dontSendNotification);
        imageButton9->setToggleState(false, NotificationType::dontSendNotification);
        if (nval == 0.0f) {
            imageButton7->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 1.0f) {
            imageButton9->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 2.0f) {
            imageButton8->setToggleState(true, NotificationType::dontSendNotification);
        }
        else if (nval == 3.0f) {
            noiseButton->setToggleState(true, NotificationType::dontSendNotification);
        }
    }
    else if (id == "filtermode") {
        if (nval == 0) {
            lowPassPutton->setToggleState(true,NotificationType::dontSendNotification);
        }
        else {
            highPassButton->setToggleState(true,NotificationType::dontSendNotification);
        }
    }

}

void MainWindow::toggleView(MainWindow::PanelDisplay display) {

    if (display == PanelDisplay::MAIN) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(browserPanel, 100);
        }
    }
    else if (display == PanelDisplay::FX) {
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        animator->fadeIn(fxPanel, 100);

    }
    else if (display == PanelDisplay::MOD) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        animator->fadeIn(modPanel, 100);
    }
    else if (display == PanelDisplay::BROWSER) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        animator->fadeIn(browserPanel, 100);
    }
    else if (display == PanelDisplay::SETUP) {


    }

    this->currentDisplay = display;

}

bool MainWindow::keyPressed (const KeyPress& key, Component* originatingComponent) {
    return true;
}

void MainWindow::changeListenerCallback (ChangeBroadcaster* source) {
    presetCombo->setText(processor->getSelectedProgram());
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public Component, public SliderListener, public ButtonListener, public ComboBoxListener, public AudioProcessorListener, public Timer, public ChangeBroadcaster, public KeyListener, public ChangeListener"
                 constructorParams="TrioAudioProcessor* p" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="910" initialHeight="600">
  <BACKGROUND backgroundColour="ff747474">
    <IMAGE pos="0 0 910 600" resource="trio_png" opacity="1" mode="0"/>
  </BACKGROUND>
  <SLIDER name="cutoffSlider" id="33e55ada7f13106b" memberName="cutoffSlider"
          virtualName="" explicitFocusOrder="0" pos="304 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.10000000000000000555" max="12" int="0.10000000000000000555"
          style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="resoSlider" id="72ce21eac8eaa69c" memberName="resoSlider"
          virtualName="" explicitFocusOrder="0" pos="392 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc1PitchSlider" id="860a64caafed9e9a" memberName="osc1PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 96 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc1FineSlider" id="4fc66824ef24b612" memberName="osc1FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 96 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc1VolumeSlider" id="4c562bc5b4c27b9" memberName="osc1VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 96 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc2PitchSlider" id="c7017c174a50a23" memberName="osc2PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 256 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc2FineSlider" id="affffebc271612c" memberName="osc2FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 256 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc2VolumeSlider" id="b8f800c1689b6ef0" memberName="osc2VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 256 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc3PitchSlider" id="bbf153190061abe1" memberName="osc3PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 416 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc3FineSlider" id="95d942fd7fabe58b" memberName="osc3FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 416 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc3VolumeSlider" id="faa7136819574037" memberName="osc3VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 416 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="resoSlider" id="9160d334c6170269" memberName="filterModSlider"
          virtualName="" explicitFocusOrder="0" pos="488 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="lfo1RateSlider" id="b826c2541264d4fa" memberName="lfo1RateSlider"
          virtualName="" explicitFocusOrder="0" pos="304 256 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo1AmountSlider" id="d652f9f030b1a4ca" memberName="lfo1AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="488 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="lfo2RateSlider" id="e181558ceae467cc" memberName="lfo2RateSlider"
          virtualName="" explicitFocusOrder="0" pos="304 416 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo2AmountSlider" id="d5b558442927d2fc" memberName="lfo2AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="488 416 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="filterAttackSlider" id="dd143499d0f6a2f0" memberName="filterAttackSlider"
          virtualName="" explicitFocusOrder="0" pos="613 96 64 64" thumbcol="ffff7900"
          rotaryslideroutline="66fff8f8" min="0" max="5" int="0.10000000000000000555"
          style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="filterDecaySlider" id="33363d9ec7716419" memberName="filterDecaySlider"
          virtualName="" explicitFocusOrder="0" pos="681 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="filterSustainSlider" id="221683b72a922f05" memberName="filterSustainSlider"
          virtualName="" explicitFocusOrder="0" pos="750 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="filterReleaseSlider" id="7c537539090ea5d7" memberName="filterReleaseSlider"
          virtualName="" explicitFocusOrder="0" pos="819 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="ampAttackSlider" id="d39e583f4c75014f" memberName="ampAttackSlider"
          virtualName="" explicitFocusOrder="0" pos="613 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="ampDecaySlider" id="792535f3bc392ff8" memberName="ampDecaySlider"
          virtualName="" explicitFocusOrder="0" pos="681 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="ampSustainSlider" id="427fd5158260d560" memberName="ampSustainSlider"
          virtualName="" explicitFocusOrder="0" pos="750 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="ampReleaseSlider" id="d914be54075f55e0" memberName="ampReleaseSlider"
          virtualName="" explicitFocusOrder="0" pos="819 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="ampVolSlider" id="8a583b1da0600bb3" memberName="ampVolSlider"
          virtualName="" explicitFocusOrder="0" pos="616 416 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <COMBOBOX name="presetCombo" id="dd92602a91bc7ca9" memberName="presetCombo"
            virtualName="" explicitFocusOrder="0" pos="600 16 296 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="storeButton" id="7f02553932604ec2" memberName="storeButton"
              virtualName="" explicitFocusOrder="0" pos="24 544 100 24" buttonText="Store"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="new button" id="ee7a53baa21af566" memberName="imageButton"
               virtualName="" explicitFocusOrder="0" pos="96 64 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="a214c8a1de4a68cd" memberName="imageButton3"
               virtualName="" explicitFocusOrder="0" pos="160 64 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="8c20ca18b3a9d2d7" memberName="imageButton2"
               virtualName="" explicitFocusOrder="0" pos="128 64 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="ef82a979049e8fee" memberName="imageButton4"
               virtualName="" explicitFocusOrder="0" pos="104 224 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="8aea33fc6afd4750" memberName="imageButton5"
               virtualName="" explicitFocusOrder="0" pos="168 224 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="28fc3adc877116d8" memberName="imageButton6"
               virtualName="" explicitFocusOrder="0" pos="136 224 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="9d8aa1824f425f4a" memberName="imageButton7"
               virtualName="" explicitFocusOrder="0" pos="104 384 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="c70ee3eb5acde81b" memberName="imageButton8"
               virtualName="" explicitFocusOrder="0" pos="168 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="557c43e2f39f8df6" memberName="imageButton9"
               virtualName="" explicitFocusOrder="0" pos="136 384 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <LABEL name="statusLabel" id="f241e45e174945c6" memberName="statusLabel"
         virtualName="" explicitFocusOrder="0" pos="728 544 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="browseButton" id="f48c01fdd9a33988" memberName="browseButton"
              virtualName="" explicitFocusOrder="0" pos="472 544 100 24" buttonText="Browser"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="setupButton" id="2f8adecb1d3124d2" memberName="setupButton"
              virtualName="" explicitFocusOrder="0" pos="584 544 104 24" buttonText="Setup"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="fxButton" id="8928dfb414abfd9e" memberName="fxButton" virtualName=""
              explicitFocusOrder="0" pos="248 544 100 24" buttonText="FX" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="noiseButton" id="7351ad630e1b98c0" memberName="noiseButton"
               virtualName="" explicitFocusOrder="0" pos="200 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_noise_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_noise_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
  <TOGGLEBUTTON name="lowPassPutton" id="60daab19b2c9e457" memberName="lowPassPutton"
                virtualName="" explicitFocusOrder="0" pos="446 64 48 24" txtcol="ffffffff"
                buttonText="LP" connectedEdges="0" needsCallback="1" radioGroupId="111"
                state="1"/>
  <TOGGLEBUTTON name="highPassButton" id="af92ba4031eff084" memberName="highPassButton"
                virtualName="" explicitFocusOrder="0" pos="494 64 48 24" txtcol="ffffffff"
                buttonText="HP" connectedEdges="0" needsCallback="1" radioGroupId="111"
                state="0"/>
  <LABEL name="label" id="5657ae779f570fb" memberName="oscLabel1" virtualName=""
         explicitFocusOrder="0" pos="24 59 80 32" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="Osc 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Verdana" fontsize="24" bold="1"
         italic="0" justification="33"/>
  <LABEL name="label" id="81da6bd96e3f5ae3" memberName="oscLabel2" virtualName=""
         explicitFocusOrder="0" pos="24 217 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Osc 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="c5a5697528593218" memberName="oscLabel3" virtualName=""
         explicitFocusOrder="0" pos="24 377 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Osc 3&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="72ced2892cc1acea" memberName="pitchLabel1" virtualName=""
         explicitFocusOrder="0" pos="40 160 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="47307db3bffcb8f6" memberName="fineLabel1" virtualName=""
         explicitFocusOrder="0" pos="119 160 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="ad4fd2ffbc831cf" memberName="volumeLabel1" virtualName=""
         explicitFocusOrder="0" pos="184 160 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="add9ffc68d6fb182" memberName="pitchLabel2" virtualName=""
         explicitFocusOrder="0" pos="40 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="ca9d28ebb0a1439d" memberName="fineLabel2" virtualName=""
         explicitFocusOrder="0" pos="119 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="fb8fc091b7af29ab" memberName="volumeLabel2"
         virtualName="" explicitFocusOrder="0" pos="184 320 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="e760b86769b7a9d0" memberName="pitchLabel3" virtualName=""
         explicitFocusOrder="0" pos="40 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="581e25c3d0c7b0f3" memberName="fineLabel3" virtualName=""
         explicitFocusOrder="0" pos="119 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="efe7290214fa80a" memberName="volumeLabel3" virtualName=""
         explicitFocusOrder="0" pos="184 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="747b4b6125822722" memberName="cutoffLabel" virtualName=""
         explicitFocusOrder="0" pos="307 160 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Cutoff" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="bdf16e1d7e58291d" memberName="resoLabel" virtualName=""
         explicitFocusOrder="0" pos="400 160 48 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Reso" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="7af13145b0478466" memberName="modLabel" virtualName=""
         explicitFocusOrder="0" pos="488 160 70 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ModAmt" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="5f5e3d780dee0d7f" memberName="rateLabel1" virtualName=""
         explicitFocusOrder="0" pos="313 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="bbee85008b280580" memberName="amountLabel1"
         virtualName="" explicitFocusOrder="0" pos="488 320 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="6a7bad2271cb6ad2" memberName="lfoLabel1" virtualName=""
         explicitFocusOrder="0" pos="296 216 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LFO 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="dbf138b7e2c11237" memberName="rateLabel2" virtualName=""
         explicitFocusOrder="0" pos="313 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="6397e09c90ae19d1" memberName="amountLabel2"
         virtualName="" explicitFocusOrder="0" pos="488 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="845a47fbe1a7cc0c" memberName="lfoLabel2" virtualName=""
         explicitFocusOrder="0" pos="296 376 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LFO 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="a66b01a4a92e19d2" memberName="filterLabel" virtualName=""
         explicitFocusOrder="0" pos="296 56 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Filter" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="310ef9361e1337ea" memberName="ampEnvLabel" virtualName=""
         explicitFocusOrder="0" pos="616 216 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amp Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="f04726959e887f9f" memberName="modEnvLabel" virtualName=""
         explicitFocusOrder="0" pos="616 56 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Mod Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="843742db9fb8656a" memberName="ampLabel" virtualName=""
         explicitFocusOrder="0" pos="616 376 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amp" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24" bold="1" italic="0" justification="33"/>
  <LABEL name="label" id="3eeb9e6b8bc89770" memberName="volumeLabel" virtualName=""
         explicitFocusOrder="0" pos="616 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="61c4989a00ceb07" memberName="attackLabel" virtualName=""
         explicitFocusOrder="0" pos="627 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="8d84a0c2d2757176" memberName="decayLabel" virtualName=""
         explicitFocusOrder="0" pos="696 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="D&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="3ec264a9756af91c" memberName="sustainLabel"
         virtualName="" explicitFocusOrder="0" pos="765 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="ee162dde96565ce5" memberName="releaseLabel"
         virtualName="" explicitFocusOrder="0" pos="834 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="1c2282506216b5fe" memberName="attackLabel2"
         virtualName="" explicitFocusOrder="0" pos="627 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="bc332dca2988df5c" memberName="decayLabel2" virtualName=""
         explicitFocusOrder="0" pos="696 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="D&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="737a12f35ff15976" memberName="sustainLabel2"
         virtualName="" explicitFocusOrder="0" pos="765 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <LABEL name="label" id="35455129837bccf8" memberName="releaseLabel2"
         virtualName="" explicitFocusOrder="0" pos="834 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" bold="1" italic="0" justification="36"/>
  <SLIDER name="leftVolSLider" id="71b1221c67299992" memberName="leftVolSLider"
          virtualName="" explicitFocusOrder="0" pos="360 16 208 8" bkgcol="ff808080"
          thumbcol="ffe28600" min="0" max="1" int="0.010000000000000000208"
          style="LinearBar" textBoxPos="NoTextBox" textBoxEditable="0"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="0"/>
  <SLIDER name="rightVolSlider" id="331b71603552f421" memberName="rightVolSlider"
          virtualName="" explicitFocusOrder="0" pos="360 32 208 8" bkgcol="ff808080"
          thumbcol="ffe28600" min="0" max="1" int="0.010000000000000000208"
          style="LinearBar" textBoxPos="NoTextBox" textBoxEditable="0"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="0"/>
  <LABEL name="label" id="afe8f48f522c2c88" memberName="volumeLabel4"
         virtualName="" explicitFocusOrder="0" pos="296 12 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Output" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="modEditButton" id="725f3066f30ed3b3" memberName="modEditButton"
              virtualName="" explicitFocusOrder="0" pos="360 544 100 24" buttonText="Modulation"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="mainButton" id="247303c92b11a794" memberName="mainButton"
              virtualName="" explicitFocusOrder="0" pos="136 544 100 24" buttonText="Main"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: trio_png, 49083, "../trio.png"
static const unsigned char resource_MainWindow_trio_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,142,0,0,2,88,8,2,0,0,0,162,133,47,69,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,
156,24,0,0,10,79,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,103,84,83,233,22,61,247,222,244,66,75,136,128,148,75,111,82,21,8,32,82,66,
139,128,20,145,38,42,33,9,16,74,136,33,161,217,21,81,193,17,69,69,4,27,200,160,136,3,142,142,128,140,21,81,44,12,138,10,216,7,228,33,162,142,131,163,136,138,202,251,225,123,163,107,214,188,247,230,205,
254,181,215,62,231,172,243,157,179,207,7,192,8,12,150,72,51,81,53,128,12,169,66,30,17,224,131,199,196,198,225,228,46,64,129,10,36,112,0,16,8,179,100,33,115,253,35,1,0,248,126,60,60,43,34,192,7,190,0,1,
120,211,11,8,0,192,77,155,192,48,28,135,255,15,234,66,153,92,1,128,132,1,192,116,145,56,75,8,128,20,0,64,122,142,66,166,0,64,70,1,128,157,152,38,83,0,160,4,0,96,203,99,98,227,0,80,45,0,96,39,127,230,211,
0,128,157,248,153,123,1,0,91,148,33,21,1,160,145,0,32,19,101,136,68,0,104,59,0,172,207,86,138,69,0,88,48,0,20,102,75,196,57,0,216,45,0,48,73,87,102,72,0,176,183,0,192,206,16,11,178,0,8,12,0,48,81,136,
133,41,0,4,123,0,96,200,35,35,120,0,132,153,0,20,70,242,87,60,241,43,174,16,231,42,0,0,120,153,178,60,185,36,57,69,129,91,8,45,113,7,87,87,46,30,40,206,73,23,43,20,54,97,2,97,154,64,46,194,121,153,25,
50,129,52,15,224,243,204,0,0,160,145,21,17,224,131,243,253,120,206,14,174,206,206,54,142,182,14,95,45,234,191,6,255,34,98,98,227,254,229,207,171,112,64,0,0,225,116,126,209,254,44,47,179,26,128,59,6,128,
109,254,162,37,238,4,104,94,11,160,117,247,139,102,178,15,64,181,0,160,233,218,87,243,112,248,126,60,60,69,161,144,185,217,217,229,228,228,216,74,196,66,91,97,202,87,125,254,103,194,95,192,87,253,108,
249,126,60,252,247,245,224,190,226,36,129,50,93,129,71,4,248,224,194,204,244,76,165,28,207,146,9,132,98,220,230,143,71,252,183,11,255,252,29,211,34,196,73,98,185,88,42,20,227,81,18,113,142,68,154,140,
243,50,165,34,137,66,146,41,197,37,210,255,100,226,223,44,251,3,62,223,53,0,176,106,62,1,123,145,45,168,93,99,3,246,75,39,16,88,116,192,226,247,0,0,242,187,111,193,212,40,8,3,128,104,131,225,207,119,255,
239,63,253,71,160,37,0,128,102,73,146,113,0,0,94,68,36,46,84,202,179,63,199,8,0,0,68,160,129,42,176,65,27,244,193,24,44,192,6,28,193,5,220,193,11,252,96,54,132,66,36,196,194,66,16,66,10,100,128,28,114,
96,41,172,130,66,40,134,205,176,29,42,96,47,212,64,29,52,192,81,104,134,147,112,14,46,194,85,184,14,61,112,15,250,97,8,158,193,40,188,129,9,4,65,200,8,19,97,33,218,136,1,98,138,88,35,142,8,23,153,133,
248,33,193,72,4,18,139,36,32,201,136,20,81,34,75,145,53,72,49,82,138,84,32,85,72,29,242,61,114,2,57,135,92,70,186,145,59,200,0,50,130,252,134,188,71,49,148,129,178,81,61,212,12,181,67,185,168,55,26,132,
70,162,11,208,100,116,49,154,143,22,160,155,208,114,180,26,61,140,54,161,231,208,171,104,15,218,143,62,67,199,48,192,232,24,7,51,196,108,48,46,198,195,66,177,56,44,9,147,99,203,177,34,172,12,171,198,26,
176,86,172,3,187,137,245,99,207,177,119,4,18,129,69,192,9,54,4,119,66,32,97,30,65,72,88,76,88,78,216,72,168,32,28,36,52,17,218,9,55,9,3,132,81,194,39,34,147,168,75,180,38,186,17,249,196,24,98,50,49,135,
88,72,44,35,214,18,143,19,47,16,123,136,67,196,55,36,18,137,67,50,39,185,144,2,73,177,164,84,210,18,210,70,210,110,82,35,233,44,169,155,52,72,26,35,147,201,218,100,107,178,7,57,148,44,32,43,200,133,228,
157,228,195,228,51,228,27,228,33,242,91,10,157,98,64,113,164,248,83,226,40,82,202,106,74,25,229,16,229,52,229,6,101,152,50,65,85,163,154,82,221,168,161,84,17,53,143,90,66,173,161,182,82,175,81,135,168,
19,52,117,154,57,205,131,22,73,75,165,173,162,149,211,26,104,23,104,247,105,175,232,116,186,17,221,149,30,78,151,208,87,210,203,233,71,232,151,232,3,244,119,12,13,134,21,131,199,136,103,40,25,155,24,7,
24,103,25,119,24,175,152,76,166,25,211,139,25,199,84,48,55,49,235,152,231,153,15,153,111,85,88,42,182,42,124,21,145,202,10,149,74,149,38,149,27,42,47,84,169,170,166,170,222,170,11,85,243,85,203,84,143,
169,94,83,125,174,70,85,51,83,227,169,9,212,150,171,85,170,157,80,235,83,27,83,103,169,59,168,135,170,103,168,111,84,63,164,126,89,253,137,6,89,195,76,195,79,67,164,81,160,177,95,227,188,198,32,11,99,
25,179,120,44,33,107,13,171,134,117,129,53,196,38,177,205,217,124,118,42,187,152,253,29,187,139,61,170,169,161,57,67,51,74,51,87,179,82,243,148,102,63,7,227,152,113,248,156,116,78,9,231,40,167,151,243,
126,138,222,20,239,41,226,41,27,166,52,76,185,49,101,92,107,170,150,151,150,88,171,72,171,81,171,71,235,189,54,174,237,167,157,166,189,69,187,89,251,129,14,65,199,74,39,92,39,71,103,143,206,5,157,231,
83,217,83,221,167,10,167,22,77,61,58,245,174,46,170,107,165,27,161,187,68,119,191,110,167,238,152,158,190,94,128,158,76,111,167,222,121,189,231,250,28,125,47,253,84,253,109,250,167,245,71,12,88,6,179,
12,36,6,219,12,206,24,60,197,53,113,111,60,29,47,199,219,241,81,67,93,195,64,67,165,97,149,97,151,225,132,145,185,209,60,163,213,70,141,70,15,140,105,198,92,227,36,227,109,198,109,198,163,38,6,38,33,38,
75,77,234,77,238,154,82,77,185,166,41,166,59,76,59,76,199,205,204,205,162,205,214,153,53,155,61,49,215,50,231,155,231,155,215,155,223,183,96,90,120,90,44,182,168,182,184,101,73,178,228,90,166,89,238,182,
188,110,133,90,57,89,165,88,85,90,93,179,70,173,157,173,37,214,187,173,187,167,17,167,185,78,147,78,171,158,214,103,195,176,241,182,201,182,169,183,25,176,229,216,6,219,174,182,109,182,125,97,103,98,23,
103,183,197,174,195,238,147,189,147,125,186,125,141,253,61,7,13,135,217,14,171,29,90,29,126,115,180,114,20,58,86,58,222,154,206,156,238,63,125,197,244,150,233,47,103,88,207,16,207,216,51,227,182,19,203,
41,196,105,157,83,155,211,71,103,23,103,185,115,131,243,136,139,137,75,130,203,46,151,62,46,155,27,198,221,200,189,228,74,116,245,113,93,225,122,210,245,157,155,179,155,194,237,168,219,175,238,54,238,
105,238,135,220,159,204,52,159,41,158,89,51,115,208,195,200,67,224,81,229,209,63,11,159,149,48,107,223,172,126,79,67,79,129,103,181,231,35,47,99,47,145,87,173,215,176,183,165,119,170,247,97,239,23,62,
246,62,114,159,227,62,227,60,55,222,50,222,89,95,204,55,192,183,200,183,203,79,195,111,158,95,133,223,67,127,35,255,100,255,122,255,209,0,167,128,37,1,103,3,137,129,65,129,91,2,251,248,122,124,33,191,
142,63,58,219,101,246,178,217,237,65,140,160,185,65,21,65,143,130,173,130,229,193,173,33,104,200,236,144,173,33,247,231,152,206,145,206,105,14,133,80,126,232,214,208,7,97,230,97,139,195,126,12,39,133,
135,133,87,134,63,142,112,136,88,26,209,49,151,53,119,209,220,67,115,223,68,250,68,150,68,222,155,103,49,79,57,175,45,74,53,42,62,170,46,106,60,218,55,186,52,186,63,198,46,102,89,204,213,88,157,88,73,
108,75,28,57,46,42,174,54,110,108,190,223,252,237,243,135,226,157,226,11,227,123,23,152,47,200,93,112,121,161,206,194,244,133,167,22,169,46,18,44,58,150,64,76,136,78,56,148,240,65,16,42,168,22,140,37,
242,19,119,37,142,10,121,194,29,194,103,34,47,209,54,209,136,216,67,92,42,30,78,242,72,42,77,122,146,236,145,188,53,121,36,197,51,165,44,229,185,132,39,169,144,188,76,13,76,221,155,58,158,22,154,118,32,
109,50,61,58,189,49,131,146,145,144,113,66,170,33,77,147,182,103,234,103,230,102,118,203,172,101,133,178,254,197,110,139,183,47,30,149,7,201,107,179,144,172,5,89,45,10,182,66,166,232,84,90,40,215,42,7,
178,103,101,87,102,191,205,137,202,57,150,171,158,43,205,237,204,179,202,219,144,55,156,239,159,255,237,18,194,18,225,146,182,165,134,75,87,45,29,88,230,189,172,106,57,178,60,113,121,219,10,227,21,5,43,
134,86,6,172,60,184,138,182,42,109,213,79,171,237,87,151,174,126,189,38,122,77,107,129,94,193,202,130,193,181,1,107,235,11,85,10,229,133,125,235,220,215,237,93,79,88,47,89,223,181,97,250,134,157,27,62,
21,137,138,174,20,219,23,151,21,127,216,40,220,120,229,27,135,111,202,191,153,220,148,180,169,171,196,185,100,207,102,210,102,233,230,222,45,158,91,14,150,170,151,230,151,14,110,13,217,218,180,13,223,
86,180,237,245,246,69,219,47,151,205,40,219,187,131,182,67,185,163,191,60,184,188,101,167,201,206,205,59,63,84,164,84,244,84,250,84,54,238,210,221,181,97,215,248,110,209,238,27,123,188,246,52,236,213,
219,91,188,247,253,62,201,190,219,85,1,85,77,213,102,213,101,251,73,251,179,247,63,174,137,170,233,248,150,251,109,93,173,78,109,113,237,199,3,210,3,253,7,35,14,182,215,185,212,213,29,210,61,84,82,143,
214,43,235,71,14,199,31,190,254,157,239,119,45,13,54,13,85,141,156,198,226,35,112,68,121,228,233,247,9,223,247,30,13,58,218,118,140,123,172,225,7,211,31,118,29,103,29,47,106,66,154,242,154,70,155,83,154,
251,91,98,91,186,79,204,62,209,214,234,222,122,252,71,219,31,15,156,52,60,89,121,74,243,84,201,105,218,233,130,211,147,103,242,207,140,157,149,157,125,126,46,249,220,96,219,162,182,123,231,99,206,223,
106,15,111,239,186,16,116,225,210,69,255,139,231,59,188,59,206,92,242,184,116,242,178,219,229,19,87,184,87,154,175,58,95,109,234,116,234,60,254,147,211,79,199,187,156,187,154,174,185,92,107,185,238,122,
189,181,123,102,247,233,27,158,55,206,221,244,189,121,241,22,255,214,213,158,57,61,221,189,243,122,111,247,197,247,245,223,22,221,126,114,39,253,206,203,187,217,119,39,238,173,188,79,188,95,244,64,237,
65,217,67,221,135,213,63,91,254,220,216,239,220,127,106,192,119,160,243,209,220,71,247,6,133,131,207,254,145,245,143,15,67,5,143,153,143,203,134,13,134,235,158,56,62,57,57,226,63,114,253,233,252,167,67,
207,100,207,38,158,23,254,162,254,203,174,23,22,47,126,248,213,235,215,206,209,152,209,161,151,242,151,147,191,109,124,165,253,234,192,235,25,175,219,198,194,198,30,190,201,120,51,49,94,244,86,251,237,
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,114,93,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,
98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,
57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,
88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,50,32,55,57,46,49,53,57,50,56,52,44,32,50,48,49,54,47,48,52,47,49,57,45,49,51,58,49,51,58,52,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,
102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,
115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,
120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,
116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,
116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,
116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,
32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,
82,101,102,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,
111,116,111,115,104,111,112,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,
116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,
102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,
48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,
116,97,68,97,116,101,62,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,
109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,
32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,
110,99,101,73,68,62,120,109,112,46,105,105,100,58,48,49,98,97,97,49,97,102,45,57,53,48,99,45,52,101,99,99,45,97,98,56,55,45,54,51,51,50,100,97,98,50,54,54,56,48,60,47,120,109,112,77,77,58,73,110,115,116,
97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,102,
100,101,100,52,53,100,52,45,102,102,53,98,45,49,49,55,57,45,56,99,52,102,45,101,54,56,97,53,57,57,101,57,97,55,101,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,
32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,
45,48,51,49,50,53,53,54,101,100,98,51,48,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,
116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,
84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,
116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,99,57,
53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,
49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,
105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,54,51,51,48,49,97,56,45,100,101,53,49,45,52,99,56,98,45,98,101,54,48,45,101,53,51,54,101,97,56,
98,56,52,55,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,
54,45,48,50,84,49,57,58,51,49,58,49,49,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,
119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,
119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,
100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,
116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,98,99,50,50,102,50,
102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,56,48,102,101,56,55,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,
116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,
111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,
46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,48,49,98,97,97,49,97,102,45,57,53,48,99,45,52,101,99,99,45,97,98,56,
55,45,54,51,51,50,100,97,98,50,54,54,56,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,
101,110,62,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,
115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,
69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,
32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,98,99,50,50,102,50,102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,56,48,102,101,56,55,60,47,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,102,99,100,51,101,99,52,45,54,
57,55,101,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,
53,54,101,100,98,51,48,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,
100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,51,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,
111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,60,47,112,104,111,116,
111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,
101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,111,100,117,108,97,116,105,111,110,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,
111,100,117,108,97,116,105,111,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,
70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,
114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,84,101,120,116,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,
58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,117,110,116,60,47,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,
108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,62,76,70,79,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,
58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,
114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,
117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,
61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,109,101,60,
47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,
120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,112,108,105,102,105,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,112,108,105,102,105,101,114,32,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,
58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,97,121,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,101,99,97,121,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,
116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,108,101,
97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,
108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,
109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,
114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,
102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,
99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,117,115,116,
97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,
105,108,116,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,108,116,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,115,111,110,
97,110,99,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,82,101,115,111,110,97,110,99,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,
102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,111,100,46,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,111,100,46,65,109,111,117,110,
116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,67,117,116,111,102,102,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,67,117,116,111,102,102,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,108,116,101,
114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,70,105,108,116,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,51,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,84,101,120,116,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,
58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,
109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,
100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,
34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,50,60,47,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,
100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,78,97,109,101,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,110,101,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,110,101,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,49,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,
101,120,116,62,79,115,99,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,
114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,
105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,68,101,108,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,118,101,114,98,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,
34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,97,109,112,60,47,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,97,109,112,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,
58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,70,114,101,101,122,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,114,101,101,122,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,
111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,105,122,101,60,47,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,105,122,
101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,87,105,100,116,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,87,105,100,116,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,
61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,87,101,116,60,47,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,
87,101,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,114,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,114,121,32,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,
34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,108,97,121,60,47,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,68,101,108,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,105,109,101,32,76,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,84,105,109,101,32,76,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,
105,109,101,32,82,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,84,105,109,101,32,82,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,
58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,66,32,76,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,66,32,76,60,47,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,
58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,
109,101,62,70,66,32,82,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,84,101,120,116,62,70,66,32,82,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,
105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,105,120,32,76,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,105,120,32,76,60,47,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,
102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
78,97,109,101,62,68,114,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,77,105,120,32,82,32,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,
100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,105,115,116,111,114,116,105,111,110,60,47,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,105,115,116,111,114,116,
105,111,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,114,105,118,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,114,105,118,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,
116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,105,120,60,
47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,
120,116,62,77,105,120,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,111,100,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,111,100,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,
116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,101,113,117,
101,110,99,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,83,101,113,117,101,110,99,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,
114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,
101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,60,47,112,104,111,116,111,
115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,110,
116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,111,
108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,111,
108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,
85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,49,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,
32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,57,49,48,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,
32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,54,48,48,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,32,32,32,
32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,63,62,242,
69,25,145,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,66,125,73,68,65,84,120,218,236,221,123,152,93,231,93,31,250,
247,93,123,239,185,218,146,70,55,91,23,203,150,28,91,150,44,219,114,140,105,48,13,167,13,14,110,161,105,104,33,20,211,60,167,7,108,159,0,49,193,164,144,60,225,146,182,78,242,132,184,96,114,192,180,129,
216,192,121,8,113,28,39,148,134,83,130,241,13,14,144,194,41,146,124,145,35,203,142,70,150,44,217,178,100,205,140,46,163,203,204,236,245,158,63,214,158,53,123,46,186,204,69,202,140,252,249,52,168,210,158,
125,91,107,207,207,191,239,126,215,187,222,21,175,222,176,49,0,0,192,236,147,217,5,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,179,64,245,140,247,136,113,248,47,163,255,121,70,41,
157,249,254,197,125,66,8,169,249,21,199,189,244,248,135,164,83,188,74,243,99,83,211,147,166,209,47,7,0,192,220,142,170,69,254,139,33,196,56,252,191,208,248,243,204,57,117,204,83,157,226,62,101,238,76,
105,84,232,60,213,107,53,238,217,116,255,20,70,63,106,248,129,205,65,54,111,186,179,204,10,0,48,231,163,234,72,88,140,161,146,133,44,11,89,12,217,112,102,157,48,128,142,25,233,28,159,122,199,70,213,34,
71,230,33,133,144,55,61,36,139,33,134,144,101,19,60,176,72,168,121,10,121,10,41,31,121,84,227,221,102,161,50,250,29,22,207,159,55,61,42,207,67,74,141,183,46,176,2,0,204,189,168,90,230,212,44,11,213,44,
84,178,80,173,132,106,101,36,176,158,114,100,117,220,209,249,114,104,118,108,182,77,33,141,206,145,229,168,106,17,136,179,24,178,44,196,230,71,165,144,66,168,231,33,207,67,61,15,245,124,100,108,53,203,
134,35,117,12,149,108,36,173,22,207,95,222,191,158,135,122,108,122,96,148,86,1,0,230,90,84,13,101,78,173,132,90,37,180,84,67,173,26,106,89,170,84,70,5,193,230,193,203,145,89,167,105,84,108,109,142,167,
227,239,159,167,34,56,198,49,81,53,139,41,142,27,196,45,242,101,35,170,166,88,207,195,80,189,241,168,74,22,42,89,168,84,66,37,166,34,79,23,115,85,135,163,109,28,202,195,80,61,12,14,133,161,122,24,202,
67,189,30,234,121,8,210,42,0,192,156,139,170,197,144,106,37,54,114,106,91,45,181,182,132,214,74,170,86,67,72,19,158,10,85,62,110,228,255,98,115,100,29,251,168,166,97,214,24,243,60,229,41,22,51,80,179,
24,98,22,170,49,141,123,84,108,186,127,40,162,103,61,197,60,47,210,109,170,100,161,150,165,172,18,178,226,5,155,158,191,158,167,193,122,28,24,10,131,149,56,48,20,6,134,194,96,8,33,204,124,90,157,112,106,
196,105,230,69,204,184,81,99,216,163,223,128,68,14,0,92,40,81,53,134,44,134,74,37,84,43,161,181,154,218,91,67,91,45,133,144,82,158,167,48,252,255,78,145,113,83,136,49,198,16,66,42,114,83,106,14,171,41,
77,116,231,24,98,53,139,33,54,146,94,10,33,79,121,72,41,133,212,148,86,67,12,33,197,24,83,140,49,182,84,179,214,90,204,83,42,230,24,100,33,21,66,74,121,227,221,165,16,98,10,33,198,152,133,216,90,141,45,
213,56,48,20,170,3,161,146,197,98,216,53,12,53,210,106,154,124,0,61,101,76,28,61,222,220,56,157,43,157,219,9,178,205,39,192,133,48,193,80,244,72,96,61,197,2,11,19,174,171,0,0,48,235,162,106,25,119,138,
41,170,181,90,104,173,166,193,161,250,214,109,175,119,239,238,57,203,231,237,236,168,173,89,181,240,234,53,139,182,108,125,189,123,119,239,105,238,185,226,210,139,87,92,58,239,178,229,243,67,202,138,116,
219,119,232,120,247,238,131,59,79,253,168,213,171,186,214,92,190,168,107,126,71,22,66,136,197,156,215,60,132,212,211,119,108,239,190,195,59,95,237,27,28,172,151,119,190,98,229,130,174,249,109,171,87,45,
140,49,182,86,179,106,17,93,99,44,50,92,49,95,54,158,34,156,77,184,6,194,72,188,11,163,34,108,57,93,161,188,91,106,158,180,144,70,5,214,241,217,119,202,49,177,249,4,184,230,169,186,177,17,250,27,231,159,
53,159,184,54,102,129,133,49,235,42,76,33,85,127,219,135,147,103,54,241,135,113,91,33,187,3,192,183,197,41,47,1,16,203,180,154,133,44,11,221,175,188,249,139,31,191,47,157,181,238,157,123,186,119,247,236,
59,112,228,159,191,231,199,78,127,207,47,127,245,207,111,123,207,79,252,191,127,255,202,222,125,125,33,229,33,229,221,187,15,254,215,223,125,248,52,15,249,175,191,251,112,247,174,131,197,32,106,158,82,
202,235,111,188,121,228,239,54,239,190,100,213,63,250,200,47,126,166,183,247,80,243,157,63,247,224,151,222,255,19,191,240,216,95,190,188,125,199,129,144,242,74,37,117,182,164,214,90,106,173,133,106,37,
84,179,83,46,191,85,220,94,156,221,85,201,26,115,33,90,170,161,181,22,90,107,161,165,26,90,171,141,91,138,27,91,106,161,181,22,218,91,66,123,75,104,111,13,237,173,161,189,37,180,181,132,150,90,104,169,
54,118,227,240,76,220,70,166,204,138,249,181,149,198,75,100,77,161,115,210,105,53,134,106,22,106,213,80,171,134,182,150,198,75,183,183,132,182,90,104,169,53,110,175,85,66,173,18,106,205,91,49,252,182,
139,45,170,85,71,78,158,139,103,183,134,110,25,139,103,118,139,206,115,66,109,254,92,138,77,168,14,111,69,121,251,44,223,10,0,184,32,157,105,177,170,70,94,153,210,152,82,10,41,63,243,3,111,185,229,150,
91,110,185,229,135,127,248,135,111,125,215,119,117,180,213,22,204,111,79,103,57,132,149,138,59,166,237,59,14,12,164,5,95,254,234,159,223,114,203,45,227,239,117,219,109,183,221,118,219,109,239,127,255,
251,239,189,247,222,63,251,218,31,221,120,221,242,44,171,180,215,138,51,171,98,177,56,64,138,19,15,172,22,231,150,85,134,231,66,20,185,182,88,69,171,60,176,30,194,200,122,5,205,127,134,148,202,211,191,
6,135,194,192,80,24,170,135,60,54,70,55,139,41,185,89,243,162,90,77,195,159,103,179,58,65,115,108,170,12,175,210,208,200,163,213,80,137,197,28,136,88,156,67,54,84,111,140,236,198,166,148,156,13,103,175,
52,188,140,87,113,183,161,225,53,22,82,211,212,136,49,67,200,205,239,161,204,121,103,220,162,209,159,222,217,230,200,179,124,212,132,239,240,236,159,191,121,57,182,114,43,242,137,6,197,141,176,2,192,183,
63,170,54,142,8,55,194,193,148,71,147,206,182,171,95,127,253,245,127,248,71,127,252,147,119,254,232,141,27,218,38,245,228,59,119,31,92,186,98,195,195,15,63,188,116,233,210,211,220,117,233,210,165,15,60,
240,192,253,107,214,60,240,217,79,188,253,186,21,181,74,214,214,210,88,67,160,145,225,70,207,88,45,15,145,87,98,168,86,134,71,70,43,161,18,83,165,136,170,195,83,8,26,41,39,164,44,107,172,237,149,101,41,
27,206,127,245,20,138,211,185,42,89,24,172,143,44,89,80,140,88,87,154,6,181,139,181,180,242,166,84,84,30,122,62,205,96,94,28,189,86,67,107,45,180,84,83,75,45,84,179,20,67,200,83,26,172,199,193,122,24,
170,199,226,165,27,119,142,41,27,78,222,197,75,20,47,61,152,199,98,157,132,114,117,133,188,105,29,177,81,241,116,220,196,131,145,97,212,120,202,45,58,253,47,196,233,183,116,194,251,55,255,146,165,209,
139,236,158,125,252,109,94,63,184,248,95,44,87,144,72,35,235,69,20,9,222,170,17,0,112,62,197,171,55,108,28,223,200,179,24,170,149,208,90,11,109,45,161,163,53,93,212,154,134,234,99,231,170,190,235,93,239,
122,242,201,39,203,127,222,127,255,253,255,254,223,255,251,242,159,157,29,181,213,151,117,205,187,168,229,198,119,188,247,129,7,30,40,111,191,251,238,187,127,251,183,127,187,248,251,175,255,250,175,127,
248,195,31,110,126,233,181,107,215,94,125,89,58,126,98,104,199,238,222,87,94,237,11,33,60,251,236,179,215,95,127,125,241,211,231,158,123,238,134,27,110,8,33,92,113,217,130,43,47,95,180,96,94,91,158,231,
79,127,99,231,166,45,47,172,89,179,166,124,146,111,124,227,27,191,242,43,191,242,212,83,79,133,16,30,124,240,193,59,238,184,163,249,37,110,191,253,246,157,219,255,122,229,178,174,60,100,71,142,199,99,
39,227,137,129,225,33,207,52,118,39,84,178,80,171,54,246,67,107,53,181,214,66,53,107,68,213,80,68,213,16,66,8,89,28,189,88,65,26,181,254,64,140,225,228,96,60,57,20,7,6,27,175,50,42,21,53,78,1,139,69,176,
27,170,55,70,52,243,179,30,116,204,134,103,21,183,84,67,107,45,181,213,82,140,141,183,51,188,0,66,28,24,10,131,245,152,82,241,162,169,86,9,181,202,216,171,125,13,165,56,56,20,6,235,113,112,104,100,85,
175,148,26,215,104,40,54,118,76,66,141,205,7,205,135,71,118,203,48,222,188,69,227,35,239,140,24,57,107,109,244,37,118,155,103,29,140,121,209,241,105,184,216,162,98,177,179,106,22,42,149,144,133,98,31,
134,60,52,178,251,192,80,24,172,55,50,107,243,203,1,0,231,84,117,226,246,31,27,35,109,67,245,48,56,24,78,86,98,123,75,229,198,235,86,220,184,97,89,158,242,84,207,143,246,31,207,199,61,240,250,107,22,175,
190,172,43,171,84,98,150,133,16,82,158,222,56,112,100,252,243,191,99,227,165,75,22,117,132,16,126,237,51,191,242,142,119,188,163,249,168,253,202,149,43,7,6,119,205,159,215,126,227,134,182,27,214,45,253,
198,63,188,58,230,177,75,22,182,223,242,29,151,85,42,213,24,99,10,105,231,171,61,191,242,31,62,213,156,83,31,125,244,209,123,126,230,199,87,175,236,122,239,247,93,61,52,88,255,228,127,252,240,19,79,60,
241,240,195,15,151,119,248,216,199,62,118,235,187,190,182,98,217,252,74,140,181,106,172,14,141,28,10,31,51,7,32,54,71,192,106,234,104,73,149,74,72,41,229,41,133,16,99,72,33,196,172,49,240,60,106,121,131,
3,7,143,118,239,238,217,243,250,225,16,194,149,151,47,186,241,186,21,197,188,216,90,101,120,4,55,132,74,150,170,149,198,248,107,8,33,15,161,94,15,245,122,24,204,227,152,171,27,52,39,176,9,243,86,25,85,
91,171,169,165,154,82,74,91,183,237,235,222,221,51,48,88,239,154,223,190,230,242,133,171,87,45,106,173,197,106,37,164,212,120,221,198,86,164,242,66,179,49,197,88,137,161,218,18,219,82,26,24,138,3,77,11,
208,54,143,242,54,15,163,150,127,86,26,195,201,169,90,9,149,202,216,45,26,74,177,57,225,141,15,154,205,255,60,205,102,142,127,212,152,171,242,142,189,48,111,12,163,150,75,43,191,60,140,78,177,229,253,
171,89,168,86,26,57,190,146,165,226,164,180,161,60,12,14,133,147,149,152,101,33,14,134,129,208,56,15,79,78,5,128,111,91,84,13,229,193,235,122,24,202,194,201,24,43,3,41,203,98,91,53,164,88,201,242,152,
42,33,100,149,241,143,138,49,203,42,149,44,171,52,34,92,150,199,9,179,70,140,49,198,148,82,71,123,109,239,222,189,19,254,52,134,24,178,52,209,196,131,152,101,89,28,94,6,235,149,87,15,253,224,15,254,96,
249,179,254,254,254,95,254,229,95,190,246,234,165,23,117,182,22,111,102,227,250,101,255,243,175,255,236,177,199,30,187,237,182,219,26,121,250,250,235,191,247,221,255,242,141,221,127,191,176,171,179,90,
73,149,44,86,178,137,70,218,154,46,214,85,12,48,87,178,180,249,185,189,229,184,242,154,85,11,111,188,110,121,10,49,132,180,247,245,67,221,187,123,246,191,217,31,66,88,179,170,235,228,64,253,203,95,253,
122,17,193,111,191,253,246,253,123,254,97,225,130,142,74,22,218,91,66,8,33,79,33,43,70,61,27,171,113,21,113,51,86,170,49,86,135,19,94,106,28,107,158,120,233,218,226,40,116,28,201,115,197,155,44,6,83,83,
202,119,236,238,233,237,61,212,217,217,217,221,221,253,29,111,223,112,197,101,11,43,89,168,12,79,192,76,41,109,126,126,79,247,174,177,139,57,172,185,124,209,219,175,91,17,99,108,173,165,150,106,24,170,
135,193,122,113,141,134,56,38,170,54,95,160,161,156,203,155,133,198,38,21,57,174,121,139,202,113,226,230,132,55,114,188,126,244,172,128,49,107,8,76,56,87,181,121,109,129,225,247,22,203,232,89,204,174,
30,153,138,48,252,211,70,72,29,183,83,99,22,139,171,78,212,42,197,189,135,55,36,134,90,22,91,90,99,165,18,178,216,120,254,144,194,96,42,86,65,19,88,1,224,219,21,85,139,249,139,41,20,139,62,197,98,129,
167,16,90,107,33,100,89,200,83,140,217,196,25,52,203,98,204,98,140,233,52,157,60,165,148,210,161,35,39,15,29,62,185,118,237,218,230,160,249,215,127,253,87,239,121,247,218,242,200,249,132,143,46,111,31,
24,28,90,122,233,170,230,33,213,103,159,125,246,232,161,215,46,90,179,178,136,203,49,165,84,9,75,23,117,254,237,223,254,109,25,85,67,8,183,222,122,235,111,220,247,228,194,5,29,213,56,50,189,50,198,177,
243,40,139,179,202,178,198,17,243,116,114,96,168,218,182,56,165,131,229,219,216,120,237,165,197,97,226,238,93,61,143,63,245,141,98,162,194,67,15,61,244,83,63,245,129,98,162,66,127,127,255,31,127,245,209,
247,188,251,154,148,134,79,221,10,33,22,235,70,165,52,56,84,223,250,226,190,98,37,175,53,171,186,54,92,115,105,173,86,141,49,84,43,161,118,154,79,44,142,189,122,237,72,126,77,33,229,169,183,239,248,15,
253,208,251,58,59,59,67,8,155,54,109,90,178,168,51,132,20,134,63,177,148,194,27,7,142,252,243,127,113,123,243,172,140,194,253,247,223,255,71,127,240,235,107,86,45,42,118,127,113,41,221,216,56,59,174,145,
86,27,115,58,227,4,31,109,158,242,193,193,9,183,168,241,125,96,244,162,174,19,103,211,9,127,21,195,169,243,122,99,127,164,144,226,200,148,137,44,166,108,204,72,106,76,35,15,74,227,119,93,10,195,115,38,
82,202,95,120,241,141,29,187,123,6,7,235,181,90,229,202,85,11,175,189,230,210,182,106,177,129,49,47,79,56,147,83,1,224,188,56,229,98,85,105,248,148,240,193,161,112,114,48,28,31,8,199,7,226,80,189,8,138,
241,212,171,59,53,114,223,105,242,199,223,61,179,239,79,159,236,222,215,215,249,133,135,255,164,156,135,26,66,248,210,151,190,180,230,178,5,49,52,6,85,79,157,97,138,12,25,122,15,157,120,247,187,223,221,
252,131,109,219,182,45,152,215,22,99,22,98,150,13,231,230,165,139,59,31,121,228,145,230,187,173,92,185,178,255,216,96,8,33,102,33,134,20,79,189,14,81,243,193,238,150,90,182,115,231,142,254,254,254,226,
71,239,122,215,187,142,244,159,204,243,252,165,238,3,239,251,209,255,163,216,144,238,238,238,159,255,240,221,171,87,206,239,234,154,31,99,236,234,154,191,122,85,87,227,66,6,41,79,121,158,242,60,165,60,
164,122,74,245,29,175,188,249,139,31,255,207,197,138,90,191,248,241,255,188,99,215,193,144,242,148,215,83,158,231,249,240,93,71,255,47,149,71,238,211,240,63,242,60,229,141,123,166,60,15,33,63,122,236,
228,85,87,93,85,188,201,195,135,15,215,106,217,168,104,150,210,210,197,157,95,255,211,47,198,24,187,187,187,139,219,110,191,253,246,24,227,111,255,95,159,92,125,89,215,240,115,214,135,159,57,79,41,101,
49,175,100,169,90,73,149,44,101,33,207,27,239,99,228,77,165,60,15,41,237,120,229,224,68,91,84,60,91,125,244,95,70,254,55,110,75,155,127,214,252,240,145,199,142,236,161,226,29,134,20,83,94,137,169,248,
95,76,41,79,163,159,63,79,169,124,208,184,13,44,118,93,241,103,202,27,99,210,41,165,222,222,67,59,118,247,20,235,161,181,213,66,107,181,177,130,85,37,243,223,13,0,56,79,78,57,1,160,24,79,203,243,48,20,
66,168,135,108,48,84,179,48,48,20,170,149,105,189,222,3,15,60,48,126,60,47,132,240,220,115,207,125,236,35,31,122,199,77,151,133,152,53,38,130,158,78,106,250,115,196,161,67,135,106,181,74,35,119,22,147,
12,66,108,105,169,190,244,210,139,205,119,187,248,226,139,139,107,4,196,209,171,190,143,27,87,29,57,133,168,208,217,94,123,227,141,55,138,113,220,165,75,151,190,190,243,91,121,91,101,231,238,190,39,63,
254,241,226,14,247,223,127,255,21,43,231,31,58,124,162,120,254,149,151,94,188,254,170,197,91,182,190,182,115,119,95,8,97,193,188,182,53,171,22,116,239,238,235,59,124,98,245,101,11,118,190,218,183,110,
221,186,226,129,79,60,241,196,11,219,247,31,59,62,208,53,191,189,123,119,111,223,161,19,161,152,99,176,97,217,129,131,253,229,204,215,53,171,22,222,184,97,249,43,187,123,187,119,247,244,30,58,94,190,207,
53,171,186,214,94,185,184,189,173,150,82,222,123,232,248,117,215,93,87,62,237,210,69,157,227,119,222,13,235,47,125,245,245,67,151,92,114,73,8,161,191,191,255,171,95,253,242,15,222,182,54,198,108,203,214,
215,138,49,209,21,151,206,107,105,169,236,108,140,143,46,188,113,195,178,114,84,178,255,216,192,75,221,111,150,151,117,104,169,85,214,172,90,184,120,81,199,222,125,135,118,238,62,197,22,237,234,237,59,
124,34,132,176,122,85,215,192,64,125,239,190,195,107,86,117,45,152,223,222,189,187,103,204,150,238,216,221,179,183,177,165,93,215,174,189,228,133,237,111,20,47,180,122,213,130,254,254,193,253,7,27,83,
44,174,94,179,184,239,240,241,238,93,189,229,45,107,175,92,210,209,222,24,140,222,255,102,127,247,238,158,189,251,14,23,255,92,125,89,215,154,203,187,22,204,107,15,33,156,118,3,67,223,161,227,59,118,247,
148,99,210,207,62,251,236,224,96,253,171,127,246,194,154,203,23,221,116,253,138,106,165,113,157,179,198,215,177,20,140,171,2,192,185,118,186,81,213,226,90,71,249,240,194,156,131,245,48,88,15,245,124,230,
223,196,67,15,61,116,235,63,125,199,234,85,11,90,106,213,24,103,209,58,235,77,7,121,83,8,169,179,163,182,111,223,190,226,223,87,93,117,85,255,177,147,223,218,121,240,222,79,254,106,177,78,214,99,143,61,
246,255,252,201,31,30,61,54,240,153,251,63,95,140,44,254,163,239,254,103,61,125,199,106,109,75,139,127,110,218,242,194,15,252,171,187,54,109,121,33,165,244,75,255,225,215,82,74,229,41,101,15,63,252,112,
74,233,51,191,246,187,221,187,122,55,109,126,161,184,255,119,222,242,125,61,125,253,59,118,29,124,228,43,95,47,110,169,182,45,62,218,127,98,254,146,181,255,176,121,107,243,101,14,126,245,215,126,231,127,
110,122,117,231,238,158,60,207,15,28,236,191,233,166,155,134,51,232,163,93,243,219,154,227,118,49,119,160,239,240,241,31,250,161,31,41,3,217,146,133,29,33,133,129,129,161,106,219,146,225,235,50,124,253,
151,134,199,71,255,237,191,251,224,230,173,123,143,30,59,145,82,125,235,139,111,12,100,151,149,67,167,41,165,158,222,67,63,255,177,79,223,112,243,191,88,253,182,183,159,114,139,182,52,182,232,251,223,
243,99,95,254,234,215,139,55,220,189,171,103,252,150,126,121,100,75,151,116,55,141,209,126,230,215,126,247,241,167,190,81,110,236,139,223,58,112,211,119,189,119,212,45,59,246,231,121,125,96,96,104,243,
214,189,215,223,252,3,197,171,52,46,24,241,249,135,95,221,95,237,222,117,240,196,137,129,211,109,96,255,137,29,187,122,62,247,249,47,149,39,225,221,114,203,45,141,55,211,186,104,96,160,30,194,4,87,44,
3,0,190,61,81,53,12,159,179,146,151,255,27,94,38,115,198,125,241,139,95,92,113,233,69,203,47,185,248,172,31,17,155,254,28,49,127,254,252,193,193,250,240,169,237,141,51,112,6,6,134,174,190,250,234,230,
187,29,57,114,164,214,56,131,102,212,105,58,105,162,61,48,124,50,80,12,33,54,159,7,118,249,229,151,247,31,27,220,185,231,208,251,223,255,254,226,150,251,238,187,239,138,149,243,222,236,57,214,148,20,191,
124,236,216,192,191,249,55,255,166,184,195,154,53,107,238,189,247,222,53,107,214,244,247,247,255,212,79,253,159,183,223,126,123,113,251,55,190,241,141,226,92,178,143,126,248,174,114,246,109,17,52,231,
93,212,178,255,224,177,98,230,107,119,119,247,254,125,187,247,188,126,232,199,126,236,199,54,109,218,244,189,223,251,189,49,198,181,107,215,118,119,119,191,239,125,239,219,180,229,133,157,175,246,14,14,
212,151,94,122,121,241,12,207,62,251,236,210,69,29,205,203,140,150,11,106,237,127,179,255,214,91,111,45,254,94,204,154,72,33,237,63,216,95,190,213,139,46,186,232,139,95,252,226,218,181,107,251,251,251,
239,189,247,222,207,252,218,239,190,180,227,205,35,253,39,87,92,113,253,215,190,246,181,59,238,184,227,161,135,30,106,188,231,143,126,244,230,155,111,94,184,112,225,206,151,54,157,126,139,66,8,15,60,240,
64,145,101,255,248,143,255,248,76,91,186,171,247,240,241,114,140,246,213,87,95,189,245,159,190,227,209,71,31,13,33,188,239,125,239,251,220,131,95,10,33,220,250,79,191,235,177,199,30,43,110,249,254,247,
252,219,55,14,28,221,186,253,141,95,250,248,175,61,240,192,3,23,93,116,209,218,181,107,215,174,93,187,127,255,254,219,110,187,237,235,95,255,122,255,224,188,253,111,30,61,221,6,118,31,188,98,229,188,159,
248,119,63,252,141,111,124,163,184,79,49,47,34,198,56,116,242,96,75,75,181,172,8,131,169,0,48,43,162,106,115,96,77,195,87,238,153,102,159,190,251,238,187,99,140,247,223,127,127,243,141,159,255,252,231,
119,190,122,248,216,177,193,225,243,175,27,49,242,84,239,168,248,81,215,252,182,199,31,127,188,249,7,235,214,173,235,59,124,34,165,60,12,79,64,76,41,223,255,230,72,2,43,236,217,179,167,179,163,22,66,72,
121,72,33,54,47,117,52,230,53,198,44,132,212,82,171,28,62,220,56,172,60,111,222,188,129,193,161,223,252,173,207,21,67,170,15,61,244,80,247,75,155,58,218,91,154,147,226,146,133,29,253,199,6,47,191,252,
242,226,33,101,188,235,234,154,119,197,202,249,55,223,124,115,25,22,215,95,181,232,189,239,190,106,217,37,23,149,179,111,159,125,246,217,37,11,219,123,15,141,156,35,181,111,223,190,142,246,234,21,43,231,
255,198,103,62,246,75,31,253,201,157,47,109,10,33,188,244,210,75,79,63,253,116,145,131,127,230,103,63,178,255,224,209,242,25,134,103,238,142,158,135,155,82,10,169,239,208,137,50,5,238,218,181,171,179,
189,22,66,232,59,124,162,156,57,240,149,175,124,229,208,129,23,78,246,239,251,155,191,249,155,70,22,252,151,255,246,149,221,189,63,249,147,63,89,188,153,47,126,241,139,235,223,182,232,230,235,151,253,
175,191,249,111,183,190,235,187,254,252,107,15,206,187,184,245,244,91,244,220,115,207,197,97,127,255,55,95,63,195,150,182,85,15,52,37,215,123,255,227,47,46,94,216,94,238,252,61,123,246,60,253,216,151,
150,44,108,223,179,103,79,113,203,194,133,11,251,143,157,188,251,158,95,41,150,209,253,185,159,251,185,151,94,122,233,165,151,94,250,211,63,253,211,98,231,124,228,35,31,233,61,124,252,244,27,120,114,112,
168,239,240,201,183,189,237,109,97,100,94,196,53,63,244,253,215,190,253,186,21,33,132,122,30,243,198,41,113,2,43,0,156,39,213,243,255,146,239,216,120,201,152,21,85,215,172,89,243,249,135,254,240,163,31,
190,107,227,134,229,89,150,23,235,0,157,234,242,170,41,165,34,122,181,212,170,251,247,117,119,119,119,151,131,118,55,220,112,195,69,243,151,31,237,63,121,81,103,107,227,98,82,245,124,255,193,254,239,254,
238,239,110,126,134,39,158,120,98,233,226,139,66,140,67,249,232,107,102,78,148,209,67,8,41,196,60,165,44,132,206,142,150,93,187,118,149,81,181,210,118,233,143,254,232,143,134,16,246,239,223,127,223,125,
247,173,127,219,226,254,227,131,111,127,251,119,22,119,216,187,119,111,71,91,181,239,240,72,40,188,239,190,251,190,255,159,92,89,107,169,132,16,190,249,210,129,203,46,187,172,184,125,203,150,45,11,230,
181,133,16,250,14,159,188,241,198,27,71,130,230,197,173,111,30,60,246,191,223,117,107,243,45,47,188,116,160,165,227,146,143,254,210,71,66,8,99,174,110,240,242,203,47,247,31,31,44,159,97,215,174,93,157,
29,45,161,49,37,183,105,2,64,74,251,123,26,41,48,132,240,200,35,143,188,109,69,71,8,161,156,57,80,220,184,102,89,251,183,94,233,43,207,208,122,252,241,199,7,135,234,243,230,205,43,191,93,60,253,244,211,
187,118,237,250,213,95,253,212,234,149,11,150,47,189,232,133,151,207,176,69,95,249,202,87,110,190,126,217,242,75,47,14,33,188,188,179,231,244,91,58,255,226,214,239,121,215,123,138,228,250,242,203,47,207,
191,184,165,239,240,201,230,137,176,139,23,182,125,107,215,200,212,216,151,95,126,249,149,61,135,203,149,203,154,47,78,81,238,141,3,7,143,159,126,3,215,44,107,93,121,217,234,226,187,199,142,29,59,22,92,
220,22,99,99,242,68,158,194,80,211,229,12,0,128,243,227,219,113,50,115,204,86,95,182,224,199,127,252,199,247,239,223,95,222,246,190,247,189,239,253,63,254,161,23,182,191,145,55,157,226,61,225,49,249,226,
92,237,16,66,136,225,138,203,230,255,201,159,252,73,249,179,206,206,206,79,126,242,147,47,188,180,127,255,129,163,245,250,208,192,137,129,103,190,249,250,119,189,243,251,155,87,170,122,238,185,231,158,
124,252,107,93,11,218,99,136,67,245,145,245,246,39,202,196,195,179,117,83,72,121,8,33,118,118,212,94,126,249,229,226,167,203,150,45,251,200,71,62,82,100,169,47,124,225,11,181,208,83,107,169,28,232,57,
86,30,88,127,254,249,231,231,207,107,61,208,115,188,249,160,118,75,107,181,88,204,235,192,240,60,129,34,36,45,184,184,8,118,39,198,164,177,49,183,28,59,49,248,51,63,247,241,237,219,183,223,113,199,29,
235,214,173,187,255,254,251,203,19,249,251,251,251,191,250,149,47,55,231,185,71,30,121,100,233,226,206,16,154,151,194,79,33,229,3,3,67,171,87,95,89,188,243,226,93,213,170,89,243,204,129,238,238,238,55,
94,223,21,66,184,100,217,200,45,251,247,237,186,98,229,252,251,238,187,175,248,212,214,172,89,115,199,29,119,220,123,239,189,189,189,135,223,253,253,183,239,218,219,119,160,231,248,233,183,232,145,71,
30,89,178,168,163,24,85,61,227,150,134,144,202,61,185,103,207,158,206,246,218,177,227,67,151,94,122,105,185,165,243,47,110,61,112,240,120,185,40,216,87,191,242,229,242,221,62,246,216,99,113,156,63,252,
253,223,108,222,156,241,27,248,198,235,187,14,244,28,43,7,224,183,111,223,190,96,254,240,152,116,140,245,60,54,95,72,204,74,85,0,48,203,162,234,200,37,130,78,179,146,84,28,251,207,137,238,149,101,217,
146,69,23,213,66,207,152,165,0,62,250,209,143,174,92,189,113,239,235,135,122,15,29,219,178,245,245,255,254,23,47,29,232,57,62,230,177,7,122,142,255,247,191,120,105,243,214,215,250,14,159,136,33,174,190,
108,225,39,254,211,47,149,139,46,21,145,247,209,63,254,139,214,249,87,255,247,191,120,233,127,60,189,227,151,255,227,253,205,151,170,10,33,124,250,211,159,94,179,170,43,134,172,158,98,113,249,208,124,
162,129,213,52,60,125,181,88,180,43,15,49,196,208,217,209,178,121,243,230,226,14,87,94,121,101,49,168,249,220,115,207,253,234,167,126,229,170,213,139,98,140,99,146,98,103,123,245,135,126,248,71,202,131,
218,157,237,45,49,102,89,22,135,134,242,230,92,184,127,223,174,90,75,37,196,120,96,120,176,115,36,141,245,140,74,99,107,174,254,142,226,82,180,207,61,247,220,15,190,231,214,255,251,243,159,190,250,234,
171,203,249,6,139,23,182,191,57,42,25,239,110,169,85,139,213,16,66,177,154,109,8,33,132,55,154,102,68,108,218,180,105,201,194,142,226,165,71,221,184,168,253,216,241,161,183,191,253,237,197,45,251,246,
237,235,104,175,205,191,184,237,141,61,207,175,185,98,229,221,119,223,253,208,67,15,21,187,189,179,179,243,195,31,254,240,43,123,14,95,50,102,139,106,89,8,161,121,139,118,238,220,209,218,90,43,150,17,
27,179,93,227,183,180,239,200,64,115,114,93,178,168,189,140,149,207,62,251,236,146,69,29,135,142,12,148,251,182,216,246,149,43,87,22,247,191,248,226,139,151,95,114,209,123,223,253,182,247,126,223,213,
63,120,219,218,31,188,109,237,123,191,239,234,37,11,219,79,191,129,157,29,181,67,71,78,150,51,4,158,127,254,249,5,243,218,202,121,190,67,245,48,225,85,196,0,128,217,17,85,71,159,83,50,241,42,164,19,252,
100,162,37,223,99,150,101,217,213,107,22,127,225,247,127,179,56,81,166,208,217,217,249,27,191,241,27,59,95,237,219,185,187,247,115,15,126,169,56,249,186,121,225,213,235,175,191,190,184,241,115,159,255,
82,113,213,168,44,203,214,172,90,112,215,93,119,53,15,208,222,114,203,45,79,62,249,100,113,207,49,135,200,239,191,255,254,191,255,219,63,95,185,108,65,140,113,96,40,14,213,99,17,65,242,83,94,172,160,49,
170,90,207,67,8,177,165,86,45,151,86,45,66,82,145,125,87,175,90,80,12,221,149,201,172,136,107,111,246,156,24,117,246,210,252,182,152,197,24,179,190,35,39,203,153,154,141,176,24,194,177,227,67,239,124,
231,63,41,158,118,199,142,29,11,230,181,190,217,119,188,57,141,45,89,216,254,3,63,240,3,197,163,94,127,253,245,142,246,218,80,61,149,241,107,219,182,109,11,230,181,150,247,223,180,105,211,210,197,157,
141,43,127,53,109,79,10,169,121,78,234,225,195,135,139,51,204,250,70,167,180,174,121,109,111,246,30,31,115,234,213,183,94,233,235,59,124,226,134,245,151,108,249,187,63,185,255,87,63,122,221,134,107,154,
119,251,216,45,138,177,239,200,201,230,117,6,150,46,234,136,49,203,98,118,236,248,208,59,223,249,191,157,126,75,71,141,161,126,245,203,199,142,15,141,217,210,227,39,134,202,99,247,219,182,109,235,154,
215,182,103,207,158,226,163,41,230,129,188,217,115,34,198,248,173,87,122,31,255,235,238,111,189,210,219,119,248,140,27,216,122,232,240,64,121,77,138,71,30,121,100,233,162,145,49,233,242,20,67,103,86,1,
192,108,140,170,69,123,46,134,24,227,41,134,75,203,115,205,27,87,9,136,241,84,23,86,205,178,74,204,178,171,175,92,252,203,191,252,203,205,113,231,250,235,175,255,244,125,191,121,214,111,62,134,16,87,175,
90,180,127,239,214,119,190,243,157,229,137,219,19,218,191,127,255,221,119,223,253,192,103,63,113,227,117,203,67,204,6,235,241,196,64,40,174,116,63,225,229,233,67,211,233,255,197,97,223,34,246,21,75,171,
150,247,121,236,177,199,254,238,111,254,124,229,178,249,49,203,14,29,62,57,234,50,81,11,59,250,142,140,154,94,121,201,226,139,139,117,90,91,106,213,131,7,27,87,189,90,187,118,237,203,175,244,254,217,211,
59,118,237,61,84,158,36,116,233,165,151,30,232,57,126,240,200,197,63,243,51,63,211,156,116,203,241,227,171,174,186,234,181,253,71,175,191,233,221,119,223,125,119,113,203,150,45,91,58,59,90,154,23,255,
111,169,85,154,22,169,74,33,164,173,219,223,248,211,199,183,191,188,179,167,60,82,255,196,19,79,28,59,62,116,248,232,192,177,227,131,43,86,172,40,83,218,146,69,157,125,135,71,141,107,198,24,127,238,163,
159,254,242,87,255,252,198,119,188,247,27,155,246,126,243,91,7,127,252,39,254,207,98,90,231,31,252,193,31,92,177,114,193,248,45,122,253,141,163,163,147,122,123,241,251,208,210,82,61,227,150,142,26,67,
93,216,113,232,200,64,25,52,139,57,184,125,77,183,108,217,178,101,193,252,182,48,248,230,151,190,244,165,226,91,196,239,255,254,239,255,237,166,61,127,242,216,246,127,245,35,31,232,222,185,231,231,62,
242,233,99,199,135,78,191,129,75,22,117,214,106,149,163,71,143,150,201,251,127,60,245,242,150,173,175,15,14,229,97,120,213,182,16,132,84,0,152,157,81,181,184,212,106,30,234,121,113,146,206,132,87,200,
140,229,213,170,66,121,241,170,241,47,25,179,226,82,173,23,117,182,181,196,190,159,253,217,159,109,254,233,29,119,220,241,3,239,125,255,217,37,213,24,179,24,98,182,246,202,37,75,23,156,252,145,31,250,
103,197,129,233,242,130,82,101,154,124,232,161,135,214,92,177,242,175,158,120,244,237,215,45,143,49,203,243,120,124,48,14,12,197,129,161,211,157,86,85,108,117,177,201,245,122,168,215,67,8,177,179,163,
165,92,90,181,191,191,255,67,31,250,208,149,151,119,197,152,197,144,245,31,31,26,149,20,91,170,135,70,157,78,254,104,215,130,246,226,2,7,93,243,59,254,191,111,60,246,208,67,15,133,225,161,226,222,222,
67,161,186,104,240,196,254,143,127,252,227,33,132,165,75,151,166,148,126,243,55,127,243,200,145,35,101,150,90,186,232,162,63,251,218,31,21,143,90,179,102,77,111,239,225,91,111,189,245,91,223,250,86,113,
135,199,31,127,188,57,207,149,167,142,21,103,84,165,16,6,6,234,121,182,160,184,14,83,121,34,218,195,15,63,252,185,7,191,180,243,213,190,114,161,168,242,72,253,168,217,8,95,125,180,165,86,61,116,232,208,
182,109,219,62,243,153,207,20,35,214,15,60,240,192,163,143,62,122,251,237,183,127,225,15,126,107,245,170,174,191,255,219,63,31,187,69,181,197,229,65,249,39,158,120,226,146,198,251,201,90,106,213,161,19,
7,78,179,165,157,29,173,205,99,168,93,243,219,155,39,194,62,242,200,35,151,44,190,232,192,193,81,147,125,23,46,232,88,123,229,226,79,221,251,243,31,255,248,199,159,123,238,185,114,73,212,123,239,189,119,
203,150,45,95,252,226,23,247,247,156,97,3,23,46,232,88,115,121,215,111,253,214,111,21,223,7,30,120,224,129,148,210,47,126,252,190,238,93,61,229,122,109,105,100,26,140,255,116,0,192,249,16,175,222,176,
241,204,121,54,134,106,37,180,84,67,91,75,232,104,73,23,181,165,74,37,109,121,126,111,113,20,190,176,102,85,215,141,215,173,200,98,86,79,49,165,24,99,170,196,148,167,241,119,91,120,227,117,43,26,163,173,
41,165,148,151,23,16,42,173,94,181,32,165,240,202,171,125,167,122,63,171,87,117,173,185,124,81,215,252,142,242,90,240,197,53,69,247,29,56,122,224,96,255,206,87,251,138,139,69,21,174,88,185,160,179,163,
182,230,242,69,45,181,74,136,89,189,30,143,13,198,147,131,241,248,201,48,48,20,6,155,230,170,142,75,194,161,146,133,90,53,180,86,67,71,107,232,104,77,29,173,105,255,129,35,59,118,29,44,174,132,84,171,
85,214,172,234,218,176,246,210,98,115,82,8,229,198,174,89,213,117,237,53,151,188,178,187,183,123,119,111,255,177,129,226,146,78,215,94,115,105,185,225,3,131,245,173,47,190,62,230,154,79,215,174,93,218,
188,55,174,184,108,65,8,141,253,176,102,85,215,198,107,151,13,14,229,229,5,156,106,181,202,154,203,186,142,30,27,40,222,76,113,13,167,242,58,82,197,126,206,202,177,237,148,82,8,207,111,123,189,123,215,
193,129,166,157,211,216,153,171,22,238,125,253,112,247,238,158,129,242,194,247,107,151,190,176,125,255,152,91,118,238,238,61,118,124,176,184,177,252,208,175,184,172,171,107,126,123,8,97,112,168,190,245,
197,55,202,55,95,236,156,129,129,250,206,87,123,199,126,238,33,165,60,109,217,250,90,249,139,49,126,75,159,121,225,245,225,13,233,186,246,154,75,138,183,215,124,105,171,87,94,45,46,217,53,114,75,241,84,
123,94,63,180,115,119,227,42,86,99,54,112,199,238,158,193,211,110,96,8,225,149,87,123,119,12,191,80,8,97,205,229,139,174,95,119,105,138,213,254,19,241,216,201,80,140,196,55,190,176,1,0,179,39,170,102,
195,161,173,189,53,180,183,164,246,150,84,137,197,137,58,195,17,47,102,49,198,193,122,227,180,250,44,134,90,53,181,84,26,151,172,31,190,91,35,57,141,68,150,20,82,202,71,78,98,26,53,10,91,156,7,52,146,
33,139,161,218,216,120,146,44,198,88,68,204,24,67,22,26,151,38,106,76,85,72,35,207,86,172,55,20,98,76,33,14,12,197,147,3,225,228,80,60,57,24,6,134,194,224,80,227,232,255,132,115,85,99,28,201,232,173,181,
208,222,146,58,218,82,107,181,249,13,15,111,78,249,142,135,223,243,4,79,22,135,135,154,135,183,44,149,99,185,163,78,83,43,223,124,104,222,238,230,159,55,255,127,161,249,103,177,249,229,66,12,113,40,197,
122,61,166,16,170,89,168,86,82,99,39,133,52,106,167,142,121,245,177,3,225,99,39,39,167,81,175,62,242,224,52,242,230,195,184,247,211,216,83,97,212,231,158,154,62,247,83,109,200,4,31,203,41,111,138,229,
206,75,163,127,22,79,185,199,198,221,52,178,21,141,223,157,152,167,120,124,32,28,63,25,143,15,132,147,131,97,176,30,234,117,235,85,1,192,121,114,86,235,170,150,179,84,135,234,97,96,48,196,24,83,10,109,
45,161,154,141,196,180,161,161,48,80,143,131,67,97,40,111,196,199,193,161,48,88,141,181,74,168,86,70,238,150,82,168,231,177,56,167,62,134,80,201,66,22,179,152,141,78,57,113,84,106,138,77,255,40,242,67,
158,135,193,226,140,168,20,243,188,145,41,43,89,172,101,169,82,9,89,72,41,142,74,183,245,60,12,14,197,193,161,80,28,244,47,66,234,105,102,169,150,111,53,13,47,168,25,135,66,150,197,112,34,228,45,161,165,
146,101,89,99,94,110,10,33,79,113,56,183,134,44,198,44,142,79,123,33,165,198,91,77,41,164,145,13,15,49,139,227,67,93,138,167,13,104,113,226,55,220,252,160,60,53,246,207,208,240,133,112,179,44,212,178,
80,173,198,106,86,78,223,72,97,130,165,28,226,25,163,97,12,33,53,133,195,16,67,74,49,133,144,197,20,210,4,111,190,184,161,158,98,94,47,247,118,28,179,249,103,136,162,103,254,194,21,27,1,181,248,210,18,
227,68,207,121,218,39,46,127,185,82,26,249,8,82,24,172,199,129,161,112,114,48,14,148,139,69,24,79,5,128,217,22,85,135,35,230,200,197,228,243,60,14,229,49,139,169,146,133,24,67,61,15,121,61,12,229,177,
60,158,30,139,236,88,15,149,44,84,42,33,139,33,198,70,167,79,33,214,243,34,40,197,44,107,196,187,74,54,246,20,172,241,103,100,21,195,112,197,197,93,235,41,214,243,48,84,31,30,85,141,177,146,133,74,37,
86,98,202,178,88,188,92,17,140,234,121,72,41,14,214,67,17,221,138,48,93,111,202,169,167,153,119,152,66,200,243,80,15,33,134,112,114,48,228,121,172,231,225,100,22,98,145,180,66,200,139,108,211,244,158,
179,209,87,138,47,158,33,79,197,117,4,138,205,15,49,196,74,22,98,8,89,22,178,108,100,175,54,134,243,38,218,240,225,128,152,138,124,124,234,251,12,79,41,78,177,94,31,57,84,157,101,161,154,197,202,80,99,
156,56,27,157,81,203,199,198,137,246,192,152,127,54,15,81,166,60,164,216,216,3,49,198,152,82,108,222,156,225,220,156,242,80,79,177,60,51,169,248,106,81,110,254,152,188,154,210,4,227,186,241,20,159,78,
8,33,207,67,136,177,28,230,44,166,59,20,251,191,249,11,210,132,57,56,141,252,37,142,121,177,198,226,15,245,48,152,23,95,114,194,80,30,234,105,130,125,2,0,124,155,163,106,49,94,149,82,168,167,16,134,66,
74,97,40,15,131,67,161,8,133,97,248,154,171,67,245,198,186,78,169,17,85,195,224,80,168,100,177,140,35,69,110,43,207,172,111,68,150,24,202,112,57,225,104,88,115,178,40,162,103,113,74,126,243,34,151,197,
48,103,37,107,100,214,242,80,115,57,15,181,120,111,99,86,199,76,103,113,126,76,106,172,84,213,120,243,67,245,198,32,113,17,133,67,211,69,173,138,87,204,178,70,64,138,229,34,71,227,150,58,26,222,240,152,
13,7,214,51,239,255,34,195,13,135,175,9,87,86,40,239,86,108,96,243,98,245,195,3,207,33,203,134,247,207,152,172,150,206,240,234,227,95,183,121,211,66,185,228,67,83,82,47,163,100,185,225,249,184,205,207,
226,196,177,251,108,127,45,195,200,135,56,225,219,56,227,115,142,156,41,213,248,141,139,205,33,187,248,77,43,126,109,134,242,198,111,47,0,48,187,162,106,217,212,243,60,164,24,242,20,42,121,24,106,202,
25,229,250,163,169,49,130,24,98,8,67,177,49,102,214,124,183,70,94,9,141,225,171,24,26,63,141,241,148,9,108,204,123,24,243,90,101,132,106,140,210,197,177,25,165,24,200,44,2,83,99,92,115,248,160,255,217,
228,212,34,115,213,135,159,36,203,194,96,189,49,98,215,28,149,226,240,49,230,241,27,210,28,139,79,181,225,51,168,121,39,167,188,76,96,141,145,224,108,244,174,158,102,240,26,181,212,238,232,116,88,238,
159,208,180,236,87,243,230,199,56,113,78,157,218,123,24,245,5,103,242,79,59,97,28,111,252,230,12,7,214,179,255,122,3,0,156,239,168,90,14,172,198,212,72,171,49,31,125,14,212,132,161,33,31,59,86,154,70,
141,17,142,164,204,24,207,106,146,98,26,55,152,215,60,162,89,190,220,152,164,152,55,221,249,44,67,234,4,105,181,30,242,56,118,139,154,159,45,54,205,136,28,63,158,151,198,141,191,142,127,171,163,118,93,
211,243,151,207,115,54,9,108,252,203,141,249,44,226,132,167,105,77,50,198,53,191,208,152,247,220,252,252,229,254,57,205,231,30,194,200,16,236,20,114,234,152,173,136,19,189,213,179,220,186,83,254,190,165,
169,252,230,0,0,231,47,170,142,52,233,216,56,161,255,140,243,26,139,155,78,51,203,176,249,167,103,63,12,54,38,33,141,156,67,63,209,19,142,137,50,83,203,25,105,120,10,233,169,54,252,108,159,231,212,187,
165,249,221,158,229,1,241,24,207,112,159,116,234,207,226,140,143,157,166,83,29,121,79,19,109,254,185,123,51,227,231,170,78,231,83,19,82,1,96,86,71,213,49,13,251,44,27,119,58,235,244,54,29,19,188,171,153,
14,22,147,221,240,201,237,150,116,214,187,108,26,27,120,238,118,206,100,223,91,154,222,134,204,212,219,0,0,102,185,204,46,0,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,224,84,170,118,
1,0,76,104,251,61,207,216,9,48,101,107,63,187,113,250,79,18,175,222,176,209,174,4,205,15,222,82,205,79,157,194,92,169,217,153,140,170,10,27,13,79,141,192,92,175,223,230,58,221,242,90,231,39,158,90,190,
163,167,61,203,178,56,204,206,135,51,186,114,225,241,143,125,207,238,141,203,142,78,191,102,103,38,170,106,192,104,120,154,31,204,161,230,119,198,82,221,252,90,199,39,159,90,177,163,167,61,198,88,169,
84,42,149,74,81,176,33,4,5,11,103,95,179,191,112,75,247,245,151,28,158,78,193,78,55,170,54,55,224,77,123,218,239,125,114,153,6,204,236,247,182,69,39,126,241,159,188,122,227,178,254,243,19,88,53,63,152,
109,205,239,52,165,186,249,181,142,79,60,177,124,71,111,123,150,101,213,97,101,193,170,86,56,75,41,165,226,207,43,230,31,189,231,230,237,215,45,61,52,181,130,157,86,84,45,27,112,17,82,187,123,59,42,195,
52,96,102,127,9,173,233,58,246,145,239,222,121,195,165,71,206,105,90,213,252,96,22,54,191,83,149,234,150,215,58,139,49,151,90,173,86,173,86,107,181,90,241,151,106,181,154,101,153,106,133,201,86,107,158,
231,41,165,149,157,125,31,186,105,219,134,37,125,83,40,216,169,71,213,162,170,55,237,105,255,79,79,92,218,221,219,81,109,162,1,51,135,74,104,213,197,135,63,252,143,94,46,70,104,206,209,193,68,205,15,102,
91,243,59,85,169,22,147,115,106,181,90,75,75,75,75,75,75,89,173,205,67,48,192,164,106,54,207,243,60,207,87,116,244,254,244,198,231,55,44,158,116,193,78,49,170,150,57,181,24,76,173,53,209,128,153,91,13,
47,207,243,162,225,205,224,240,140,230,7,179,188,249,77,88,173,255,250,11,87,237,232,105,47,234,180,181,181,181,168,214,230,82,53,177,13,38,91,170,133,162,96,151,183,247,60,240,174,191,154,108,181,86,
167,92,210,69,78,221,217,215,217,218,218,162,1,51,167,27,222,27,3,75,254,203,179,213,15,110,220,186,97,73,223,246,123,158,153,217,177,213,34,167,106,126,112,46,154,223,190,147,139,63,247,220,13,69,243,
155,102,78,221,252,90,71,249,149,178,181,181,181,172,214,44,203,42,149,138,41,109,48,229,130,45,254,172,215,235,251,78,46,254,230,193,133,235,23,245,76,170,213,86,167,86,210,69,78,125,229,208,69,45,45,
181,230,146,214,128,153,139,13,175,82,169,236,59,185,248,115,207,223,240,83,215,63,119,237,226,222,25,73,171,154,31,204,230,230,55,222,167,158,94,89,173,86,203,82,109,109,109,45,74,181,236,104,118,59,
76,65,89,59,69,215,123,112,219,77,247,255,227,199,39,245,12,147,139,170,227,114,234,72,247,213,128,153,211,13,47,203,178,125,39,23,255,206,243,27,63,112,221,51,51,149,86,53,63,152,181,205,111,76,95,219,
242,90,231,206,190,206,150,150,198,44,157,162,163,57,66,8,51,88,179,133,215,142,47,220,214,187,104,93,215,193,179,239,179,217,20,94,175,56,238,95,171,213,90,155,180,180,180,20,103,83,25,79,101,46,22,79,
241,219,251,250,201,69,191,179,117,6,18,106,115,243,43,167,168,150,205,79,255,131,153,170,223,98,124,164,104,126,97,26,139,124,127,234,47,87,22,171,115,148,231,93,148,95,41,237,103,152,217,154,125,240,
155,55,77,234,81,147,136,170,141,33,213,189,237,221,189,29,205,163,68,26,48,23,76,195,171,84,42,175,159,88,180,173,103,90,61,79,243,131,217,223,252,198,104,62,63,184,60,51,88,169,194,185,40,216,61,253,
11,206,85,84,45,124,242,201,21,229,196,59,71,73,184,32,3,235,52,123,158,230,7,179,191,249,141,237,133,89,86,169,84,154,215,91,84,170,112,238,10,246,156,68,213,198,57,34,123,59,118,30,154,224,128,166,6,
204,133,148,86,247,30,239,122,177,119,113,152,246,192,170,230,7,179,182,249,141,81,84,232,152,51,131,237,85,152,75,81,181,240,137,167,150,55,31,205,116,64,147,11,53,173,62,184,109,6,6,86,53,63,152,91,
81,85,71,131,89,104,114,81,117,103,95,103,243,181,118,84,53,23,106,207,219,123,172,107,166,162,170,50,129,185,242,29,213,74,139,48,231,163,106,121,52,211,1,77,46,248,190,165,249,129,242,7,230,94,84,117,
64,19,189,74,243,131,11,175,228,117,52,184,16,162,106,113,154,136,3,154,160,249,1,192,172,139,170,14,104,2,0,48,75,163,234,152,216,106,247,1,0,48,91,162,170,193,84,0,0,102,105,84,5,0,0,81,21,0,0,81,21,
0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,
81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,
5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,
64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,
1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,
16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,96,106,81,117,77,215,49,187,140,183,130,149,157,125,118,2,0,204,177,168,250,11,223,221,109,151,241,86,240,19,107,255,151,
157,0,0,51,46,165,116,78,162,234,218,207,110,12,33,220,112,201,145,203,231,29,153,236,107,192,220,178,178,179,111,237,130,3,229,175,61,112,225,53,191,49,86,47,232,183,15,225,252,148,234,138,142,222,115,
18,85,75,247,220,188,125,70,254,187,0,179,214,76,13,169,106,126,48,107,155,223,24,63,127,203,14,187,17,206,79,181,222,181,126,243,185,138,170,197,8,211,134,37,125,151,93,116,40,13,179,211,185,192,204,
224,144,170,230,7,179,182,249,141,105,109,142,25,194,121,251,86,121,77,215,155,147,106,178,83,89,1,224,131,27,183,174,236,236,83,210,92,144,57,117,70,134,84,53,63,152,229,205,111,60,199,12,225,60,84,235,
157,235,54,77,246,81,147,139,170,197,127,5,174,93,220,251,129,13,207,20,105,85,73,115,129,229,212,153,157,165,170,249,193,236,108,126,227,91,219,134,37,125,101,95,83,176,112,46,74,117,121,123,207,20,190,
85,102,83,43,233,245,139,122,238,90,191,121,121,123,143,122,70,78,213,252,96,206,53,191,9,125,240,198,173,43,58,122,149,42,156,139,82,93,214,118,112,106,223,42,167,50,1,160,248,207,193,186,133,7,239,90,
191,89,85,35,167,106,126,48,231,154,223,196,223,45,23,247,125,224,186,103,138,130,85,179,48,227,165,186,110,225,193,41,244,217,108,58,85,125,77,215,155,119,174,219,164,13,35,167,106,126,48,183,154,223,
169,10,246,218,69,189,119,173,223,188,188,173,39,207,115,59,25,166,95,167,121,158,47,107,157,86,169,198,171,55,76,189,188,183,223,243,76,241,151,23,251,22,255,254,246,239,220,211,191,192,167,194,28,13,
169,225,156,173,162,90,148,201,55,15,46,124,104,219,119,236,61,222,85,169,84,236,121,152,102,243,75,41,45,111,235,185,115,253,140,229,212,241,125,109,91,239,162,223,123,241,230,189,199,186,98,140,246,
57,76,177,78,219,123,238,92,191,105,93,215,193,233,244,217,105,69,213,230,170,14,33,108,239,91,242,123,219,111,22,88,153,115,33,53,156,227,213,254,53,63,152,109,205,239,44,251,218,139,189,139,31,220,118,
211,171,71,231,219,249,48,169,82,189,172,243,80,249,101,114,154,165,58,221,168,58,190,176,97,110,57,63,151,164,210,252,96,86,53,63,125,13,230,74,159,157,153,168,170,176,17,82,213,8,92,216,95,50,129,111,
75,157,206,100,84,5,52,63,184,240,190,100,2,223,70,162,42,0,0,179,84,102,23,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,
0,162,42,0,0,136,170,0,0,204,102,85,187,0,0,38,180,253,158,103,236,4,152,178,181,159,221,56,253,39,137,87,111,216,104,87,130,230,7,111,169,230,167,78,97,174,212,236,76,70,85,133,141,134,167,70,96,174,
215,111,115,157,110,121,173,243,19,79,45,223,209,211,158,101,89,28,102,231,195,25,93,185,240,248,199,190,103,247,198,101,71,167,95,179,51,19,85,53,96,52,60,205,15,230,80,243,59,99,169,110,126,173,227,
147,79,173,216,209,211,30,99,172,84,42,149,74,165,40,216,16,130,130,133,179,175,217,95,184,165,251,250,75,14,79,167,96,167,27,85,53,96,52,60,205,15,230,92,243,59,77,169,110,126,173,227,19,79,44,223,209,
219,158,101,89,117,88,89,176,170,21,206,82,74,169,248,243,138,249,71,239,185,121,251,117,75,15,77,173,96,167,21,85,53,96,52,60,205,15,230,98,243,59,85,169,110,121,173,243,222,39,151,237,232,105,175,213,
106,213,106,181,86,171,21,127,169,86,171,89,150,169,86,152,108,181,230,121,158,82,90,217,217,247,161,155,182,109,88,210,55,133,130,157,122,84,213,128,209,240,52,63,152,163,205,239,84,165,90,28,27,172,
213,106,45,45,45,45,45,45,101,181,54,15,193,0,147,170,217,60,207,243,60,95,209,209,251,211,27,159,223,176,120,210,5,59,197,168,170,1,163,225,105,126,48,119,155,223,132,213,250,175,191,112,213,142,158,
246,162,78,91,91,91,139,106,109,46,85,19,219,96,178,165,90,40,10,118,121,123,207,3,239,250,171,201,86,107,117,202,37,93,52,224,238,222,246,150,22,13,152,185,221,240,222,24,88,242,95,158,173,126,112,227,
214,107,23,247,110,191,231,153,153,29,91,45,114,170,230,7,231,162,249,237,59,185,248,115,207,221,80,52,191,105,230,212,205,175,117,148,95,41,91,91,91,203,106,205,178,172,82,169,152,210,6,83,46,216,226,
207,122,189,190,239,228,226,111,30,92,184,126,81,207,164,90,109,117,106,37,61,156,83,59,138,156,170,1,115,33,52,188,231,111,248,201,235,158,157,169,180,170,249,193,108,110,126,227,125,234,233,149,213,
106,181,44,213,214,214,214,162,84,203,142,102,183,195,20,148,181,83,116,189,7,183,221,116,255,63,126,124,82,207,48,185,168,58,38,167,214,106,181,178,251,106,192,92,0,13,239,119,182,110,252,192,134,103,
102,112,108,85,243,131,217,217,252,198,247,181,157,125,157,229,65,194,162,163,57,66,8,51,88,179,133,215,142,47,220,214,187,104,93,215,193,179,239,179,217,20,94,175,156,120,215,218,164,165,165,165,56,155,
202,120,42,115,177,120,138,158,84,164,213,233,63,109,115,243,43,167,168,150,205,79,255,131,153,170,223,98,124,164,104,126,97,26,139,124,127,234,47,87,22,39,7,215,134,149,95,41,237,103,152,217,154,125,
240,155,55,77,234,81,147,136,170,167,63,160,169,1,115,1,52,188,44,203,94,63,177,232,155,61,11,195,76,92,216,66,243,131,89,219,252,198,40,142,19,150,103,92,40,85,56,119,5,187,167,127,193,185,138,170,141,
238,219,116,64,211,81,18,46,200,192,58,205,158,167,249,193,236,111,126,99,123,97,150,85,42,149,230,245,22,149,42,156,187,130,61,39,81,245,244,7,52,53,96,46,164,180,58,253,131,137,154,31,204,242,230,55,
70,81,161,99,206,12,182,87,97,46,69,213,130,3,154,188,69,210,234,140,12,172,106,126,48,183,162,170,142,6,179,208,228,162,170,3,154,188,69,122,222,52,15,38,106,126,48,23,191,163,90,105,17,230,124,84,117,
64,147,183,78,223,210,252,64,249,3,115,44,170,58,160,137,94,165,249,193,5,89,242,58,26,92,56,81,213,1,77,208,252,0,96,214,69,85,7,52,1,0,152,165,81,117,76,108,181,251,0,0,152,45,81,213,96,42,0,0,179,52,
170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,
0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,32,170,
2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,0,
162,42,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,
0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,
10,0,128,168,10,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,
170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,48,59,164,148,236,4,0,152,99,81,117,245,130,126,187,140,183,66,78,93,209,209,107,63,0,192,28,139,170,63,127,203,
14,187,140,183,66,84,189,107,253,102,251,1,0,206,69,147,61,39,81,117,237,103,55,134,16,110,184,228,200,229,243,142,56,54,202,133,93,66,43,58,122,175,233,122,179,252,181,7,46,188,230,55,134,99,134,112,
62,155,236,57,137,170,165,123,110,222,62,35,255,93,128,89,91,69,119,174,219,52,35,79,165,249,193,172,109,126,99,56,102,8,231,173,90,39,123,220,114,18,81,181,24,97,218,176,164,111,101,103,95,26,102,167,
115,129,149,208,242,246,158,153,26,82,213,252,96,214,54,191,49,173,205,49,67,56,111,223,42,39,219,100,167,178,2,192,7,111,220,186,162,163,87,73,115,225,149,208,178,182,131,51,50,164,170,249,193,44,111,
126,227,57,102,8,231,161,90,167,208,100,39,23,85,27,3,171,139,251,62,112,221,51,69,90,85,210,92,96,57,117,221,194,131,97,230,102,169,106,126,48,59,155,223,4,173,205,49,67,56,199,165,58,181,227,150,217,
212,74,250,218,69,189,119,173,223,188,188,173,71,61,35,167,106,126,48,231,154,223,132,28,51,132,115,221,103,167,240,216,169,76,0,40,254,115,176,126,81,207,157,235,55,169,106,228,84,205,15,230,92,243,155,
248,187,165,99,134,48,251,250,108,54,157,170,94,183,240,224,29,215,252,195,178,182,131,121,158,251,36,152,139,197,147,231,249,178,214,115,149,83,53,63,152,67,95,50,199,28,51,212,215,96,150,244,217,120,
245,134,169,151,247,246,123,158,41,254,178,173,119,209,239,189,120,243,222,99,93,49,70,31,12,115,162,120,138,227,134,119,174,223,180,174,235,96,115,163,154,113,69,153,124,243,224,194,135,182,125,199,222,
227,93,149,74,197,254,135,25,168,223,182,158,59,215,207,252,151,76,125,13,102,91,159,157,86,84,109,174,234,16,194,139,189,139,31,220,118,211,171,71,231,251,132,152,229,245,115,89,231,161,178,201,157,211,
156,170,249,193,156,251,146,169,175,193,172,234,179,211,141,170,227,11,27,230,150,243,115,73,42,205,15,230,214,151,76,125,13,102,73,159,157,153,168,170,176,17,82,213,8,92,216,95,50,129,111,75,157,206,
100,84,5,52,63,184,240,190,100,2,223,70,162,42,0,0,179,84,102,23,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,32,170,2,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,
0,136,170,0,0,204,102,85,187,0,206,179,237,247,60,99,39,192,148,173,253,236,70,213,10,111,157,106,141,87,111,216,104,87,130,182,7,2,171,106,133,89,88,173,51,25,85,21,54,90,221,217,84,199,150,215,58,63,
241,212,242,29,61,237,89,150,197,97,62,14,56,163,43,23,30,255,216,247,236,222,184,236,232,57,173,98,213,10,179,170,90,103,38,170,10,169,8,172,103,83,32,155,95,235,248,228,83,43,118,244,180,199,24,43,149,
74,165,82,41,250,95,8,65,255,131,179,111,129,191,112,75,247,245,151,28,62,23,37,172,90,97,182,85,235,116,163,170,111,159,188,197,191,237,157,101,141,108,126,173,227,19,79,44,223,209,219,158,101,89,117,
88,217,255,52,63,56,75,41,165,226,207,43,230,31,189,231,230,237,215,45,61,52,131,245,171,90,97,22,86,235,180,162,170,111,159,248,182,119,54,53,178,229,181,206,123,159,92,182,163,167,189,86,171,85,171,
213,90,173,86,252,165,90,173,102,89,166,249,193,100,155,95,158,231,41,165,149,157,125,31,186,105,219,134,37,125,51,82,191,170,21,102,103,181,78,61,170,250,246,137,111,123,103,217,249,138,163,13,181,90,
173,165,165,165,165,165,165,108,126,205,95,234,128,73,213,111,158,231,121,158,175,232,232,253,233,141,207,111,88,60,221,180,170,90,97,214,86,107,117,186,85,253,228,178,29,189,190,125,50,135,191,237,189,
126,162,245,183,54,175,47,190,237,109,191,231,153,25,31,91,45,58,95,209,246,90,91,91,139,230,215,220,249,76,149,129,201,22,111,33,207,243,125,39,23,127,238,185,27,30,120,215,95,169,86,184,80,171,117,42,
163,170,190,125,114,65,126,219,251,224,198,173,215,46,238,13,51,52,182,90,30,118,248,241,175,188,173,86,171,181,14,43,42,37,203,178,74,165,98,146,12,76,231,171,102,74,169,94,175,231,121,126,239,119,62,
189,126,81,207,148,139,87,181,194,108,174,214,234,212,74,186,200,169,221,189,29,45,45,53,223,62,185,64,190,237,61,127,195,79,94,247,236,181,139,123,103,112,108,245,83,79,175,172,86,171,69,141,20,138,206,
87,214,136,79,1,166,160,172,157,34,68,62,184,237,166,251,255,241,227,170,21,46,200,106,157,220,168,234,152,156,90,126,251,44,71,85,125,251,100,238,126,219,75,41,45,107,59,248,129,13,207,76,127,108,181,
172,148,59,254,219,213,45,45,45,109,109,109,109,109,109,69,165,56,230,0,51,94,197,121,158,255,135,239,120,98,93,215,193,41,84,174,106,133,89,94,173,217,20,94,169,60,238,223,218,164,168,234,34,167,250,
2,202,28,250,182,87,40,122,210,190,147,139,127,103,235,198,153,122,242,79,253,229,202,226,116,195,218,176,114,132,198,158,135,25,172,226,44,203,30,252,230,77,170,21,46,200,106,157,68,84,45,103,243,148,
243,83,155,103,243,140,89,163,10,230,92,241,20,191,192,175,159,88,244,205,158,133,97,38,46,108,81,28,121,40,231,112,235,124,112,238,74,120,79,255,2,213,10,23,100,181,78,122,84,181,121,54,79,121,220,95,
72,229,66,10,172,211,28,158,25,169,174,44,171,84,42,205,43,184,169,17,56,119,245,171,90,225,130,172,214,179,141,170,229,108,158,157,125,157,229,41,255,114,42,23,100,90,125,237,248,194,109,189,139,194,
180,7,86,139,134,55,230,92,67,59,25,102,97,84,85,173,48,231,163,106,193,108,30,222,34,105,117,70,6,86,203,89,49,106,4,102,57,213,10,179,214,228,162,170,217,60,188,69,210,234,52,231,189,53,167,94,107,183,
193,92,249,142,170,90,97,206,71,85,179,121,120,235,244,173,89,254,132,192,92,41,127,224,252,69,85,179,121,208,171,38,245,36,106,4,230,74,201,171,86,184,112,162,170,227,254,0,0,204,186,168,106,54,15,0,
0,179,52,170,142,137,173,118,31,0,0,179,37,170,26,76,5,0,96,150,70,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,
85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,
0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,
21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,
64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,
5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,102,135,148,146,157,0,0,115,44,170,
174,94,208,111,151,241,86,200,169,43,58,122,237,7,0,152,99,81,245,231,111,217,97,151,241,86,136,170,119,173,223,108,63,192,220,42,91,59,1,46,200,106,61,219,168,186,246,179,27,67,8,55,92,114,228,242,121,
71,252,23,129,11,187,132,86,116,244,94,211,245,102,249,107,63,101,142,66,192,249,44,91,213,10,23,100,181,78,122,174,234,61,55,111,247,21,150,11,187,138,238,92,183,105,70,158,202,81,8,56,111,101,59,205,
35,33,170,21,102,109,181,78,34,170,22,35,76,27,150,244,173,236,236,75,195,236,116,46,176,18,90,222,222,51,253,33,85,71,33,224,124,150,237,116,142,132,168,86,152,229,213,58,149,21,0,62,120,227,214,21,29,
189,74,154,11,175,132,150,181,29,156,169,33,213,130,163,16,112,30,42,119,70,202,86,181,194,236,172,214,201,69,213,198,192,234,226,190,15,92,247,76,145,86,149,52,23,88,78,93,183,240,96,152,246,44,213,224,
40,4,156,175,202,157,254,145,16,213,10,179,185,90,179,169,149,244,181,139,122,239,90,191,121,121,91,143,122,70,78,61,61,71,33,224,92,87,174,106,133,11,184,90,167,50,1,160,104,228,235,23,245,220,185,126,
147,170,70,78,61,125,165,56,10,1,179,191,114,85,43,204,218,106,205,166,83,213,235,22,30,188,227,154,127,88,214,118,48,207,115,159,4,115,177,120,242,60,95,214,122,174,198,83,195,184,163,16,42,5,102,109,
229,170,86,152,157,213,26,175,222,48,245,10,223,126,207,51,197,95,182,245,46,250,189,23,111,222,123,172,43,198,232,131,97,78,20,79,49,105,230,206,245,155,214,117,29,108,110,84,231,130,74,129,185,82,185,
170,21,102,91,181,78,43,170,54,87,117,8,225,197,222,197,15,110,187,233,213,163,243,125,66,204,242,250,185,172,243,208,157,235,27,223,240,206,117,78,85,41,48,183,42,87,181,194,172,170,214,233,70,213,241,
133,13,115,203,185,14,169,42,5,230,98,229,170,86,152,37,213,58,51,81,85,97,163,213,169,20,240,245,18,152,241,106,157,201,168,10,0,0,51,40,179,11,0,0,16,85,1,0,64,84,5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,
68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,224,2,86,157,145,103,113,149,100,0,0,154,173,253,236,198,233,63,73,188,122,195,180,158,69,72,5,0,224,28,5,214,169,71,213,230,144,186,229,181,206,79,60,181,124,71,
79,123,150,101,113,152,207,6,0,224,45,232,202,133,199,63,246,61,187,55,46,59,58,253,192,58,197,168,90,230,212,205,175,117,124,242,169,21,59,122,218,99,140,149,74,165,82,169,20,105,53,132,32,173,2,0,188,
149,3,235,47,220,210,125,253,37,135,167,147,86,167,18,85,139,156,186,249,181,142,79,60,177,124,71,111,123,150,101,213,97,101,90,21,85,1,0,222,178,82,74,197,159,87,204,63,122,207,205,219,175,91,122,104,
106,105,117,210,81,181,200,169,91,94,235,188,247,201,101,59,122,218,107,181,90,181,90,173,213,106,197,95,170,213,106,150,101,162,42,0,128,168,154,231,121,74,105,101,103,223,135,110,218,182,97,73,223,20,
210,234,228,162,106,153,83,139,153,169,181,90,173,165,165,165,165,165,165,140,170,205,19,0,0,0,120,139,7,214,60,207,243,60,95,209,209,251,211,27,159,223,176,120,210,105,117,42,139,85,21,57,181,8,169,173,
173,173,69,84,109,206,169,78,171,2,0,144,83,11,121,158,239,59,185,248,115,207,221,240,192,187,254,106,178,79,50,137,168,90,78,81,45,199,83,91,91,91,203,168,154,101,89,165,82,113,66,21,0,0,101,90,45,254,
172,215,235,251,78,46,254,230,193,133,235,23,245,108,191,231,153,179,31,88,157,244,213,170,62,245,244,202,106,181,90,230,212,34,170,22,103,83,25,79,5,0,160,84,134,195,34,43,62,184,237,166,201,62,195,217,
70,213,114,150,234,206,190,206,114,138,106,49,158,58,102,141,42,0,0,104,14,172,197,225,247,215,142,47,220,214,187,40,76,230,26,82,147,27,85,253,212,95,174,44,150,166,170,13,43,206,247,23,82,1,0,56,99,
96,125,240,155,147,27,88,157,92,84,237,238,237,40,67,106,185,46,149,156,10,0,192,217,164,213,61,253,11,206,97,84,45,6,111,155,87,251,151,83,1,0,56,251,180,122,14,163,106,17,79,199,172,75,101,167,3,0,48,
91,162,170,227,254,0,0,156,7,147,139,170,197,124,88,235,252,3,0,48,235,162,234,152,216,106,247,1,0,48,91,162,170,193,84,0,0,102,105,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,
64,84,5,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,16,85,1,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,64,84,
5,0,64,84,5,0,0,81,21,0,0,81,21,0,0,68,85,0,0,68,85,0,0,16,85,1,0,120,75,74,41,157,195,168,186,122,65,191,93,12,0,192,212,114,234,138,142,222,115,24,85,127,254,150,29,246,50,0,0,83,139,170,119,173,223,
124,78,162,234,218,207,110,12,33,220,112,201,145,203,231,29,153,236,200,45,0,0,114,234,138,142,222,107,186,222,44,131,229,76,70,213,210,61,55,111,47,95,207,78,7,0,224,44,163,234,157,235,54,77,246,81,147,
136,170,69,254,221,176,164,111,101,103,95,26,102,191,3,0,112,198,156,186,188,189,103,178,67,170,97,106,43,0,124,240,198,173,43,58,122,229,84,0,0,206,38,167,46,107,59,56,133,33,213,73,71,213,198,192,234,
226,190,15,92,247,76,145,86,5,86,0,0,206,152,83,215,45,60,24,38,57,164,26,166,48,170,90,188,192,181,139,122,239,90,191,121,121,91,79,158,231,62,3,0,0,198,135,212,60,207,151,181,78,61,167,134,16,226,213,
27,54,78,225,181,183,223,243,76,241,151,109,189,139,126,239,197,155,247,30,235,138,49,250,72,0,0,40,14,188,47,111,239,185,115,253,166,117,93,7,139,27,167,144,83,167,30,85,155,211,106,8,225,197,222,197,
15,110,187,233,213,163,243,125,54,0,0,111,241,156,122,89,231,161,59,215,55,70,82,167,147,83,167,21,85,199,7,86,0,0,104,54,229,144,58,51,81,85,96,5,0,96,198,67,234,76,70,85,0,0,152,113,153,93,0,0,128,168,
10,0,0,162,42,0,0,162,42,0,0,136,170,0,0,136,170,0,0,32,170,2,0,128,168,10,0,128,168,10,0,0,162,42,0,0,23,176,255,127,0,33,101,91,176,248,231,58,220,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::trio_png = (const char*) resource_MainWindow_trio_png;
const int MainWindow::trio_pngSize = 49083;

// JUCER_RESOURCE: oscillator_saw_48_png, 15735, "../oscillator_saw_48.png"
static const unsigned char resource_MainWindow_oscillator_saw_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,
19,1,0,154,156,24,0,0,57,242,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,
34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,
46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,101,
68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,48,53,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,
77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,
101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,
110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,101,48,53,54,50,99,51,45,49,50,100,56,45,52,52,56,98,45,56,55,100,49,45,97,51,57,52,50,56,99,53,56,98,52,49,60,47,120,109,112,77,77,
58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,
104,111,112,58,48,50,102,55,97,53,48,54,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,55,52,100,55,57,97,98,54,45,53,53,49,99,45,52,57,98,48,45,
97,56,99,55,45,97,48,98,56,53,99,100,54,57,100,52,52,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,
58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,
100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,
100,58,55,52,100,55,57,97,98,54,45,53,53,49,99,45,52,57,98,48,45,97,56,99,55,45,97,48,98,56,53,99,100,54,57,100,52,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,48,53,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,
100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,101,48,53,54,50,99,51,45,49,50,100,56,45,52,52,56,98,45,56,55,100,49,45,97,51,57,
52,50,56,99,53,56,98,52,49,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,
49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,
111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,
111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,
110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,
32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,
110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,
111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,
111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,
110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,
32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,
32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,
32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,
63,62,70,163,14,13,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,2,255,73,68,65,84,120,218,236,151,75,72,84,81,24,199,
127,231,62,82,199,153,44,77,51,173,69,15,3,73,193,52,11,66,42,209,176,39,45,42,43,16,179,34,82,42,202,36,16,42,168,22,66,155,50,40,42,136,192,168,69,26,244,128,138,140,146,30,11,81,202,69,104,150,165,
153,217,99,28,165,178,124,140,119,238,109,113,71,49,98,212,209,17,92,204,185,155,251,29,206,253,255,57,191,243,125,223,225,10,131,241,29,18,126,3,191,193,132,55,144,143,255,55,181,147,43,196,114,143,44,
52,44,108,163,142,56,206,179,3,9,157,141,52,50,143,99,20,17,67,21,217,104,216,40,100,31,241,209,115,59,199,105,7,50,77,36,165,46,173,25,39,68,18,205,44,75,41,123,18,28,238,105,133,50,122,113,129,139,175,
164,175,90,249,0,116,135,228,235,29,8,92,56,152,177,41,230,129,155,148,111,13,4,58,77,20,236,202,45,51,99,195,240,41,34,129,198,119,50,14,44,44,238,159,241,108,32,141,38,111,186,249,204,236,252,126,121,
195,183,133,38,241,135,14,10,143,46,58,13,64,215,227,171,154,203,135,136,4,189,252,36,255,66,74,174,25,223,90,124,187,41,45,219,103,6,10,63,104,37,225,114,192,46,51,174,72,45,169,85,210,135,251,198,11,
246,109,132,145,115,35,32,19,160,189,231,120,170,84,105,39,89,29,250,28,164,145,195,233,196,197,165,242,140,76,0,58,78,37,221,174,236,165,29,139,225,147,52,85,177,227,16,171,159,201,41,0,246,134,230,52,
209,98,163,13,11,198,176,73,49,34,246,205,204,81,179,171,77,249,247,77,135,19,127,180,132,34,152,76,40,22,121,204,117,32,209,134,197,122,171,58,46,9,192,85,187,63,241,253,239,40,130,9,193,64,32,198,90,
201,6,237,168,17,133,47,166,196,0,180,85,213,47,167,39,148,46,100,108,56,209,199,122,163,201,56,8,136,141,121,101,202,191,124,114,106,137,220,51,21,43,141,212,49,19,27,33,4,201,99,48,144,248,200,186,228,
19,53,68,3,188,185,179,61,205,69,24,58,42,111,233,196,130,130,130,44,0,116,239,17,185,187,253,138,181,21,102,236,184,254,34,171,143,8,52,100,58,112,16,136,6,232,195,66,82,60,183,227,118,34,215,199,222,
53,227,135,23,63,229,133,19,130,6,192,36,38,211,135,1,244,18,44,141,18,209,59,246,108,216,235,150,47,61,123,40,111,26,65,24,128,19,43,17,72,40,168,168,168,253,136,116,47,118,32,48,248,198,138,205,107,
74,205,248,231,145,138,34,25,27,125,128,142,202,60,90,232,113,167,167,54,4,125,143,6,125,52,51,51,123,65,137,25,221,204,143,42,158,69,16,46,0,130,176,99,16,58,112,67,58,9,84,188,70,244,139,156,131,253,
242,39,115,175,21,79,31,88,36,16,52,208,141,149,0,247,19,200,36,201,235,44,218,177,123,195,25,243,237,209,150,115,165,91,81,7,250,141,76,7,160,226,28,88,235,68,243,30,81,224,115,94,19,15,79,215,182,222,
159,133,242,79,34,90,177,13,146,7,39,54,43,128,53,210,11,131,130,250,226,228,162,242,242,243,220,79,64,12,234,150,189,132,49,3,221,125,188,230,8,65,179,127,249,32,232,108,157,239,169,158,252,255,104,126,
3,191,129,223,96,2,24,252,29,0,27,24,242,132,168,8,115,79,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_saw_48_png = (const char*) resource_MainWindow_oscillator_saw_48_png;
const int MainWindow::oscillator_saw_48_pngSize = 15735;

// JUCER_RESOURCE: oscillator_sine_48_png, 18394, "../oscillator_sine_48.png"
static const unsigned char resource_MainWindow_oscillator_sine_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,
19,1,0,154,156,24,0,0,66,11,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,
34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,
61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,
116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,
98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,51,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,
121,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,120,109,
112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,
32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,101,100,100,48,51,50,98,45,57,51,55,100,45,52,101,99,56,45,98,100,51,51,45,56,56,101,
55,98,51,99,49,56,98,50,48,60,47,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,
58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,101,55,49,55,99,52,51,56,45,54,57,56,97,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,77,77,
58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,53,97,
53,56,55,99,55,49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,
62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,
115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,53,97,53,56,55,99,55,49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,115,116,69,118,116,58,
105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,51,58,53,57,43,
48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,
100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,
101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,
69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,105,109,97,103,101,
47,112,110,103,32,116,111,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,
114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,
84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,
118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,101,101,53,
100,98,48,53,45,52,57,97,55,45,52,102,53,48,45,98,49,53,101,45,52,100,50,53,99,49,99,97,102,99,102,51,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,56,58,51,55,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,
58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,57,97,52,99,99,52,99,45,52,101,52,56,45,52,53,55,50,45,57,49,51,100,45,54,57,48,55,102,51,99,99,50,97,99,97,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,
51,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,
105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,
118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,
82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,
99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,
97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,
97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,
60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,51,101,100,100,48,51,50,98,45,57,51,55,100,45,52,101,99,56,45,98,100,51,51,45,56,56,101,55,98,51,99,49,56,98,50,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,
102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,57,97,52,99,99,52,99,45,52,101,52,56,45,52,53,55,50,45,57,49,51,100,45,54,57,48,55,102,51,99,99,50,97,99,97,60,47,115,116,
82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,
112,104,111,116,111,115,104,111,112,58,54,54,100,48,99,97,56,55,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,
110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,53,97,53,56,55,99,55,
49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,
32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,
105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,
101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,
114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,
101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,
101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,
32,101,110,100,61,34,119,34,63,62,172,164,163,197,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,5,73,73,68,65,84,120,
218,236,151,107,76,20,119,20,197,127,51,179,111,221,5,22,124,44,138,138,96,177,200,67,43,136,86,177,213,104,197,166,45,106,213,88,137,177,24,162,109,170,169,54,177,138,53,129,84,99,27,99,177,245,145,190,
98,106,163,70,172,216,86,165,106,68,40,130,209,84,106,52,130,34,38,128,224,107,17,88,94,187,44,11,236,110,63,184,174,171,236,174,73,19,191,241,63,159,102,238,204,61,115,238,127,238,185,51,130,147,151,
187,68,250,9,250,9,250,9,100,0,99,220,135,86,162,152,132,142,72,133,244,78,212,228,168,192,194,202,218,130,187,21,122,82,41,226,39,6,251,73,228,68,131,132,19,144,176,98,70,4,10,158,16,60,93,18,237,116,
49,121,69,226,138,208,169,0,115,104,107,174,202,189,180,169,181,253,255,74,21,156,64,164,91,78,45,67,57,125,48,58,237,217,139,218,154,204,239,31,40,57,246,2,5,106,223,10,30,203,16,104,38,136,19,167,163,
83,0,44,230,166,98,149,217,18,55,58,26,2,66,2,206,171,18,90,174,12,194,238,135,192,207,30,200,92,151,152,56,154,21,159,2,80,248,101,209,246,72,139,129,34,222,152,50,231,144,44,28,86,253,125,114,72,149,
53,212,71,34,7,34,90,4,47,81,17,64,141,26,13,45,124,16,53,63,27,224,199,143,191,206,82,91,244,12,196,64,221,165,141,49,173,173,160,214,110,251,217,137,128,204,43,36,212,200,112,248,82,48,31,112,98,36,
59,23,160,34,239,139,31,94,101,48,2,160,162,131,223,58,73,218,81,5,73,105,11,182,92,175,26,230,53,141,72,23,54,36,95,125,160,39,4,7,51,147,131,199,67,183,117,199,135,201,132,114,3,25,26,238,115,157,100,
74,110,23,237,2,88,127,32,148,16,134,122,193,112,180,62,246,71,6,112,17,7,13,44,218,6,112,96,231,17,203,4,186,41,33,130,36,202,24,134,140,17,28,252,252,205,213,162,56,36,49,100,252,63,215,250,238,131,
64,47,14,148,94,247,199,245,122,55,18,247,202,216,105,0,229,91,83,137,35,145,100,236,92,68,142,136,157,32,106,108,103,247,2,44,222,236,64,133,242,57,40,208,32,121,45,157,75,129,1,59,169,171,1,46,253,218,
96,141,192,1,132,80,79,49,90,44,128,128,196,185,157,41,107,32,62,117,84,240,131,102,93,159,52,118,36,4,223,94,100,199,64,242,42,128,130,111,26,168,163,158,122,170,49,18,207,68,98,137,37,134,217,116,214,
222,41,1,165,236,237,229,15,0,135,7,236,136,168,252,247,65,49,233,105,130,2,42,175,228,151,7,97,114,55,78,35,102,122,93,85,110,228,92,78,198,116,72,94,153,144,163,123,198,35,37,186,49,250,55,187,112,82,
50,1,10,183,58,9,241,168,165,17,135,91,184,149,63,142,47,179,41,149,97,81,241,113,165,215,13,30,79,44,209,131,29,209,125,70,160,7,11,162,235,78,17,32,49,118,164,193,102,122,116,231,114,97,24,2,18,18,18,
50,36,228,40,144,187,160,195,196,185,61,0,49,159,180,99,243,128,21,11,74,20,110,200,144,208,235,244,58,131,222,109,118,153,186,69,61,66,247,5,251,6,2,221,226,237,244,176,132,225,152,221,207,213,66,72,
112,118,19,56,108,235,84,54,212,30,101,80,121,148,76,164,150,119,87,206,219,45,8,53,71,199,166,185,74,212,213,110,71,134,156,129,72,110,255,238,97,36,112,199,163,96,118,110,54,223,255,119,88,130,168,28,
189,224,244,239,97,174,136,0,180,120,148,210,70,55,179,179,148,10,200,59,180,249,73,137,4,68,68,36,4,15,128,150,78,76,180,186,97,166,134,99,223,2,44,206,210,33,185,187,64,141,137,123,24,49,98,164,129,
43,140,153,161,15,133,54,227,237,83,126,70,166,19,53,34,15,105,241,128,9,129,210,252,94,43,24,226,226,35,172,30,141,38,186,225,68,67,234,167,0,151,191,215,248,155,201,118,148,40,113,122,220,42,34,18,66,
89,91,65,46,192,164,245,215,105,196,136,145,70,170,105,65,139,10,21,42,172,196,104,95,79,5,184,176,215,246,244,53,237,187,172,132,18,137,197,75,95,150,237,158,155,14,211,150,70,126,102,236,12,4,154,25,
77,26,69,168,0,17,137,101,235,1,174,158,42,107,54,248,38,112,32,18,205,40,218,251,68,194,184,119,181,185,60,56,86,173,157,248,81,102,78,56,14,234,216,205,66,126,65,142,134,118,68,166,175,5,200,221,94,
73,183,111,2,1,13,85,212,120,49,96,129,90,116,155,118,156,132,53,89,199,115,58,80,48,132,20,122,9,229,1,80,79,118,166,70,11,166,170,166,243,11,93,213,23,189,43,80,98,163,149,142,62,104,71,69,126,126,71,
53,12,208,109,201,121,132,156,185,104,48,49,130,225,28,35,76,59,47,27,224,207,181,118,20,174,212,94,21,216,24,202,107,88,125,184,99,61,95,205,219,86,14,179,214,173,42,44,253,75,73,7,65,244,48,131,107,
236,42,17,21,80,81,188,241,76,56,85,254,190,236,36,2,104,247,129,54,6,112,182,226,198,62,128,45,249,203,151,84,99,198,206,45,148,250,210,130,136,241,0,223,45,13,37,152,64,2,125,43,144,97,194,230,242,81,
111,26,204,44,205,56,51,217,48,14,210,15,79,90,59,224,136,188,51,35,110,102,186,76,13,144,185,104,255,195,9,52,60,235,166,125,9,154,104,240,49,64,30,199,171,120,47,225,112,105,100,2,140,75,34,9,222,114,
69,10,51,138,242,244,116,188,232,227,215,137,220,203,96,124,10,137,72,238,118,125,149,248,112,187,219,11,129,155,133,123,102,148,238,11,71,238,242,99,201,95,163,189,104,245,50,8,17,211,134,138,60,251,
172,41,97,1,170,186,166,186,202,19,251,77,206,169,220,122,110,182,9,253,191,177,253,4,253,4,47,159,224,191,1,0,98,193,232,2,1,225,112,200,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_sine_48_png = (const char*) resource_MainWindow_oscillator_sine_48_png;
const int MainWindow::oscillator_sine_48_pngSize = 18394;

// JUCER_RESOURCE: oscillator_square_48_png, 17545, "../oscillator_square_48.png"
static const unsigned char resource_MainWindow_oscillator_square_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,
11,19,1,0,154,156,24,0,0,66,11,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,
61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,
61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,
116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,
98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,49,48,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,
121,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,120,109,
112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,
32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,100,101,51,101,51,56,49,100,45,100,53,98,99,45,52,51,49,100,45,57,57,57,52,45,100,102,49,
48,100,51,56,53,50,50,56,52,60,47,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,
101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,100,100,98,52,51,48,102,48,45,54,57,56,97,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,
77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,
102,57,49,56,99,52,102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,
73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,
105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,102,57,49,56,99,52,102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,
49,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,
116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,105,109,97,103,
101,47,112,110,103,32,116,111,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,
101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,
101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,
69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,52,99,100,
49,55,101,53,53,45,55,48,50,56,45,52,55,57,48,45,57,50,49,48,45,51,99,57,52,55,56,57,50,52,54,48,98,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,55,58,53,56,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,
58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,51,52,102,52,48,50,55,45,98,57,52,53,45,52,97,49,55,45,98,98,101,48,45,49,98,50,49,52,48,52,100,100,100,57,54,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,
49,50,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,
105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,
118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,
82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,
99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,
97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,
97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,
60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,100,101,51,101,51,56,49,100,45,100,53,98,99,45,52,51,49,100,45,57,57,57,52,45,100,102,49,48,100,51,56,53,50,50,56,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,
102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,51,52,102,52,48,50,55,45,98,57,52,53,45,52,97,49,55,45,98,98,101,48,45,49,98,50,49,52,48,52,100,100,100,57,54,60,47,115,116,
82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,
112,104,111,116,111,115,104,111,112,58,52,100,98,99,55,54,48,51,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,
110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,102,57,49,56,99,52,
102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,
32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,
116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,
47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,
60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,
102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,
108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,
105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,
68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,
101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,
99,107,101,116,32,101,110,100,61,34,119,34,63,62,49,166,221,40,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,1,248,73,
68,65,84,120,218,236,151,65,107,19,65,20,199,127,59,19,67,155,221,212,106,219,152,68,138,138,80,161,7,131,244,11,248,41,252,18,126,0,193,163,45,68,83,68,68,241,238,209,92,245,212,163,7,177,7,161,61,152,
173,165,196,82,178,40,90,169,96,154,118,155,76,198,67,164,73,186,152,221,141,187,224,97,223,158,118,118,230,253,118,222,127,222,123,140,161,137,215,4,9,32,1,36,128,216,1,41,239,208,234,210,110,201,10,
225,162,141,104,30,86,193,56,29,121,49,26,176,120,251,206,221,48,27,211,124,115,158,85,39,7,0,62,59,152,153,191,114,45,92,24,46,228,58,232,224,33,58,110,246,55,47,3,73,248,115,95,132,209,160,103,111,95,
77,148,23,140,239,35,16,130,115,250,75,233,230,203,116,88,145,123,182,83,127,179,249,156,139,252,248,203,65,19,100,216,196,249,181,52,238,49,45,100,29,42,180,153,67,35,60,143,36,203,54,54,86,206,24,23,
160,40,210,160,204,49,179,40,207,34,139,45,62,98,250,106,52,50,209,20,5,28,202,28,13,33,52,6,38,54,53,76,4,250,223,50,185,135,88,165,125,138,208,72,178,124,194,198,12,88,4,124,102,41,10,52,88,225,136,
28,10,144,88,212,254,252,125,68,181,168,75,30,135,10,45,102,233,98,98,179,69,38,68,9,11,48,83,81,100,143,71,184,204,99,83,35,19,64,218,144,213,84,113,153,6,79,89,167,142,137,68,71,13,0,69,158,207,188,
231,124,72,247,35,50,217,139,176,152,66,251,184,151,28,224,142,7,8,98,146,61,110,113,53,46,64,138,93,74,220,39,29,79,203,76,81,103,129,101,210,28,196,1,144,212,41,81,1,220,51,149,75,68,21,251,27,172,32,
0,227,76,235,140,4,240,245,228,58,143,131,247,228,240,86,156,123,114,79,246,203,237,6,107,17,3,242,211,60,28,120,125,237,3,176,46,1,76,20,148,231,139,129,24,138,169,64,100,188,122,200,174,79,136,214,171,
157,253,14,59,239,166,60,238,79,104,13,229,169,75,122,187,245,64,232,190,71,195,112,85,243,195,244,224,170,228,142,150,0,18,64,2,248,15,0,191,7,0,29,97,133,174,229,37,210,200,0,0,0,0,73,69,78,68,174,66,
96,130,0,0};

const char* MainWindow::oscillator_square_48_png = (const char*) resource_MainWindow_oscillator_square_48_png;
const int MainWindow::oscillator_square_48_pngSize = 17545;

// JUCER_RESOURCE: oscillator_noise_48_png, 17465, "../oscillator_noise_48.png"
static const unsigned char resource_MainWindow_oscillator_noise_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,
11,19,1,0,154,156,24,0,0,59,182,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,
61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,50,32,55,57,46,49,53,57,50,56,52,44,32,50,48,49,54,47,48,52,47,49,57,
45,49,51,58,49,51,58,52,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,
46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,
101,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,54,58,48,49,43,48,49,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,32,32,
32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,
116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,
58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,53,48,98,99,50,49,101,99,45,56,97,51,53,45,52,99,98,52,45,56,57,99,101,45,98,53,51,97,57,50,56,52,56,100,51,48,60,47,120,109,112,
77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,
115,104,111,112,58,50,97,48,50,49,50,98,52,45,102,53,52,101,45,49,49,55,57,45,97,54,50,55,45,56,98,49,101,51,48,50,97,101,48,97,56,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,49,97,49,51,99,49,98,56,45,57,100,100,101,45,52,54,
99,97,45,97,56,55,99,45,49,51,97,50,55,57,50,97,100,54,55,51,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,
101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,
105,100,58,49,97,49,51,99,49,98,56,45,57,100,100,101,45,52,54,99,97,45,97,56,55,99,45,49,51,97,50,55,57,50,97,100,54,55,51,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,54,58,48,49,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,
101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,57,100,99,52,97,53,56,52,45,54,98,53,55,45,52,54,51,97,45,98,53,102,54,
45,55,102,100,100,51,54,55,56,99,53,52,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,
110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,
118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,
116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,
118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,
100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,
118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,
105,105,100,58,53,48,98,99,50,49,101,99,45,56,97,51,53,45,52,99,98,52,45,56,57,99,101,45,98,53,51,97,57,50,56,52,56,100,51,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,
101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,116,
105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,
108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,
108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,
108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,
112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,
110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,
110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,
47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,63,62,161,90,142,80,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,
0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,7,253,73,68,65,84,120,218,236,152,91,76,219,215,29,199,63,127,223,109,108,108,99,27,27,204,37,128,129,16,66,33,161,185,39,52,77,166,164,221,90,101,205,
182,108,235,195,158,38,85,234,54,109,210,164,61,109,213,52,85,218,211,246,52,169,218,75,215,77,233,195,182,106,173,70,51,41,235,42,145,75,9,228,2,1,130,66,128,152,91,192,23,48,216,248,126,251,255,247,
224,63,142,129,132,100,149,246,48,105,231,188,252,125,126,231,252,190,231,247,251,157,223,239,124,143,5,137,255,110,83,240,191,14,160,130,91,197,31,34,85,132,56,134,77,198,205,96,199,69,30,35,249,109,
11,179,24,203,143,125,127,93,173,246,246,254,117,29,245,83,212,143,162,218,9,93,73,148,122,76,172,82,134,184,69,22,197,179,235,167,191,129,72,116,250,82,38,161,221,201,130,167,55,137,44,6,222,226,115,
52,104,217,124,28,86,105,111,7,48,155,246,122,188,163,229,95,54,6,2,171,28,225,27,44,2,74,20,197,174,36,143,231,104,97,142,222,153,38,255,148,254,12,11,10,110,154,231,5,26,249,16,11,66,73,180,86,120,243,
133,194,119,133,211,140,245,203,185,168,96,67,14,145,175,113,11,77,201,228,60,118,236,110,25,172,163,143,250,39,174,21,159,7,0,4,226,228,232,32,138,166,56,150,194,228,172,106,44,124,183,116,54,226,218,
182,38,79,30,221,243,1,128,146,52,235,40,81,22,3,157,162,241,160,90,246,88,99,71,29,138,109,138,82,120,176,62,25,64,66,122,130,177,122,114,196,138,211,35,52,29,219,144,217,170,53,141,75,94,227,166,13,
173,80,69,39,161,2,128,163,196,176,10,2,164,88,164,2,21,34,89,212,8,8,128,128,64,148,113,212,8,128,132,31,75,231,99,133,77,149,10,175,169,36,172,126,218,56,135,159,149,2,192,165,162,40,141,203,122,230,
221,63,150,103,35,23,127,150,76,104,128,4,89,217,158,12,86,218,101,56,145,106,156,110,8,36,130,137,14,59,76,185,254,70,109,113,147,97,170,121,139,12,57,132,2,64,111,17,32,200,161,189,111,190,253,61,224,
193,251,15,134,44,232,120,68,172,120,110,116,180,144,66,2,178,40,77,206,38,88,232,31,187,218,241,43,232,106,245,81,37,171,79,19,165,135,26,194,176,1,96,145,247,40,176,70,91,151,108,244,177,161,33,59,57,
194,104,139,25,41,18,34,130,132,192,26,29,221,6,3,228,252,233,123,0,77,93,49,214,17,128,28,57,206,209,194,2,186,199,153,236,199,79,152,53,66,196,232,254,106,97,184,231,59,205,120,80,179,66,138,36,25,50,
232,49,96,194,130,10,13,18,13,93,0,129,185,123,35,0,206,189,26,114,228,145,8,80,73,3,75,40,75,19,173,25,7,235,104,201,226,161,165,163,48,236,57,180,106,155,10,169,169,197,102,115,255,162,194,100,153,94,
248,181,1,45,97,162,168,89,64,93,11,48,61,110,240,2,88,237,135,0,45,126,142,114,128,37,164,146,156,87,65,61,7,24,100,26,21,142,38,135,156,157,106,165,185,189,255,234,17,60,120,78,86,254,24,60,152,63,72,
249,64,129,13,21,41,170,218,0,86,71,66,172,120,237,141,26,123,176,34,189,154,195,66,37,43,155,212,131,2,214,128,19,72,44,209,120,166,144,7,0,111,124,253,101,234,185,143,115,63,128,30,215,137,97,166,9,
99,199,72,189,178,241,0,68,163,3,83,131,76,143,130,94,101,104,241,33,112,24,43,201,237,213,84,36,66,45,167,9,211,249,10,192,208,213,92,26,90,15,187,209,144,196,36,23,132,250,61,58,108,196,249,156,191,
19,235,182,217,33,178,100,200,102,153,155,2,104,236,84,97,167,156,216,182,242,172,128,52,41,230,168,227,69,172,93,32,241,135,119,124,94,176,119,221,44,159,160,189,88,148,119,237,222,67,27,109,212,225,
98,127,23,128,255,161,133,30,52,62,0,207,62,55,26,252,36,137,203,61,70,130,164,28,131,215,58,206,53,84,199,67,191,44,179,212,192,210,195,43,87,222,184,91,219,86,174,63,126,250,179,143,187,14,84,215,201,
22,28,87,18,164,140,221,148,211,84,11,112,255,70,136,114,130,62,128,202,206,5,12,187,79,255,46,185,42,202,87,159,70,183,158,92,184,196,69,21,216,247,212,156,183,84,88,100,147,98,227,86,130,83,0,71,206,
191,247,177,251,196,134,169,46,119,230,96,255,205,93,212,178,140,126,55,64,96,176,18,23,169,49,0,179,99,13,101,103,197,233,82,231,148,147,247,113,81,1,194,166,234,246,96,24,70,46,3,212,118,72,152,107,
65,34,47,1,188,184,223,142,153,48,122,154,14,0,40,23,109,36,153,156,88,94,6,42,149,180,187,182,150,108,65,2,21,124,248,151,129,91,214,178,116,22,4,65,175,255,180,63,206,112,127,208,87,89,213,214,121,86,
95,91,15,145,224,80,223,169,11,224,108,176,162,98,136,246,70,87,61,68,147,19,11,73,226,132,243,161,121,135,195,102,210,169,213,205,0,239,255,188,239,19,171,91,64,169,76,231,215,103,255,132,10,38,230,22,
231,180,228,229,107,34,131,155,101,102,167,42,171,20,156,125,199,230,129,120,244,210,71,167,46,128,99,255,36,30,90,104,113,3,204,14,37,162,118,202,128,120,0,224,200,107,53,173,0,131,151,254,49,110,31,
87,33,32,146,41,4,217,140,3,3,57,64,32,137,154,151,89,100,241,19,122,224,245,31,232,180,176,54,19,254,76,68,193,222,99,110,83,54,106,161,169,5,96,236,139,135,128,155,20,177,69,128,67,223,181,213,66,52,
22,158,58,73,140,36,122,178,36,183,179,10,17,19,9,114,92,239,149,0,139,73,167,129,129,59,99,225,21,47,24,245,7,155,181,140,97,60,10,224,31,180,82,134,17,51,161,187,0,109,223,180,183,192,210,237,61,241,
87,233,193,88,44,243,138,205,119,153,146,16,125,12,243,207,233,249,153,141,209,249,235,49,238,93,3,48,122,18,236,163,243,8,64,118,193,133,158,44,42,124,35,0,54,65,47,192,100,255,35,230,208,224,34,33,23,
12,69,169,250,60,102,140,152,176,147,227,97,145,81,138,147,58,190,248,23,64,213,87,238,163,115,186,219,32,69,112,94,75,146,41,22,184,57,30,77,111,204,29,27,189,203,24,215,72,226,38,183,149,85,228,176,
227,1,68,4,156,76,246,158,186,0,176,186,156,154,238,198,56,5,112,252,165,61,232,236,2,224,27,81,7,106,8,51,131,72,34,188,60,107,106,149,139,228,226,94,44,128,128,138,20,209,199,0,10,50,72,168,152,148,
57,232,26,218,59,5,201,240,149,155,98,11,243,147,241,76,153,198,221,226,196,228,0,24,29,188,76,29,26,122,80,178,138,232,167,21,32,45,69,38,205,242,21,165,164,141,250,199,46,202,96,98,31,46,170,168,161,
134,26,218,144,238,7,231,1,124,195,26,194,92,91,27,31,0,136,150,91,186,0,86,231,68,114,228,9,224,195,203,74,176,160,101,230,110,32,168,71,64,64,32,143,154,138,199,22,8,8,172,145,43,169,129,17,126,244,
195,119,143,54,199,227,31,29,36,64,150,185,219,7,123,160,243,213,142,2,155,152,61,136,13,37,122,36,242,68,70,248,22,192,244,104,63,13,91,72,143,12,160,38,74,112,211,145,210,243,105,239,201,222,102,194,
44,82,65,55,226,44,64,207,219,14,23,136,76,220,150,136,163,68,66,34,199,244,232,217,2,43,89,104,192,253,100,110,42,161,196,176,233,38,210,161,66,7,232,201,240,136,8,119,239,124,27,216,223,163,0,124,211,
153,73,39,26,18,60,68,32,130,102,74,102,37,19,134,18,122,249,156,228,55,195,44,6,36,174,13,44,5,171,43,11,1,28,189,117,153,93,164,177,112,6,21,73,180,193,181,176,213,146,64,188,221,141,246,63,123,128,
128,18,27,22,4,22,69,239,245,234,243,50,113,156,211,161,65,71,150,223,162,66,65,122,245,247,181,245,26,181,52,177,182,85,221,79,118,2,144,80,3,121,60,152,0,45,209,251,27,146,178,153,87,176,33,96,231,61,
6,208,145,199,21,51,96,34,68,182,132,176,60,211,2,5,101,140,113,3,23,33,96,13,239,196,134,228,214,109,63,113,32,130,27,48,144,199,132,9,3,90,20,207,15,32,96,164,159,65,116,36,101,87,141,247,137,40,128,
213,224,220,144,68,28,136,83,79,43,94,12,59,63,99,11,234,20,91,248,76,14,7,62,14,227,148,115,91,34,246,40,48,85,213,12,254,133,41,204,40,1,137,36,229,50,201,221,17,64,65,154,24,234,77,41,18,163,14,5,125,
197,220,144,8,240,250,92,85,51,100,22,60,69,202,175,162,14,63,129,157,1,36,210,84,211,140,184,9,64,66,141,136,182,100,119,89,102,62,216,189,146,18,111,252,57,89,66,175,140,24,89,218,233,1,246,255,63,67,
158,213,254,61,0,214,74,239,174,195,29,23,91,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_noise_48_png = (const char*) resource_MainWindow_oscillator_noise_48_png;
const int MainWindow::oscillator_noise_48_pngSize = 17465;


//[EndFile] You can add extra defines here...
//[/EndFile]
