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

    addAndMakeVisible (lfo1ModCombo = new ComboBox ("lfo1ModCombo"));
    lfo1ModCombo->setEditableText (false);
    lfo1ModCombo->setJustificationType (Justification::centredLeft);
    lfo1ModCombo->setTextWhenNothingSelected (String());
    lfo1ModCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    lfo1ModCombo->addItem (TRANS("Filter Cutoff"), 1);
    lfo1ModCombo->addItem (TRANS("Filter Resonance"), 2);
    lfo1ModCombo->addItem (TRANS("Osc 1 Pitch"), 3);
    lfo1ModCombo->addItem (TRANS("Osc 2 Pitch"), 4);
    lfo1ModCombo->addItem (TRANS("Osc 3 Pitch"), 5);
    lfo1ModCombo->addListener (this);

    addAndMakeVisible (lfo2ModCombo = new ComboBox ("lfo2ModCombo"));
    lfo2ModCombo->setEditableText (false);
    lfo2ModCombo->setJustificationType (Justification::centredLeft);
    lfo2ModCombo->setTextWhenNothingSelected (String());
    lfo2ModCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    lfo2ModCombo->addItem (TRANS("Filter Cutoff"), 1);
    lfo2ModCombo->addItem (TRANS("Filter Resonance"), 2);
    lfo2ModCombo->addItem (TRANS("Osc 1 Pitch"), 3);
    lfo2ModCombo->addItem (TRANS("Osc 2 Pitch"), 4);
    lfo2ModCombo->addItem (TRANS("Osc 3 Pitch"), 5);
    lfo2ModCombo->addListener (this);

    addAndMakeVisible (modCombo = new ComboBox ("modCombo"));
    modCombo->setEditableText (false);
    modCombo->setJustificationType (Justification::centredLeft);
    modCombo->setTextWhenNothingSelected (String());
    modCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modCombo->addItem (TRANS("none"), 1);
    modCombo->addItem (TRANS("LFO1"), 2);
    modCombo->addItem (TRANS("LFO2"), 3);
    modCombo->addItem (TRANS("LFO1+LFO2"), 4);
    modCombo->addListener (this);

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

    addAndMakeVisible (lfo1ShapeSlider = new Slider ("lfo1ShapeSlider"));
    lfo1ShapeSlider->setRange (0, 10, 0);
    lfo1ShapeSlider->setSliderStyle (Slider::Rotary);
    lfo1ShapeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo1ShapeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo1ShapeSlider->addListener (this);

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

    addAndMakeVisible (lfo2ShapeSlider = new Slider ("lfo2ShapeSlider"));
    lfo2ShapeSlider->setRange (0, 10, 0);
    lfo2ShapeSlider->setSliderStyle (Slider::Rotary);
    lfo2ShapeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo2ShapeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo2ShapeSlider->addListener (this);

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

    addAndMakeVisible (infoText = new TextEditor ("infoText"));
    infoText->setMultiLine (false);
    infoText->setReturnKeyStartsNewLine (false);
    infoText->setReadOnly (true);
    infoText->setScrollbarsShown (false);
    infoText->setCaretVisible (false);
    infoText->setPopupMenuEnabled (false);
    infoText->setText (String());

    addAndMakeVisible (infoLabel = new Label ("infoLabel",
                                              TRANS("Status\n")));
    infoLabel->setFont (Font (15.00f, Font::plain));
    infoLabel->setJustificationType (Justification::centredLeft);
    infoLabel->setEditable (false, false, false);
    infoLabel->setColour (Label::textColourId, Colours::white);
    infoLabel->setColour (TextEditor::textColourId, Colours::black);
    infoLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    modCombo->setSelectedItemIndex(0);
    lfo1ModCombo->setSelectedItemIndex(0);
    lfo2ModCombo->setSelectedItemIndex(0);

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
    this->lfo1ShapeAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1shape", *this->lfo1ShapeSlider);
    this->lfo1AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1amount", *this->lfo1AmountSlider);
    this->lfo2RateAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2rate", *this->lfo2RateSlider);
    this->lfo2ShapeAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2shape", *this->lfo2ShapeSlider);
    this->lfo2AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2amount", *this->lfo2AmountSlider);
    this->filterAttackAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterattack", *this->filterAttackSlider);
    this->filterDecayAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterdecay", *this->filterDecaySlider);
    this->filterSustainAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filtersustain", *this->filterSustainSlider);
    this->filterReleaseAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filterrelease", *this->filterReleaseSlider);
    this->ampAttackAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampattack", *this->ampAttackSlider);
    this->ampDecayAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampdecay", *this->ampDecaySlider);
    this->ampSustainAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampsustain", *this->ampSustainSlider);
    this->ampReleaseAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"amprelease", *this->ampReleaseSlider);
    /*
    this->modSourceAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"modsource", *this->modCombo);
    this->mod1TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod1target", *this->lfo1ModCombo);
    this->mod2TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod2target", *this->lfo2ModCombo);
    */
    int x = getScreenX();
    int y = getScreenY();

    presetPanel = new PresetDialog(this->presetCombo.get(), processor->getModel());
    presetPanel->setBounds(x,y,getWidth(),getHeight());

    this->fxPanel = new FXPanel(processor);
    fxPanel->setBounds(x,y,getWidth(),getHeight());

    addChildComponent(fxPanel);
    addChildComponent(presetPanel);

    fxButton->setBroughtToFrontOnMouseClick(true);
    storeButton->toFront(false);
    browseButton->toFront(false);
    setupButton->toFront(false);
    presetCombo->toFront(false);

    for(int i = 0; i < processor->getProgramNames().size();i++) {
        presetCombo->addItem(processor->getProgramNames().at(i), i + 1);
    }

    // presetCombo->setSelectedId(1);

    LookAndFeel::getDefaultLookAndFeel().setColour(Slider::rotarySliderFillColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(Slider::trackColourId, Colours::transparentBlack);
    LookAndFeel::getDefaultLookAndFeel().setColour(Slider::thumbColourId, Colours::transparentBlack);

    LookAndFeel::getDefaultLookAndFeel().setColour(ComboBox::backgroundColourId, Colours::black);
    LookAndFeel::getDefaultLookAndFeel().setColour(PopupMenu::backgroundColourId, Colours::black);
    LookAndFeel::getDefaultLookAndFeel().setColour(PopupMenu::highlightedBackgroundColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(PopupMenu::textColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(ComboBox::textColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(ComboBox::outlineColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(ComboBox::arrowColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(ComboBox::buttonColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextButton::buttonColourId, Colours::black);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextButton::buttonOnColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextEditor::outlineColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextEditor::backgroundColourId, Colours::black);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextEditor::highlightColourId, Colours::black);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextEditor::highlightedTextColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextEditor::textColourId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextButton::textColourOffId, Colours::darkorange);
    LookAndFeel::getDefaultLookAndFeel().setColour(TextButton::textColourOnId, Colours::black);

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

    val = processor->getValueTreeState()->getParameter("modsource")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("modsource").convertFrom0to1(val);

    modCombo->setSelectedId(nval);

    val = processor->getValueTreeState()->getParameter("mod1target")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("mod1target").convertFrom0to1(val);

    lfo1ModCombo->setSelectedId(nval);

    val = processor->getValueTreeState()->getParameter("mod2target")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("mod2target").convertFrom0to1(val);

    lfo2ModCombo->setSelectedId(nval);

    processor->addListener(this);

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

    //[/Constructor]
}

MainWindow::~MainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    cutoffSlider = nullptr;
    resoSlider = nullptr;
    osc1PitchSlider = nullptr;
    osc1FineSlider = nullptr;
    lfo1ModCombo = nullptr;
    lfo2ModCombo = nullptr;
    modCombo = nullptr;
    osc1VolumeSlider = nullptr;
    osc2PitchSlider = nullptr;
    osc2FineSlider = nullptr;
    osc2VolumeSlider = nullptr;
    osc3PitchSlider = nullptr;
    osc3FineSlider = nullptr;
    osc3VolumeSlider = nullptr;
    filterModSlider = nullptr;
    lfo1RateSlider = nullptr;
    lfo1ShapeSlider = nullptr;
    lfo1AmountSlider = nullptr;
    lfo2RateSlider = nullptr;
    lfo2ShapeSlider = nullptr;
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
    infoText = nullptr;
    infoLabel = nullptr;
    browseButton = nullptr;
    setupButton = nullptr;
    fxButton = nullptr;
    noiseButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

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
    /*
    this->modSourceAttachment = nullptr;
    this->mod1TargetAttachment = nullptr;
    this->mod2TargetAttachment = nullptr;
    */
    processor->removeListener(this);

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
    resoSlider->setBounds (376, 96, 64, 64);
    osc1PitchSlider->setBounds (27, 96, 64, 64);
    osc1FineSlider->setBounds (88, 96, 64, 64);
    lfo1ModCombo->setBounds (376, 544, 200, 24);
    lfo2ModCombo->setBounds (688, 544, 200, 24);
    modCombo->setBounds (152, 544, 104, 24);
    osc1VolumeSlider->setBounds (184, 96, 64, 64);
    osc2PitchSlider->setBounds (27, 256, 64, 64);
    osc2FineSlider->setBounds (88, 256, 64, 64);
    osc2VolumeSlider->setBounds (184, 256, 64, 64);
    osc3PitchSlider->setBounds (27, 416, 64, 64);
    osc3FineSlider->setBounds (88, 416, 64, 64);
    osc3VolumeSlider->setBounds (184, 416, 64, 64);
    filterModSlider->setBounds (480, 96, 64, 64);
    lfo1RateSlider->setBounds (296, 256, 67, 64);
    lfo1ShapeSlider->setBounds (376, 256, 64, 64);
    lfo1AmountSlider->setBounds (480, 256, 64, 64);
    lfo2RateSlider->setBounds (296, 416, 67, 64);
    lfo2ShapeSlider->setBounds (376, 416, 64, 64);
    lfo2AmountSlider->setBounds (480, 416, 64, 64);
    filterAttackSlider->setBounds (613, 96, 64, 64);
    filterDecaySlider->setBounds (681, 96, 64, 64);
    filterSustainSlider->setBounds (750, 96, 64, 64);
    filterReleaseSlider->setBounds (819, 96, 64, 64);
    ampAttackSlider->setBounds (613, 256, 64, 64);
    ampDecaySlider->setBounds (681, 256, 64, 64);
    ampSustainSlider->setBounds (750, 256, 64, 64);
    ampReleaseSlider->setBounds (819, 256, 64, 64);
    ampVolSlider->setBounds (612, 416, 64, 64);
    presetCombo->setBounds (600, 16, 296, 24);
    storeButton->setBounds (286, 16, 64, 24);
    imageButton->setBounds (96, 64, 24, 24);
    imageButton3->setBounds (160, 64, 24, 24);
    imageButton2->setBounds (128, 64, 24, 24);
    imageButton4->setBounds (104, 224, 24, 24);
    imageButton5->setBounds (168, 224, 24, 24);
    imageButton6->setBounds (136, 224, 24, 24);
    imageButton7->setBounds (104, 384, 24, 24);
    imageButton8->setBounds (168, 384, 24, 24);
    imageButton9->setBounds (136, 384, 24, 24);
    statusLabel->setBounds (720, 480, 150, 24);
    infoText->setBounds (688, 476, 198, 24);
    infoLabel->setBounds (688, 448, 64, 24);
    browseButton->setBounds (441, 16, 64, 24);
    setupButton->setBounds (516, 16, 64, 24);
    fxButton->setBounds (364, 16, 64, 24);
    noiseButton->setBounds (200, 384, 24, 24);
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
        infoText->setText("Cutoff "  + juce::String(cutoffSlider->getValue() * 1000) + "Hz", juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_cutoffSlider]
    }
    else if (sliderThatWasMoved == resoSlider)
    {
        //[UserSliderCode_resoSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterResonance(resoSlider->getValue());
        infoText->setText("Resonance "  + juce::String(resoSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_resoSlider]
    }
    else if (sliderThatWasMoved == osc1PitchSlider)
    {
        //[UserSliderCode_osc1PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Pitch(osc1PitchSlider->getValue());
        infoText->setText("Osc 1 Pitch : "  + juce::String(osc1PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1PitchSlider]
    }
    else if (sliderThatWasMoved == osc1FineSlider)
    {
        //[UserSliderCode_osc1FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Fine(osc1FineSlider->getValue());
        infoText->setText("Osc 1 Fine : "  + juce::String(osc1FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1FineSlider]
    }
    else if (sliderThatWasMoved == osc1VolumeSlider)
    {
        //[UserSliderCode_osc1VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Volume(osc1VolumeSlider->getValue());
        infoText->setText("Osc 1 Volume : "  + juce::String(osc1VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1VolumeSlider]
    }
    else if (sliderThatWasMoved == osc2PitchSlider)
    {
        //[UserSliderCode_osc2PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Pitch(osc2PitchSlider->getValue());
        infoText->setText("Osc 2 Pitch : "  + juce::String(osc2PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2PitchSlider]
    }
    else if (sliderThatWasMoved == osc2FineSlider)
    {
        //[UserSliderCode_osc2FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Fine(osc2FineSlider->getValue());
        infoText->setText("Osc 2 Fine : "  + juce::String(osc2FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2FineSlider]
    }
    else if (sliderThatWasMoved == osc2VolumeSlider)
    {
        //[UserSliderCode_osc2VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Volume(osc2VolumeSlider->getValue());
        infoText->setText("Osc 2 Volume : "  + juce::String(osc2VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2VolumeSlider]
    }
    else if (sliderThatWasMoved == osc3PitchSlider)
    {
        //[UserSliderCode_osc3PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Pitch(osc3PitchSlider->getValue());
        infoText->setText("Osc 3 Pitch : "  + juce::String(osc3PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3PitchSlider]
    }
    else if (sliderThatWasMoved == osc3FineSlider)
    {
        //[UserSliderCode_osc3FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Fine(osc3FineSlider->getValue());
        infoText->setText("Osc 3 Fine : "  + juce::String(osc3FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3FineSlider]
    }
    else if (sliderThatWasMoved == osc3VolumeSlider)
    {
        //[UserSliderCode_osc3VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Volume(osc3VolumeSlider->getValue());
        infoText->setText("Osc 3 Volume : "  + juce::String(osc3VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3VolumeSlider]
    }
    else if (sliderThatWasMoved == filterModSlider)
    {
        //[UserSliderCode_filterModSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterModAmount(filterModSlider->getValue());
        infoText->setText("Filter mod : "  + juce::String(filterModSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterModSlider]
    }
    else if (sliderThatWasMoved == lfo1RateSlider)
    {
        //[UserSliderCode_lfo1RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Rate(lfo1RateSlider->getValue());
        infoText->setText("LFO1 rate : "  + juce::String(lfo1RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1RateSlider]
    }
    else if (sliderThatWasMoved == lfo1ShapeSlider)
    {
        //[UserSliderCode_lfo1ShapeSlider] -- add your slider handling code here..
        //[/UserSliderCode_lfo1ShapeSlider]
    }
    else if (sliderThatWasMoved == lfo1AmountSlider)
    {
        //[UserSliderCode_lfo1AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Amount(lfo1AmountSlider->getValue());
         infoText->setText("LFO1 amount : "  + juce::String(lfo1AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1AmountSlider]
    }
    else if (sliderThatWasMoved == lfo2RateSlider)
    {
        //[UserSliderCode_lfo2RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Rate(lfo2RateSlider->getValue());
        infoText->setText("LFO2 rate : "  + juce::String(lfo2RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2RateSlider]
    }
    else if (sliderThatWasMoved == lfo2ShapeSlider)
    {
        //[UserSliderCode_lfo2ShapeSlider] -- add your slider handling code here..
        //[/UserSliderCode_lfo2ShapeSlider]
    }
    else if (sliderThatWasMoved == lfo2AmountSlider)
    {
        //[UserSliderCode_lfo2AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Amount(lfo2AmountSlider->getValue());
        infoText->setText("LFO2 amount : "  + juce::String(lfo2AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2AmountSlider]
    }
    else if (sliderThatWasMoved == filterAttackSlider)
    {
        //[UserSliderCode_filterAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvAttack(filterAttackSlider->getValue());
        infoText->setText("Filter attack : "  + juce::String(filterAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterAttackSlider]
    }
    else if (sliderThatWasMoved == filterDecaySlider)
    {
        //[UserSliderCode_filterDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvDecay(filterDecaySlider->getValue());
        infoText->setText("Filter decay : "  + juce::String(filterDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterDecaySlider]
    }
    else if (sliderThatWasMoved == filterSustainSlider)
    {
        //[UserSliderCode_filterSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvSustain(filterSustainSlider->getValue());
        infoText->setText("Filter sustain : "  + juce::String(filterSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterSustainSlider]
    }
    else if (sliderThatWasMoved == filterReleaseSlider)
    {
        //[UserSliderCode_filterReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvRelease(filterReleaseSlider->getValue());
        infoText->setText("Filter release : "  + juce::String(filterReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterReleaseSlider]
    }
    else if (sliderThatWasMoved == ampAttackSlider)
    {
        //[UserSliderCode_ampAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvAttack(ampAttackSlider->getValue());
        infoText->setText("Amp attack : "  + juce::String(ampAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampAttackSlider]
    }
    else if (sliderThatWasMoved == ampDecaySlider)
    {
        //[UserSliderCode_ampDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvDecay(ampDecaySlider->getValue());
        infoText->setText("Amp decay : "  + juce::String(ampDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampDecaySlider]
    }
    else if (sliderThatWasMoved == ampSustainSlider)
    {
        //[UserSliderCode_ampSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvSustain(ampSustainSlider->getValue());
        infoText->setText("Amp sustain : "  + juce::String(ampSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampSustainSlider]
    }
    else if (sliderThatWasMoved == ampReleaseSlider)
    {
        //[UserSliderCode_ampReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvRelease(ampReleaseSlider->getValue());
        infoText->setText("Amp release : "  + juce::String(ampReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampReleaseSlider]
    }
    else if (sliderThatWasMoved == ampVolSlider)
    {
        //[UserSliderCode_ampVolSlider] -- add your slider handling code here..
        this->processor->getModel()->setVolume(ampVolSlider->getValue());
        infoText->setText("Amp volume : "  + juce::String(ampVolSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampVolSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainWindow::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == lfo1ModCombo)
    {
        //[UserComboBoxCode_lfo1ModCombo] -- add your combo box handling code here..
        float nval = processor->getValueTreeState()->getParameterRange("mod1target").convertTo0to1(lfo1ModCombo->getSelectedIdAsValue().toString().getFloatValue());
        processor->getValueTreeState()->getParameter("mod1target")->setValueNotifyingHost(nval);
        this->processor->getModel()->setMod1Target(lfo1ModCombo->getSelectedId());

        for (int i = 0; i < lfo2ModCombo->getNumItems();i++) {
            lfo2ModCombo->setItemEnabled(lfo2ModCombo->getItemId(i),true);
        }

        if (modCombo->getSelectedId() == 4)
            lfo2ModCombo->setItemEnabled(lfo1ModCombo->getSelectedId(), false);

        if (!lfo1ModCombo->isEnabled()) {
            return;
        }

        if (lfo1ModCombo->getSelectedId() == 1) {
            processor->selectFilterModulator(TrioAudioProcessor::ModulatorType::LFO1);
        }


        //[/UserComboBoxCode_lfo1ModCombo]
    }
    else if (comboBoxThatHasChanged == lfo2ModCombo)
    {
        //[UserComboBoxCode_lfo2ModCombo] -- add your combo box handling code here..
        float nval = processor->getValueTreeState()->getParameterRange("mod2target").convertTo0to1(lfo2ModCombo->getSelectedIdAsValue().toString().getFloatValue());
        processor->getValueTreeState()->getParameter("mod2target")->setValueNotifyingHost(nval);
        this->processor->getModel()->setMod2Target(lfo2ModCombo->getSelectedId());

        for (int i = 0; i < lfo1ModCombo->getNumItems();i++) {
            lfo1ModCombo->setItemEnabled(lfo1ModCombo->getItemId(i),true);
        }

        if (modCombo->getSelectedId() == 4)
            lfo1ModCombo->setItemEnabled(lfo2ModCombo->getSelectedId(), false);

        if (!lfo2ModCombo->isEnabled()) {
            return;
        }

        if (lfo2ModCombo->getSelectedId() == 1) {
            processor->selectFilterModulator(TrioAudioProcessor::ModulatorType::LFO2);
        }

        //[/UserComboBoxCode_lfo2ModCombo]
    }
    else if (comboBoxThatHasChanged == modCombo)
    {
        //[UserComboBoxCode_modCombo] -- add your combo box handling code here..
        float nval = processor->getValueTreeState()->getParameterRange("modsource").convertTo0to1(modCombo->getSelectedIdAsValue().toString().getFloatValue());
        processor->getValueTreeState()->getParameter("modsource")->setValueNotifyingHost(nval);
        this->processor->getModel()->setModsource(modCombo->getSelectedId());
        if (modCombo->getSelectedId() == 1) {
            lfo1ModCombo->setEnabled(false);
            lfo2ModCombo->setEnabled(false);
            processor->selectFilterModulator(TrioAudioProcessor::ModulatorType::ENV);
        }
        else if (modCombo->getSelectedId() == 2) {
            lfo1ModCombo->setEnabled(true);
            lfo2ModCombo->setEnabled(false);
        }
        else if (modCombo->getSelectedId() == 3) {
            lfo1ModCombo->setEnabled(false);
            lfo2ModCombo->setEnabled(true);
        }
        else if (modCombo->getSelectedId() == 4) {
            lfo1ModCombo->setEnabled(true);
            lfo2ModCombo->setEnabled(true);
        }
        //[/UserComboBoxCode_modCombo]
    }
    else if (comboBoxThatHasChanged == presetCombo)
    {
        //[UserComboBoxCode_presetCombo] -- add your combo box handling code here..
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
        cout << "imageButton4" << endl;
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
        cout << "imageButton5" << endl;
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
        cout << "imageButton6" << endl;
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
        cout << "imageButton7" << endl;

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
        cout << "imageButton9" << endl;

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
        //[/UserButtonCode_browseButton]
    }
    else if (buttonThatWasClicked == setupButton)
    {
        //[UserButtonCode_setupButton] -- add your button handler code here..
        //[/UserButtonCode_setupButton]
    }
    else if (buttonThatWasClicked == fxButton)
    {
        //[UserButtonCode_fxButton] -- add your button handler code here..

        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
            // fxPanel->setVisible(false);
            fxButton->setButtonText("FX");
        }
        else {
            animator->fadeIn(fxPanel, 100);
            //fxPanel->setVisible(true);
            fxButton->setButtonText("Main");

        }
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

    //[UserbuttonClicked_Post]


    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


void MainWindow::visibilityChanged() {
    String currentProgram = processor->getProgramName(processor->getCurrentProgram());
    presetCombo->setText(currentProgram,NotificationType::dontSendNotification);
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
    else if (id == "modsource") {
        modCombo->setSelectedId(nval);
    }
    else if (id == "mod1target") {
        lfo1ModCombo->setSelectedId(nval);
    }
    else if (id == "mod2target") {
        lfo2ModCombo->setSelectedId(nval);
    }

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public Component, public SliderListener, public ButtonListener, public ComboBoxListener, public AudioProcessorListener"
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
          virtualName="" explicitFocusOrder="0" pos="376 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc1PitchSlider" id="860a64caafed9e9a" memberName="osc1PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="27 96 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc1FineSlider" id="4fc66824ef24b612" memberName="osc1FineSlider"
          virtualName="" explicitFocusOrder="0" pos="88 96 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <COMBOBOX name="lfo1ModCombo" id="a03e8efa0f965685" memberName="lfo1ModCombo"
            virtualName="" explicitFocusOrder="0" pos="376 544 200 24" editable="0"
            layout="33" items="Filter Cutoff&#10;Filter Resonance&#10;Osc 1 Pitch&#10;Osc 2 Pitch&#10;Osc 3 Pitch"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="lfo2ModCombo" id="c75702e0ae315fed" memberName="lfo2ModCombo"
            virtualName="" explicitFocusOrder="0" pos="688 544 200 24" editable="0"
            layout="33" items="Filter Cutoff&#10;Filter Resonance&#10;Osc 1 Pitch&#10;Osc 2 Pitch&#10;Osc 3 Pitch"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="modCombo" id="2cdaa14b45ae0270" memberName="modCombo" virtualName=""
            explicitFocusOrder="0" pos="152 544 104 24" editable="0" layout="33"
            items="none&#10;LFO1&#10;LFO2&#10;LFO1+LFO2" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <SLIDER name="osc1VolumeSlider" id="4c562bc5b4c27b9" memberName="osc1VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 96 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc2PitchSlider" id="c7017c174a50a23" memberName="osc2PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="27 256 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc2FineSlider" id="affffebc271612c" memberName="osc2FineSlider"
          virtualName="" explicitFocusOrder="0" pos="88 256 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc2VolumeSlider" id="b8f800c1689b6ef0" memberName="osc2VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 256 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc3PitchSlider" id="bbf153190061abe1" memberName="osc3PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="27 416 64 64" rotaryslideroutline="66ffffff"
          min="-36" max="36" int="1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="osc3FineSlider" id="95d942fd7fabe58b" memberName="osc3FineSlider"
          virtualName="" explicitFocusOrder="0" pos="88 416 64 64" rotaryslideroutline="66ffffff"
          min="-2" max="2" int="0.010000000000000000208" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="osc3VolumeSlider" id="faa7136819574037" memberName="osc3VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 416 64 64" rotaryslideroutline="66ffffff"
          min="0" max="1" int="0.020000000000000000416" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="resoSlider" id="9160d334c6170269" memberName="filterModSlider"
          virtualName="" explicitFocusOrder="0" pos="480 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="lfo1RateSlider" id="b826c2541264d4fa" memberName="lfo1RateSlider"
          virtualName="" explicitFocusOrder="0" pos="296 256 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo1ShapeSlider" id="2ce32ca4da27454e" memberName="lfo1ShapeSlider"
          virtualName="" explicitFocusOrder="0" pos="376 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo1AmountSlider" id="d652f9f030b1a4ca" memberName="lfo1AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="480 256 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="lfo2RateSlider" id="e181558ceae467cc" memberName="lfo2RateSlider"
          virtualName="" explicitFocusOrder="0" pos="296 416 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo2ShapeSlider" id="5f388de49641fb6" memberName="lfo2ShapeSlider"
          virtualName="" explicitFocusOrder="0" pos="376 416 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="lfo2AmountSlider" id="d5b558442927d2fc" memberName="lfo2AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="480 416 64 64" rotaryslideroutline="66fff8f8"
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
          virtualName="" explicitFocusOrder="0" pos="612 416 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.020000000000000000416" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <COMBOBOX name="presetCombo" id="dd92602a91bc7ca9" memberName="presetCombo"
            virtualName="" explicitFocusOrder="0" pos="600 16 296 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="storeButton" id="7f02553932604ec2" memberName="storeButton"
              virtualName="" explicitFocusOrder="0" pos="286 16 64 24" buttonText="Store"
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
         virtualName="" explicitFocusOrder="0" pos="720 480 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="infoText" id="1fabb7f74106637c" memberName="infoText" virtualName=""
              explicitFocusOrder="0" pos="688 476 198 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="0" caret="0" popupmenu="0"/>
  <LABEL name="infoLabel" id="f4ead94012368f89" memberName="infoLabel"
         virtualName="" explicitFocusOrder="0" pos="688 448 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Status&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="browseButton" id="f48c01fdd9a33988" memberName="browseButton"
              virtualName="" explicitFocusOrder="0" pos="441 16 64 24" buttonText="Browser"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="setupButton" id="2f8adecb1d3124d2" memberName="setupButton"
              virtualName="" explicitFocusOrder="0" pos="516 16 64 24" buttonText="Setup"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="fxButton" id="8928dfb414abfd9e" memberName="fxButton" virtualName=""
              explicitFocusOrder="0" pos="364 16 64 24" buttonText="FX" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="noiseButton" id="7351ad630e1b98c0" memberName="noiseButton"
               virtualName="" explicitFocusOrder="0" pos="200 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_noise_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="oscillator_noise_48_png" opacityOver="1" colourOver="ffff7e00"
               resourceDown="" opacityDown="1" colourDown="ffff7e00"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: trio_png, 65759, "../trio.png"
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
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,98,234,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,
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
116,97,68,97,116,101,62,50,48,49,54,45,49,49,45,50,54,84,49,57,58,48,56,58,52,57,43,48,49,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,
109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,49,49,45,50,54,84,49,57,58,48,56,58,52,57,43,48,49,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,
32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,
110,99,101,73,68,62,120,109,112,46,105,105,100,58,49,97,55,54,49,56,51,50,45,101,57,51,50,45,52,53,98,99,45,97,48,100,99,45,101,97,52,48,97,53,55,102,101,55,98,49,60,47,120,109,112,77,77,58,73,110,115,
116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,
99,101,98,52,53,55,99,101,45,102,52,57,49,45,49,49,55,57,45,56,48,55,100,45,99,56,50,51,101,97,97,55,53,56,56,53,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,
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
116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,54,98,53,55,52,48,
51,99,45,49,97,51,56,45,52,100,49,101,45,56,51,101,50,45,97,57,55,55,100,54,55,57,102,57,48,56,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,54,84,49,57,58,48,56,58,52,57,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,49,97,55,54,49,56,51,50,45,101,57,51,50,45,52,53,98,99,45,97,48,100,
99,45,101,97,52,48,97,53,55,102,101,55,98,49,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,
101,110,62,50,48,49,54,45,49,49,45,50,54,84,49,57,58,48,56,58,52,57,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,
115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,
69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,
32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,54,98,53,55,52,48,51,99,45,49,97,51,56,45,52,100,49,101,45,56,51,101,50,45,97,57,55,55,100,54,55,57,102,57,48,56,60,47,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,102,99,100,51,101,99,52,45,54,
57,55,101,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,
53,54,101,100,98,51,48,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,
100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,51,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,
111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,60,47,112,104,111,116,
111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,
101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,49,60,47,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,49,60,47,112,104,
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
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,50,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,
101,120,116,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,
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
101,114,78,97,109,101,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,51,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,80,105,116,99,104,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,
102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,78,97,109,101,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,
99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,
109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,115,111,110,97,110,99,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,115,111,110,97,110,99,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,77,111,100,46,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,111,100,46,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,67,117,116,111,102,102,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,67,117,
116,111,102,102,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,108,116,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,108,116,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,
116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,
58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,
109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,
114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,108,
101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,108,116,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,
97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,108,116,101,114,32,69,110,118,101,108,111,112,
101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,97,121,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,
101,120,116,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,
100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,78,97,109,101,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,
101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,
111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,84,101,120,116,62,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,
108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,112,108,105,102,105,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,112,108,105,102,105,101,114,32,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,
114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,104,97,112,101,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,
58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,
111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,49,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,49,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,
101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,104,97,112,101,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,
104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,
70,79,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,84,
82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,
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
10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,60,47,112,104,111,116,111,115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,
32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,
102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,
102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,
102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,
67,111,108,111,114,83,112,97,99,101,62,49,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,
105,111,110,62,57,49,48,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,
115,105,111,110,62,54,48,48,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,
10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,63,62,135,141,93,228,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,
233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,147,20,73,68,65,84,120,218,236,221,127,124,83,215,157,39,252,115,175,164,43,219,66,198,68,22,1,25,35,236,216,32,155,31,182,73,60,54,110,
193,54,133,151,221,241,60,235,150,13,20,246,137,39,83,154,109,102,121,50,51,15,157,121,202,118,58,109,119,50,219,157,135,204,76,50,59,101,121,189,154,37,201,228,33,91,18,200,208,122,102,104,97,161,197,
64,74,236,33,96,59,252,176,130,141,141,32,22,63,100,5,219,66,182,37,75,186,207,31,95,251,112,125,101,11,89,182,65,50,159,247,171,205,75,200,250,113,127,232,220,243,185,231,156,123,174,144,105,93,194,0,
0,0,0,0,226,143,136,77,0,0,0,0,0,136,170,0,0,0,0,0,136,170,0,0,0,0,128,168,10,0,0,0,0,128,168,10,0,0,0,0,136,170,0,0,0,0,0,113,64,251,208,87,8,194,232,131,177,255,124,40,89,126,248,235,233,53,140,49,89,
249,141,97,95,29,254,22,121,130,111,81,190,87,86,124,168,60,246,235,0,0,0,0,32,177,163,42,229,63,129,49,81,28,249,167,64,255,141,34,173,170,66,225,68,161,147,231,206,240,215,143,251,93,244,22,254,122,
122,204,20,175,228,111,84,46,70,72,241,98,100,86,0,0,0,128,132,143,170,202,176,168,17,153,70,100,162,192,4,250,111,88,19,230,72,46,156,32,167,70,142,170,33,153,49,121,36,77,18,81,96,76,24,249,162,240,
168,26,146,153,28,98,33,153,133,100,22,10,41,150,86,96,162,192,68,113,76,90,29,121,189,204,66,163,111,161,199,76,64,96,5,0,0,0,72,204,168,74,105,143,98,159,86,100,26,13,211,105,152,70,51,18,88,41,74,142,
47,172,119,158,55,205,170,179,173,204,100,166,72,144,161,209,246,81,54,18,136,71,114,167,242,93,50,147,25,11,134,88,48,196,66,244,223,209,118,89,122,177,134,254,43,62,200,184,244,249,244,250,0,253,55,
248,32,37,51,1,105,21,0,0,0,32,209,162,42,27,109,167,212,105,152,86,195,36,29,147,180,76,167,97,90,173,44,10,15,26,86,5,117,70,29,73,129,163,15,4,198,152,32,200,202,207,100,138,151,61,104,242,148,133,
96,232,193,168,83,81,160,184,41,11,194,152,70,92,122,125,72,102,161,144,16,8,178,96,136,5,130,35,239,162,118,95,141,134,105,69,38,138,50,69,109,121,244,91,2,65,33,16,98,129,32,27,14,48,81,100,193,32,11,
4,71,27,101,145,86,1,0,0,0,18,43,170,82,7,186,70,100,90,13,211,235,88,146,196,244,58,57,73,199,116,154,104,115,221,152,142,123,57,210,187,4,198,130,50,11,133,20,163,78,25,211,106,38,124,23,189,62,16,100,
129,32,11,134,132,144,76,13,192,178,70,164,166,95,89,8,123,125,32,196,134,131,108,56,192,124,195,130,63,192,252,1,38,8,108,56,192,152,56,205,105,117,220,161,17,17,198,69,76,187,240,83,8,134,225,185,0,
0,0,48,219,162,170,192,68,129,105,69,166,211,48,189,142,37,75,114,138,94,102,140,133,248,149,80,76,158,56,121,82,248,19,4,97,164,139,93,126,16,148,228,240,23,203,2,19,152,160,213,8,130,162,249,84,150,
101,89,14,127,23,189,94,16,5,89,175,21,244,58,65,30,205,179,34,125,143,60,242,159,49,65,77,96,162,32,36,233,4,189,142,233,180,204,55,204,52,126,65,20,152,192,152,127,52,173,202,147,15,160,227,190,236,
193,43,199,94,215,197,199,27,204,80,100,228,9,85,121,121,153,122,1,70,55,229,184,19,44,140,59,175,2,0,0,0,64,220,69,85,158,117,68,145,105,181,76,175,147,147,36,22,8,132,174,92,235,117,56,239,71,249,185,
41,73,90,171,197,240,76,166,241,98,251,67,222,181,208,156,108,49,39,47,52,167,240,156,213,239,241,119,117,123,110,220,242,78,244,150,197,11,13,89,139,140,115,141,146,192,4,65,96,76,150,229,144,44,203,
114,159,199,127,171,103,192,225,28,24,14,132,20,47,78,153,107,148,172,11,231,48,65,72,210,49,173,40,8,76,22,4,129,210,27,181,176,10,19,132,51,85,4,164,87,62,136,119,99,226,249,200,200,218,49,227,107,71,
199,227,242,97,181,178,60,38,240,78,75,227,171,242,2,56,26,59,241,96,25,30,12,153,24,115,225,154,106,130,5,213,188,10,49,92,118,246,216,155,147,167,55,241,179,176,181,64,118,7,0,0,120,44,196,9,211,207,
232,37,74,162,200,52,130,124,189,219,243,131,87,255,94,142,90,151,163,219,225,244,186,238,13,253,222,215,95,140,252,202,15,127,113,226,119,255,253,255,213,248,169,235,150,203,75,145,179,171,219,243,230,
59,255,20,225,45,111,190,243,79,93,221,247,71,90,81,101,57,36,203,61,247,6,207,95,113,103,44,93,255,159,127,248,247,247,122,251,199,190,248,240,31,188,252,131,223,52,221,186,118,163,95,14,133,180,26,57,
37,137,37,233,100,189,142,105,53,76,43,170,3,168,42,207,137,163,219,65,167,97,122,45,147,116,76,47,49,189,196,36,29,211,235,152,94,171,120,82,199,146,36,150,36,177,36,61,75,209,179,20,61,75,210,179,36,
221,200,139,181,26,38,138,76,28,189,98,76,195,183,173,134,105,52,35,95,161,17,39,49,29,88,248,254,210,106,152,164,101,146,142,37,233,88,146,158,37,75,44,73,79,131,55,152,164,29,25,109,172,211,48,73,203,
244,218,145,5,166,255,37,73,76,47,49,189,150,73,218,145,165,18,199,206,249,245,208,175,22,216,52,175,209,35,78,168,35,211,71,8,15,86,65,171,88,11,113,130,249,40,0,0,0,96,166,77,124,89,213,232,255,68,129,
197,218,162,36,203,81,52,70,149,149,149,149,149,149,61,255,252,243,95,169,248,157,148,36,109,234,28,41,234,207,150,5,198,100,38,95,187,225,9,106,159,254,240,23,245,101,101,101,225,47,172,170,170,170,170,
170,122,225,133,23,94,125,245,213,127,253,249,63,174,204,157,167,21,197,100,189,16,12,201,129,144,64,243,9,200,19,52,172,242,188,174,21,153,86,59,154,90,68,250,254,7,175,231,243,100,241,92,43,210,252,
3,50,13,168,101,254,0,243,15,63,152,187,128,177,7,153,149,27,105,254,20,20,179,192,202,15,9,88,202,111,215,136,76,171,101,146,134,233,180,76,167,29,153,6,129,230,61,8,6,217,112,112,164,97,149,47,170,70,
49,239,24,93,175,22,12,177,96,112,228,245,180,168,140,61,152,14,76,213,132,172,12,121,140,41,86,63,226,26,141,221,129,209,230,200,40,223,53,238,18,70,249,249,202,180,74,19,95,240,175,11,111,20,71,11,43,
0,0,192,227,143,170,242,232,255,232,186,165,88,69,91,171,175,90,181,234,189,3,245,223,254,230,166,85,75,231,77,42,11,223,184,237,93,184,228,217,3,7,14,204,159,63,63,194,43,231,207,159,191,103,207,158,
236,236,236,127,248,187,31,174,204,157,167,211,136,122,157,16,8,178,96,144,5,131,44,36,51,65,30,123,199,44,97,236,181,101,218,145,150,81,106,28,165,53,227,3,64,197,145,217,103,101,81,120,48,165,23,207,
127,190,97,166,211,8,90,145,13,7,88,96,180,35,126,76,79,61,123,48,78,128,102,66,160,225,179,124,152,105,132,198,60,222,162,169,213,142,12,44,214,75,178,164,97,90,205,72,84,29,14,178,64,144,249,3,2,205,
150,48,50,174,67,100,90,141,44,42,34,117,72,102,193,160,64,47,30,14,140,36,236,80,136,133,196,7,51,130,141,201,118,138,246,84,202,118,154,209,105,194,232,51,199,93,163,135,100,77,121,114,205,150,170,91,
157,41,207,28,30,58,170,56,124,27,82,155,183,150,55,42,43,246,32,253,78,2,161,7,147,242,34,173,2,0,0,60,26,66,166,117,73,120,69,46,10,35,215,254,39,235,217,156,36,217,144,196,66,193,160,106,172,234,250,
245,235,127,253,235,95,243,127,190,254,250,235,127,250,167,127,202,255,153,146,164,181,90,82,140,6,109,241,186,109,123,246,236,225,207,191,242,202,43,255,227,127,252,15,122,252,119,127,247,119,223,249,
206,119,148,95,189,108,217,178,37,102,207,208,80,240,186,211,75,99,85,91,91,91,87,173,90,69,127,253,244,211,79,11,10,10,24,99,139,23,26,150,88,230,164,26,117,76,150,207,156,191,123,161,213,158,157,157,
205,63,228,236,217,179,63,248,193,15,126,243,155,223,48,198,246,237,219,247,173,111,125,75,249,21,219,182,109,107,191,248,191,23,154,13,33,89,244,12,178,251,67,194,144,159,249,135,71,166,175,82,109,4,
141,200,36,45,211,235,168,39,93,214,107,153,86,195,52,162,34,42,9,76,150,21,77,137,97,205,200,116,173,152,63,192,134,252,130,111,244,91,120,176,83,182,191,82,170,123,144,17,35,182,170,170,154,84,69,113,
164,103,63,73,146,147,36,38,42,222,42,8,108,56,40,12,7,216,112,64,144,25,165,49,89,167,97,58,237,131,165,21,4,198,152,16,24,13,181,254,0,27,14,176,97,197,146,176,209,145,172,35,41,80,17,82,69,97,204,234,
80,68,166,141,163,92,35,62,49,217,68,113,51,154,76,25,254,150,7,33,85,126,48,47,47,83,44,33,27,247,82,190,177,159,204,215,133,6,132,208,201,6,77,118,70,203,63,178,65,2,15,230,56,147,49,122,21,0,0,224,
145,208,142,31,5,132,145,6,164,64,128,249,134,5,173,70,78,209,139,171,150,61,181,114,233,60,38,135,66,178,124,127,192,31,254,198,229,207,164,90,45,6,65,20,121,72,184,251,197,96,248,203,138,151,167,153,
210,244,140,201,127,243,223,254,188,180,180,84,217,107,191,104,209,162,97,239,229,212,57,210,170,165,186,21,185,115,155,62,237,81,189,215,148,38,149,172,74,23,5,145,90,189,28,78,239,15,255,242,255,85,
230,212,67,135,14,253,241,142,223,95,188,208,240,187,107,23,6,130,242,171,63,248,227,19,39,78,28,56,112,128,191,224,123,223,251,222,87,42,126,190,48,61,69,35,202,90,141,160,211,176,97,106,221,12,169,199,
0,8,188,87,93,199,146,36,57,89,98,58,145,166,37,24,185,54,138,18,158,48,58,201,1,79,126,238,94,223,245,238,251,183,92,3,140,177,37,25,115,86,45,51,209,24,80,157,118,116,34,88,129,105,69,89,171,121,48,
156,32,52,146,234,132,0,117,193,135,20,119,157,149,199,9,109,202,127,242,222,255,36,29,147,180,76,150,229,43,157,189,142,238,251,195,129,208,92,163,180,36,99,142,213,50,71,20,4,173,134,201,50,211,104,
100,173,200,84,83,37,80,6,213,106,152,86,35,232,37,230,31,102,190,0,11,4,70,6,3,240,187,124,209,244,1,188,163,156,207,122,59,26,82,101,202,241,170,53,82,166,85,57,98,78,13,111,85,141,28,85,149,119,229,
229,57,88,121,197,152,48,54,209,42,115,42,207,211,124,0,128,118,164,101,90,166,180,74,81,149,218,152,135,134,5,223,232,168,128,225,224,72,131,43,0,0,0,60,158,168,202,70,235,254,64,136,137,65,38,14,51,
141,40,136,2,75,146,152,192,88,136,137,34,11,137,194,56,215,99,9,34,19,68,81,16,196,145,203,242,67,44,98,79,172,144,156,172,233,238,238,86,63,75,193,97,226,190,96,65,145,65,110,220,242,126,237,107,95,
227,127,242,122,189,127,241,23,127,145,151,157,154,146,172,19,152,32,137,242,138,220,180,223,54,212,31,59,118,172,170,170,138,94,179,106,213,170,13,85,95,239,190,250,155,180,185,122,157,70,80,94,250,163,
76,82,188,247,159,15,0,208,138,114,235,103,95,240,118,101,171,101,206,170,101,52,86,65,190,117,119,240,186,211,211,115,207,71,207,251,135,131,31,254,226,4,69,240,109,219,182,57,59,26,210,82,245,26,81,
78,209,51,198,88,48,52,218,69,174,136,162,26,81,208,138,76,175,123,112,111,173,96,72,8,207,118,236,193,64,76,153,7,38,141,200,68,81,208,105,105,98,48,89,150,101,71,247,253,123,189,253,6,131,161,179,179,
115,117,97,222,226,133,115,104,69,248,238,253,244,234,23,215,187,213,211,50,44,201,152,179,106,217,83,2,27,185,12,43,48,26,49,131,65,33,52,58,218,65,209,146,42,63,152,112,64,96,26,205,232,124,97,19,172,
145,28,54,11,129,34,237,9,242,56,43,248,96,53,199,9,181,138,15,145,25,147,67,2,191,221,195,104,128,150,21,121,84,144,199,238,86,213,232,107,65,16,68,129,137,162,172,211,176,209,19,15,153,126,129,58,141,
32,105,5,141,40,139,130,192,70,191,98,88,102,2,6,173,2,0,0,60,206,168,58,218,129,75,183,33,21,4,38,8,130,32,48,189,142,137,140,133,152,40,136,19,94,52,79,152,204,100,33,210,21,46,253,222,225,126,79,96,
217,178,101,202,160,121,230,116,67,213,151,44,2,99,35,179,178,142,243,254,7,19,10,13,7,130,79,91,178,148,77,170,173,173,173,253,95,220,200,93,104,26,137,203,178,44,50,57,125,94,210,111,127,251,91,30,85,
25,99,27,54,108,248,219,127,251,229,220,84,253,72,87,47,53,109,6,199,11,133,2,93,251,47,235,180,108,120,56,168,159,99,145,229,207,120,190,89,153,155,70,169,233,186,211,243,235,134,127,163,129,10,111,189,
245,214,127,250,195,111,211,64,5,175,215,251,79,31,30,172,250,114,134,114,110,89,97,36,241,200,129,64,176,173,179,159,178,175,213,50,39,47,123,174,78,167,17,25,19,53,140,105,132,232,134,249,242,78,239,
209,89,83,101,185,175,223,247,239,159,223,98,48,24,24,99,231,207,159,79,79,211,83,115,40,207,124,119,191,24,170,249,218,139,202,81,25,228,245,215,95,127,247,205,31,91,45,115,232,19,105,186,0,198,4,89,
150,169,97,149,80,60,29,251,237,35,205,180,195,195,193,182,206,62,213,26,9,140,233,232,66,52,141,98,119,142,121,36,63,100,29,229,176,189,162,62,179,146,101,197,21,96,163,99,112,229,135,124,166,16,182,
0,178,44,203,114,91,103,31,181,73,235,180,162,53,99,78,94,118,90,146,36,48,38,211,61,213,248,117,120,200,169,0,0,0,143,128,56,97,101,78,13,72,35,55,121,98,131,126,54,232,103,195,65,129,9,19,94,250,34,
176,7,73,53,194,5,50,231,46,247,30,253,237,157,158,129,244,255,245,193,63,243,113,168,140,177,247,223,127,223,106,49,60,200,197,227,6,85,69,204,233,243,12,111,220,184,81,249,215,182,182,182,185,70,29,
95,8,65,20,152,32,152,231,233,63,248,224,3,229,203,22,45,90,52,48,24,96,140,105,68,89,20,31,116,25,79,16,189,153,32,50,145,201,90,173,216,213,217,225,245,142,204,246,186,126,253,122,239,208,176,204,228,
107,55,251,191,241,31,94,162,21,233,236,236,252,211,255,251,63,45,182,164,204,75,75,21,4,97,94,90,170,213,98,96,242,232,188,175,92,40,196,100,249,186,243,62,159,255,235,7,175,254,189,195,233,145,67,161,
144,44,243,255,71,53,43,216,200,139,101,254,37,222,161,64,110,110,238,200,249,64,127,191,164,83,207,224,96,158,167,255,215,159,191,43,8,66,103,103,39,61,179,109,219,54,65,16,254,225,239,126,180,120,161,
65,249,169,161,144,44,203,33,198,100,81,144,117,26,89,167,145,117,162,44,10,138,47,83,204,23,38,135,66,14,167,39,124,141,70,62,141,127,172,226,195,39,94,211,209,23,134,66,161,144,226,93,35,111,12,201,
202,255,201,33,198,100,129,201,90,81,214,106,100,173,40,143,180,46,135,30,172,130,234,195,71,62,51,236,175,244,47,106,147,150,101,249,94,111,191,163,251,62,253,137,230,252,162,251,12,107,68,204,90,5,0,
0,240,136,76,56,0,128,9,44,20,98,130,192,2,140,9,129,7,55,175,210,105,166,244,125,123,246,236,9,111,207,99,140,125,250,233,167,187,254,236,255,42,94,97,26,105,147,141,162,201,42,252,37,125,125,125,58,
173,56,54,217,202,58,157,230,234,213,171,202,151,25,141,198,225,128,76,247,201,18,20,237,116,194,120,151,224,60,104,26,150,229,148,100,205,157,59,119,168,29,119,254,252,249,55,63,251,52,89,18,29,78,239,
15,127,248,67,122,201,235,175,191,190,120,97,74,223,253,97,186,7,129,101,126,242,178,172,212,139,237,247,28,78,47,99,108,174,81,103,181,204,113,56,239,247,121,134,173,22,131,195,233,205,203,203,163,55,
158,56,113,162,173,179,127,96,40,56,215,40,57,156,222,62,143,159,49,102,181,204,89,153,155,230,238,245,93,119,222,191,229,26,28,121,102,233,188,27,183,188,14,231,125,122,13,177,90,230,228,100,26,147,147,
52,50,147,251,60,254,149,43,87,242,143,77,79,75,10,223,185,43,115,231,58,239,14,60,253,244,211,108,180,233,183,102,157,69,16,132,139,87,239,81,155,232,66,115,178,164,19,105,177,233,75,249,30,25,24,28,
190,118,243,62,31,8,65,77,143,233,115,245,183,122,6,38,94,163,251,125,158,97,198,152,213,98,240,15,135,110,185,6,173,150,57,115,141,58,197,243,227,172,105,94,118,170,162,213,217,224,29,12,240,33,22,57,
153,198,190,251,254,235,206,251,15,158,89,108,76,78,210,210,254,235,249,98,200,113,107,228,115,24,191,8,111,142,142,49,198,111,72,17,190,130,140,201,253,158,225,235,206,251,188,77,186,181,181,117,56,16,
250,215,134,155,52,224,88,167,25,51,195,151,192,24,218,85,1,0,0,102,90,196,86,85,54,114,189,115,32,200,134,131,35,211,30,5,67,211,191,16,111,189,245,214,250,242,98,171,197,160,213,138,227,221,48,232,177,
145,199,62,72,73,210,222,190,125,155,158,201,205,205,245,14,12,95,251,252,254,95,253,248,53,154,39,235,216,177,99,255,252,79,111,123,7,3,127,251,223,255,145,154,226,214,172,251,63,122,61,62,253,156,12,
250,231,133,22,123,237,150,87,46,180,216,101,89,254,193,171,255,93,150,101,126,73,217,129,3,7,100,89,254,155,191,127,199,209,125,255,66,75,219,232,219,127,175,215,227,191,238,188,255,225,47,78,208,51,
250,57,150,129,193,225,244,140,66,254,26,242,55,127,255,246,39,151,123,110,220,190,47,203,114,207,61,223,179,207,62,203,51,232,92,163,20,222,6,216,235,25,86,6,50,83,154,36,51,230,15,208,8,135,145,251,
50,208,18,202,178,252,251,223,218,121,241,234,23,131,131,195,76,150,237,157,189,204,144,175,188,25,196,189,222,254,255,252,131,215,159,93,187,229,25,91,201,196,107,100,167,23,255,222,215,255,128,214,229,
111,254,254,109,229,243,227,174,105,87,247,131,86,231,191,249,251,119,126,221,240,111,124,101,219,111,244,149,84,108,85,62,211,113,163,95,150,67,129,64,240,226,213,47,158,93,187,133,127,14,221,48,226,
182,103,238,141,219,247,253,129,64,132,21,28,24,12,92,119,122,222,124,231,159,248,69,120,101,101,101,244,2,201,96,25,14,132,70,198,191,50,52,169,2,0,0,196,65,84,101,163,99,0,248,5,224,193,16,11,132,30,
140,8,156,70,63,251,217,207,22,166,39,45,76,79,98,76,136,62,166,134,191,112,238,220,185,202,91,170,82,194,28,30,14,46,93,186,84,249,50,143,199,163,211,10,116,53,15,253,143,201,99,130,169,114,11,132,20,
195,26,83,146,30,92,7,102,181,90,7,134,130,55,111,13,188,240,194,11,244,204,107,175,189,150,185,48,165,167,215,175,76,138,3,3,129,111,124,227,27,244,130,236,236,236,87,95,125,53,59,59,219,235,245,254,
167,63,252,246,182,109,219,232,249,179,103,207,210,128,133,63,251,147,63,224,163,111,233,237,169,6,77,207,61,31,141,124,237,236,236,188,227,236,114,186,6,254,195,127,248,15,231,207,159,255,202,87,190,
34,8,194,178,101,203,58,59,59,55,111,222,124,161,213,238,232,246,250,135,3,252,19,90,91,91,211,231,233,213,217,91,150,25,147,123,238,13,109,216,176,129,158,162,81,19,140,201,174,47,124,124,81,231,204,
153,243,179,159,253,108,217,178,101,94,175,247,213,87,95,253,155,191,127,167,253,166,231,254,224,240,226,156,226,127,254,231,127,254,214,183,190,245,214,91,111,209,50,239,218,181,171,184,184,248,169,167,
158,234,104,107,140,188,70,140,177,61,123,246,80,150,61,124,248,240,67,215,180,207,227,231,109,180,55,111,222,92,95,94,124,232,208,33,198,216,230,205,155,223,124,231,48,99,108,125,121,241,177,99,199,232,
153,223,251,250,31,184,190,24,188,114,173,247,7,175,254,247,61,123,246,204,153,51,103,217,178,101,203,150,45,187,123,247,110,85,85,213,175,126,245,171,33,121,126,228,21,236,184,217,191,120,97,202,31,188,
240,181,179,103,207,210,107,104,92,132,32,8,126,175,83,167,21,101,89,80,222,126,22,0,0,0,30,115,84,229,113,141,199,214,113,175,73,159,148,87,94,121,69,16,132,215,95,127,93,249,228,255,252,159,255,243,
198,237,193,129,161,224,232,253,173,148,1,82,21,181,30,60,61,215,168,59,126,252,184,242,175,121,121,121,125,158,225,209,241,147,178,28,146,153,44,187,238,61,8,40,228,243,207,63,79,73,214,50,198,130,33,
33,52,58,137,82,248,53,230,242,104,180,163,11,204,153,32,232,116,98,127,127,63,189,32,53,53,117,56,16,252,135,61,63,165,38,213,183,222,122,171,163,173,49,69,175,89,160,72,138,166,52,201,59,20,176,90,173,
244,22,30,239,230,165,165,46,94,152,92,92,92,204,195,226,178,37,198,175,174,93,184,32,61,137,143,190,165,183,247,122,252,188,249,243,246,237,219,201,73,154,197,11,82,254,230,199,223,249,222,159,110,239,
104,107,100,140,93,189,122,245,228,201,147,148,131,255,120,231,127,238,249,194,199,63,97,36,131,142,109,8,164,149,234,187,63,204,83,160,195,225,72,73,210,50,38,244,223,31,230,35,7,62,252,240,195,47,186,
207,15,246,223,252,232,163,143,40,11,254,31,95,255,131,27,78,239,31,254,225,31,210,194,252,236,103,63,91,186,100,78,81,94,218,199,39,127,246,149,138,223,249,215,15,247,164,26,180,145,215,232,211,79,63,
29,29,68,44,156,61,245,207,15,93,83,119,175,159,39,215,191,252,209,46,211,92,137,111,252,207,63,255,252,248,145,119,77,105,210,231,159,127,78,207,60,245,212,83,222,193,192,159,252,217,95,209,52,186,59,
119,238,188,122,245,234,213,171,87,255,229,95,254,133,54,206,119,191,251,93,229,208,136,241,86,240,155,126,127,168,255,254,112,78,78,14,15,208,53,229,150,223,171,88,180,106,233,83,140,141,78,170,42,63,
152,36,11,0,0,0,102,154,246,209,127,229,115,203,231,170,102,84,205,206,206,222,247,246,255,250,179,63,249,131,85,75,231,241,139,229,229,209,184,24,158,156,5,38,51,38,232,180,154,59,206,174,206,206,78,
222,104,87,80,80,144,250,212,226,129,193,222,148,100,29,147,233,170,109,185,231,222,208,151,190,244,37,229,71,156,56,113,194,156,150,36,8,44,24,120,48,143,210,184,25,157,223,175,43,24,18,68,65,78,73,210,
58,28,14,30,85,117,134,204,173,91,183,50,198,238,222,189,251,218,107,175,45,93,50,103,96,40,184,122,245,106,122,65,119,119,119,74,146,166,255,126,128,135,194,215,94,123,109,227,154,167,117,58,13,147,101,
123,87,127,102,102,38,61,223,220,220,60,215,168,19,24,235,187,63,92,84,84,196,211,94,170,65,219,115,207,183,93,209,252,153,58,71,107,239,234,79,50,46,250,222,247,191,203,24,83,221,221,160,189,189,125,
96,40,200,63,129,103,80,62,34,151,199,113,222,126,201,24,251,224,131,15,172,38,137,177,7,35,7,232,201,204,121,82,103,247,0,191,66,235,248,241,227,195,129,80,106,106,42,63,187,56,121,242,164,195,225,248,
127,255,250,199,139,23,166,44,72,215,127,214,229,137,188,70,31,126,248,97,81,222,188,133,230,36,198,216,181,155,247,31,178,166,6,109,197,134,175,81,114,109,111,111,159,59,71,215,239,29,86,14,132,77,159,
43,117,118,15,240,103,218,219,219,111,222,30,224,51,151,41,111,78,193,183,6,111,240,158,104,5,51,231,105,22,45,126,134,206,61,174,93,187,54,119,142,142,114,62,19,4,126,59,128,224,195,238,206,0,0,0,0,211,
72,124,244,95,41,48,113,241,194,148,111,126,243,155,119,239,222,229,79,110,222,188,249,197,151,254,180,173,179,143,201,33,57,36,51,153,174,236,30,55,65,62,104,218,93,188,208,240,139,95,252,130,255,201,
96,48,252,215,255,250,95,219,58,251,93,95,12,133,66,65,255,112,240,82,123,239,151,42,106,149,51,85,125,250,233,167,39,142,253,124,174,81,98,76,24,30,189,217,253,68,189,186,178,204,100,69,52,73,73,210,
182,183,183,211,159,22,46,92,248,221,239,126,151,178,212,123,239,189,39,14,223,150,180,26,119,175,159,119,172,95,188,120,49,213,160,117,247,142,233,212,214,233,52,52,195,129,91,17,155,142,31,63,78,23,
253,244,121,198,166,177,52,169,223,27,80,62,51,52,20,252,147,63,251,171,207,62,251,236,91,223,250,86,94,94,222,235,175,191,206,47,228,247,122,189,255,244,225,7,202,60,247,193,7,31,152,231,233,133,176,
173,231,15,4,179,178,115,104,201,71,150,74,43,14,15,135,120,143,124,103,103,231,109,103,23,99,108,193,216,103,22,47,76,126,237,181,215,104,175,101,103,103,127,235,91,223,122,245,213,87,239,245,246,87,
255,187,23,111,222,30,236,9,91,35,121,236,26,125,240,193,7,233,243,36,154,83,225,161,107,202,152,204,183,228,231,159,127,158,172,215,12,12,5,23,44,88,192,248,128,129,57,58,222,236,74,235,190,192,146,77,
75,123,236,216,49,33,204,187,251,254,110,193,195,86,208,221,235,231,13,240,159,125,246,217,92,163,142,177,145,201,40,134,3,194,112,116,55,18,3,0,0,128,199,16,85,199,220,34,104,162,1,165,66,116,79,137,
66,250,188,36,113,248,182,106,42,128,93,187,118,89,115,127,199,233,26,236,187,239,251,244,234,189,95,158,190,229,238,85,223,19,203,221,235,255,229,105,231,167,87,239,245,123,252,76,96,86,139,225,213,31,
253,103,62,233,18,69,222,127,170,255,245,28,115,193,47,207,220,250,223,103,111,255,240,175,254,65,121,171,42,198,216,95,255,245,95,211,148,88,193,144,64,151,139,81,254,144,199,230,143,7,195,30,216,72,
58,17,4,102,72,214,92,184,112,129,94,240,204,51,207,80,163,230,167,159,126,250,215,127,245,231,207,100,206,97,130,208,63,54,153,165,36,105,254,253,243,223,224,157,218,41,201,90,81,16,4,38,14,7,101,101,
46,188,227,236,146,180,34,19,152,42,123,133,167,177,156,252,53,116,43,218,79,63,253,244,223,213,84,190,189,247,191,44,93,186,84,57,222,64,217,105,126,199,217,165,227,247,57,29,137,248,50,99,114,207,23,
67,60,144,157,63,127,222,148,38,49,198,122,20,41,237,252,249,243,233,105,210,160,239,65,11,241,237,219,183,83,146,52,115,231,72,206,174,79,178,172,150,87,94,121,229,173,183,222,162,205,110,48,24,190,243,
157,239,220,184,53,176,32,108,141,4,54,102,141,186,58,59,36,157,86,16,4,38,8,15,93,83,85,114,77,79,147,120,18,165,53,237,247,170,175,12,91,180,104,17,189,222,104,52,46,72,79,250,234,151,23,252,238,186,
133,53,235,44,53,235,44,191,187,110,161,105,174,244,208,21,236,247,6,248,8,129,139,23,47,206,157,163,227,191,7,58,165,9,141,254,84,24,70,172,2,0,0,196,85,84,101,138,225,170,81,94,161,63,209,29,0,4,38,
8,162,248,204,98,227,187,251,254,142,46,148,33,6,131,225,141,55,222,112,56,239,59,186,189,111,190,115,152,134,155,42,39,94,93,181,106,21,191,166,251,186,243,62,125,131,53,99,206,127,252,143,255,81,217,
64,91,86,86,246,235,95,255,154,94,169,234,34,127,253,245,215,63,62,253,47,11,211,83,4,65,240,13,179,225,128,16,12,142,220,59,116,252,245,101,35,195,19,131,33,70,67,14,248,212,170,20,146,148,217,87,16,
132,30,69,82,188,237,236,234,233,243,135,93,189,36,48,129,245,123,2,124,164,230,200,44,253,130,48,48,20,90,187,174,130,62,246,218,181,107,169,115,116,95,244,249,199,166,49,125,77,77,13,189,235,214,173,
91,41,73,154,64,80,230,241,171,173,173,45,213,160,227,201,248,252,249,243,233,243,146,84,39,21,124,160,42,15,100,253,253,253,58,157,200,4,166,28,168,74,41,205,221,59,172,90,248,107,159,123,251,238,15,
175,200,77,59,119,250,192,107,255,245,255,94,185,124,41,223,236,2,99,202,53,50,165,233,25,99,125,247,199,164,201,244,121,122,234,79,31,28,10,62,116,77,7,134,66,202,54,212,1,95,80,185,166,115,231,232,6,
135,66,188,239,190,173,173,45,117,142,238,243,207,63,167,93,67,227,64,220,125,195,2,19,58,63,247,158,252,183,187,157,55,189,253,247,3,15,89,193,57,186,190,251,195,252,158,20,31,124,240,65,250,83,122,190,
249,40,161,134,100,126,175,5,0,0,0,136,155,168,202,71,109,202,15,238,90,52,126,11,170,32,40,254,42,140,31,86,5,97,100,102,253,156,197,169,127,241,23,127,161,76,153,171,86,173,218,253,183,123,163,207,1,
130,32,44,94,104,184,117,253,252,218,181,107,249,133,219,227,186,123,247,238,43,175,188,242,15,127,247,195,149,185,243,4,81,28,14,10,190,97,230,11,140,180,170,142,123,185,216,200,189,64,71,110,115,58,
114,199,87,154,90,149,191,230,216,177,99,103,79,253,243,66,115,178,192,132,126,197,12,80,20,64,149,3,85,105,128,44,109,19,157,86,112,187,221,244,252,178,101,203,174,125,126,255,248,217,219,159,223,246,
242,139,132,22,44,88,224,238,245,247,250,205,127,244,71,127,164,204,82,188,253,56,55,55,247,118,143,175,168,244,247,94,121,229,21,122,166,185,185,217,144,172,29,59,249,191,200,70,110,202,48,178,180,246,
206,222,99,191,117,94,187,121,159,247,212,159,56,113,98,112,40,232,185,31,24,24,10,102,100,100,40,83,154,106,108,168,192,132,255,231,251,175,127,248,139,19,197,235,182,254,219,197,47,174,94,191,255,205,
111,253,33,13,235,252,199,127,252,199,197,11,83,148,107,212,249,249,253,227,31,223,185,237,30,51,207,64,154,81,71,247,84,208,105,197,135,174,169,234,234,180,254,251,65,30,52,29,14,71,74,178,86,25,61,155,
155,155,211,140,82,112,208,249,254,251,239,211,89,196,59,239,188,243,111,23,221,71,78,59,159,255,63,255,184,203,209,253,103,223,127,125,192,247,144,21,76,159,167,151,180,226,253,251,35,243,197,110,220,
184,241,127,255,246,246,197,171,189,129,64,136,141,206,218,166,56,91,3,0,0,128,184,137,170,60,183,209,149,37,19,79,125,26,150,77,39,24,40,32,136,130,32,10,41,201,58,77,224,206,159,252,201,159,40,255,246,
173,111,125,235,223,253,251,111,70,149,82,71,238,107,37,62,179,56,213,148,252,197,243,95,219,64,29,211,252,134,82,60,77,190,245,214,91,89,86,203,111,126,245,30,229,212,64,72,24,244,49,223,176,48,28,24,
105,82,157,40,127,80,239,127,32,196,2,65,97,56,36,8,99,167,86,245,122,189,127,252,199,127,188,196,98,100,130,200,4,97,192,23,84,37,69,213,229,228,115,83,245,52,110,114,110,170,254,227,211,255,250,214,
91,111,177,209,166,226,123,189,253,98,146,197,119,191,155,238,38,48,127,254,124,89,150,255,225,31,254,193,227,241,60,200,82,79,37,253,203,207,255,145,222,149,157,157,125,175,183,127,195,134,13,29,29,29,
244,130,227,199,143,43,251,175,79,156,56,145,62,47,105,52,165,10,140,201,195,129,144,160,95,64,247,97,226,23,162,29,56,112,224,205,119,14,59,110,13,240,11,173,120,79,125,207,61,101,143,252,65,73,39,246,
245,245,181,181,181,237,222,189,155,90,172,247,236,217,115,232,208,161,109,219,182,253,127,111,189,190,216,50,231,227,211,255,162,90,35,77,146,133,119,202,143,46,15,19,4,65,167,211,248,238,59,35,172,105,
74,178,86,217,134,154,102,148,220,189,99,46,249,50,63,149,212,211,231,83,14,141,77,75,213,231,88,83,255,234,135,127,242,195,31,254,240,211,79,63,229,83,162,190,250,234,171,205,205,205,63,251,217,207,30,
186,130,105,169,122,107,198,156,159,252,228,39,116,62,176,103,207,158,209,123,110,221,15,201,99,154,84,25,122,255,1,0,0,30,21,33,211,186,228,225,121,86,96,90,13,147,116,44,73,98,6,61,51,38,203,90,141,
252,233,103,95,240,91,22,49,198,172,150,57,171,150,61,37,8,2,93,47,175,17,101,81,96,178,60,209,203,70,234,123,89,150,249,29,146,20,175,49,200,50,187,113,203,59,209,242,44,94,104,200,90,100,164,75,163,
232,131,72,207,189,161,158,222,33,135,115,64,57,187,234,226,133,41,41,201,218,37,150,57,90,173,70,16,132,64,80,24,240,177,161,97,97,208,199,252,1,230,15,76,120,161,140,32,48,141,200,36,45,211,235,88,138,
158,165,36,201,115,244,178,235,222,208,245,110,15,221,9,73,167,21,173,22,67,94,118,26,111,76,230,43,75,55,91,114,56,189,14,167,119,96,40,192,239,38,79,247,139,149,101,121,120,56,216,214,217,167,186,231,
147,45,43,245,226,213,94,254,228,226,133,6,198,70,182,3,221,207,41,16,12,241,27,56,209,183,123,7,3,252,246,78,57,153,198,142,155,30,190,0,180,59,40,213,211,70,106,187,118,239,122,247,253,177,83,207,178,
197,11,13,75,50,140,78,215,128,226,198,247,6,91,214,92,123,87,159,163,219,59,242,140,197,96,203,78,187,225,188,63,224,11,58,20,159,96,181,204,89,188,32,101,110,170,196,24,11,4,30,44,27,95,60,255,112,136,
47,255,170,101,79,209,210,208,168,217,79,21,251,61,124,77,249,109,165,104,75,58,93,131,170,155,120,221,184,237,29,243,204,210,121,244,81,183,238,14,56,110,141,220,197,106,228,195,45,115,150,88,230,56,
239,122,29,78,239,132,43,152,97,176,101,165,49,198,110,220,186,207,63,150,49,182,36,99,78,254,51,243,66,76,188,63,40,120,125,108,200,207,252,195,35,227,86,1,0,0,32,142,162,170,56,26,218,146,245,44,89,
146,83,244,76,35,142,76,130,58,26,236,4,65,96,254,128,48,28,16,130,50,19,5,38,105,101,73,59,18,35,199,190,76,209,214,58,114,27,121,69,59,213,200,125,78,149,93,242,252,145,48,250,17,76,24,157,66,136,222,
71,177,152,241,153,174,198,172,226,200,123,100,198,124,195,130,111,152,13,249,5,223,48,243,15,51,127,96,164,99,119,220,177,170,20,85,53,34,147,116,44,73,199,82,244,114,138,158,37,233,248,215,60,88,107,
197,189,87,199,157,10,86,224,75,49,118,197,71,23,85,241,9,227,126,134,48,118,179,140,219,162,55,230,51,70,215,57,16,100,193,144,32,203,76,163,97,58,141,60,250,233,242,216,141,253,208,145,199,242,120,205,
227,242,131,61,162,124,82,113,199,132,240,229,97,170,245,31,111,123,9,234,79,157,252,189,161,70,63,54,108,237,228,232,62,144,175,131,32,8,44,24,18,6,253,108,96,72,24,244,51,223,48,243,7,38,28,220,12,0,
0,0,211,46,170,121,85,169,94,14,134,216,112,144,137,195,148,57,228,36,73,208,105,4,129,141,132,173,225,128,224,11,176,64,80,24,14,48,89,102,130,192,134,3,130,95,43,75,90,65,167,121,144,93,66,178,16,8,
50,89,22,66,33,38,138,178,32,8,26,81,16,69,89,150,5,117,98,153,32,81,8,140,5,101,33,48,114,151,87,33,36,51,129,49,81,148,53,162,160,211,8,90,141,172,202,94,2,99,129,144,48,28,96,195,65,230,243,11,212,
146,58,28,96,195,163,57,85,158,48,240,176,80,136,9,2,11,6,153,95,96,162,40,48,38,7,67,130,164,19,180,162,60,218,62,58,166,129,77,28,155,195,121,48,146,101,22,24,105,187,21,100,153,175,248,200,103,142,
13,79,20,170,85,249,92,80,110,22,65,21,87,195,194,93,72,102,129,32,27,14,48,154,229,128,49,166,17,153,86,35,232,180,178,86,35,136,2,19,198,38,232,135,158,207,76,16,94,121,64,103,50,99,162,160,88,188,176,
55,6,67,44,20,100,50,19,100,153,9,194,131,213,31,179,46,81,45,76,132,128,58,114,130,193,132,209,143,85,71,230,40,63,92,96,130,76,59,151,126,45,67,126,65,57,172,25,0,0,0,226,43,170,50,54,50,73,190,16,28,
201,129,161,144,48,28,100,90,81,22,69,65,16,88,40,196,2,193,7,115,63,201,50,19,24,211,104,152,46,32,248,52,76,167,161,203,105,40,26,10,161,209,169,76,5,38,136,34,211,136,76,20,153,24,118,119,245,240,198,
62,126,151,215,80,136,218,11,89,32,56,18,139,69,65,208,136,76,163,97,90,81,16,197,145,123,181,203,163,179,22,4,67,194,112,144,5,130,44,16,96,254,32,11,6,71,239,60,20,122,200,125,50,233,175,129,32,19,4,
230,27,30,249,94,223,48,211,136,76,16,25,99,130,172,248,132,145,27,196,139,35,43,34,140,126,66,104,116,114,86,254,141,2,19,70,214,90,148,69,65,224,43,46,203,2,99,178,240,96,122,169,145,143,165,89,23,148,
77,130,163,79,42,110,67,53,250,26,74,216,129,16,11,6,31,116,85,139,34,211,138,76,163,17,104,151,137,130,170,133,151,49,38,140,219,122,26,182,109,100,129,241,196,201,66,178,192,100,101,70,100,162,32,11,
163,173,153,180,144,33,153,133,228,145,157,62,242,43,18,4,106,167,231,171,175,220,227,225,83,76,200,19,100,76,121,52,151,51,198,248,36,188,194,72,107,187,192,119,1,223,86,225,105,117,220,177,167,194,104,
78,149,101,22,8,10,195,65,230,15,48,255,240,200,246,156,250,13,219,0,0,0,96,154,163,234,200,29,162,168,5,49,48,242,192,31,96,26,81,16,133,145,184,16,146,71,234,242,209,52,198,196,32,27,22,153,40,62,120,
25,159,163,148,114,0,165,25,81,96,60,60,141,215,34,57,38,89,200,138,25,46,149,247,13,162,232,163,17,70,190,78,16,120,164,30,179,108,252,134,67,252,38,177,15,109,36,11,133,24,19,217,240,232,90,7,130,76,
163,25,105,61,165,247,134,228,49,81,85,20,31,36,36,198,30,124,11,5,86,122,172,92,113,122,203,196,235,252,32,72,201,15,218,139,133,113,59,237,249,203,104,203,240,83,2,250,80,205,232,190,208,136,99,146,
244,216,180,58,225,199,134,127,49,95,181,7,171,79,195,50,70,119,165,204,198,236,2,121,226,253,30,225,27,31,242,179,100,15,118,162,98,49,70,210,127,88,28,143,180,118,138,51,129,145,183,209,36,101,161,16,
27,166,211,155,16,46,255,7,0,0,136,203,168,202,43,245,208,232,109,72,131,193,145,150,69,158,120,194,26,14,71,198,122,138,194,216,151,133,69,22,158,108,4,225,225,195,38,121,230,227,223,53,26,161,70,190,
78,249,105,252,245,140,167,55,121,116,45,162,139,68,148,209,71,210,42,133,93,145,137,129,145,155,149,202,242,131,0,205,187,154,133,176,249,17,70,178,148,34,216,133,175,120,52,153,108,76,158,21,30,18,221,
100,126,209,250,104,128,19,133,7,251,130,111,234,240,187,30,76,10,95,53,190,238,130,98,119,40,111,163,192,99,250,131,213,87,180,64,199,22,85,199,44,195,216,141,35,140,183,149,34,55,159,135,159,43,208,
47,135,2,235,164,78,111,0,0,0,224,81,71,85,222,176,42,200,76,22,88,72,102,129,208,120,129,76,121,125,148,192,130,33,117,91,233,68,193,34,154,156,202,152,58,46,168,154,244,168,167,94,80,95,191,52,218,71,
44,63,232,189,141,62,109,60,72,171,140,201,162,122,141,148,159,166,12,169,225,237,121,17,86,124,92,227,70,201,40,55,17,27,175,173,81,245,141,99,71,14,68,27,148,199,93,47,85,200,83,126,254,152,180,58,241,
234,143,237,163,159,76,78,149,213,89,83,136,152,230,163,57,13,24,55,7,71,127,122,3,0,0,0,143,33,170,62,168,164,133,145,134,180,137,174,9,87,253,59,194,40,195,24,130,69,120,66,122,112,13,189,60,206,7,170,
162,76,204,121,72,30,77,222,108,10,23,254,140,219,116,23,190,180,81,182,50,62,180,201,80,158,120,95,68,223,220,24,155,137,122,222,229,241,86,127,230,22,38,250,56,30,205,94,67,72,5,0,0,136,235,168,170,
170,176,163,172,184,229,40,255,58,181,28,48,206,82,77,119,176,152,236,138,79,110,179,200,81,111,178,41,172,224,204,109,156,201,46,155,60,181,21,153,174,197,0,0,0,128,56,39,98,19,0,0,0,0,0,162,42,0,0,0,
0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,192,68,180,216,4,0,0,0,227,122,121,109,58,54,2,64,204,126,122,166,103,234,31,34,100,90,151,96,83,2,160,242,3,120,162,
42,63,148,83,128,68,41,179,211,25,85,81,176,1,21,30,202,8,64,162,151,95,101,57,189,211,31,248,168,227,126,239,96,80,20,69,198,152,32,8,130,32,96,227,3,60,84,90,178,88,186,36,249,233,84,237,212,203,236,
244,68,85,84,192,128,10,15,149,31,64,2,85,126,15,45,170,183,251,134,127,123,205,219,59,24,20,4,65,28,53,82,113,162,192,2,68,91,102,53,191,179,88,50,207,17,167,82,96,167,26,85,149,21,240,173,94,63,85,192,
130,2,246,19,196,161,121,41,154,53,89,41,51,90,225,161,242,3,136,231,202,47,66,81,189,221,55,252,219,107,247,239,13,4,69,81,212,140,162,210,74,229,20,165,21,32,26,178,44,211,131,84,61,91,109,209,164,27,
132,216,10,236,148,162,42,175,128,41,164,246,13,133,68,5,84,192,16,231,69,40,45,89,252,157,197,250,249,70,205,140,166,85,84,126,0,113,88,249,77,84,84,239,244,7,62,234,240,220,27,8,106,181,90,141,70,67,
255,37,116,134,137,210,10,48,169,210,26,10,133,24,99,6,109,176,112,129,16,91,129,141,61,170,82,169,190,213,235,255,168,195,211,59,24,210,40,160,2,134,68,41,66,178,44,27,37,249,217,12,45,181,208,204,80,
103,34,42,63,128,120,171,252,38,46,170,247,123,7,131,218,177,168,94,67,87,33,64,108,101,86,150,229,80,40,100,208,6,87,154,67,49,20,216,24,163,170,34,167,222,239,27,10,81,237,139,10,24,18,177,194,147,101,
217,160,13,22,45,20,167,177,121,6,149,31,64,156,87,126,227,150,214,127,186,208,219,59,24,212,233,116,90,173,150,254,171,42,170,40,173,0,177,149,86,42,176,41,154,64,133,53,52,217,210,170,141,185,72,243,
156,202,203,51,42,96,72,208,34,228,11,133,62,189,27,88,53,95,78,55,8,47,175,77,159,222,182,85,202,169,168,252,0,166,189,228,138,162,56,24,18,47,245,4,42,12,161,169,159,85,222,238,27,230,167,148,58,157,
142,151,86,106,121,65,63,33,64,204,165,149,254,43,8,194,144,44,126,49,232,123,42,89,158,84,85,171,141,173,72,83,78,237,247,201,186,81,168,128,33,161,43,188,161,144,120,169,39,176,82,8,153,82,216,180,164,
85,84,126,0,241,92,249,133,59,219,233,165,30,66,101,189,134,171,132,1,166,136,151,29,81,20,101,89,110,187,39,125,41,217,55,169,79,152,92,84,141,156,83,81,1,67,162,87,120,151,221,129,229,44,48,93,105,21,
149,31,64,220,86,126,170,122,237,78,127,160,111,72,86,117,18,162,135,16,96,26,203,172,32,8,178,44,15,4,133,47,6,253,147,58,183,20,99,248,62,234,247,87,214,190,132,95,77,133,178,13,137,85,120,248,212,81,
131,33,221,101,247,52,220,109,88,89,249,169,134,168,242,41,50,80,70,0,166,94,126,169,52,13,4,181,95,12,10,108,10,147,124,159,237,244,210,236,28,202,150,23,212,101,0,51,81,231,182,221,211,79,234,93,147,
136,170,188,73,149,198,167,170,154,84,81,1,195,44,168,240,40,173,78,177,206,67,229,7,16,255,149,159,10,159,199,134,70,178,161,168,2,204,92,129,245,6,38,215,78,58,233,86,85,101,135,38,122,73,96,246,85,
120,162,40,78,177,206,67,229,7,16,255,149,159,186,46,156,96,194,99,0,152,137,2,59,35,81,149,95,35,50,110,135,38,42,96,152,77,105,117,32,168,185,55,36,178,41,55,172,162,242,3,136,219,202,47,188,180,82,
129,197,48,54,128,120,51,185,211,208,223,94,187,175,236,205,68,135,38,204,214,180,218,118,79,154,134,210,133,202,15,32,81,234,66,92,107,1,48,59,162,106,223,144,140,14,77,120,18,210,170,55,160,65,229,7,
240,164,157,163,162,192,2,36,124,84,69,135,38,60,57,245,22,42,63,0,0,128,196,139,170,232,208,4,68,85,0,152,125,69,30,53,26,192,236,137,170,40,210,0,168,252,0,0,0,30,129,73,207,118,30,115,135,102,69,69,
69,102,102,166,197,98,161,127,122,60,158,43,87,174,156,59,119,206,235,245,62,178,181,221,185,115,167,36,73,140,177,183,223,126,219,229,114,97,247,67,66,216,177,99,135,209,104,100,140,53,53,53,53,52,52,
80,105,42,41,41,97,140,217,237,246,250,250,122,108,34,0,20,222,68,100,179,217,106,107,107,41,18,236,221,187,23,63,24,152,158,168,26,3,179,217,92,91,91,107,50,153,148,79,26,141,198,146,146,146,146,146,
146,250,250,122,187,221,254,8,22,163,182,182,150,114,42,64,252,40,45,45,45,47,47,159,232,175,187,119,239,142,190,148,109,223,190,157,30,227,76,12,0,133,55,114,116,14,135,232,12,179,36,170,198,208,152,
106,48,24,54,111,222,76,101,195,237,118,31,63,126,220,225,112,24,12,134,154,154,154,172,172,44,74,144,131,131,131,14,135,227,177,20,78,128,248,135,198,6,0,20,94,0,68,213,153,82,92,92,76,49,209,239,247,
31,56,112,128,186,251,189,94,239,193,131,7,235,234,234,104,60,192,186,117,235,246,239,223,207,207,47,151,47,95,78,253,35,196,233,116,222,188,121,147,186,78,136,106,44,129,219,237,238,232,232,80,190,0,
32,17,69,223,12,3,0,40,188,83,193,7,36,0,32,170,178,156,156,28,122,208,214,214,166,26,150,122,241,226,69,138,155,22,139,197,96,48,120,189,94,171,213,186,117,235,86,213,39,88,44,22,163,209,72,133,202,96,
48,108,219,182,77,53,150,192,100,50,153,76,166,8,165,142,206,107,249,152,24,128,196,194,79,234,78,157,58,213,216,216,24,254,2,85,71,100,120,103,98,97,97,225,210,165,75,169,31,131,78,255,46,94,188,216,
210,210,66,255,84,14,23,123,247,221,119,55,108,216,96,179,217,48,116,12,224,201,44,188,202,101,102,140,173,94,189,154,218,155,236,118,251,137,19,39,188,94,175,193,96,120,229,149,87,232,197,202,33,124,
124,24,174,211,233,228,205,79,145,151,127,34,165,165,165,43,86,172,224,117,125,248,187,248,66,54,53,53,37,37,37,21,20,20,208,243,173,173,173,71,143,30,85,126,84,108,11,0,79,86,84,229,63,181,222,222,94,
213,159,186,187,187,249,227,204,204,76,187,221,190,113,227,70,250,103,87,87,215,193,131,7,249,175,159,231,221,13,27,54,208,7,250,253,254,95,253,234,87,84,66,42,42,42,138,138,138,176,47,1,198,85,91,91,
107,179,217,84,167,127,22,139,37,45,45,77,117,130,167,215,235,191,253,237,111,99,72,55,0,10,47,99,108,205,154,53,202,15,164,37,169,175,175,247,122,189,93,93,93,20,254,150,44,89,194,163,42,175,169,219,
219,219,39,187,252,227,102,101,213,187,172,86,107,248,104,90,101,31,44,99,172,160,160,32,53,53,149,231,135,216,22,0,158,184,168,26,129,114,240,120,90,90,26,99,140,151,138,212,212,212,138,138,138,203,151,
47,187,92,174,134,134,6,222,164,202,127,115,31,127,252,49,47,30,252,5,0,9,109,215,174,93,202,127,70,127,149,67,99,99,227,181,107,215,198,189,50,163,180,180,148,74,141,219,237,174,175,175,119,185,92,188,
25,166,164,164,36,124,10,14,126,6,8,0,179,184,240,210,101,205,202,103,194,47,113,238,238,238,62,114,228,136,215,235,229,205,165,54,155,141,26,86,175,94,189,74,81,53,47,47,143,90,49,173,86,43,111,72,186,
120,241,98,12,203,79,42,42,42,40,167,250,253,254,195,135,15,59,28,14,254,46,155,205,118,231,206,29,85,227,52,111,216,226,11,153,149,149,101,181,90,29,14,71,108,11,0,113,72,124,140,223,109,54,155,249,99,
106,115,189,114,229,10,253,211,100,50,149,148,148,108,223,190,125,215,174,93,117,117,117,86,171,149,49,150,153,153,201,95,127,237,218,53,236,60,128,135,90,177,98,5,61,248,228,147,79,168,10,180,219,237,
110,183,155,158,204,205,205,85,190,216,231,243,33,167,2,160,240,146,27,55,110,80,152,187,124,249,50,127,50,37,37,133,49,214,210,210,226,247,251,25,99,146,36,81,28,228,61,236,157,157,157,244,174,73,45,
63,167,28,52,72,215,91,219,237,246,174,174,46,122,114,241,226,197,225,11,73,15,26,26,26,104,145,248,194,196,182,0,16,135,102,188,85,213,237,118,211,153,22,181,155,42,101,100,100,240,199,55,111,222,164,
159,154,114,208,9,177,88,44,155,54,109,122,243,205,55,177,183,96,118,155,137,43,51,248,220,23,85,85,85,85,85,85,170,191,134,151,74,0,120,18,10,239,164,46,171,26,119,254,172,182,182,54,170,172,105,12,0,
143,152,124,24,104,108,203,63,238,160,193,254,254,126,122,144,158,158,30,97,57,125,62,159,114,196,2,142,126,179,198,140,183,170,118,116,116,208,131,188,188,60,131,193,160,252,211,202,149,43,233,129,211,
233,228,237,240,71,143,30,221,189,123,247,158,61,123,154,154,154,248,57,162,36,73,153,153,153,20,103,201,51,207,60,131,157,7,240,80,24,120,10,128,194,59,19,206,159,63,207,43,119,179,217,76,17,211,237,
118,243,169,39,31,251,242,227,232,55,107,204,120,171,234,185,115,231,242,243,243,141,70,163,36,73,219,182,109,83,206,171,202,199,77,159,62,125,154,30,236,220,185,179,185,185,153,15,81,181,217,108,124,
112,234,224,224,160,114,40,247,234,213,171,123,123,123,41,203,150,150,150,174,94,189,26,87,43,3,132,227,221,26,199,142,29,195,69,175,0,40,188,211,197,229,114,57,157,78,139,197,34,73,82,101,101,37,61,201,
27,167,98,94,254,113,123,98,83,83,83,233,65,79,79,207,68,111,52,24,12,188,25,149,90,100,113,244,67,84,141,150,215,235,61,116,232,16,221,173,202,100,50,133,207,69,85,95,95,175,60,9,11,31,235,205,24,179,
219,237,244,154,35,71,142,208,100,85,70,163,177,182,182,54,202,201,167,194,111,1,64,99,216,49,29,15,204,26,202,30,186,229,203,151,243,174,189,75,151,46,209,84,56,101,101,101,76,209,55,87,90,90,154,155,
155,123,238,220,57,12,78,5,64,225,141,77,123,123,59,53,57,241,129,170,231,206,157,227,127,141,109,249,59,58,58,40,95,230,229,229,209,112,85,155,205,198,63,159,143,76,13,87,83,83,67,15,252,126,63,77,65,
128,163,31,162,234,228,202,225,190,125,251,84,243,246,123,60,158,43,87,174,168,46,193,107,106,106,154,63,127,62,255,81,50,198,186,186,186,174,94,189,202,127,97,94,175,151,62,42,39,39,135,143,104,161,143,
194,190,132,39,28,181,112,48,197,181,189,111,191,253,118,99,99,227,211,79,63,109,179,217,140,70,227,184,3,182,0,224,9,44,188,225,173,66,49,220,88,245,226,197,139,202,9,173,186,186,186,148,21,122,108,203,
223,208,208,64,81,65,146,36,85,219,150,221,110,15,159,155,182,188,188,92,117,123,219,147,39,79,210,98,224,232,135,168,58,105,209,140,224,142,114,148,247,100,103,167,66,211,41,60,9,14,31,62,76,19,128,171,
158,167,142,11,171,213,170,252,19,221,227,141,95,12,11,0,40,188,147,229,245,122,59,59,59,249,178,93,189,122,117,90,150,127,255,254,253,15,189,5,0,215,213,213,149,154,154,74,175,116,58,157,170,182,82,28,
253,102,7,33,211,186,36,154,215,189,188,54,157,49,246,191,206,123,147,146,146,244,122,189,86,171,213,104,52,162,40,98,11,194,108,245,149,12,15,99,236,167,103,122,98,120,47,149,151,3,205,131,146,36,161,
188,0,60,2,161,80,104,99,166,55,134,50,139,210,154,136,30,122,27,48,152,77,165,21,165,17,0,0,0,0,226,20,162,42,0,0,0,0,32,170,2,0,0,0,0,76,134,22,155,0,0,0,0,18,200,254,253,251,177,17,158,28,104,85,5,
0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,
5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,
85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,
85,0,0,0,0,0,68,85,0,0,0,0,64,84,197,38,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,
0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,
0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,141,172,162,162,98,215,174,93,86,171,21,187,54,
110,21,22,22,238,218,181,171,176,176,16,155,2,0,0,199,82,152,81,213,213,213,187,118,237,50,24,12,137,187,10,218,199,248,221,47,189,244,146,201,100,226,255,116,58,157,23,47,94,108,105,105,161,196,89,82,
82,114,236,216,49,250,231,75,47,189,196,24,219,183,111,95,60,108,50,131,193,240,202,43,175,132,63,223,218,218,218,214,214,182,117,235,214,214,214,214,163,71,143,206,226,223,189,106,239,168,246,169,36,
73,123,247,238,197,209,33,161,109,217,178,37,43,43,139,49,214,213,213,117,240,224,65,179,217,92,93,93,109,177,88,24,99,77,77,77,13,13,13,216,68,113,85,15,21,20,20,236,217,179,199,235,245,98,107,60,246,
26,205,233,116,238,223,191,95,245,188,170,254,138,255,93,166,170,157,253,126,127,91,91,219,249,243,231,93,46,23,118,116,60,236,17,143,199,115,229,202,149,39,231,80,172,125,188,95,239,247,251,223,120,227,
13,202,127,155,54,109,170,170,170,26,26,26,178,219,237,241,191,225,168,10,87,61,249,132,180,230,158,59,119,174,168,168,104,233,210,165,170,168,106,181,90,77,38,83,83,83,19,14,43,211,206,108,54,63,251,
236,179,5,5,5,252,56,213,217,217,121,230,204,153,135,86,117,116,102,53,169,211,167,234,234,234,244,244,244,183,223,126,155,87,75,181,181,181,62,159,111,247,238,221,15,125,111,97,97,97,85,85,149,170,164,
156,60,121,18,53,156,114,227,188,255,254,251,14,135,131,63,111,179,217,106,107,107,195,159,159,137,68,203,15,185,241,89,25,199,79,147,68,12,37,212,100,50,249,253,254,244,244,116,131,193,48,11,78,27,148,
63,149,194,194,194,149,43,87,110,223,190,253,212,169,83,141,141,141,137,178,10,165,165,165,185,185,185,116,142,237,118,187,63,249,228,147,240,230,149,216,74,241,184,45,53,227,138,208,178,51,149,61,66,
31,203,24,123,66,210,170,54,78,150,195,235,245,238,223,191,127,231,206,157,95,254,242,151,237,118,123,67,67,67,34,238,0,135,195,17,77,117,158,232,188,94,111,79,79,79,70,70,134,234,121,222,14,135,80,50,
19,17,199,233,116,242,248,88,81,81,145,159,159,191,104,209,162,153,168,215,243,242,242,58,59,59,121,184,164,51,144,83,167,78,69,255,9,188,229,213,108,54,215,214,214,110,222,188,249,221,119,223,69,155,
31,113,187,221,121,121,121,202,72,186,108,217,50,183,219,173,108,50,153,9,217,217,217,126,191,95,146,164,194,194,194,169,215,154,160,178,124,249,114,198,216,199,31,127,92,94,94,190,114,229,202,4,202,115,
209,104,105,105,105,105,105,169,173,173,45,47,47,239,237,237,77,136,230,36,58,55,107,109,109,165,70,110,179,217,92,89,89,105,181,90,235,235,235,103,193,30,105,104,104,200,207,207,47,42,42,66,84,125,12,
60,30,143,209,104,228,117,51,181,49,240,118,239,93,187,118,209,129,158,170,103,58,207,163,19,38,191,223,223,220,220,204,247,217,188,121,243,74,74,74,40,57,57,157,206,195,135,15,63,154,106,146,90,176,120,
61,189,101,203,150,140,140,140,147,39,79,242,229,180,219,237,202,114,66,133,135,150,83,181,10,113,174,189,189,221,98,177,148,150,150,42,143,200,249,249,249,110,183,155,234,96,131,193,176,97,195,6,155,
205,22,121,213,172,86,235,214,173,91,149,125,202,170,115,208,157,59,119,118,119,119,247,247,247,231,229,229,73,146,228,247,251,63,254,248,227,91,183,110,173,91,183,142,54,169,106,255,38,238,38,141,240,
163,170,172,172,84,245,42,54,52,52,156,59,119,110,195,134,13,51,241,117,146,36,249,124,62,254,204,188,121,243,24,99,67,67,67,49,124,154,203,229,186,116,233,82,121,121,121,113,113,49,134,13,144,142,142,
142,252,252,124,85,136,108,110,110,158,209,168,106,179,217,140,70,227,169,83,167,214,172,89,99,181,90,17,85,167,93,126,126,190,211,233,108,108,108,92,189,122,117,110,110,46,63,48,134,215,95,159,127,254,
57,117,143,240,129,100,52,18,64,217,35,17,126,236,138,80,223,41,43,148,205,155,55,251,253,254,3,7,14,204,68,149,87,95,95,159,157,157,93,92,92,204,163,106,228,227,45,157,81,83,157,238,118,187,47,93,186,
68,155,165,174,174,142,86,132,14,224,167,79,159,166,90,99,199,142,29,126,191,95,121,250,61,217,38,76,229,166,40,40,40,232,234,234,226,189,73,46,151,235,224,193,131,133,133,133,21,21,21,143,242,88,52,115,
237,110,126,191,95,175,215,135,167,115,122,172,10,27,227,230,248,113,95,57,209,222,97,140,149,150,150,174,94,189,154,118,168,106,119,43,247,181,211,233,60,122,244,232,244,246,164,105,227,255,16,176,111,
223,190,240,142,33,250,5,243,19,166,210,210,210,197,139,23,243,191,62,247,220,115,159,124,242,9,141,177,219,188,121,115,77,77,77,120,103,253,163,33,73,210,202,149,43,105,183,209,50,247,245,245,209,222,
53,24,12,155,55,111,246,120,60,116,156,42,45,45,45,47,47,31,26,26,74,136,211,241,198,198,198,53,107,214,40,143,200,84,23,242,222,255,109,219,182,49,198,168,21,176,176,176,176,178,178,114,238,220,185,177,
157,206,102,101,101,217,237,118,234,248,216,178,101,75,121,121,185,199,227,185,112,225,194,254,253,251,85,251,55,161,55,233,68,138,139,139,37,73,58,119,238,156,234,121,175,215,75,219,51,66,220,111,111,
111,167,234,176,160,160,128,14,76,124,36,64,69,69,69,81,81,145,36,73,202,67,21,31,135,205,95,223,212,212,68,221,76,85,85,85,85,85,85,49,116,31,135,103,92,101,165,171,234,149,139,112,40,44,45,45,93,177,
98,5,213,250,170,67,33,157,207,220,189,123,151,31,43,149,221,148,244,35,161,231,105,101,79,156,56,65,21,57,223,116,73,73,73,180,190,30,143,231,200,145,35,202,38,79,229,49,93,121,224,142,249,208,220,219,
219,235,241,120,248,105,94,105,105,105,119,119,119,248,203,198,221,65,92,109,109,45,157,7,158,58,117,74,85,93,141,107,217,178,101,126,191,191,177,177,241,233,167,159,206,206,206,86,125,81,73,73,73,83,
83,83,102,102,166,242,244,175,184,184,152,47,128,170,219,119,162,101,139,242,204,115,220,61,53,81,147,68,66,176,90,173,70,163,241,202,149,43,140,177,206,206,206,130,130,2,179,217,76,191,135,113,235,47,
42,98,170,177,170,43,87,174,228,91,131,142,93,108,180,123,55,114,125,199,79,50,107,107,107,103,46,167,146,238,238,238,172,172,44,26,225,16,249,120,91,93,93,157,151,151,247,241,199,31,211,63,43,42,42,210,
210,210,232,65,127,127,63,181,47,208,192,191,154,154,26,186,188,225,202,149,43,37,37,37,86,171,149,23,192,165,75,151,122,60,158,24,206,172,82,82,82,24,99,253,253,253,225,205,195,252,49,253,26,121,54,160,
95,47,63,66,26,12,134,154,154,26,74,225,188,236,207,155,55,143,78,39,232,120,200,24,163,223,118,132,211,12,101,187,91,52,7,156,73,165,139,158,158,30,101,196,52,26,141,252,139,106,106,106,106,107,107,199,
173,115,35,188,50,194,222,41,44,44,44,47,47,231,63,209,138,138,138,204,204,76,101,49,167,63,209,187,106,107,107,167,183,252,198,81,84,53,24,12,70,163,113,220,163,118,184,178,178,50,170,30,120,114,82,30,
73,143,31,63,78,251,222,229,114,117,119,119,171,14,205,211,34,43,43,139,14,169,100,220,161,171,244,171,229,141,97,45,45,45,101,101,101,124,239,110,216,176,65,175,215,243,142,209,198,198,198,220,220,220,
213,171,87,39,74,174,234,238,238,206,200,200,224,163,178,150,44,89,194,24,187,124,249,50,29,73,77,38,211,251,239,191,79,7,235,150,150,150,180,180,180,146,146,146,179,103,207,198,112,166,213,213,213,197,
203,219,213,171,87,179,178,178,206,158,61,75,71,28,151,203,165,28,138,144,232,155,116,92,57,57,57,126,191,63,182,30,55,175,215,187,103,207,158,240,177,170,181,181,181,217,217,217,39,79,158,108,105,105,
161,62,250,151,94,122,105,223,190,125,227,190,190,183,183,55,182,134,13,66,245,211,237,219,183,249,41,77,85,85,149,221,110,167,114,81,91,91,91,89,89,217,221,221,77,167,52,19,29,10,169,22,108,106,106,162,
195,95,93,93,221,11,47,188,240,222,123,239,241,159,83,86,86,150,207,231,163,67,106,117,117,117,121,121,249,173,91,183,232,32,80,86,86,198,175,63,160,227,178,234,220,181,168,168,168,185,185,153,134,238,
212,213,213,241,67,51,253,83,175,215,211,49,221,96,48,172,93,187,54,43,43,203,225,112,76,241,208,124,241,226,69,222,71,156,155,155,219,222,222,158,148,148,164,74,162,227,238,160,240,165,178,90,173,185,
185,185,15,253,198,140,140,12,58,180,58,28,14,155,205,166,234,15,161,159,217,39,159,124,178,127,255,126,171,213,186,105,211,166,87,94,121,165,171,171,235,205,55,223,244,122,189,170,237,25,121,217,162,
57,114,142,187,167,38,138,116,9,129,2,13,29,253,174,95,191,94,80,80,176,124,249,242,201,182,165,41,187,77,26,27,27,87,172,88,193,127,255,145,235,59,170,61,169,117,96,70,115,42,15,127,233,233,233,94,175,
55,194,241,150,26,53,155,154,154,248,114,242,173,161,220,44,94,175,247,226,197,139,85,85,85,54,155,205,110,183,211,85,16,202,225,49,25,25,25,205,205,205,49,44,167,195,225,240,251,253,217,217,217,49,15,
119,217,182,109,155,207,231,163,20,110,54,155,203,202,202,178,178,178,104,225,195,143,135,17,78,51,194,69,56,224,68,143,14,2,135,14,29,226,71,72,139,197,114,236,216,49,218,116,14,135,131,114,127,120,157,
27,249,149,17,246,206,210,165,75,233,116,87,181,31,205,102,115,73,73,73,107,107,43,253,201,235,245,158,59,119,174,182,182,54,252,32,51,27,162,42,93,98,204,24,59,121,242,100,52,47,230,167,176,15,229,243,
249,36,73,154,246,113,238,19,101,211,232,91,236,51,50,50,122,122,122,148,75,229,114,185,44,22,75,162,12,201,167,212,200,107,220,236,236,108,167,211,73,165,226,233,167,159,246,251,253,202,51,69,74,42,207,
60,243,204,180,116,10,80,250,25,183,62,78,232,77,58,46,163,209,232,241,120,166,183,172,217,108,182,166,166,38,30,247,63,250,232,163,105,63,178,240,22,133,162,162,34,187,221,206,163,246,250,245,235,221,
110,55,63,247,168,175,175,223,185,115,103,89,89,89,125,125,253,68,135,66,198,216,234,213,171,187,186,186,248,51,52,174,157,222,21,126,62,115,254,252,249,130,130,2,202,148,244,21,202,10,172,179,179,51,
47,47,79,185,144,202,38,144,246,246,246,242,242,114,58,52,211,49,189,190,190,158,62,199,235,245,82,86,152,250,161,153,206,90,205,102,51,213,250,251,247,239,175,168,168,136,114,7,21,22,22,170,106,26,250,
145,71,248,58,234,241,184,112,225,2,125,117,101,101,229,226,197,139,85,139,202,79,239,29,14,7,253,222,248,241,173,173,173,141,111,207,169,255,120,34,236,169,196,69,189,255,116,112,179,219,237,235,215,
175,207,201,201,153,108,84,165,75,39,23,45,90,196,135,130,184,221,238,40,235,187,77,155,54,61,130,156,26,253,241,246,153,103,158,81,158,160,134,247,24,204,157,59,151,186,5,8,157,170,121,189,222,206,206,
78,222,180,84,90,90,202,24,11,239,80,138,210,201,147,39,171,70,209,12,6,67,67,67,81,238,20,126,137,48,173,157,203,229,138,220,37,24,225,52,35,220,68,7,156,104,154,81,121,3,153,199,227,161,51,73,250,39,
213,185,202,244,220,219,219,75,251,72,85,231,62,244,149,19,237,157,187,119,239,102,101,101,109,217,178,229,238,221,187,202,205,72,251,250,250,245,235,252,153,155,55,111,70,168,166,19,50,170,42,55,125,
87,87,151,178,153,228,161,109,251,137,78,175,215,27,141,70,101,211,108,98,161,58,143,198,0,40,235,66,90,53,213,139,7,7,7,249,47,126,38,126,69,20,70,19,125,147,62,26,116,100,81,94,253,102,183,219,191,250,
213,175,62,253,244,211,211,245,21,37,37,37,52,108,128,141,157,220,138,42,93,213,28,17,30,143,135,66,219,68,135,194,113,171,234,113,47,236,35,3,3,3,170,31,91,117,117,181,217,108,86,230,185,137,206,94,104,
184,2,189,151,142,233,225,85,200,180,28,154,59,59,59,233,66,156,240,126,164,200,59,200,106,181,170,106,154,135,226,189,255,252,171,179,179,179,35,159,191,241,241,18,51,250,227,9,223,83,137,72,117,244,
99,97,99,0,162,252,144,218,218,90,167,211,217,209,209,65,237,202,212,198,28,77,125,87,89,89,41,73,146,221,110,127,4,57,53,53,53,149,55,67,68,56,222,210,62,165,195,126,120,115,160,197,98,105,109,109,229,
195,195,148,115,134,180,180,180,216,108,54,138,110,185,185,185,221,221,221,49,175,20,93,10,70,77,96,139,22,45,162,14,247,252,252,252,67,135,14,61,116,191,80,163,108,126,126,126,82,82,82,52,83,116,77,116,
154,241,80,202,3,78,52,77,93,52,254,138,198,255,40,175,222,211,235,245,202,52,21,57,120,68,120,101,132,189,67,199,100,186,10,168,164,164,196,227,241,80,247,38,45,124,109,109,45,77,99,50,67,226,101,178,
170,39,83,108,77,179,241,163,179,179,211,102,179,153,205,102,170,11,47,94,188,72,207,43,47,202,33,201,201,201,44,214,75,115,158,168,77,26,142,95,107,56,93,38,58,44,70,51,228,49,74,20,79,205,102,243,11,
47,188,160,108,94,162,74,87,25,100,149,135,245,137,14,133,227,86,213,62,159,47,61,61,253,161,75,98,48,24,94,124,241,69,250,173,82,203,135,114,236,233,67,143,233,17,54,224,20,15,205,109,109,109,53,53,53,
140,177,179,103,207,78,106,7,197,176,155,178,179,179,59,59,59,149,213,176,170,158,139,254,103,243,8,126,60,9,135,198,62,149,151,151,83,183,47,55,169,49,0,171,86,173,82,142,22,155,148,158,158,158,155,55,
111,150,148,148,248,124,190,153,158,210,155,143,36,137,230,120,75,135,125,37,171,213,106,177,88,34,204,205,236,112,56,220,110,55,205,137,97,177,88,222,127,255,253,41,46,176,114,131,208,184,29,101,111,
76,4,135,15,31,94,183,110,29,31,181,31,97,77,35,156,102,204,144,250,250,250,212,212,212,53,107,214,240,97,57,147,74,83,19,189,242,161,123,135,95,34,70,221,224,149,149,149,237,237,237,244,167,25,157,104,
143,37,196,101,85,227,254,154,61,30,79,132,6,246,132,208,221,221,29,77,93,27,207,62,251,236,51,155,205,182,124,249,114,58,126,241,211,223,59,119,238,216,108,54,229,232,248,5,11,22,48,198,174,93,187,54,
110,179,10,54,105,4,116,189,112,148,61,68,209,159,199,143,27,254,166,119,201,93,46,23,245,193,109,217,178,69,121,148,159,236,161,112,220,31,137,94,175,143,102,129,139,139,139,141,70,99,125,125,253,180,
79,175,51,197,67,51,53,219,24,141,198,240,246,209,233,221,65,133,133,133,146,36,81,75,149,242,121,229,53,145,113,248,227,73,32,52,246,73,149,50,119,236,216,145,159,159,31,125,84,141,240,123,126,104,125,
71,183,206,153,59,119,110,65,65,65,244,125,220,49,168,173,173,149,36,137,247,138,68,56,222,118,117,117,149,148,148,44,88,176,64,85,238,162,105,179,184,116,233,210,154,53,107,250,250,250,248,124,50,211,
165,161,161,161,168,168,136,250,112,162,41,161,124,150,43,147,201,84,91,91,91,93,93,61,238,153,192,84,78,51,98,118,248,240,225,23,95,124,177,166,166,134,198,10,83,151,148,178,206,157,72,132,87,70,223,
162,228,114,185,110,222,188,105,177,88,210,211,211,105,95,207,244,48,158,196,184,177,234,231,159,127,110,52,26,149,191,176,11,23,46,88,44,22,106,219,103,140,149,150,150,214,213,213,37,214,1,238,228,201,
147,122,189,190,174,174,142,175,87,69,69,69,98,173,133,221,110,247,120,60,69,69,69,70,163,241,198,141,27,252,249,198,198,70,183,219,189,113,227,70,90,53,62,96,49,188,27,197,229,114,185,221,238,156,156,
28,186,231,27,93,85,253,36,111,210,112,103,206,156,241,251,253,197,197,197,225,127,162,223,255,100,227,62,157,48,240,43,91,169,85,64,146,164,59,119,238,76,251,194,183,180,180,52,53,53,101,101,101,209,
88,76,170,116,231,207,159,31,229,161,80,146,164,244,244,116,151,203,21,254,174,244,244,244,40,47,193,100,81,119,198,133,31,211,41,228,133,87,195,170,13,24,115,211,72,91,91,219,100,119,16,45,85,148,213,
45,99,140,70,0,239,30,203,110,183,91,44,150,232,63,36,202,101,155,222,51,207,132,64,189,255,188,109,137,187,114,229,138,209,104,164,155,194,132,215,95,52,136,115,229,202,149,252,153,155,55,111,26,141,
70,186,69,170,193,96,216,178,101,139,114,242,178,104,234,187,250,250,122,10,13,51,113,159,213,194,194,194,186,186,58,155,205,198,7,73,71,62,222,58,28,14,187,221,94,84,84,68,227,77,233,79,181,181,181,84,
101,240,11,1,75,75,75,203,202,202,84,223,213,216,216,232,243,249,138,138,138,46,93,186,52,149,5,86,142,255,38,84,203,240,106,200,231,243,69,211,27,224,114,185,236,118,187,223,239,79,77,77,157,236,105,
198,204,241,122,189,191,249,205,111,140,70,35,13,83,110,104,104,160,58,151,239,125,218,101,225,183,37,138,240,202,200,123,135,194,58,223,146,153,153,153,116,46,193,247,53,223,224,116,181,101,248,246,159,
138,196,104,85,61,115,230,140,217,108,222,190,125,59,27,157,196,164,177,177,113,104,104,232,185,231,158,163,33,23,52,61,68,98,29,227,92,46,215,123,239,189,87,86,86,70,235,69,171,214,209,209,145,88,107,
65,163,178,148,35,225,200,129,3,7,54,108,216,64,171,22,121,126,211,250,250,250,234,234,106,154,35,201,110,183,211,213,136,79,242,38,13,63,36,81,219,100,93,93,157,106,166,36,191,223,175,140,251,231,206,
157,243,122,189,170,184,239,245,122,221,110,247,162,69,139,84,71,222,162,162,162,222,222,94,186,136,251,203,95,254,178,219,237,158,161,121,18,26,26,26,50,51,51,75,74,74,110,223,190,109,183,219,47,92,184,
80,94,94,174,156,69,165,186,186,90,175,215,215,215,215,211,61,177,248,76,49,252,80,72,85,117,121,121,57,159,16,145,170,195,240,174,243,137,90,119,158,125,246,89,62,69,87,148,189,255,180,228,57,57,57,95,
254,242,151,7,7,7,105,6,128,13,27,54,208,100,115,180,1,217,232,160,5,186,64,152,207,67,23,253,207,117,220,70,154,200,59,232,220,185,115,249,249,249,213,213,213,212,138,83,81,81,161,186,74,140,70,56,240,
166,235,140,140,12,101,239,63,225,253,33,147,109,129,139,188,108,145,127,138,209,52,73,228,229,229,77,106,136,231,99,167,26,251,164,250,225,81,83,83,120,253,213,210,210,178,96,193,2,62,102,96,207,158,
61,13,13,13,73,73,73,116,13,16,77,65,170,12,70,81,214,119,7,15,30,172,171,171,171,172,172,100,99,103,101,138,141,114,68,35,93,150,164,154,145,45,242,241,182,190,190,190,162,162,98,205,154,53,180,142,180,
82,140,177,35,71,142,108,220,184,145,62,153,31,16,84,95,77,23,246,77,229,136,212,210,210,66,185,185,189,189,157,62,199,106,181,174,91,183,206,231,243,157,56,113,130,87,94,121,121,121,212,190,72,51,232,
241,183,211,139,249,157,222,75,75,75,37,73,162,230,152,246,246,118,186,149,0,223,194,52,250,130,166,26,160,41,174,76,38,83,108,167,199,147,109,42,90,176,96,65,73,73,9,29,78,247,237,219,71,61,81,52,186,
148,118,153,114,54,43,46,194,43,35,236,157,59,119,238,228,230,230,42,47,46,58,124,248,176,114,95,231,228,228,240,186,219,110,183,79,239,205,128,132,76,235,146,104,94,247,242,218,116,198,216,255,58,239,
77,74,74,210,235,245,90,173,86,163,209,136,162,200,0,102,169,175,100,120,24,99,63,61,211,19,195,123,169,188,28,104,30,148,36,105,90,202,139,213,106,45,44,44,228,45,124,52,145,56,15,58,212,93,206,111,51,
209,215,215,167,156,204,210,106,181,110,220,184,145,26,105,34,207,171,202,198,187,17,235,164,102,225,166,23,171,186,248,105,192,168,94,175,167,235,38,149,243,170,50,198,156,78,39,85,39,202,187,32,210,
161,240,200,145,35,124,84,201,67,231,85,229,99,12,84,171,80,90,90,186,102,205,26,186,127,68,115,115,51,205,104,72,115,208,132,207,3,26,190,178,124,6,83,22,54,175,106,78,78,14,111,250,178,219,237,45,45,
45,145,187,192,34,108,73,26,69,167,28,84,16,97,94,85,229,14,181,219,237,62,159,79,57,73,167,50,170,210,188,57,227,126,227,142,29,59,60,30,15,77,62,160,250,234,151,94,122,201,104,52,242,209,108,170,249,
38,35,47,91,228,159,98,228,61,69,211,126,241,9,119,39,59,107,85,40,20,218,152,233,141,161,204,78,123,105,133,169,160,88,63,169,123,65,79,68,53,55,106,107,107,171,234,102,212,91,182,108,225,183,10,162,
137,153,232,123,105,102,58,229,141,172,47,92,184,192,163,51,63,164,176,209,121,85,249,8,120,74,228,43,86,172,96,163,211,174,141,59,175,106,132,3,206,19,98,178,165,21,81,21,32,1,162,42,0,32,170,62,9,232,
222,1,202,153,152,0,165,21,165,17,0,0,0,30,63,131,193,144,151,151,55,149,57,170,96,86,210,98,19,0,0,0,192,99,231,245,122,159,228,249,43,97,34,104,85,5,0,0,0,128,89,17,85,211,146,17,109,225,137,96,208,
6,177,17,0,0,0,18,44,170,22,103,74,216,100,240,36,176,165,249,176,17,0,0,0,18,38,170,210,85,90,243,141,26,163,196,100,89,198,134,131,89,204,160,13,166,233,131,44,214,203,255,1,32,225,164,234,5,108,4,128,
71,64,150,229,20,205,228,250,45,39,221,161,191,218,130,49,0,48,203,77,87,147,42,42,63,128,184,173,252,84,138,51,117,216,140,0,143,166,180,230,63,229,159,169,168,74,45,76,233,6,97,142,46,36,143,194,70,
135,89,102,26,155,84,81,249,1,196,109,229,167,170,218,208,103,8,240,104,138,170,65,27,156,151,20,154,84,37,27,75,19,233,170,249,178,65,27,66,145,134,89,153,83,167,165,73,21,149,31,64,156,87,126,225,208,
103,8,240,8,74,107,222,188,73,159,85,78,174,100,210,81,192,148,194,86,164,7,120,219,42,54,61,204,166,156,58,189,163,84,81,249,1,196,103,229,23,94,181,165,27,4,131,54,136,62,67,128,153,43,170,41,154,88,
206,42,197,216,138,244,83,201,114,222,60,127,138,38,136,242,12,200,169,168,252,0,18,174,242,27,215,170,249,50,21,88,108,88,128,105,47,170,201,98,32,111,94,44,253,150,177,52,249,240,180,154,255,148,31,
165,26,144,83,81,249,1,36,92,229,55,209,185,229,114,83,128,159,94,98,11,3,76,111,81,125,42,89,142,161,158,213,204,77,75,139,225,91,207,223,24,120,206,154,146,172,149,231,232,66,253,126,209,31,18,4,1,23,
59,3,114,234,56,197,36,69,18,230,232,66,125,126,113,88,22,25,99,40,41,0,241,80,249,77,88,96,117,108,142,46,212,231,19,135,81,175,1,76,71,57,165,174,143,169,20,85,33,211,186,36,230,37,120,121,109,58,61,
184,55,36,126,214,151,228,13,104,176,87,32,65,67,42,155,177,89,84,169,152,124,49,40,180,221,211,15,4,53,162,136,209,171,0,143,191,242,123,104,189,246,197,160,64,245,26,2,43,192,180,148,211,152,139,234,
148,162,170,178,84,51,198,122,125,26,123,175,30,129,21,18,46,164,178,25,158,237,31,149,31,64,188,85,126,81,214,107,247,134,196,182,123,210,253,97,156,97,2,76,174,168,206,209,201,202,114,58,149,162,58,
213,168,26,94,176,1,18,203,163,185,37,21,42,63,128,184,170,252,80,175,1,36,74,61,59,61,81,21,5,27,16,82,81,70,0,102,247,73,38,0,60,150,114,58,157,81,21,0,80,249,1,204,190,147,76,0,120,140,16,85,1,0,0,
0,32,78,97,180,28,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,
0,0,0,0,32,170,2,0,0,0,64,92,211,98,19,0,0,0,140,235,229,181,233,216,8,0,49,251,233,153,158,169,127,136,144,105,93,130,77,9,128,202,15,224,137,170,252,80,78,1,18,165,204,78,103,84,69,193,6,84,120,40,35,
0,137,94,126,149,229,244,78,127,224,163,142,251,189,131,65,81,20,25,99,130,32,8,130,128,141,15,240,80,105,201,98,233,146,228,167,83,181,83,47,179,211,19,85,81,1,3,42,60,84,126,0,9,84,249,61,180,168,222,
238,27,254,237,53,111,239,96,80,16,4,113,212,72,197,137,2,11,16,109,153,213,252,206,98,201,60,71,156,74,129,157,106,84,69,5,12,168,240,80,249,1,36,92,229,23,161,168,222,238,27,254,237,181,251,247,6,130,
162,40,106,70,81,105,165,114,138,210,10,16,13,89,150,233,65,170,158,173,182,104,210,13,66,108,5,118,74,81,21,21,48,160,194,67,229,7,144,136,149,223,68,69,245,78,127,224,163,14,207,189,129,160,86,171,213,
104,52,244,95,66,21,28,74,43,192,164,74,107,40,20,98,140,25,180,193,194,5,66,108,5,54,246,168,138,10,24,80,225,161,242,3,72,208,202,111,226,162,122,191,119,48,168,29,139,234,53,116,21,2,196,86,102,101,
89,14,133,66,6,109,112,165,57,20,67,129,141,49,170,162,2,6,84,120,168,252,0,18,183,242,27,183,180,254,211,133,222,222,193,160,78,167,211,106,181,244,95,85,81,69,105,5,136,173,180,82,129,77,209,4,42,172,
161,201,150,86,109,204,69,122,180,2,14,241,242,140,10,24,18,180,8,13,133,52,23,93,193,85,130,108,74,97,47,175,77,159,222,182,85,202,169,168,252,0,166,189,228,138,162,56,24,18,47,245,4,42,12,161,169,159,
85,222,238,27,230,167,148,58,157,142,151,86,106,121,65,63,33,64,204,165,149,254,43,8,194,144,44,126,49,232,123,42,89,158,84,85,171,141,173,72,83,78,237,27,10,161,2,134,89,84,225,5,87,164,7,167,43,173,
162,242,3,136,231,202,47,220,217,78,47,117,15,234,70,81,81,69,141,6,48,21,188,236,136,162,40,203,114,219,61,233,75,201,190,73,125,194,228,162,170,42,167,170,106,95,84,192,144,224,21,158,230,178,123,120,
57,11,76,99,219,42,42,63,128,248,172,252,194,235,181,190,33,89,213,73,136,30,66,128,105,44,179,130,32,200,178,60,16,20,190,24,244,79,234,220,82,140,225,251,248,192,59,221,88,252,106,42,148,109,72,172,
194,195,79,177,6,67,186,203,238,105,184,219,176,178,242,83,13,81,229,83,100,160,140,0,76,189,252,82,105,26,8,106,191,24,20,216,20,38,249,62,219,233,165,139,131,149,45,47,168,203,0,102,162,206,109,187,
167,159,212,187,38,17,85,35,119,104,162,2,134,89,80,225,137,162,56,24,210,77,177,206,67,229,7,16,255,149,159,74,239,96,136,174,9,166,145,108,40,170,0,51,87,96,189,129,201,181,147,78,186,85,85,217,161,
137,94,18,152,125,21,158,40,138,109,247,164,105,249,64,84,126,0,113,91,249,169,235,194,9,230,91,4,128,153,40,176,51,18,85,35,119,104,162,2,134,217,148,86,167,222,153,136,202,15,32,206,43,191,240,210,74,
5,22,195,216,0,226,205,228,78,67,209,161,9,79,72,90,157,98,103,34,42,63,128,4,171,11,113,173,5,192,236,136,170,232,208,132,39,36,173,78,177,51,17,149,31,64,34,158,163,162,192,2,36,124,84,69,135,38,60,
57,245,22,42,63,0,0,128,196,139,170,232,208,4,0,128,217,119,118,138,26,13,96,246,68,85,20,105,0,84,126,0,0,0,143,192,228,102,59,159,74,135,102,69,69,69,102,102,166,197,98,161,127,122,60,158,43,87,174,
156,59,119,206,235,245,206,244,74,86,84,84,204,157,59,215,102,179,241,103,90,91,91,207,159,63,239,114,185,240,11,0,0,128,132,86,87,87,71,117,235,169,83,167,26,27,27,25,99,59,118,236,48,26,141,140,177,
166,166,166,134,134,6,122,153,193,96,88,187,118,109,65,65,1,175,133,247,238,221,59,238,43,103,189,93,187,118,209,131,183,223,126,27,73,96,182,69,213,216,152,205,230,218,218,90,147,201,164,124,210,104,
52,150,148,148,148,148,148,212,215,215,219,237,246,153,251,118,155,205,86,82,82,162,122,178,160,160,160,160,160,224,253,247,223,119,56,28,248,17,0,0,192,84,234,184,237,219,183,243,127,198,109,205,178,
105,211,38,222,90,244,40,213,214,214,42,155,138,148,40,46,227,39,4,211,25,85,99,104,76,53,24,12,155,55,111,166,147,54,183,219,125,252,248,113,135,195,97,48,24,106,106,106,178,178,178,232,71,60,56,56,56,
211,5,187,171,171,235,228,201,147,46,151,203,106,181,214,212,212,208,242,172,91,183,110,255,254,253,248,17,64,252,40,45,45,45,47,47,167,199,187,119,239,30,247,53,188,21,36,156,170,93,164,176,176,208,106,
181,42,43,137,166,166,166,174,174,174,73,21,183,157,59,119,74,146,132,230,7,128,137,44,95,190,92,249,207,188,188,188,199,30,85,195,243,159,213,106,165,156,234,247,251,223,123,239,61,94,150,145,20,97,182,
69,213,24,20,23,23,83,181,234,247,251,15,28,56,64,221,253,94,175,247,224,193,131,188,207,66,25,25,205,102,243,242,229,203,149,237,160,78,167,243,230,205,155,202,10,88,53,150,192,237,118,119,116,116,68,
232,185,80,214,223,14,135,227,202,149,43,244,249,143,229,252,18,224,209,216,178,101,11,157,13,42,81,87,70,244,61,125,181,181,181,148,83,1,96,34,249,249,249,170,168,122,244,232,209,120,91,200,228,228,100,
122,208,211,211,243,184,206,57,157,78,39,154,135,32,30,163,106,78,78,14,61,104,107,107,83,13,75,189,120,241,34,133,69,139,197,98,48,24,188,94,175,213,106,221,186,117,171,234,19,44,22,139,209,104,164,154,
213,96,48,108,219,182,77,53,150,192,100,50,153,76,166,137,170,94,187,221,62,163,3,12,0,30,151,8,137,147,231,84,191,223,127,242,228,201,150,150,22,58,199,163,147,52,250,111,228,180,26,161,237,22,0,56,155,
205,198,155,99,232,188,78,146,164,194,194,66,42,116,132,23,61,187,221,254,217,103,159,21,23,23,83,221,103,183,219,235,235,235,233,5,69,69,69,146,36,121,60,158,179,103,207,242,247,218,108,182,218,218,90,
198,152,199,227,185,112,225,194,138,21,43,168,250,115,187,221,31,125,244,81,132,170,77,53,122,85,217,5,111,177,88,104,164,38,141,190,11,31,231,74,85,109,113,113,49,45,18,63,218,40,175,45,81,190,107,104,
104,168,172,172,204,104,52,42,63,33,134,205,200,215,244,208,161,67,101,101,101,180,192,202,13,82,93,93,77,3,109,149,145,215,96,48,124,251,219,223,166,229,228,227,9,31,186,252,227,50,155,205,207,62,251,
44,31,203,27,254,46,229,126,236,235,235,227,159,207,187,109,249,27,99,91,0,120,108,81,149,199,202,222,222,94,213,159,186,187,187,249,227,204,204,76,187,221,190,113,227,70,250,103,87,87,215,193,131,7,249,
143,131,231,221,13,27,54,208,7,250,253,254,95,253,234,87,244,163,164,66,30,253,34,101,102,102,210,3,183,219,141,95,0,204,202,186,147,183,167,242,98,194,179,41,29,106,139,138,138,112,220,4,152,186,101,
203,150,241,230,24,179,217,76,1,110,233,210,165,202,168,202,101,103,103,43,7,228,216,108,182,212,212,84,189,94,207,43,74,163,209,88,85,85,213,221,221,173,106,248,52,26,141,124,104,16,85,172,51,55,118,
206,106,181,110,218,180,73,213,157,82,82,82,146,159,159,255,238,187,239,170,14,26,171,87,175,158,222,115,90,189,94,175,28,248,171,220,32,109,109,109,148,35,121,243,22,99,44,55,55,151,22,213,227,241,208,
177,110,82,203,31,158,149,85,239,42,42,42,58,124,248,176,106,59,171,134,222,102,101,101,165,167,167,243,15,143,109,1,224,113,70,213,8,148,69,49,45,45,141,78,70,233,159,169,169,169,21,21,21,151,47,95,118,
185,92,13,13,13,188,73,149,255,62,62,254,248,99,101,5,28,253,117,139,21,21,21,188,223,255,210,165,75,248,5,192,236,179,100,201,18,126,50,166,106,119,57,119,238,28,69,85,73,146,114,115,115,199,173,77,9,
141,96,27,247,240,13,0,196,96,48,100,103,103,211,227,235,215,175,247,246,246,82,253,146,149,149,197,179,148,146,199,227,161,11,54,120,251,156,197,98,105,106,106,218,183,111,159,193,96,120,241,197,23,41,
246,45,95,190,92,85,169,241,214,25,179,217,204,47,255,40,41,41,137,50,170,214,215,215,127,246,217,103,188,217,50,242,248,212,154,154,26,170,139,121,191,13,181,161,26,141,198,181,107,215,170,198,54,244,
244,244,68,63,218,149,55,232,114,227,118,13,29,59,118,172,165,165,69,185,65,158,125,246,217,163,71,143,58,28,14,183,219,77,177,190,184,184,152,222,184,116,233,82,122,215,149,43,87,98,88,126,190,31,191,
250,213,175,210,99,222,212,77,239,146,36,169,166,166,70,181,142,110,183,187,190,190,222,229,114,241,35,164,209,104,228,139,20,195,2,64,252,70,85,179,217,204,31,83,155,43,31,69,74,125,250,244,216,233,116,
158,62,125,218,225,112,240,214,80,198,216,181,107,215,98,107,109,226,163,96,187,186,186,98,238,170,0,136,7,52,240,84,249,12,93,249,196,75,86,248,136,52,175,215,235,241,120,232,232,79,231,135,0,16,179,
149,43,87,42,155,244,12,6,3,111,251,228,193,69,213,64,67,225,242,242,229,203,188,240,94,190,124,153,202,102,119,119,55,53,199,204,157,59,87,245,70,159,207,71,167,157,46,151,139,87,148,25,25,25,211,190,
70,133,133,133,252,50,104,190,252,124,180,222,162,69,139,84,175,191,113,227,198,244,46,128,207,231,163,83,104,229,6,209,235,245,244,215,142,142,14,138,170,148,7,12,6,3,223,8,180,25,39,187,252,132,55,205,
50,198,78,156,56,65,15,78,159,62,77,35,18,141,70,163,213,106,85,158,21,184,92,46,58,186,218,237,246,85,171,86,81,47,214,252,249,243,99,94,0,120,204,81,149,159,3,133,215,139,202,98,118,243,230,77,198,88,
67,67,67,82,82,146,114,164,8,157,135,109,218,180,233,205,55,223,156,226,146,40,219,135,156,78,39,31,96,0,240,68,225,81,53,188,58,4,128,73,201,205,205,165,7,157,157,157,148,174,186,186,186,40,184,228,228,
228,68,232,238,155,202,133,77,67,67,67,244,96,38,46,121,228,53,181,201,100,82,181,128,50,197,136,190,216,76,246,178,170,190,190,62,213,51,188,95,136,198,0,240,136,217,213,213,69,155,52,182,229,231,239,
242,120,60,188,45,188,167,167,135,191,96,225,194,133,19,53,96,251,124,62,122,64,121,122,70,55,32,162,234,76,225,231,64,121,121,121,103,206,156,81,118,136,172,92,185,146,255,124,249,243,71,143,30,61,122,
244,40,13,73,230,243,246,75,146,148,153,153,73,113,150,60,243,204,51,147,42,234,188,183,133,141,29,8,11,144,184,98,155,178,155,15,44,11,175,6,0,32,122,124,100,42,27,157,171,91,21,74,84,77,113,48,117,94,
175,215,110,183,83,48,160,144,64,207,95,189,122,21,27,7,81,53,118,231,206,157,203,207,207,55,26,141,146,36,109,219,182,77,57,175,42,47,228,167,79,159,166,7,59,119,238,108,110,110,230,67,84,109,54,27,31,
156,58,56,56,168,60,97,93,189,122,117,111,111,47,117,136,148,150,150,174,94,189,58,194,112,25,126,217,32,123,194,110,200,1,79,38,151,203,69,133,75,57,198,134,24,12,6,30,85,195,175,116,4,128,232,169,166,
83,13,55,67,19,172,242,118,187,153,184,50,152,31,22,220,110,247,190,125,251,226,112,179,127,246,217,103,20,12,50,51,51,211,211,211,25,99,126,191,159,15,187,143,109,249,249,187,140,70,35,31,100,76,31,78,
110,221,186,21,225,140,133,31,120,19,98,3,34,170,142,127,14,116,232,208,33,186,91,149,201,100,10,159,139,170,190,190,158,23,102,73,146,194,135,223,49,198,236,118,59,189,230,200,145,35,52,89,149,209,104,
172,173,173,141,230,130,15,101,78,101,97,195,251,248,0,106,128,89,227,250,245,235,244,155,55,153,76,54,155,77,121,101,85,113,113,49,61,240,251,253,237,237,237,216,86,0,49,227,211,169,170,90,64,248,84,
113,51,49,193,170,205,102,203,203,203,163,199,29,29,29,211,190,82,45,45,45,52,243,20,77,50,112,226,196,9,202,109,52,229,121,102,102,230,99,159,24,213,110,183,175,95,191,222,104,52,242,214,174,182,182,
182,41,46,127,123,123,123,101,101,37,141,37,216,176,97,3,165,130,117,235,214,209,95,61,30,207,68,167,28,21,21,21,188,79,255,250,245,235,9,177,1,17,85,39,108,227,217,183,111,159,106,222,126,143,199,115,
229,202,21,213,116,57,77,77,77,243,231,207,87,206,91,222,213,213,117,245,234,85,126,194,228,245,122,233,163,114,114,114,248,239,131,62,106,162,111,231,195,177,1,158,16,202,145,254,95,253,234,87,147,146,
146,84,243,170,50,198,154,155,155,49,103,10,192,84,34,35,239,160,160,11,122,184,171,87,175,82,233,11,159,96,53,102,70,163,81,53,240,81,121,213,206,244,58,114,228,8,205,181,164,236,216,36,78,167,115,42,
159,28,62,3,64,108,55,86,229,23,150,133,71,213,216,150,223,235,245,254,234,87,191,162,198,47,213,187,252,126,255,145,35,71,194,247,190,234,147,91,91,91,121,163,192,204,109,64,68,213,25,23,77,161,138,178,
224,77,106,118,170,250,250,122,180,155,66,34,10,31,146,31,253,173,77,15,30,60,72,77,59,146,36,85,85,85,85,85,85,41,255,26,205,48,152,240,91,0,208,100,135,184,103,55,0,83,76,167,234,116,58,85,165,178,165,
165,133,55,209,77,52,193,234,100,249,253,126,62,171,40,155,225,145,108,14,135,227,205,55,223,44,46,46,166,193,123,202,52,22,39,163,134,148,243,39,184,221,110,85,147,103,108,203,111,183,219,221,110,119,
228,91,0,40,207,19,250,251,251,233,132,132,238,206,160,156,80,40,254,55,96,194,17,50,173,75,162,121,221,203,107,211,25,99,7,154,7,37,73,210,235,245,90,173,86,163,209,136,162,136,45,8,179,82,40,20,218,
152,233,101,140,253,244,76,79,12,111,143,185,188,148,150,150,42,39,250,30,55,170,242,16,249,208,234,170,176,176,208,106,181,42,79,235,155,154,154,186,186,186,162,25,63,55,209,221,170,16,85,97,150,149,
217,120,174,221,148,247,112,66,185,123,236,148,119,171,66,19,216,163,44,173,90,108,50,128,248,209,216,216,248,208,233,126,163,175,177,90,90,90,90,90,90,98,59,164,162,94,4,0,128,120,128,102,81,0,0,0,0,
64,84,5,0,0,0,0,152,12,12,0,0,0,0,136,71,118,187,93,57,217,28,60,94,147,186,164,27,166,17,90,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,
81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,
0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,
0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,177,9,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,
1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,
1,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,
21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,16,85,35,171,168,168,216,181,107,151,213,106,197,174,141,91,133,133,133,187,118,237,42,44,44,196,166,0,0,192,177,20,102,84,117,117,245,174,93,187,12,6,67,226,
174,130,246,49,126,247,75,47,189,100,50,153,248,63,157,78,231,197,139,23,91,90,90,40,113,150,148,148,28,59,118,140,254,249,210,75,47,49,198,246,237,219,23,15,155,204,96,48,188,242,202,43,225,207,183,182,
182,182,181,181,109,221,186,181,181,181,245,232,209,163,179,248,119,175,218,59,170,125,42,73,210,222,189,123,113,116,128,105,180,115,231,206,238,238,238,131,7,15,98,83,64,220,162,26,205,233,116,238,223,
191,95,245,188,170,254,170,174,174,46,40,40,216,179,103,143,215,235,141,231,117,225,255,244,251,253,109,109,109,231,207,159,119,185,92,216,209,241,176,71,60,30,207,149,43,87,26,26,26,158,144,213,215,62,
222,175,247,251,253,111,188,241,6,229,191,77,155,54,85,85,85,13,13,13,217,237,246,248,223,112,93,93,93,225,21,231,19,210,154,123,238,220,185,162,162,162,165,75,151,170,162,170,213,106,53,153,76,77,77,
77,56,172,76,251,57,113,65,65,129,234,188,40,202,211,33,58,179,138,255,211,167,210,210,210,220,220,92,139,197,194,24,115,187,221,159,124,242,73,248,137,16,64,220,50,155,205,38,147,201,239,247,167,167,
167,27,12,134,184,205,160,49,212,206,140,177,194,194,194,149,43,87,110,223,190,253,212,169,83,141,141,141,137,178,10,51,113,84,41,44,44,172,170,170,26,183,165,102,92,17,90,118,166,178,71,232,99,25,99,
79,72,90,213,198,201,114,120,189,222,253,251,247,239,220,185,243,203,95,254,178,221,110,111,104,104,72,196,29,224,112,56,118,239,222,61,235,127,52,94,175,183,167,167,39,35,35,67,245,124,86,86,22,133,120,
212,91,51,225,253,247,223,119,56,28,116,172,172,172,172,52,155,205,170,198,155,68,207,226,173,173,173,180,70,102,179,185,178,178,210,106,181,214,215,215,99,191,43,207,58,190,253,237,111,75,146,212,212,
212,20,159,135,199,201,214,226,179,201,242,229,203,25,99,31,127,252,113,121,121,249,202,149,43,19,40,207,69,163,165,165,165,165,165,165,182,182,182,188,188,188,183,183,55,33,154,147,102,247,81,165,161,
161,33,63,63,191,168,168,8,81,245,49,240,120,60,70,163,145,31,242,168,110,230,237,222,187,118,237,162,115,35,234,73,161,243,60,58,97,242,251,253,205,205,205,124,159,205,155,55,175,164,164,132,146,147,
211,233,60,124,248,240,163,57,199,165,22,44,94,145,108,217,178,37,35,35,227,228,201,147,124,57,237,118,187,178,156,80,225,161,229,84,173,66,156,107,111,111,183,88,44,165,165,165,202,35,114,126,126,190,
219,237,166,56,101,48,24,54,108,216,96,179,217,34,175,154,213,106,221,186,117,171,178,234,85,157,131,82,207,111,127,127,127,94,94,158,36,73,126,191,255,227,143,63,190,117,235,214,186,117,235,104,147,170,
246,111,226,110,210,73,85,27,86,171,213,102,179,89,173,86,218,218,9,205,108,54,23,20,20,116,117,117,241,118,95,151,203,117,240,224,193,194,194,194,138,138,138,39,167,135,235,161,86,174,92,73,69,32,39,
39,7,155,37,222,228,231,231,59,157,206,198,198,198,213,171,87,231,230,230,242,3,99,120,253,245,249,231,159,83,39,9,31,72,70,35,1,168,214,163,103,194,143,93,17,234,59,101,81,218,188,121,179,223,239,63,
112,224,192,76,84,121,245,245,245,217,217,217,197,197,197,60,170,70,62,222,86,84,84,228,231,231,83,157,238,118,187,47,93,186,68,155,165,174,174,142,86,132,14,224,167,79,159,166,227,216,142,29,59,252,126,
191,114,164,68,204,39,63,241,115,84,153,185,118,55,191,223,175,215,235,195,211,57,61,86,133,141,113,115,252,184,175,156,104,239,48,198,74,75,75,87,175,94,77,59,84,181,187,149,251,218,233,116,30,61,122,
116,122,199,138,104,227,255,16,176,111,223,190,240,177,62,244,11,230,39,76,165,165,165,139,23,47,230,127,125,238,185,231,62,249,228,147,131,7,15,82,209,173,169,169,121,92,163,220,36,73,90,185,114,37,237,
54,90,230,190,190,62,218,187,6,131,97,243,230,205,30,143,135,142,83,165,165,165,229,229,229,67,67,67,9,113,58,222,216,216,184,102,205,26,229,17,217,102,179,25,141,70,222,251,191,109,219,54,198,216,219,
111,191,77,43,94,89,89,57,119,238,220,216,78,103,179,178,178,236,118,59,117,124,108,217,178,165,188,188,220,227,241,92,184,112,97,255,254,253,170,253,155,208,155,116,82,124,62,95,120,21,69,135,9,58,244,
156,56,113,194,235,245,242,113,213,5,5,5,116,96,226,35,1,102,250,200,18,189,148,148,20,198,88,127,127,127,120,34,87,61,163,92,102,85,71,228,68,135,87,126,46,52,119,238,92,58,113,114,187,221,199,143,31,
87,70,252,232,143,239,143,87,110,110,46,13,80,43,41,41,49,155,205,24,53,24,63,172,86,171,209,104,188,114,229,10,99,172,179,179,179,160,160,128,239,160,113,235,47,42,146,170,177,170,43,87,174,228,191,106,
58,118,177,209,238,221,200,245,29,111,40,169,173,173,157,185,156,74,186,187,187,179,178,178,104,132,67,228,227,109,117,117,117,94,94,222,199,31,127,76,255,172,168,168,72,75,75,163,7,253,253,253,212,190,
64,3,255,106,106,106,232,242,6,250,109,43,207,192,151,46,93,234,241,120,98,104,164,143,230,168,162,26,1,79,199,10,126,132,52,24,12,53,53,53,148,194,249,81,101,222,188,121,116,58,81,85,85,69,15,40,70,71,
56,205,80,182,187,241,195,81,82,82,18,29,115,60,30,207,145,35,71,98,107,113,144,36,169,167,167,71,121,12,52,26,141,252,139,106,106,106,106,107,107,199,61,154,69,120,101,132,189,83,88,88,88,94,94,206,127,
162,21,21,21,153,153,153,202,6,38,250,19,189,171,182,182,118,122,47,46,138,163,168,106,48,24,140,70,99,119,119,119,52,47,46,43,43,163,250,149,39,39,101,189,197,171,34,151,203,213,221,221,157,157,157,61,
237,75,155,149,149,69,103,201,100,220,161,171,244,171,229,189,180,45,45,45,101,101,101,124,239,110,216,176,65,175,215,191,251,238,187,116,88,105,108,108,204,205,205,93,189,122,117,162,228,170,238,238,
238,140,140,12,62,42,107,201,146,37,140,177,203,151,47,211,145,212,100,50,189,255,254,251,116,176,110,105,105,73,75,75,43,41,41,57,123,246,108,12,245,107,87,87,23,47,111,87,175,94,205,202,202,58,123,246,
44,29,113,92,46,151,114,40,66,162,111,210,232,165,166,166,250,253,126,126,128,43,43,43,227,67,236,233,208,67,241,221,235,245,238,217,179,39,124,172,234,35,56,178,68,207,225,112,248,253,254,236,236,236,
194,194,194,8,117,82,86,86,150,207,231,163,131,102,117,117,117,121,121,249,173,91,183,104,11,68,56,188,146,162,162,162,230,230,102,26,156,83,87,87,87,83,83,195,127,36,209,31,223,31,123,219,179,197,98,
105,106,106,186,124,249,114,73,73,201,242,229,203,149,77,53,147,237,124,176,90,173,252,79,170,49,124,212,23,196,135,196,209,135,123,60,30,250,121,240,78,143,165,75,151,170,186,173,120,109,173,170,197,
159,132,168,74,155,130,142,126,215,175,95,47,40,40,80,237,160,104,40,199,243,52,54,54,174,88,177,130,87,22,145,235,59,170,61,169,117,96,70,115,42,15,127,233,233,233,94,175,55,194,241,150,26,53,155,154,
154,248,114,242,173,161,220,44,94,175,247,226,197,139,85,85,85,54,155,205,110,183,211,85,16,121,121,121,252,200,150,145,145,209,220,220,60,115,71,149,8,182,109,219,230,243,249,40,133,155,205,230,178,178,
178,172,172,44,90,248,240,134,222,8,167,25,225,194,15,71,49,92,136,92,87,87,167,215,235,15,29,58,196,219,59,45,22,203,177,99,199,104,211,57,28,14,202,253,225,117,110,228,87,70,216,59,75,151,46,245,251,
253,225,59,212,108,54,151,148,148,180,182,182,210,159,188,94,239,185,115,231,106,107,107,85,157,174,179,36,170,154,205,230,234,234,106,198,216,201,147,39,163,121,49,63,133,141,166,253,73,146,164,105,31,
231,62,81,54,141,190,197,62,35,35,163,167,167,71,185,84,46,151,203,98,177,36,202,144,124,74,141,124,84,86,118,118,182,211,233,164,82,241,244,211,79,43,131,20,99,236,246,237,219,140,177,103,158,121,102,
90,154,130,232,236,60,92,162,111,210,40,85,84,84,100,101,101,157,58,117,138,63,163,140,86,14,135,163,179,179,51,47,47,47,66,241,121,4,71,150,73,57,121,242,100,213,40,186,214,120,104,104,72,117,160,87,
158,177,156,63,127,190,160,160,32,43,43,139,126,99,17,14,175,244,164,178,145,227,244,233,211,91,183,110,165,223,109,244,199,247,199,142,134,66,118,117,117,185,92,46,183,219,157,159,159,175,218,62,209,
119,62,152,205,230,77,155,54,245,244,244,80,101,89,81,81,81,85,85,149,148,148,20,253,222,31,183,219,138,106,238,39,115,172,42,245,254,211,111,198,110,183,175,95,191,62,134,65,26,102,179,249,217,103,159,
93,180,104,17,191,208,219,237,118,71,89,223,109,218,180,233,17,228,212,232,143,183,207,60,243,12,63,236,143,123,4,227,189,28,36,41,41,137,10,111,103,103,39,111,90,42,45,45,101,140,157,59,119,110,230,142,
42,17,154,201,233,18,97,90,59,151,203,21,249,244,53,194,105,70,56,229,225,168,189,189,189,188,188,92,121,176,138,220,140,202,27,200,60,30,207,155,111,190,201,55,62,213,185,202,114,215,219,219,75,251,72,
117,40,123,232,43,39,218,59,119,239,222,205,202,202,218,178,101,203,221,187,119,149,155,145,246,245,245,235,215,249,51,55,111,222,140,80,77,39,100,84,85,110,250,174,174,174,247,222,123,47,154,26,130,218,
246,19,157,94,175,55,26,141,202,166,217,196,210,210,210,82,89,89,73,99,0,168,247,255,194,133,11,124,213,84,47,30,28,28,228,191,248,153,248,21,81,24,77,244,77,26,217,214,173,91,149,217,84,117,104,171,174,
174,166,134,55,101,67,203,184,245,214,163,57,178,76,246,183,212,210,210,66,39,171,139,22,45,162,174,177,252,252,252,67,135,14,141,123,64,24,24,24,80,253,156,38,58,188,78,212,220,242,244,211,79,79,234,
248,254,216,101,102,102,122,60,30,138,212,29,29,29,170,126,82,54,153,206,135,178,178,50,159,207,199,43,215,134,134,134,204,204,204,73,117,62,60,130,110,171,4,162,58,250,177,176,49,0,81,126,72,109,109,
173,211,233,236,232,232,160,6,108,26,54,16,77,125,87,89,89,41,73,146,221,110,127,4,57,85,217,159,19,225,120,75,165,143,14,251,225,205,129,22,139,165,181,181,149,15,15,227,93,231,116,40,176,217,108,20,
221,114,115,115,187,187,187,99,94,169,201,30,85,194,143,18,249,249,249,73,73,73,209,76,209,53,209,105,198,67,13,13,13,69,95,51,242,25,0,106,107,107,109,54,155,242,234,61,189,94,175,76,83,145,131,71,132,
87,70,216,59,20,79,233,42,160,146,146,18,143,199,67,71,24,90,248,218,218,218,218,218,218,153,251,225,197,203,100,85,79,166,216,154,102,227,71,103,103,167,205,102,51,155,205,203,150,45,243,251,253,23,47,
94,164,231,85,35,41,25,99,201,201,201,188,88,98,147,198,134,58,169,169,119,105,217,178,101,60,170,26,12,134,23,95,124,145,118,7,229,143,240,201,173,194,107,145,153,62,178,196,32,124,136,66,89,89,89,52,
125,241,145,43,191,137,142,215,147,58,190,63,94,188,247,159,254,73,99,0,148,253,164,227,138,220,249,160,124,230,230,205,155,49,143,127,157,161,110,171,4,66,99,159,202,203,203,169,219,151,155,212,24,128,
85,171,86,41,71,139,77,74,79,79,15,237,65,159,207,55,211,115,210,101,100,100,40,7,233,69,62,222,210,97,95,201,106,181,210,47,121,162,45,227,112,56,220,110,247,178,101,203,220,110,183,197,98,121,255,253,
247,31,215,81,229,240,225,195,235,214,173,227,163,252,35,172,105,132,211,140,25,82,95,95,159,154,154,186,102,205,26,62,8,106,82,105,106,162,87,62,116,239,240,75,196,168,27,188,178,178,178,189,189,93,89,
61,205,218,168,26,27,135,195,225,241,120,34,52,176,39,132,238,238,238,244,244,244,132,94,133,207,62,251,204,102,179,45,95,190,156,142,95,188,174,186,115,231,142,234,250,244,5,11,22,48,198,174,93,187,54,
110,243,24,54,105,244,26,27,27,211,210,210,10,10,10,248,245,121,197,197,197,70,163,49,188,157,53,154,224,27,183,171,217,208,208,80,84,84,100,54,155,31,250,202,135,30,94,199,197,175,183,72,136,179,101,
234,253,167,161,144,140,49,26,3,48,217,182,76,101,231,195,184,47,152,29,189,85,143,30,141,125,82,165,204,29,59,118,132,15,210,136,124,238,20,126,134,31,101,125,71,183,206,153,59,119,110,65,65,65,244,125,
220,49,168,173,173,165,185,210,30,122,188,237,234,234,42,41,41,89,176,96,129,234,160,20,77,155,197,165,75,151,214,172,89,211,215,215,199,231,147,121,244,71,21,218,236,124,150,43,147,201,84,91,91,91,93,
93,61,238,153,192,84,78,51,98,118,248,240,225,23,95,124,145,15,187,167,222,249,104,230,132,137,240,202,232,91,148,92,46,215,205,155,55,45,22,75,122,122,58,237,107,62,28,107,134,36,198,141,85,63,255,252,
115,163,209,168,252,133,93,184,112,193,98,177,80,219,62,99,172,180,180,180,174,174,46,177,14,112,39,79,158,212,235,245,117,117,117,124,189,42,42,42,18,107,45,236,118,187,199,227,41,42,42,50,26,141,55,
110,220,80,198,41,183,219,189,113,227,70,90,181,194,194,194,162,162,34,187,221,30,222,102,67,149,110,78,78,14,221,243,141,46,241,126,146,55,105,148,237,4,78,167,179,164,164,68,217,223,29,101,127,19,27,
157,248,150,95,217,250,216,209,244,49,170,39,233,247,16,77,35,223,100,27,236,11,11,11,37,73,162,81,116,119,239,222,149,36,41,254,239,220,145,147,147,195,24,219,190,125,251,174,81,38,147,201,104,52,42,
127,0,209,155,40,18,77,239,121,227,19,130,122,255,121,219,18,119,229,202,21,163,209,72,63,173,240,250,139,126,126,43,87,174,228,207,220,188,121,211,104,52,210,45,82,13,6,195,150,45,91,148,183,38,138,166,
190,171,175,175,167,208,48,19,247,89,45,44,44,172,171,171,179,217,108,124,96,119,228,227,173,195,225,176,219,237,69,69,69,52,222,148,254,84,91,91,75,85,70,110,110,46,95,145,178,178,178,240,179,113,159,
207,87,84,84,116,233,210,165,25,61,170,248,124,190,137,78,219,84,149,148,221,110,247,251,253,169,169,169,147,61,205,152,57,94,175,247,55,191,249,141,209,104,164,97,202,13,13,13,84,231,242,189,79,187,44,
252,224,22,225,149,145,247,14,133,117,190,37,51,51,51,233,92,130,239,107,190,193,205,102,115,109,109,109,248,246,159,138,196,104,85,61,115,230,140,217,108,222,190,125,59,27,157,87,181,177,177,113,104,
104,232,185,231,158,163,206,59,154,30,34,177,142,113,46,151,235,189,247,222,43,43,43,163,245,162,85,235,232,232,72,172,181,160,81,89,202,11,3,201,129,3,7,54,108,216,64,171,22,121,126,211,250,250,250,234,
234,106,154,83,201,110,183,211,117,45,79,242,38,141,254,148,122,253,250,245,55,111,222,164,250,233,217,103,159,229,179,80,41,123,255,189,94,175,219,237,94,180,104,145,178,181,128,142,44,108,116,248,17,
93,223,202,155,105,31,177,150,150,22,170,225,218,219,219,233,87,68,215,167,251,124,190,19,39,78,68,115,190,180,126,253,122,62,111,26,205,252,167,122,13,111,145,178,90,173,116,49,53,13,226,108,104,104,
200,201,201,217,184,113,35,191,4,158,102,175,84,78,37,248,216,241,43,60,148,123,135,142,135,202,113,32,209,163,185,59,84,219,199,227,241,80,21,254,232,43,221,132,166,26,251,164,106,86,164,166,166,240,
250,171,165,165,101,193,130,5,124,204,192,158,61,123,26,26,26,146,146,146,232,26,32,154,130,84,25,140,162,172,239,14,30,60,88,87,87,87,89,89,201,198,155,235,109,178,148,99,99,232,178,36,213,148,118,145,
143,183,245,245,245,21,21,21,107,214,172,161,117,164,149,98,140,29,57,114,100,227,198,141,244,201,118,187,253,194,133,11,170,129,19,140,49,143,199,67,107,61,163,71,21,186,252,148,218,23,169,224,43,11,
221,186,117,235,248,157,222,75,75,75,37,73,162,230,152,246,246,118,186,149,0,223,194,52,250,130,166,26,160,41,174,76,38,83,244,109,7,83,105,42,90,176,96,65,73,73,9,77,90,178,111,223,62,234,148,167,225,
79,180,203,84,67,125,72,132,87,70,216,59,119,238,220,201,205,205,85,94,92,116,248,240,97,229,190,206,201,201,225,117,183,221,110,159,222,155,1,9,153,214,37,209,188,238,229,181,233,140,177,3,205,131,146,
36,233,245,122,173,86,171,209,104,68,81,196,161,10,102,165,80,40,180,49,211,203,24,251,233,153,158,24,222,62,189,229,133,198,158,170,186,236,105,128,20,213,124,165,165,165,107,214,172,161,89,138,154,155,
155,105,210,62,62,107,163,213,106,221,184,113,35,53,210,40,231,85,205,201,201,225,45,55,118,187,189,165,165,229,49,230,51,213,44,134,173,173,173,103,206,156,225,67,74,84,51,32,170,238,22,171,92,65,187,
221,126,231,206,157,242,242,114,186,14,157,38,50,116,58,157,70,163,145,38,100,13,159,57,149,38,128,148,36,137,31,181,149,95,253,216,209,0,59,26,134,171,124,158,166,217,162,105,110,84,219,135,70,235,42,
211,237,150,45,91,178,178,178,248,204,59,47,188,240,66,79,79,15,117,89,42,103,46,83,189,151,79,240,206,111,188,66,47,86,254,20,149,183,179,167,251,105,117,118,118,62,150,217,190,98,46,179,168,221,226,
10,197,250,105,185,23,116,228,163,10,47,23,140,49,167,211,73,51,135,208,247,26,12,134,181,107,215,242,115,126,154,76,131,71,103,126,188,101,163,51,178,241,203,3,40,145,175,88,177,130,141,206,164,59,238,
188,170,170,89,87,159,192,73,51,38,91,90,17,85,1,226,61,170,194,84,154,36,85,117,67,194,9,191,133,143,50,194,210,24,229,73,69,85,22,113,94,85,166,184,189,56,253,169,178,178,82,53,175,234,68,81,117,220,
90,28,81,21,38,123,102,158,151,151,167,156,137,9,80,195,34,170,2,32,170,34,170,194,147,91,102,81,90,227,7,53,204,43,207,187,0,165,149,37,232,12,0,0,0,0,48,203,120,189,222,39,121,254,74,64,84,5,128,39,
142,195,225,160,123,50,1,0,64,130,154,92,31,71,170,94,192,38,131,89,79,150,229,20,77,16,219,1,0,0,32,193,162,106,113,166,14,155,12,158,132,168,154,255,148,31,219,1,0,0,32,97,162,42,13,125,157,111,212,
24,37,38,203,50,54,28,204,226,156,106,208,6,231,37,133,88,172,215,84,1,64,194,65,159,33,192,35,171,100,39,219,111,57,233,139,28,87,91,112,93,36,204,242,82,148,55,111,122,154,84,81,249,1,196,109,229,167,
130,62,67,128,71,86,90,39,219,111,57,137,220,73,45,76,233,6,193,160,13,202,163,176,209,97,246,85,120,211,213,164,138,202,15,32,110,43,63,85,213,134,62,67,128,71,83,84,99,232,183,140,165,137,116,213,124,
153,210,42,54,58,204,178,34,148,44,6,242,230,77,195,141,37,81,249,1,196,121,229,23,14,125,134,0,143,160,180,198,208,111,57,185,146,201,27,86,151,155,2,188,109,21,155,30,102,83,78,125,42,89,102,211,55,
74,21,149,31,64,124,86,126,227,86,109,232,51,4,152,209,162,26,91,191,165,24,91,145,54,165,176,252,167,134,83,52,104,91,5,228,84,84,126,0,137,87,249,141,11,125,134,0,51,93,207,198,240,222,88,154,124,232,
112,240,84,178,156,55,207,135,82,13,200,169,168,252,0,18,174,242,155,232,220,18,125,134,0,241,86,207,106,230,166,165,197,240,173,231,111,12,60,103,77,73,214,49,131,54,216,235,19,253,33,65,16,112,177,51,
36,94,225,161,38,153,25,202,169,84,76,82,36,97,142,46,212,231,23,135,101,145,49,134,146,2,16,159,39,153,35,5,86,199,230,232,66,125,62,113,24,245,26,64,124,212,179,66,166,117,73,204,75,240,242,218,116,
122,240,197,160,240,89,95,146,55,160,65,193,134,4,45,60,108,198,102,81,165,98,242,197,160,208,118,79,63,16,212,136,34,70,175,2,196,239,73,38,234,53,128,120,171,103,167,20,85,149,165,154,49,118,111,72,
108,187,39,221,31,70,77,12,241,94,126,230,232,100,101,225,97,51,60,219,63,42,63,128,4,58,201,68,189,6,16,87,245,236,84,163,106,120,193,6,72,44,143,230,150,84,168,252,0,18,235,36,19,245,26,64,156,212,179,
211,19,85,81,176,1,33,21,101,4,96,118,159,100,2,192,99,41,167,211,25,85,1,0,149,31,192,236,59,201,4,128,199,8,81,21,0,0,0,0,226,20,70,203,1,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,
170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,196,53,45,54,1,192,35,246,242,218,116,108,4,128,152,253,
244,76,15,74,43,192,147,83,90,133,76,235,18,108,74,0,84,123,0,8,172,40,173,0,113,88,90,167,51,170,162,96,3,170,186,104,74,199,157,254,192,71,29,247,123,7,131,162,40,50,198,4,65,16,4,1,187,3,224,161,210,
146,197,210,37,201,79,167,106,103,180,20,163,180,2,196,85,105,157,158,168,138,144,10,8,172,209,20,144,219,125,195,191,189,230,237,29,12,10,130,32,142,26,41,138,168,255,0,162,173,2,53,191,179,88,50,207,
17,103,162,8,163,180,2,196,91,105,157,106,84,197,217,39,60,225,103,123,81,150,145,219,125,195,191,189,118,255,222,64,80,20,69,205,40,170,252,168,152,160,176,0,68,67,150,101,122,144,170,103,171,45,154,
116,131,48,141,229,23,165,21,32,14,75,235,148,162,42,206,62,1,103,123,209,148,145,59,253,129,143,58,60,247,6,130,90,173,86,163,209,208,127,9,21,25,148,20,128,73,85,126,161,80,136,49,102,208,6,11,23,8,
211,149,86,81,90,1,226,179,180,198,30,85,113,246,9,56,219,139,186,230,187,223,59,24,212,142,69,37,5,157,15,0,177,149,95,89,150,67,161,144,65,27,92,105,14,77,189,252,162,180,2,196,109,105,213,78,177,84,
83,78,197,217,39,36,238,217,222,96,136,181,220,14,22,46,96,233,6,225,229,181,233,211,222,182,74,53,159,78,167,211,106,181,244,95,85,205,135,50,2,16,91,229,39,138,226,96,72,188,212,19,168,48,132,80,90,
1,102,107,105,141,165,85,21,103,159,48,43,207,246,86,205,151,77,41,140,77,83,219,42,239,118,56,114,169,159,170,61,66,197,132,206,229,208,243,0,48,149,83,77,42,188,178,44,255,206,211,190,167,146,229,152,
11,47,74,43,64,60,151,86,109,108,69,154,114,106,223,80,8,103,159,48,139,206,246,130,43,210,131,166,20,54,141,109,171,103,59,189,212,225,160,172,252,4,5,236,2,128,24,240,178,35,138,162,44,203,109,247,164,
47,37,251,80,90,1,102,101,105,157,92,171,170,42,167,242,34,205,155,84,113,246,9,137,123,182,199,24,75,22,135,151,155,2,83,111,91,229,37,229,151,151,61,84,70,36,73,162,7,232,115,0,152,137,19,206,103,211,
7,98,107,88,69,105,5,136,243,210,42,198,240,77,188,223,95,55,22,191,154,10,101,27,18,232,108,143,208,79,119,48,164,187,236,158,182,187,13,159,237,244,210,229,134,202,115,57,148,14,128,153,40,197,109,247,
244,40,173,0,179,178,180,78,34,170,242,209,60,124,124,170,178,73,149,207,81,133,130,13,137,88,120,248,15,120,48,164,251,98,80,96,211,113,99,139,222,193,16,93,101,72,99,99,80,243,1,204,92,17,246,6,68,148,
86,128,89,89,90,39,93,182,149,163,121,248,217,39,122,73,96,214,156,237,137,162,216,118,79,154,150,15,156,104,6,55,0,152,137,242,139,210,10,48,43,75,107,180,81,149,143,230,233,27,146,85,151,252,35,167,
194,44,75,171,3,65,237,180,52,172,82,133,135,107,13,1,226,31,74,43,64,252,22,207,73,189,26,163,121,224,9,73,171,83,28,247,166,172,252,80,70,0,18,37,170,162,180,2,36,124,84,197,104,30,120,66,210,234,20,
199,189,41,83,47,234,63,128,68,57,71,69,105,5,72,248,168,138,209,60,240,228,212,91,216,8,0,0,0,137,23,85,49,154,7,32,250,188,139,50,2,128,210,10,0,143,58,170,162,72,3,0,0,0,192,35,48,185,217,206,167,50,
154,167,162,162,34,51,51,211,98,177,208,63,61,30,207,149,43,87,206,157,59,231,245,122,103,116,13,205,102,243,242,229,203,149,95,205,24,179,219,237,14,135,163,165,165,5,191,0,0,0,72,104,117,117,117,84,
193,157,58,117,170,177,177,145,49,182,99,199,14,163,209,200,24,107,106,106,106,104,104,160,151,25,12,134,181,107,215,22,20,20,240,90,120,239,222,189,227,190,18,32,129,163,106,204,97,177,182,182,214,100,
50,41,159,52,26,141,37,37,37,37,37,37,245,245,245,118,187,125,230,190,189,172,172,204,102,179,169,158,180,217,108,54,155,45,45,45,13,37,19,226,74,105,105,105,121,121,57,61,222,189,123,247,184,175,225,
85,75,56,85,101,83,88,88,104,181,90,149,191,255,166,166,166,174,174,46,135,195,17,205,185,229,220,185,115,149,239,109,109,109,61,127,254,188,203,229,194,110,2,80,213,113,219,183,111,231,255,124,255,253,
247,163,41,98,143,222,166,77,155,148,77,54,0,179,51,170,198,208,152,106,48,24,54,111,222,76,53,171,219,237,62,126,252,184,195,225,48,24,12,53,53,53,89,89,89,140,177,218,218,218,193,193,193,153,46,216,
173,173,173,103,206,156,241,122,189,202,220,92,84,84,132,168,10,179,213,150,45,91,168,136,41,209,249,225,67,155,79,108,54,91,73,73,137,234,201,130,130,130,130,130,130,184,173,134,1,30,151,229,203,151,
43,255,153,151,151,247,216,203,200,222,189,123,85,207,88,173,86,202,169,126,191,255,189,247,222,227,231,156,225,175,4,72,236,168,26,131,226,226,98,202,169,126,191,255,192,129,3,212,221,239,245,122,15,
30,60,200,251,44,214,173,91,183,127,255,126,126,122,186,124,249,114,101,53,233,116,58,111,222,188,169,172,89,85,99,9,220,110,119,71,71,199,68,85,175,207,231,83,54,220,186,92,174,75,151,46,241,134,43,128,
196,21,33,113,242,156,234,247,251,79,158,60,73,99,93,42,42,42,168,100,209,127,31,122,158,214,213,213,117,242,228,73,151,203,101,181,90,107,106,106,168,32,43,75,43,0,48,198,242,243,243,85,81,245,232,209,
163,241,182,144,201,201,201,244,160,167,167,7,125,35,128,168,58,70,78,78,14,61,104,107,107,83,13,75,189,120,241,34,197,77,139,197,98,48,24,188,94,175,213,106,221,186,117,171,234,19,44,22,139,209,104,164,
106,213,96,48,108,219,182,77,53,150,192,100,50,153,76,166,137,234,93,213,33,195,108,54,175,88,177,130,47,18,126,1,48,251,216,108,54,222,158,250,171,95,253,138,159,167,81,25,161,156,90,84,84,20,121,164,
184,50,7,59,28,142,43,87,174,208,27,209,129,8,160,42,110,188,57,70,146,36,198,152,36,73,133,133,133,202,107,33,248,89,162,221,110,255,236,179,207,138,139,139,169,28,217,237,246,250,250,122,122,65,81,81,
145,36,73,30,143,231,236,217,179,252,189,54,155,173,182,182,150,49,230,241,120,46,92,184,176,98,197,10,170,254,220,110,247,71,31,125,20,97,236,156,106,244,106,109,109,45,31,204,99,177,88,118,237,218,197,
24,163,70,156,240,113,174,84,213,22,23,23,211,34,241,3,130,242,136,161,124,215,208,208,80,89,89,153,209,104,84,126,2,64,34,69,85,30,43,123,123,123,85,127,234,238,238,230,143,51,51,51,237,118,251,198,141,
27,233,159,93,93,93,7,15,30,228,133,156,231,221,13,27,54,208,7,250,253,126,94,7,83,33,127,232,146,80,225,36,126,191,191,185,185,25,189,255,48,43,45,89,178,132,30,184,221,110,85,101,118,238,220,57,170,
50,37,73,202,205,205,157,232,202,66,187,221,62,163,35,200,1,102,141,101,203,150,241,182,15,179,217,76,1,110,233,210,165,227,22,174,236,236,108,229,248,111,155,205,150,154,154,170,215,235,121,69,105,52,
26,171,170,170,186,187,187,85,13,159,70,163,81,217,25,104,50,153,102,110,236,156,213,106,221,180,105,19,15,169,164,164,164,36,63,63,255,221,119,223,85,157,223,174,94,189,122,162,161,243,0,9,19,85,35,80,
22,197,180,180,52,170,62,233,159,169,169,169,21,21,21,151,47,95,118,185,92,13,13,13,188,73,149,23,242,143,63,254,88,217,86,52,217,208,41,73,82,78,78,78,148,215,151,0,196,39,26,120,170,124,230,237,183,
223,118,185,92,102,179,57,188,136,17,175,215,235,241,120,168,106,161,66,23,165,204,204,76,30,127,177,229,1,136,193,96,200,206,206,166,199,215,175,95,239,237,237,165,168,154,149,149,69,93,133,170,215,123,
60,30,186,96,131,183,179,90,44,150,166,166,166,125,251,246,25,12,134,23,95,124,145,202,230,242,229,203,85,149,26,111,157,49,155,205,252,242,143,146,146,146,40,171,176,250,250,250,207,62,251,140,55,208,
70,30,159,90,83,83,67,117,49,239,90,161,54,84,163,209,184,118,237,90,85,71,101,79,79,15,70,187,194,76,19,31,227,119,243,10,149,141,182,185,94,185,114,133,159,50,150,148,148,108,223,190,125,215,174,93,
117,117,117,86,171,85,89,89,50,198,174,93,187,54,217,175,219,61,170,171,171,139,190,98,211,166,77,6,131,1,63,2,120,162,120,60,30,122,48,119,238,220,40,223,82,81,81,193,251,253,47,93,186,132,109,8,64,86,
174,92,73,169,206,227,241,216,237,246,139,23,47,242,63,21,23,23,135,191,222,229,114,81,184,188,124,249,50,127,146,30,123,189,94,222,211,24,94,54,125,62,31,181,206,184,92,46,94,81,102,100,100,76,251,26,
21,22,22,242,203,160,121,92,230,235,181,104,209,34,213,235,111,220,184,129,159,1,204,180,25,111,85,117,187,221,212,181,17,222,132,163,44,102,55,111,222,100,140,53,52,52,36,37,37,241,89,223,136,197,98,
217,180,105,211,155,111,190,57,93,139,116,242,228,73,26,201,39,73,18,13,60,192,239,0,18,81,108,243,32,242,222,186,190,190,190,104,94,175,156,13,160,171,171,11,99,209,0,184,220,220,92,122,208,217,217,73,
113,179,171,171,139,234,151,156,156,156,8,197,115,42,23,54,13,13,13,209,3,85,31,253,180,224,53,181,201,100,82,142,154,227,79,98,167,195,44,140,170,29,29,29,244,227,206,203,203,163,233,162,148,231,163,
244,192,233,116,242,231,143,30,61,122,244,232,81,26,211,205,167,117,164,76,73,113,150,60,243,204,51,81,22,245,151,94,122,137,207,60,64,82,82,82,176,227,97,22,115,185,92,212,8,170,236,184,32,6,131,129,
71,213,240,225,227,227,230,84,234,52,164,114,202,71,144,3,0,31,153,202,70,167,114,83,165,58,171,213,138,49,102,0,9,16,85,207,157,59,151,159,159,111,52,26,37,73,218,182,109,155,114,94,85,94,200,79,159,
62,77,15,118,238,220,217,220,220,204,135,168,210,68,253,244,167,193,193,65,229,9,235,234,213,171,123,123,123,169,65,180,180,180,116,245,234,213,19,13,151,49,153,76,223,254,246,183,249,69,84,102,179,153,
95,188,229,247,251,209,164,10,179,207,245,235,215,169,214,52,153,76,54,155,77,249,35,231,157,146,126,191,191,189,189,61,242,231,240,225,116,108,236,149,142,0,192,194,166,83,13,55,67,19,172,242,134,207,
153,24,56,206,207,96,221,110,247,190,125,251,176,151,225,137,136,170,94,175,247,208,161,67,52,235,190,201,100,10,159,139,170,190,190,158,23,102,73,146,194,175,20,97,163,247,65,101,140,29,57,114,132,38,
171,50,26,141,181,181,181,188,189,39,178,137,62,246,87,191,250,21,126,1,48,251,216,237,246,85,171,86,209,73,221,87,191,250,213,164,164,36,213,188,170,140,177,230,230,230,200,247,52,174,174,174,230,173,
68,184,227,34,64,56,62,157,170,170,128,240,89,141,103,98,130,85,155,205,150,151,151,71,143,59,58,58,166,125,165,90,90,90,104,230,41,154,100,224,196,137,19,116,160,224,183,40,199,180,202,48,11,163,42,99,
204,229,114,237,219,183,79,53,111,191,199,227,185,114,229,138,106,102,199,166,166,166,249,243,231,43,111,177,211,213,213,117,245,234,85,62,235,135,215,235,165,143,202,201,201,225,131,102,232,163,38,250,
246,83,167,78,37,37,37,41,115,42,205,84,69,109,183,248,5,64,220,10,31,40,70,23,248,71,243,222,131,7,15,82,125,41,73,82,85,85,85,85,85,149,242,175,15,141,158,202,156,202,194,166,26,224,147,65,2,60,177,
248,116,170,108,236,53,82,140,177,171,87,175,242,203,33,84,19,172,198,204,104,52,170,14,8,202,203,158,166,215,145,35,71,104,178,42,101,199,38,113,58,157,216,245,48,59,163,42,137,166,80,69,89,240,38,53,
59,21,93,5,130,54,33,120,210,28,60,120,176,176,176,208,106,181,42,43,155,166,166,166,104,230,104,211,235,245,216,128,0,17,240,233,84,157,78,167,234,4,178,165,165,165,178,178,146,174,121,154,104,130,213,
201,242,251,253,109,109,109,143,166,163,195,225,112,188,249,230,155,197,197,197,52,120,143,63,223,218,218,26,205,0,119,128,105,39,100,90,151,68,243,186,151,215,166,51,198,14,52,15,74,146,164,215,235,181,
90,173,70,163,17,69,17,91,16,102,165,80,40,180,49,211,203,24,251,233,153,158,24,222,142,242,2,144,40,101,54,158,75,171,242,110,85,152,190,20,158,216,210,138,186,19,0,0,0,0,226,20,162,42,0,0,0,0,32,170,
2,0,0,0,0,76,134,22,155,0,0,0,32,14,217,237,118,76,254,13,128,86,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,
0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,
0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,
0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,108,2,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,
84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,
68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,
0,68,85,0,0,0,0,0,68,213,200,42,42,42,118,237,218,101,181,90,177,107,227,86,97,97,225,174,93,187,10,11,11,177,41,32,122,59,119,238,220,178,101,11,182,3,36,58,131,193,176,107,215,174,234,234,106,108,10,
128,40,105,31,227,119,191,244,210,75,38,147,137,255,211,233,116,94,188,120,177,165,165,133,18,103,73,73,201,177,99,199,232,159,47,189,244,18,99,108,223,190,125,113,114,160,121,229,149,87,194,159,111,109,
109,109,107,107,219,186,117,107,107,107,235,209,163,71,103,241,143,70,181,119,84,251,84,146,164,189,123,247,162,104,77,163,234,234,234,130,130,2,213,143,45,202,223,24,253,92,19,226,55,89,90,90,154,155,
155,107,177,88,24,99,110,183,251,147,79,62,9,255,129,1,196,131,29,59,118,248,253,254,240,42,169,176,176,176,170,170,234,212,169,83,141,141,141,216,74,0,179,33,170,50,198,252,126,255,27,111,188,65,21,234,
166,77,155,170,170,170,134,134,134,236,118,123,252,111,184,174,174,174,131,7,15,170,158,124,66,90,115,207,157,59,87,84,84,180,116,233,82,85,146,176,90,173,38,147,169,169,169,9,229,106,38,188,255,254,251,
14,135,131,170,195,202,202,74,179,217,188,127,255,254,89,22,199,91,91,91,105,165,204,102,115,101,101,165,213,106,173,175,175,199,174,231,103,29,223,254,246,183,37,73,106,106,106,106,104,104,136,195,37,
164,160,54,238,73,236,44,211,217,217,89,80,80,96,181,90,169,72,114,75,151,46,245,251,253,200,169,0,211,43,94,6,0,120,189,222,253,251,247,251,253,254,47,127,249,203,140,177,134,134,134,221,187,119,39,220,
241,206,225,112,236,222,189,123,118,55,169,210,206,234,233,233,201,200,200,80,61,159,149,149,69,33,30,229,106,70,181,180,180,116,118,118,90,44,150,89,115,106,100,54,155,11,10,10,186,186,186,120,217,113,
185,92,7,15,30,116,56,28,21,21,21,216,227,100,229,202,149,146,36,249,253,254,156,156,28,108,141,199,235,250,245,235,252,136,167,148,145,145,209,221,221,141,237,3,48,189,180,113,181,52,30,143,199,104,52,
242,179,115,106,70,226,227,4,118,237,218,197,24,115,187,221,212,237,82,88,88,184,114,229,74,234,46,244,251,253,205,205,205,188,165,97,222,188,121,37,37,37,116,28,113,58,157,135,15,31,246,122,189,143,166,
217,227,149,87,94,225,109,30,91,182,108,201,200,200,56,121,242,36,95,78,187,221,174,108,37,162,166,35,90,78,213,42,196,185,246,246,118,139,197,82,90,90,170,108,63,200,207,207,119,187,221,212,204,96,48,
24,54,108,216,96,179,217,34,175,154,213,106,221,186,117,171,178,149,72,53,186,96,231,206,157,221,221,221,253,253,253,121,121,121,84,79,127,252,241,199,183,110,221,90,183,110,29,109,82,213,254,77,220,77,
58,41,62,159,79,21,245,54,111,222,76,101,135,126,102,39,78,156,240,122,189,124,176,74,65,65,1,13,33,224,35,1,42,42,42,242,243,243,233,45,78,167,243,232,209,163,46,151,235,113,173,78,74,74,10,99,172,191,
191,63,60,148,171,158,81,46,182,170,155,181,174,174,142,126,18,180,70,167,79,159,166,159,34,255,141,205,157,59,151,126,144,110,183,251,248,241,227,202,246,48,229,16,11,85,33,141,31,185,185,185,30,143,
231,202,149,43,37,37,37,102,179,249,49,238,47,176,219,237,235,215,175,207,207,207,87,30,94,74,75,75,37,73,186,122,245,42,255,231,138,21,43,168,242,138,80,196,168,154,160,222,69,178,115,231,78,143,199,
67,213,28,253,181,185,185,57,39,39,135,62,170,181,181,245,204,153,51,252,232,234,241,120,142,28,57,162,252,49,199,85,209,6,152,133,81,117,92,251,246,237,11,31,171,74,89,150,119,23,150,150,150,46,94,188,
152,255,245,185,231,158,251,228,147,79,14,30,60,72,85,120,77,77,77,120,103,253,163,33,73,210,202,149,43,233,96,65,203,220,215,215,71,71,55,131,193,176,121,243,102,143,199,179,103,207,30,175,215,91,90,
90,90,94,94,62,52,52,148,16,157,71,141,141,141,107,214,172,201,205,205,229,75,107,179,217,140,70,35,239,253,223,182,109,27,99,236,237,183,223,166,21,175,172,172,156,59,119,110,108,9,32,43,43,203,110,183,
211,161,124,203,150,45,229,229,229,30,143,231,194,133,11,251,247,239,87,237,223,132,222,164,147,146,154,154,234,247,251,121,253,84,86,86,118,229,202,21,250,93,89,173,214,154,154,26,218,38,94,175,119,207,
158,61,225,99,85,233,124,128,162,30,141,189,169,173,173,125,140,99,193,29,14,135,223,239,207,206,206,46,44,44,140,208,151,146,149,149,229,243,249,104,36,116,117,117,117,121,121,249,173,91,183,104,35,84,
84,84,244,247,247,211,73,11,173,81,77,77,141,114,204,116,81,81,81,115,115,243,238,221,187,41,212,214,212,212,188,251,238,187,116,134,83,87,87,103,52,26,233,196,152,182,94,109,109,109,188,165,85,179,217,
108,177,88,154,154,154,46,95,190,92,82,82,178,124,249,114,101,72,154,236,25,157,213,106,229,127,82,13,11,142,156,156,248,153,228,210,165,75,85,109,1,116,124,99,140,85,85,85,209,131,217,61,18,128,206,25,
108,54,27,31,177,70,231,18,180,202,116,240,105,106,106,162,237,86,87,87,247,194,11,47,188,247,222,123,49,164,70,73,146,50,51,51,235,235,235,93,46,23,109,255,130,130,130,166,166,38,229,143,153,255,212,
227,173,104,3,76,139,56,154,1,192,96,48,24,141,198,40,123,79,202,202,202,232,124,145,39,39,101,24,61,126,252,56,29,47,92,46,87,119,119,119,120,87,245,212,101,101,101,237,82,152,232,218,100,191,223,191,
127,255,126,58,60,181,180,180,120,60,158,204,204,76,250,211,134,13,27,244,122,61,175,63,26,27,27,157,78,231,234,213,171,19,229,167,211,221,221,157,158,158,110,48,24,232,159,75,150,44,97,140,93,190,124,
153,14,211,38,147,233,248,241,227,124,197,155,155,155,109,54,155,217,108,142,225,139,186,186,186,120,110,160,22,139,179,103,207,82,250,116,185,92,202,161,8,137,190,73,163,84,81,81,145,149,149,245,241,
199,31,243,103,234,235,235,121,112,113,56,28,157,157,157,17,126,243,102,179,185,164,164,164,181,181,149,182,161,215,235,61,119,238,156,201,100,42,45,45,125,140,43,117,242,228,73,163,209,88,85,85,181,107,
215,174,157,59,119,86,87,87,135,119,253,43,127,9,231,207,159,103,138,30,216,134,134,134,250,250,122,218,239,94,175,247,226,197,139,70,163,145,154,157,136,178,125,253,244,233,211,70,163,113,229,202,149,
244,91,181,88,44,103,207,158,165,200,235,112,56,174,92,185,18,243,111,117,230,44,95,190,156,182,128,203,229,114,187,221,249,249,249,225,71,36,189,94,255,198,27,111,236,222,189,187,187,187,187,188,188,
188,166,166,166,189,189,125,247,238,221,111,191,253,182,209,104,172,169,169,225,63,128,77,155,54,49,198,118,239,222,189,123,247,238,142,142,142,170,170,170,73,237,253,231,158,123,238,234,213,171,170,79,
110,105,105,57,118,236,24,37,84,250,228,217,61,98,149,70,58,209,113,143,234,175,244,244,116,94,127,173,94,189,186,171,171,139,255,228,168,73,165,172,172,44,134,47,82,86,34,231,206,157,99,140,181,182,182,
242,79,190,121,243,166,209,104,164,177,64,241,89,180,1,166,46,94,90,85,205,102,51,77,222,113,242,228,201,104,94,108,52,26,175,92,185,18,205,39,251,124,62,73,146,12,6,195,244,142,1,24,247,178,170,104,14,
58,122,189,158,30,103,100,100,244,244,244,40,151,202,229,114,89,44,150,105,95,212,25,114,245,234,213,172,172,172,149,43,87,210,97,49,59,59,219,233,116,210,241,244,233,167,159,86,182,249,49,198,110,223,
190,205,24,123,230,153,103,166,165,43,42,45,45,109,220,231,19,125,147,70,182,117,235,86,101,54,85,93,125,88,93,93,77,13,111,202,115,191,113,215,250,153,103,158,97,163,131,237,120,109,23,97,171,62,26,45,
45,45,45,45,45,116,16,88,180,104,17,117,199,231,231,231,31,58,116,104,220,223,204,192,192,0,99,44,41,41,73,153,224,121,23,63,81,254,85,137,26,113,159,126,250,105,254,91,85,134,170,222,222,94,250,45,197,
85,183,105,102,102,166,199,227,161,50,213,209,209,81,82,82,162,186,166,71,117,70,151,149,149,117,246,236,89,126,198,174,60,163,43,43,43,243,249,124,252,154,188,134,134,134,204,204,204,213,171,87,71,223,
249,192,135,79,80,91,64,118,118,246,19,88,119,58,28,14,183,219,205,215,157,70,18,127,246,217,103,19,213,80,227,142,239,143,77,106,106,170,234,153,228,228,228,184,45,218,0,9,31,85,37,73,162,17,168,116,
168,141,178,127,132,70,182,37,58,189,94,111,52,26,249,234,39,156,150,150,150,202,202,74,26,3,64,189,255,23,46,92,224,171,166,122,241,224,224,96,132,232,48,245,95,17,197,178,68,223,164,145,81,15,53,117,
44,46,91,182,140,71,85,131,193,240,226,139,47,50,198,58,59,59,41,127,132,79,110,165,68,123,161,182,182,182,182,182,54,222,214,49,124,148,66,89,89,89,52,125,241,52,80,181,181,181,149,143,57,161,62,232,
200,5,144,254,171,60,10,197,39,222,251,79,255,164,49,0,121,121,121,170,203,207,39,117,70,167,124,230,230,205,155,49,143,127,157,161,182,128,132,64,231,12,52,6,128,122,255,169,84,142,91,67,249,124,190,
244,244,244,25,90,18,42,212,241,92,180,1,18,56,170,242,201,170,158,76,177,53,205,198,143,206,206,78,234,42,93,182,108,153,223,239,191,120,241,34,63,40,143,123,210,63,52,52,132,77,58,69,141,141,141,105,
105,105,5,5,5,124,208,115,113,113,177,209,104,12,111,103,141,38,248,198,243,154,54,52,52,20,21,21,69,211,17,111,181,90,41,201,77,234,18,58,126,21,87,252,31,133,168,247,159,70,215,48,198,104,12,192,100,
219,50,149,103,116,179,184,9,224,81,162,115,134,101,203,150,185,221,110,58,83,162,231,169,201,63,252,212,40,252,192,56,115,231,180,216,59,48,155,36,228,221,170,28,14,135,114,208,103,130,162,177,158,9,
189,10,212,219,181,124,249,114,154,162,133,55,171,220,185,115,71,146,36,229,84,74,11,22,44,96,140,93,187,118,77,245,9,227,30,211,159,228,77,26,141,163,71,143,58,157,78,106,206,225,79,186,221,238,232,211,
60,27,111,158,157,199,168,176,176,48,124,100,42,13,131,142,166,157,111,178,39,66,133,133,133,146,36,209,160,148,187,119,239,170,126,171,113,136,102,167,218,190,125,59,31,28,111,50,153,84,131,113,163,55,
81,96,154,222,194,248,36,112,185,92,78,167,51,35,35,131,206,37,218,218,218,248,243,30,143,103,254,252,249,202,23,43,71,178,70,179,59,98,59,81,143,183,162,13,240,4,69,213,207,63,255,220,104,52,42,219,87,
46,92,184,96,177,88,248,189,233,74,75,75,235,234,234,18,107,211,159,60,121,82,175,215,215,213,213,241,245,170,168,168,72,172,181,176,219,237,30,143,167,168,168,200,104,52,222,184,113,131,63,223,216,216,
232,118,187,55,110,220,72,171,86,88,88,88,84,84,100,183,219,195,99,7,181,15,229,228,228,80,46,161,105,86,158,228,77,26,165,195,135,15,123,60,158,245,235,215,27,12,6,170,159,158,125,246,89,190,202,202,
222,127,175,215,235,118,187,23,45,90,164,60,211,179,219,237,69,69,69,60,29,154,205,230,218,218,218,199,56,131,41,13,169,172,171,171,227,215,127,88,173,214,77,155,54,249,124,190,19,39,78,68,249,59,204,
205,205,229,71,131,240,235,87,248,153,173,213,106,165,139,50,233,75,27,26,26,232,183,202,239,244,91,88,88,88,87,87,23,63,225,149,223,89,99,183,194,219,111,191,205,24,91,182,108,217,180,156,209,209,64,
88,42,158,143,166,229,111,214,160,171,154,138,138,138,248,72,98,94,67,101,101,101,241,50,69,71,161,179,103,207,142,219,242,34,73,18,189,210,108,54,111,217,178,69,146,164,152,27,113,226,173,104,3,76,11,
109,66,44,229,153,51,103,204,102,243,246,237,219,217,232,188,170,141,141,141,67,67,67,207,61,247,28,13,50,163,25,52,19,238,140,252,189,247,222,43,43,43,163,245,162,85,235,232,232,72,172,181,160,187,182,
132,223,160,229,192,129,3,27,54,108,160,85,139,60,191,105,125,125,125,117,117,53,77,255,105,183,219,105,10,152,39,121,147,70,195,235,245,254,230,55,191,169,173,173,221,182,109,219,190,125,251,78,157,58,
181,102,205,26,218,17,205,205,205,173,173,173,202,180,122,252,248,241,141,27,55,82,73,161,89,171,234,235,235,43,42,42,114,114,114,248,166,182,219,237,143,247,222,13,13,13,13,6,131,161,166,166,166,188,
188,156,158,105,109,109,141,126,70,228,35,71,142,240,117,180,219,237,23,46,92,224,159,195,237,216,177,131,38,155,84,205,156,186,111,223,190,234,234,234,202,202,74,26,222,234,247,251,219,218,218,84,163,
57,31,35,106,36,227,189,255,252,167,78,237,121,49,124,224,217,179,103,95,120,225,133,186,186,58,26,217,92,81,81,97,177,88,78,157,58,197,227,142,205,102,171,168,168,104,104,104,160,89,138,163,79,78,237,
237,237,116,143,177,39,231,142,184,116,235,62,73,146,84,21,16,29,15,87,172,88,65,69,204,233,116,78,116,37,70,75,75,75,90,90,90,73,73,73,73,73,9,77,28,54,149,171,175,226,176,104,3,76,157,144,105,93,18,
205,235,94,94,155,206,24,59,208,60,40,73,146,94,175,215,106,181,26,141,70,20,69,108,65,152,149,66,161,208,198,76,47,99,236,167,103,98,137,44,40,47,241,35,252,54,19,137,101,162,219,205,211,101,103,52,70,
153,230,85,229,163,180,233,170,50,229,42,111,217,178,37,43,43,139,230,27,102,17,231,85,229,159,204,255,84,89,89,169,154,87,85,57,26,146,174,225,227,159,92,90,90,186,102,205,26,74,183,143,120,94,213,152,
203,44,74,43,64,156,215,176,136,170,0,136,170,136,170,240,228,150,89,148,86,128,56,47,173,40,141,0,0,0,0,16,167,180,216,4,0,48,139,57,28,14,186,5,37,0,0,36,34,180,170,2,0,0,0,192,172,136,170,169,122,1,
155,12,102,61,89,150,83,52,65,108,7,0,0,128,4,139,170,197,153,58,108,50,120,18,162,106,254,83,126,108,7,0,0,128,132,137,170,116,149,214,124,163,198,40,49,89,150,177,225,96,22,231,84,131,54,56,47,41,196,
98,189,252,159,67,47,4,192,35,43,182,83,236,9,65,105,5,136,219,210,58,233,177,170,171,45,24,222,10,179,188,20,229,205,155,158,38,85,244,66,0,60,178,98,59,197,158,16,148,86,128,184,45,173,147,200,157,212,
194,148,110,16,12,218,160,60,10,27,29,102,223,217,222,212,155,84,209,11,1,240,40,139,237,84,122,66,80,90,1,226,188,180,198,210,68,186,106,190,76,105,21,27,29,102,89,17,74,22,3,121,243,166,243,30,232,232,
133,0,120,4,37,119,90,122,66,80,90,1,226,179,180,78,174,100,242,134,213,229,166,0,111,91,197,166,135,217,148,83,159,74,150,217,148,71,169,50,244,66,0,60,170,146,59,245,158,16,148,86,128,120,46,173,98,
108,69,218,148,194,242,159,26,78,209,160,109,21,144,83,31,2,189,16,0,51,93,114,81,90,1,102,113,105,213,204,77,75,155,236,123,206,223,24,120,206,154,146,172,99,115,180,193,126,191,56,28,18,5,1,215,78,2,
114,234,248,37,37,69,18,230,232,66,125,126,113,88,22,25,99,40,44,0,113,88,114,81,90,1,226,182,180,198,18,85,149,105,213,160,13,246,250,68,127,72,64,145,134,68,44,60,212,31,49,67,237,169,15,234,63,29,155,
163,11,245,249,196,97,148,20,128,120,45,185,40,173,0,241,89,90,133,76,235,146,152,151,224,229,181,233,244,224,139,65,225,179,190,36,111,64,131,130,13,9,90,120,102,34,167,162,164,0,36,92,201,69,105,5,136,
183,210,58,165,168,170,44,213,140,177,123,67,98,219,61,233,254,48,46,162,132,120,47,63,115,116,178,178,240,204,104,78,69,73,1,72,172,146,139,210,10,16,87,165,117,170,81,53,188,96,3,36,150,153,14,169,40,
41,0,137,88,114,81,90,1,226,164,180,78,79,84,69,193,6,84,117,40,41,0,56,189,4,128,105,47,173,211,25,85,1,0,0,0,0,166,17,198,223,0,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,
0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,192,108,166,157,150,79,193,93,146,1,0,0,0,64,233,167,103,122,166,254,33,66,166,117,9,66,42,0,0,0,0,196,97,96,141,61,
170,42,67,234,157,254,192,71,29,247,123,7,131,162,40,50,198,4,65,16,4,1,251,6,0,0,0,224,9,148,150,44,150,46,73,126,58,85,59,245,192,26,99,84,229,57,245,118,223,240,111,175,121,123,7,131,130,32,136,163,
70,62,26,105,21,0,0,0,224,201,13,172,154,223,89,44,153,231,136,83,73,171,177,68,85,202,169,183,251,134,127,123,237,254,189,129,160,40,138,154,81,20,85,41,164,34,170,2,0,0,0,60,153,100,89,166,7,169,122,
182,218,162,73,55,8,177,165,213,73,71,85,202,169,119,250,3,31,117,120,238,13,4,181,90,173,70,163,161,255,18,106,94,69,84,5,0,0,0,120,194,163,106,40,20,98,140,25,180,193,194,5,66,108,105,117,114,81,85,
145,83,239,247,14,6,181,99,81,171,42,6,170,2,0,0,0,0,5,86,89,150,67,161,144,65,27,92,105,14,197,144,86,99,153,172,138,114,170,78,167,211,106,181,244,95,85,78,69,84,5,0,0,0,0,138,170,162,40,14,134,196,
75,61,129,10,67,104,178,159,48,137,168,202,135,168,242,246,84,157,78,199,163,42,245,251,99,148,42,0,0,0,0,240,168,74,255,21,4,97,72,22,191,24,244,61,149,44,191,188,54,61,250,134,213,73,223,173,234,108,
167,151,6,167,234,20,248,213,84,104,82,5,0,0,0,0,194,195,33,101,197,182,123,210,100,63,33,218,168,202,71,169,246,13,201,170,33,170,124,142,42,132,84,0,0,0,0,8,15,172,148,21,7,130,218,47,6,5,54,153,123,
72,77,174,85,245,108,167,151,166,166,226,57,21,45,169,0,0,0,0,16,77,96,21,4,161,237,158,126,82,239,154,92,84,237,29,12,209,140,84,116,29,21,114,42,0,0,0,0,68,159,86,189,129,201,133,207,73,190,122,130,
217,254,1,0,0,0,0,162,73,171,51,27,85,41,173,226,34,42,0,0,0,0,152,105,177,68,85,132,84,0,0,0,0,136,187,168,202,167,27,64,90,5,0,0,0,128,248,138,170,0,0,0,0,0,113,26,85,209,152,10,0,0,0,0,113,26,85,1,
0,0,0,0,16,85,1,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,0,81,21,0,0,0,0,16,85,1,0,0,0,0,102,134,54,209,87,224,208,161,67,38,147,137,49,246,206,59,239,236,223,191,63,250,55,238,221,187,215,102,179,197,240,
198,113,253,229,95,254,229,218,181,107,25,99,118,187,125,199,142,29,248,97,1,0,0,0,196,105,84,173,171,171,251,230,55,191,73,143,195,163,27,207,136,211,21,19,31,37,190,106,110,183,123,243,230,205,248,1,
193,204,149,157,245,235,215,71,62,61,11,247,225,135,31,238,221,187,151,255,115,199,142,29,43,86,172,224,197,205,237,118,159,60,121,242,131,15,62,112,187,221,81,46,207,115,207,61,247,218,107,175,225,7,
15,160,244,208,182,137,220,220,220,159,254,244,167,19,189,253,199,63,254,241,175,127,253,235,169,151,211,220,220,220,141,27,55,42,223,59,48,48,240,203,95,254,82,121,16,0,64,84,125,56,155,205,246,220,115,
207,125,242,201,39,188,104,241,66,53,155,252,232,71,63,194,143,9,226,71,110,110,238,95,252,197,95,100,102,102,42,159,52,153,76,207,63,255,252,243,207,63,175,170,41,35,124,200,246,237,219,177,49,1,226,
179,156,110,220,184,241,249,231,159,87,62,147,146,146,242,252,243,207,87,86,86,254,225,31,254,97,244,103,164,0,79,122,84,101,140,173,95,191,158,71,213,141,27,55,98,163,3,76,11,85,27,170,178,170,251,111,
255,237,191,81,203,235,205,155,55,127,242,147,159,124,242,201,39,38,147,233,123,223,251,222,234,213,171,25,99,223,255,254,247,251,250,250,120,169,28,183,6,141,208,38,4,0,209,155,40,113,78,189,156,146,
163,71,143,82,215,199,215,191,254,245,63,250,163,63,162,79,254,198,55,190,129,182,85,64,84,157,132,117,235,214,81,65,98,140,85,86,86,70,120,229,142,29,59,126,247,119,127,55,37,37,133,254,121,230,204,153,
127,249,151,127,81,21,84,229,107,142,30,61,154,156,156,172,250,16,222,53,115,230,204,25,222,216,25,205,144,214,175,127,253,235,95,250,210,151,232,24,65,168,35,134,23,120,254,201,116,44,248,205,111,126,
195,70,59,70,119,236,216,65,103,183,202,47,101,140,213,213,213,109,216,176,129,159,52,219,237,246,227,199,143,255,252,231,63,231,47,160,15,97,140,189,252,242,203,202,83,228,137,82,8,192,67,125,227,27,
223,160,95,251,192,192,192,119,190,243,29,106,92,113,187,221,127,246,103,127,198,135,223,108,223,190,253,161,85,32,0,196,121,57,85,230,224,159,255,252,231,188,10,91,177,98,5,182,48,204,26,51,59,3,192,
192,192,0,99,44,37,37,229,235,95,255,58,101,65,147,201,68,79,170,228,230,230,30,58,116,232,249,231,159,231,57,149,49,182,118,237,218,215,94,123,173,174,174,142,63,179,119,239,94,229,107,170,171,171,149,
175,159,162,194,194,66,101,78,101,163,29,49,239,190,251,110,108,31,184,119,239,222,111,126,243,155,202,206,29,155,205,246,71,127,244,71,127,249,151,127,25,254,226,55,222,120,67,217,149,243,252,243,207,
43,87,28,32,122,37,37,37,244,224,244,233,211,170,78,192,227,199,143,243,159,226,68,3,94,25,99,237,237,237,235,215,175,95,191,126,253,135,31,126,136,237,9,16,159,229,116,239,222,189,209,140,228,1,64,84,
141,100,112,112,240,204,153,51,108,180,223,255,75,95,250,18,99,236,151,191,252,101,248,43,119,238,220,201,251,65,54,111,222,172,172,35,191,249,205,111,230,230,230,50,198,234,234,234,248,56,215,159,252,
228,39,84,149,78,239,112,156,163,71,143,190,252,242,203,170,74,58,51,51,147,162,246,143,126,244,163,119,222,121,135,158,116,187,221,244,178,137,174,53,217,177,99,7,45,237,192,192,192,119,191,251,221,245,
235,215,255,248,199,63,230,17,60,60,134,254,242,151,191,164,15,188,112,225,2,61,179,97,195,6,252,64,33,130,231,159,127,254,55,99,81,73,225,103,71,183,110,221,82,189,229,210,165,75,202,115,51,108,67,128,
153,246,253,239,127,95,89,72,15,29,58,196,107,150,233,45,167,38,147,137,87,145,215,175,95,199,150,7,68,213,104,157,62,125,154,141,94,92,69,109,150,252,124,113,220,2,246,139,95,252,130,210,231,222,189,
123,121,251,43,37,93,30,221,206,156,57,163,236,67,159,46,63,250,209,143,94,123,237,181,246,246,118,126,194,122,243,230,77,122,60,103,206,156,169,156,49,83,15,206,175,127,253,107,30,67,11,10,10,84,175,
231,155,165,181,181,149,30,76,99,131,49,0,225,63,111,198,152,197,98,193,6,1,152,53,229,244,123,223,251,30,175,53,102,162,138,4,120,92,102,124,172,234,175,127,253,235,223,255,253,223,207,204,204,220,181,
107,23,165,76,101,33,12,63,107,84,158,77,186,221,110,42,120,79,63,253,180,242,28,180,163,163,99,134,150,182,174,174,206,104,52,86,86,86,70,232,115,137,210,184,103,204,119,239,222,165,7,86,171,117,162,
55,58,157,78,252,46,33,26,49,12,104,166,102,87,252,210,0,30,153,40,39,220,152,98,57,221,177,99,7,31,192,246,225,135,31,134,215,179,0,137,235,81,220,173,234,196,137,19,140,49,10,127,212,200,26,135,76,38,
211,187,239,190,251,205,111,126,243,249,231,159,159,122,78,5,120,140,120,111,192,194,133,11,85,127,82,94,108,209,210,210,130,109,5,48,11,202,41,191,174,151,225,146,92,64,84,141,205,254,253,251,169,43,
255,230,205,155,227,158,92,42,139,162,178,136,242,200,120,231,206,157,200,5,123,234,190,241,141,111,80,59,232,192,192,192,59,239,188,51,245,129,176,227,46,237,252,249,243,233,129,195,225,192,143,15,102,
72,83,83,19,61,88,183,110,157,234,188,139,207,22,103,183,219,49,237,34,192,44,40,167,127,251,183,127,139,156,10,136,170,211,224,247,126,239,247,214,175,95,255,226,139,47,142,251,87,183,219,109,183,219,
233,241,215,190,246,53,42,180,59,118,236,224,195,110,104,28,231,229,203,151,233,159,197,197,197,207,61,247,28,99,236,43,95,249,74,248,100,85,148,107,25,99,207,62,251,44,117,163,140,251,178,137,12,14,14,
210,133,95,207,61,247,92,248,187,120,95,140,201,100,162,101,136,230,48,196,151,150,119,208,240,1,169,0,211,142,223,231,38,37,37,229,245,215,95,167,159,159,201,100,250,219,191,253,91,62,40,252,237,183,
223,198,134,2,72,232,114,106,50,153,246,238,221,75,213,202,192,192,192,143,127,252,99,228,84,152,149,180,113,178,28,111,188,241,6,77,134,156,153,153,201,47,144,36,239,188,243,14,13,187,249,249,207,127,
190,110,221,186,148,148,20,147,201,196,39,106,13,119,252,248,113,58,197,76,73,73,225,211,152,143,59,67,150,210,191,253,219,191,209,187,76,38,147,106,1,148,90,90,90,6,6,6,40,67,71,190,225,228,222,189,123,
233,126,119,41,41,41,170,165,61,115,230,76,98,221,78,22,30,11,62,231,46,247,242,203,47,71,51,4,205,237,118,255,249,159,255,57,221,5,39,51,51,51,188,176,252,248,199,63,142,60,89,99,248,45,0,248,68,194,
170,153,131,1,158,100,54,155,77,85,78,163,191,5,241,212,203,233,235,175,191,206,47,138,72,73,73,249,254,247,191,255,253,239,127,95,89,117,162,162,129,217,65,140,147,229,104,111,111,223,188,121,243,135,
31,126,168,204,148,103,206,156,249,238,119,191,203,11,91,123,123,251,127,249,47,255,133,183,191,82,79,125,120,231,72,123,123,251,143,127,252,99,222,255,126,225,194,133,151,95,126,121,112,112,48,242,2,
124,242,201,39,202,119,81,57,15,255,112,183,219,173,92,134,200,118,236,216,241,206,59,239,40,63,211,110,183,255,228,39,63,65,77,15,143,160,64,189,248,226,139,31,126,248,161,242,183,234,118,187,63,252,
240,195,205,155,55,99,46,70,128,89,80,78,49,75,12,60,33,132,76,235,146,104,94,247,242,218,116,198,216,129,230,65,73,146,244,122,189,86,171,213,104,52,162,40,98,11,2,0,0,0,64,148,66,161,208,198,76,47,99,
236,167,103,122,162,121,61,178,38,0,0,0,0,196,41,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,64,84,5,0,0,0,0,68,85,0,0,0,0,0,68,85,0,0,0,
0,64,84,5,0,0,0,0,136,243,168,154,170,23,176,201,0,0,0,0,32,6,178,44,167,104,130,51,24,85,139,51,117,216,202,0,0,0,0,16,91,84,205,127,202,63,35,81,245,167,103,122,24,99,243,141,26,163,196,100,89,198,182,
6,0,0,0,128,73,229,84,131,54,56,47,41,196,131,229,116,70,85,110,181,5,195,91,1,0,0,0,96,210,81,53,111,158,127,178,239,154,68,238,164,252,155,110,16,12,218,160,60,10,219,29,0,0,0,0,30,154,83,83,52,147,
110,82,101,177,205,0,176,106,190,76,105,21,219,29,0,0,0,0,30,154,83,147,197,64,222,60,95,12,239,213,204,77,75,139,254,213,231,111,12,60,103,77,73,145,132,57,186,80,159,95,28,150,69,198,152,32,96,90,0,
0,0,0,0,136,148,83,159,74,150,217,36,155,84,89,12,173,170,244,5,166,20,150,255,212,112,138,6,109,171,0,0,0,0,48,126,72,13,133,66,83,201,169,140,49,33,211,186,36,134,239,126,121,109,58,61,248,98,80,248,
172,47,201,27,208,160,109,21,0,0,0,0,40,164,210,224,84,30,82,99,203,169,177,71,85,101,90,101,140,221,27,18,219,238,73,247,135,49,57,0,0,0,0,192,147,158,83,231,232,100,101,72,141,57,167,78,41,170,134,7,
86,0,0,0,0,0,165,152,67,234,244,68,85,4,86,0,0,0,0,152,246,144,58,157,81,21,0,0,0,0,96,218,97,116,41,0,0,0,0,32,170,2,0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,32,170,2,0,0,0,0,32,170,2,
0,0,0,0,32,170,2,0,0,0,0,162,42,0,0,0,0,0,162,42,0,0,0,0,204,102,255,255,0,56,9,1,106,161,20,14,127,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::trio_png = (const char*) resource_MainWindow_trio_png;
const int MainWindow::trio_pngSize = 65759;

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
