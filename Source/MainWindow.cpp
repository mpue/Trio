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
#include "PluginProcessor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
/*
MainWindow::MainWindow (AudioProcessor* p) : MainWindow() {
    this->processor = p;
}
 */

//[/MiscUserDefs]

//==============================================================================
// MainWindow::MainWindow ()
// {

MainWindow::MainWindow (TrioAudioProcessor* p) {
    this->processor = p;
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (cutoffSlider = new Slider ("cutoffSlider"));
    cutoffSlider->setRange (0.1, 20, 0.1);
    cutoffSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    cutoffSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    cutoffSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    cutoffSlider->addListener (this);

    addAndMakeVisible (resoSlider = new Slider ("resoSlider"));
    resoSlider->setRange (0.1, 20, 0.1);
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
    filterModSlider->setRange (0, 20, 0.2);
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

    addAndMakeVisible(ampVolSlider = new Slider("ampVolSlider"));
    ampVolSlider->setRange (0, 1, 0.02);
    ampVolSlider->setSliderStyle (Slider::Rotary);
    ampVolSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampVolSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampVolSlider->addListener (this);

    addAndMakeVisible (presetLabel = new Label ("presetLabel",
                                                TRANS("Preset")));
    presetLabel->setFont (Font (15.00f, Font::plain));
    presetLabel->setJustificationType (Justification::centredLeft);
    presetLabel->setEditable (false, false, false);
    presetLabel->setColour (Label::textColourId, Colours::white);
    presetLabel->setColour (TextEditor::textColourId, Colours::black);
    presetLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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
                            Image(), 1.000f, Colour (0xffff7e00),
                            Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton3 = new ImageButton ("new button"));
    imageButton3->setButtonText (TRANS("Pulse"));
    imageButton3->addListener (this);

    imageButton3->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0x00ffffff),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
    imageButton2->setButtonText (TRANS("Sine"));
    imageButton2->addListener (this);

    imageButton2->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0x00ffffff),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton4 = new ImageButton ("new button"));
    imageButton4->setButtonText (TRANS("Sawtooth"));
    imageButton4->addListener (this);

    imageButton4->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton5 = new ImageButton ("new button"));
    imageButton5->setButtonText (TRANS("Pulse"));
    imageButton5->setRadioGroupId (1);
    imageButton5->addListener (this);

    imageButton5->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton6 = new ImageButton ("new button"));
    imageButton6->setButtonText (TRANS("Sine"));
    imageButton6->addListener (this);

    imageButton6->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton7 = new ImageButton ("new button"));
    imageButton7->setButtonText (TRANS("Sawtooth"));
    imageButton7->addListener (this);

    imageButton7->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton8 = new ImageButton ("new button"));
    imageButton8->setButtonText (TRANS("Pulse"));
    imageButton8->setRadioGroupId (1);
    imageButton8->addListener (this);

    imageButton8->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (imageButton9 = new ImageButton ("new button"));
    imageButton9->setButtonText (TRANS("Sine"));
    imageButton9->addListener (this);

    imageButton9->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    addAndMakeVisible (statusLabel = new Label ("statusLabel",
                                                TRANS("\n")));
    statusLabel->setFont (Font (15.00f, Font::plain));
    statusLabel->setJustificationType (Justification::centredLeft);
    statusLabel->setEditable (false, false, false);
    statusLabel->setColour (Label::textColourId, Colours::white);
    statusLabel->setColour (TextEditor::textColourId, Colours::black);
    statusLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    cachedImage_trio_png_1 = ImageCache::getFromMemory (trio_png, trio_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (910, 600);


    //[Constructor] You can add your own custom stuff here..

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
    
    int x = getScreenX();
    int y = getScreenY();
    
    presetPanel = new PresetWindow(this->presetCombo.get(), processor->getModel());
    presetPanel->setBounds(x,y,getWidth(),getHeight());

    addChildComponent(presetPanel);
    
    for(int i = 0; i < processor->getProgramNames().size();i++) {
        presetCombo->addItem(processor->getProgramNames().at(i), i + 1);
    }
    
    // presetCombo->setSelectedId(1);
   
    imageButton->setRadioGroupId(1);
    imageButton2->setRadioGroupId(1);
    imageButton3->setRadioGroupId(1);
    
    imageButton->setToggleState(true, NotificationType::sendNotification);
    
    imageButton->setClickingTogglesState(true);
    imageButton2->setClickingTogglesState(true);
    imageButton3->setClickingTogglesState(true);
    
    imageButton4->setRadioGroupId(2);
    imageButton5->setRadioGroupId(2);
    imageButton6->setRadioGroupId(2);
    
    imageButton4->setToggleState(true, NotificationType::sendNotification);
    
    imageButton4->setClickingTogglesState(true);
    imageButton5->setClickingTogglesState(true);
    imageButton6->setClickingTogglesState(true);
    
    imageButton7->setRadioGroupId(3);
    imageButton8->setRadioGroupId(3);
    imageButton9->setRadioGroupId(3);
    
    imageButton7->setToggleState(true, NotificationType::sendNotification);
    
    imageButton7->setClickingTogglesState(true);
    imageButton8->setClickingTogglesState(true);
    imageButton9->setClickingTogglesState(true);
    
    mode1 = Oszillator::OscMode::SAW;
    mode2 = Oszillator::OscMode::SAW;
    mode3 = Oszillator::OscMode::SAW;
    
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
    presetLabel = nullptr;
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
    presetLabel->setBounds (376, 16, 56, 24);
    presetCombo->setBounds (600, 16, 296, 24);
    storeButton->setBounds (432, 16, 150, 24);
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
        //[/UserSliderCode_lfo1AmountSlider]
    }
    else if (sliderThatWasMoved == lfo2RateSlider)
    {
        //[UserSliderCode_lfo2RateSlider] -- add your slider handling code here..
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

    if (comboBoxThatHasChanged == lfo1ModCombo)
    {
        //[UserComboBoxCode_lfo1ModCombo] -- add your combo box handling code here..
        //[/UserComboBoxCode_lfo1ModCombo]
    }
    else if (comboBoxThatHasChanged == lfo2ModCombo)
    {
        //[UserComboBoxCode_lfo2ModCombo] -- add your combo box handling code here..
        //[/UserComboBoxCode_lfo2ModCombo]
    }
    else if (comboBoxThatHasChanged == modCombo)
    {
        //[UserComboBoxCode_modCombo] -- add your combo box handling code here..
        //[/UserComboBoxCode_modCombo]
    }
    /*
    else if (comboBoxThatHasChanged == presetCombo)
    {
        //[UserComboBoxCode_presetCombo] -- add your combo box handling code here..
        String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
        String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
        
        String filename = presetCombo->getText() + ".xml";
        File preset = File(presetPath+filename);
        
        if (preset.exists()) {
            XmlElement* xml = XmlDocument(preset).getDocumentElement();
            ValueTree state = ValueTree::fromXml(*xml);
            processor->setState(&state);
        }

        processor->setSelectedProgram(presetCombo->getText());
        
        //[/UserComboBoxCode_presetCombo]
    }
     */
     
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
        presetPanel->setVisible(true);
        
        /*
        juce::AlertWindow *alert = new juce::AlertWindow("Save current preset","Please enter a name for the preset",AlertWindow::AlertIconType::QuestionIcon);
        alert->addButton("Ok", 0);
        alert->addButton("Cancel", 1);
        alert->addTextEditor("name", "");
        alert->setBounds(x,y,getWidth(), getHeight());
        int returnValue = alert->runModalLoop();
        
        alert->removeFromDesktop();
        
        if (returnValue == 1) {
            return;
        }
         */
        
        //[/UserButtonCode_storeButton]
    }
    
    else if (buttonThatWasClicked == imageButton)
    {
        //[UserButtonCode_imageButton] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton]
    }
    else if (buttonThatWasClicked == imageButton2)
    {
        //[UserButtonCode_imageButton2] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton2]
    }
    else if (buttonThatWasClicked == imageButton3)
    {
        //[UserButtonCode_imageButton3] -- add your button handler code here..
        mode1 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton3]
    }

    else if (buttonThatWasClicked == imageButton4)
    {
        //[UserButtonCode_imageButton4] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton4]
    }
    else if (buttonThatWasClicked == imageButton5)
    {
        //[UserButtonCode_imageButton5] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton5]
    }
    else if (buttonThatWasClicked == imageButton6)
    {
        //[UserButtonCode_imageButton6] -- add your button handler code here..
        mode2 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton6]
    }
    
    else if (buttonThatWasClicked == imageButton7)
    {
        //[UserButtonCode_imageButton7] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton7]
    }
    else if (buttonThatWasClicked == imageButton8)
    {
        //[UserButtonCode_imageButton8] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton8]
    }
    else if (buttonThatWasClicked == imageButton9)
    {
        //[UserButtonCode_imageButton9] -- add your button handler code here..
        mode3 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);
        //[/UserButtonCode_imageButton9]
    }
    

    //[UserbuttonClicked_Post]

    
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


void MainWindow::visibilityChanged() {
    cout << "current program :  " <<processor->getCurrentProgram() << endl;
    cout << "MainWindow isVisible : "<< MainWindow::isVisible() << endl;
    String currentProgram = processor->getProgramName(processor->getCurrentProgram());
    presetCombo->setText(currentProgram,NotificationType::dontSendNotification);
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
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
          virtualName="" explicitFocusOrder="0" pos="613 96 64 64" rotaryslideroutline="66fff8f8"
          min="0" max="5" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
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
  <LABEL name="presetLabel" id="6eb6d730fbf311e6" memberName="presetLabel"
         virtualName="" explicitFocusOrder="0" pos="376 16 56 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Preset" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="presetCombo" id="dd92602a91bc7ca9" memberName="presetCombo"
            virtualName="" explicitFocusOrder="0" pos="600 16 296 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="storeButton" id="7f02553932604ec2" memberName="storeButton"
              virtualName="" explicitFocusOrder="0" pos="432 16 150 24" buttonText="Store"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="new button" id="ee7a53baa21af566" memberName="imageButton"
               virtualName="" explicitFocusOrder="0" pos="96 64 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="ffffffff"
               resourceOver="" opacityOver="1" colourOver="ffff7e00" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="a214c8a1de4a68cd" memberName="imageButton3"
               virtualName="" explicitFocusOrder="0" pos="160 64 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="ffffff"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="8c20ca18b3a9d2d7" memberName="imageButton2"
               virtualName="" explicitFocusOrder="0" pos="128 64 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="ffffff"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="ef82a979049e8fee" memberName="imageButton4"
               virtualName="" explicitFocusOrder="0" pos="104 224 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="8aea33fc6afd4750" memberName="imageButton5"
               virtualName="" explicitFocusOrder="0" pos="168 224 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="28fc3adc877116d8" memberName="imageButton6"
               virtualName="" explicitFocusOrder="0" pos="136 224 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9d8aa1824f425f4a" memberName="imageButton7"
               virtualName="" explicitFocusOrder="0" pos="104 384 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="c70ee3eb5acde81b" memberName="imageButton8"
               virtualName="" explicitFocusOrder="0" pos="168 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="oscillator_square_48_png" opacityOver="1" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="557c43e2f39f8df6" memberName="imageButton9"
               virtualName="" explicitFocusOrder="0" pos="136 384 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <LABEL name="statusLabel" id="f241e45e174945c6" memberName="statusLabel"
         virtualName="" explicitFocusOrder="0" pos="720 480 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: trio_png, 69551, "../trio.png"
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
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,98,214,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,
98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,
57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,
88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,
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
102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,
40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,48,49,
54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,
68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,49,58,48,51,43,48,50,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,49,58,48,51,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,32,32,
32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,110,
99,101,73,68,62,120,109,112,46,105,105,100,58,99,102,100,98,99,102,55,101,45,97,53,49,51,45,52,98,50,99,45,98,52,50,99,45,100,56,100,101,53,98,98,49,52,51,97,57,60,47,120,109,112,77,77,58,73,110,115,116,
97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,99,
100,52,98,102,98,48,101,45,54,57,56,55,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,
48,51,49,50,53,53,54,101,100,98,51,48,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,116,
111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,116,
69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,99,57,53,54,
53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,
32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,54,51,51,48,49,97,56,45,100,101,53,49,45,52,99,56,98,45,98,101,54,48,45,101,53,51,54,101,97,56,98,
56,52,55,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,
45,48,50,84,49,57,58,51,49,58,49,49,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,
97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,
97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,
58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,54,48,53,54,98,54,98,
55,45,54,48,54,55,45,52,49,56,54,45,57,49,101,100,45,50,52,51,57,51,97,51,48,102,51,56,102,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,49,58,48,51,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,
77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,
104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,
109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,
111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,
100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,99,102,100,98,99,102,55,101,45,97,53,49,51,45,52,98,50,99,45,98,52,50,99,45,100,56,
100,101,53,98,98,49,52,51,97,57,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,
50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,49,58,48,51,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,
58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,
58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,
104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,
32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,54,48,53,54,98,
54,98,55,45,54,48,54,55,45,52,49,56,54,45,57,49,101,100,45,50,52,51,57,51,97,51,48,102,51,56,102,60,47,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,
98,51,48,60,47,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,
73,68,62,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,60,47,115,116,82,101,102,58,111,114,105,103,105,110,
97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,
32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,79,115,99,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
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
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,
34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,80,105,116,99,104,60,47,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,
62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,
116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,
121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,86,111,108,117,
109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,79,115,99,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,79,115,99,32,51,60,47,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,84,101,120,116,62,80,105,116,99,104,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,
102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,
97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,110,101,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,
99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,115,111,110,97,110,99,101,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,
115,111,110,97,110,99,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,77,111,100,46,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,111,100,46,65,109,111,117,110,116,60,47,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,
108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,62,67,117,116,111,102,102,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,67,117,116,111,102,102,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,108,116,101,114,60,47,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,70,105,
108,116,101,114,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,
120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,
84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,
97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,
32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,
114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,70,105,108,116,101,114,32,69,110,118,101,108,111,
112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,70,105,108,116,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,
34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,116,116,97,99,107,60,47,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,116,116,97,99,107,60,47,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,68,101,99,97,121,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,
115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,117,115,116,97,105,110,60,47,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,
83,117,115,116,97,105,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,101,108,101,97,115,101,60,47,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,
58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,
109,101,62,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,86,111,108,117,109,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,
99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,112,108,105,102,105,101,114,60,47,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,
109,112,108,105,102,105,101,114,32,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,
115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,83,
104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,84,101,120,116,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,
105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,
114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,
101,114,78,97,109,101,62,76,70,79,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,
114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,82,97,116,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,82,97,116,101,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,
105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,78,97,109,101,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,83,104,97,112,101,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,
34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,65,109,111,117,110,116,60,47,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,65,109,111,117,110,116,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,49,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,
115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,82,73,79,32,32,86,105,114,116,117,
97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,62,77,111,100,117,108,97,116,105,111,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,77,111,100,117,108,97,116,105,111,110,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,32,49,60,47,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,49,
60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,76,70,79,32,50,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,60,47,112,104,111,116,111,115,104,
111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,51,60,47,112,104,111,116,111,115,104,111,
112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,
46,49,60,47,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,
105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,
101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,49,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,
99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,57,49,48,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,
105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,54,48,48,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,
115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,
101,110,100,61,34,119,34,63,62,178,192,66,88,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,161,248,73,68,65,84,120,218,
236,253,125,92,84,103,158,39,252,127,175,162,40,144,162,0,83,150,26,144,84,120,20,80,3,152,16,144,73,4,108,29,232,117,246,102,218,141,182,206,134,205,221,118,166,123,126,110,102,246,182,127,187,237,246,
246,236,244,76,239,100,102,204,206,38,191,221,118,189,119,51,38,189,185,205,118,18,205,218,195,204,157,137,174,118,75,52,99,160,81,129,248,84,10,130,136,224,3,150,34,101,41,20,82,231,247,199,23,46,14,
167,30,168,42,158,170,224,243,158,126,101,202,162,30,206,57,117,190,231,251,61,215,117,157,235,136,146,23,74,136,136,136,132,16,4,0,0,0,0,48,131,20,69,145,15,248,177,162,40,164,144,91,113,43,138,162,247,
124,29,0,0,0,0,192,12,87,171,178,84,149,117,42,17,233,21,69,241,213,158,138,226,21,0,0,0,0,102,172,84,149,5,171,124,172,151,127,16,66,160,54,5,0,0,0,128,217,169,83,21,82,104,92,157,74,68,222,7,0,160,102,
5,0,0,0,128,153,171,86,21,82,72,113,187,221,154,250,85,239,89,213,162,96,5,0,0,0,128,25,172,85,189,215,169,36,91,85,125,54,169,162,88,5,0,0,0,128,233,36,47,162,210,212,169,196,151,85,249,42,82,21,82,136,
72,94,114,37,104,26,103,179,82,84,69,113,32,95,36,95,175,140,188,101,130,247,242,235,81,120,3,0,0,0,132,149,177,11,255,61,234,84,242,218,170,42,199,180,138,145,231,133,32,33,136,196,72,69,24,208,252,171,
154,162,80,248,124,205,88,5,169,42,58,21,49,242,45,218,239,226,183,200,215,171,11,86,205,66,170,223,225,30,249,22,5,53,43,0,0,0,64,216,214,172,158,197,162,126,220,31,70,91,82,21,69,161,209,34,85,71,66,
71,186,168,177,199,66,85,128,138,241,159,22,116,5,168,144,226,38,69,241,104,85,21,68,58,18,94,155,72,221,35,111,25,249,175,124,19,191,69,55,86,88,11,213,231,43,110,162,241,239,66,193,10,0,0,0,16,118,117,
170,186,46,165,113,3,0,198,215,169,98,180,54,141,34,93,20,9,61,69,69,145,136,34,157,172,5,125,148,158,222,107,86,46,28,197,248,87,42,163,181,163,186,90,21,218,162,83,136,241,111,113,147,50,76,110,247,
216,27,21,26,173,107,121,241,162,84,53,174,252,252,225,145,119,185,159,144,226,166,209,81,187,132,11,199,0,0,0,0,194,175,78,29,165,247,243,54,29,9,61,233,244,164,139,166,168,104,138,210,43,58,61,233,162,
72,39,124,148,158,52,190,78,213,140,34,165,241,173,176,202,104,215,188,155,20,69,208,48,185,213,223,171,83,70,10,101,161,122,23,183,244,142,212,169,66,121,66,238,97,114,243,183,68,141,54,253,70,41,66,
55,82,79,171,74,91,161,12,147,251,9,185,135,104,88,71,238,97,18,195,228,30,30,173,171,81,173,2,0,0,0,132,39,239,165,170,236,235,215,147,206,64,250,24,37,42,134,244,6,37,74,79,186,209,17,166,62,11,60,225,
101,68,171,226,245,93,163,175,36,183,162,184,197,72,213,56,242,213,138,240,124,215,216,235,73,25,38,229,9,185,135,133,162,144,34,136,132,34,162,72,232,21,93,20,233,132,199,56,217,97,69,121,34,220,67,52,
60,36,162,92,244,196,69,195,130,136,200,61,44,75,249,41,218,154,194,119,81,78,51,50,222,64,120,124,59,97,120,46,0,0,0,204,177,82,149,136,184,235,95,79,81,6,37,106,1,69,199,42,122,69,81,220,110,158,74,
192,119,165,42,136,72,8,33,104,244,255,70,46,209,26,105,18,29,95,49,141,190,88,8,161,231,86,84,89,59,186,221,163,151,131,169,199,163,142,189,62,90,167,51,136,40,254,92,65,130,20,121,31,46,183,91,81,72,
61,134,85,8,33,200,32,116,6,17,229,162,225,40,18,81,66,55,72,130,104,152,104,120,152,38,168,188,41,152,57,16,228,112,5,117,75,48,145,112,171,174,28,155,142,146,81,253,165,194,75,83,180,224,130,158,255,
233,103,45,102,178,170,6,0,0,0,8,165,84,29,45,100,68,212,72,171,106,148,65,137,114,13,15,157,189,117,185,245,126,87,128,159,27,31,189,32,107,97,106,174,249,217,198,155,23,91,251,110,248,121,101,170,105,
201,51,166,197,214,196,167,117,66,39,132,32,162,123,143,31,92,190,119,189,205,247,187,50,147,150,45,127,234,153,167,226,146,70,235,51,69,113,43,110,197,125,239,209,131,235,142,59,109,125,93,46,247,19,
249,226,140,196,148,167,98,19,178,22,166,10,157,136,17,81,81,66,232,104,164,184,37,82,20,114,15,19,55,225,78,80,2,122,14,210,85,60,94,54,90,110,11,49,246,2,190,162,139,7,215,106,235,192,41,105,124,21,
170,37,228,107,224,228,50,40,227,46,44,27,27,145,161,153,96,65,206,171,160,140,13,26,14,174,170,158,245,230,228,41,175,248,53,107,129,218,29,0,0,96,86,232,124,228,236,145,150,57,221,232,181,74,87,236,
215,119,253,199,159,40,1,187,122,227,90,235,253,174,155,142,187,191,253,207,171,253,191,242,227,195,135,214,125,247,119,127,213,121,186,243,193,77,183,219,237,118,187,47,223,187,190,231,227,125,126,222,
178,231,227,125,151,239,93,87,70,106,48,197,61,236,190,233,232,61,217,213,146,180,38,237,7,111,253,248,94,127,159,250,197,255,245,147,247,182,254,240,245,191,187,122,242,98,111,251,176,123,56,74,17,177,
138,62,86,209,199,80,148,158,162,228,133,98,190,74,64,49,58,16,66,79,81,60,102,215,64,122,3,233,163,41,202,48,250,12,63,25,67,250,24,210,199,82,116,44,233,23,80,244,2,138,142,37,125,12,69,243,203,162,
70,134,249,138,209,207,212,141,94,4,54,246,64,55,242,130,80,38,176,29,107,5,167,168,24,138,142,29,93,18,94,42,94,120,61,69,233,199,45,112,212,232,50,143,172,81,180,106,131,136,192,102,37,27,157,32,108,
234,215,104,38,43,84,57,227,132,110,116,201,245,163,107,193,171,160,11,251,181,0,0,0,152,147,244,190,243,183,170,94,9,181,77,41,144,91,179,150,150,150,150,150,150,190,242,202,43,191,189,166,194,24,29,
251,84,108,66,192,159,62,50,184,224,226,221,118,231,66,241,241,199,135,74,75,75,61,95,85,89,89,89,89,89,249,234,171,175,254,244,167,63,61,242,63,107,95,92,154,23,21,165,139,161,168,39,228,126,34,220,195,
228,118,147,112,251,110,88,141,82,213,46,250,209,170,133,72,14,104,24,169,117,228,20,4,130,136,75,82,82,20,121,249,215,16,13,235,104,152,175,229,146,19,29,104,74,100,101,220,36,92,65,204,252,37,72,240,
85,101,163,23,192,233,162,41,74,40,36,72,240,245,106,124,73,217,176,106,182,4,121,6,34,63,132,231,85,24,30,249,175,24,38,197,77,110,30,57,48,182,177,71,191,206,243,172,102,180,206,155,154,53,10,113,103,
243,177,132,1,110,67,221,216,116,108,52,126,6,9,109,163,56,90,88,1,0,0,102,191,84,229,153,164,70,10,178,80,91,147,148,128,211,250,115,207,61,247,193,161,95,252,203,111,127,247,197,165,185,1,150,198,60,
4,182,237,254,141,133,171,82,15,127,244,209,226,197,139,253,188,120,241,226,197,123,246,236,121,59,61,253,255,254,15,239,188,248,116,94,180,46,42,86,240,12,86,202,48,41,58,82,220,218,185,93,181,215,150,
25,40,74,79,58,157,50,58,179,172,16,178,106,17,36,132,194,179,16,140,206,231,165,8,26,157,39,203,53,122,57,215,16,113,101,60,86,47,202,218,78,53,169,150,91,25,93,24,213,172,98,194,119,141,69,178,221,55,
154,162,98,72,31,173,232,12,20,21,165,232,4,145,155,148,39,228,230,162,252,9,185,121,160,42,95,181,38,39,115,224,47,224,138,118,120,180,176,230,130,85,78,70,171,168,150,65,53,249,131,108,122,39,57,83,
152,255,53,154,232,172,71,9,114,87,27,55,192,64,93,170,78,244,41,194,219,54,36,110,24,142,26,61,67,227,242,250,201,104,237,46,127,59,84,171,0,0,0,51,70,231,187,78,29,55,137,105,182,249,153,221,255,230,
207,132,202,55,190,241,13,245,91,222,126,251,109,245,95,51,150,61,155,153,180,204,243,147,223,120,227,13,249,154,183,223,126,91,253,167,202,202,202,168,37,70,215,240,80,86,82,234,27,223,254,46,191,230,
235,175,191,150,47,248,250,235,175,249,201,55,182,126,55,107,97,42,17,145,91,105,189,223,245,55,127,243,55,234,58,245,212,169,83,223,248,198,55,248,149,239,189,247,158,250,43,126,240,131,31,188,80,245,
210,245,7,183,220,138,59,90,137,210,43,34,106,164,73,82,248,216,58,34,138,116,6,210,199,146,62,86,209,27,21,67,188,98,136,87,98,226,149,24,147,98,136,87,98,76,35,255,51,24,21,67,172,18,109,80,162,162,
220,66,184,137,171,59,157,34,244,74,84,28,25,226,148,232,5,100,88,48,210,47,63,50,60,192,72,6,35,25,140,74,180,81,25,121,60,58,108,32,58,102,164,227,62,106,180,143,62,74,243,63,254,156,216,209,238,123,
249,153,11,20,189,81,49,24,148,168,40,69,8,133,244,110,93,172,18,205,87,197,241,144,128,5,20,29,167,68,199,83,76,188,18,179,64,209,199,186,245,177,110,253,2,37,58,94,137,49,81,172,81,49,196,141,46,73,
44,69,27,40,42,134,162,12,35,99,30,162,228,152,7,131,106,252,128,252,216,5,20,205,239,141,83,162,227,60,214,40,118,108,128,196,184,255,141,95,47,189,175,213,244,241,22,189,97,228,127,114,169,162,228,72,
6,57,36,195,48,254,127,252,45,227,63,112,100,228,198,2,185,34,202,200,255,248,159,49,163,39,42,81,193,12,141,0,0,0,128,201,211,251,110,218,26,153,16,202,69,195,122,161,139,141,50,20,39,175,120,113,105,
158,226,118,15,187,221,142,129,135,3,30,111,92,189,40,59,51,105,89,84,148,78,240,197,69,138,210,227,184,235,249,249,47,47,89,181,56,110,33,41,244,246,191,255,203,146,146,18,117,175,253,178,101,203,92,
215,6,23,198,38,188,184,52,239,249,197,57,199,111,156,213,188,119,241,130,133,21,203,86,243,87,40,138,210,218,119,227,143,255,226,79,211,211,211,229,11,14,30,60,248,131,239,252,203,204,196,148,45,153,
235,134,220,79,254,242,7,127,114,236,216,177,143,62,250,72,190,224,71,63,250,209,111,255,93,197,51,9,75,163,132,46,90,68,69,115,163,35,185,185,117,77,25,95,167,114,175,58,95,88,22,171,232,245,164,227,
73,6,72,168,110,254,74,114,138,131,145,134,189,219,206,123,87,238,119,93,239,191,69,68,217,79,61,83,156,188,210,32,162,244,20,229,162,39,195,164,231,193,6,81,138,24,25,78,160,140,140,176,24,233,166,23,
238,39,163,55,56,32,85,99,161,159,78,109,110,206,212,147,206,160,68,69,43,81,164,40,77,183,47,95,185,223,229,26,30,122,42,54,33,251,169,103,178,158,122,70,39,132,158,20,133,20,110,79,229,181,80,70,239,
246,197,101,189,142,68,172,208,199,40,52,36,134,93,52,204,211,214,14,171,22,70,182,121,170,111,208,48,58,156,64,68,41,58,61,55,172,106,215,104,236,150,13,254,199,0,248,159,157,192,235,235,73,117,233,152,
124,94,142,180,30,119,119,221,145,63,145,215,141,57,54,62,85,17,122,138,138,82,70,90,85,135,201,61,68,238,65,241,196,69,195,163,31,37,103,228,5,0,0,128,217,40,85,25,183,167,62,161,97,151,16,58,69,232,
132,48,144,94,68,41,10,79,68,165,243,210,28,171,19,34,42,74,167,211,69,9,157,32,133,220,110,183,240,209,252,196,243,88,197,235,99,187,187,187,61,255,36,132,80,4,233,20,47,111,22,68,58,46,171,136,136,148,
182,190,27,191,251,187,191,43,255,234,116,58,255,248,143,255,184,192,146,101,138,137,19,66,232,149,168,23,150,228,254,230,31,190,56,114,228,72,101,101,37,191,230,185,231,158,171,248,63,126,251,222,87,
29,139,140,11,229,5,64,92,117,121,220,220,85,94,80,165,139,33,189,94,209,53,244,92,184,114,255,58,191,32,107,97,106,241,211,43,184,188,189,222,127,235,202,253,174,91,78,59,17,101,37,45,27,28,30,250,232,
240,200,192,217,109,219,182,217,127,115,221,28,151,164,35,138,229,219,216,114,77,172,140,220,22,108,100,132,133,160,104,161,139,166,40,34,122,66,110,30,28,169,248,190,239,23,141,191,232,158,111,39,38,
136,20,69,113,43,238,43,247,187,238,61,184,111,52,26,219,219,219,139,86,20,102,45,76,21,66,68,143,180,160,43,138,66,13,221,99,43,34,113,85,45,4,25,148,168,104,30,203,75,195,60,220,86,46,204,200,152,78,
69,14,238,28,43,232,201,247,26,121,45,85,21,143,162,147,188,213,145,194,227,60,138,198,207,45,48,50,62,65,136,145,123,1,19,233,72,144,50,86,170,170,71,176,240,24,98,237,87,8,30,20,65,122,138,26,155,245,
140,195,67,232,244,34,42,138,132,78,158,150,140,14,96,197,48,0,0,0,128,89,43,85,57,25,11,82,158,144,155,232,137,16,196,93,228,49,164,39,29,9,69,231,181,84,37,33,132,208,233,70,106,63,69,248,110,35,83,
20,165,207,245,240,190,235,225,242,229,203,213,133,230,151,117,39,94,201,94,55,82,224,234,124,148,185,186,145,143,117,13,13,89,172,79,171,155,84,91,90,90,30,117,223,55,165,60,35,203,101,18,180,36,206,
252,143,255,248,143,178,84,37,162,245,235,215,255,236,216,95,153,141,73,81,138,208,9,121,37,141,151,178,152,235,158,40,69,232,21,221,224,19,23,89,98,149,123,138,92,215,162,37,185,92,170,94,185,119,253,
200,87,199,159,123,238,57,34,122,239,189,247,118,124,255,255,147,159,159,207,107,116,232,224,255,218,188,124,157,162,184,71,39,54,29,57,13,32,133,92,195,67,77,183,47,243,76,94,89,11,83,11,151,100,27,162,
162,5,9,61,233,124,13,204,24,89,44,31,37,18,87,89,246,71,15,54,109,254,103,70,163,145,136,206,156,57,179,212,104,86,20,69,40,35,27,85,33,186,249,240,238,134,223,251,167,151,247,236,209,188,253,237,183,
223,62,240,159,222,207,94,248,12,127,11,215,232,52,90,147,185,85,133,160,80,132,183,159,84,113,61,25,106,186,125,165,181,175,107,220,26,41,34,74,136,40,18,227,71,162,134,50,38,213,247,27,213,147,215,18,
223,18,194,115,179,209,184,41,184,84,75,163,144,16,92,120,42,138,91,105,190,115,133,219,164,13,81,209,217,11,83,11,150,100,27,72,79,68,110,161,140,54,51,11,55,26,86,1,0,0,102,132,206,207,223,248,162,156,
33,114,187,104,120,128,158,12,138,225,39,66,25,157,131,223,107,17,197,147,255,243,95,125,214,169,39,111,159,251,95,215,78,116,197,63,252,127,254,246,99,46,239,216,199,31,127,156,149,148,42,116,242,11,
188,141,9,20,99,229,133,125,176,127,195,134,13,234,63,94,186,116,233,169,216,4,161,19,58,157,78,8,157,208,233,132,208,61,109,52,127,242,201,39,234,151,45,91,182,236,225,208,99,82,72,117,107,43,95,243,
85,141,141,77,140,214,233,175,93,237,112,58,157,252,167,117,235,214,245,15,58,149,97,247,69,123,199,63,251,206,54,94,145,246,246,246,127,243,47,119,102,38,166,60,149,184,80,8,241,84,226,194,172,164,101,
138,91,81,220,138,91,107,248,178,189,115,215,95,255,41,55,225,237,250,143,63,185,98,191,206,127,80,228,255,70,103,227,82,248,35,248,159,110,101,236,201,241,175,84,220,110,183,226,118,12,58,179,178,178,
120,33,251,251,251,13,58,253,248,138,146,150,198,61,245,191,255,103,173,16,162,189,189,157,159,220,182,109,155,16,226,191,253,135,255,95,102,226,178,145,79,116,187,221,238,97,183,123,88,113,187,201,77,
194,77,81,138,78,175,232,162,20,33,220,52,246,213,163,11,198,43,120,249,94,231,174,191,254,137,118,141,148,209,15,147,255,117,203,47,25,246,190,166,170,141,48,242,158,97,249,222,97,245,95,71,223,174,144,
91,209,41,164,83,132,78,33,185,132,242,197,52,182,164,170,207,148,43,168,40,138,91,33,101,100,181,185,77,90,81,148,123,15,238,95,185,223,197,127,226,241,172,163,147,121,233,4,230,173,2,0,0,152,17,122,
223,173,88,10,17,241,176,188,161,209,75,188,163,105,56,202,247,152,129,64,236,217,179,103,143,71,123,30,17,125,253,245,215,63,254,163,31,174,93,150,207,197,110,104,157,171,15,30,60,48,68,69,115,57,59,
242,25,130,98,162,162,175,92,185,162,126,153,201,100,114,13,15,241,138,138,241,183,152,242,184,245,235,216,4,251,10,41,241,209,11,110,223,190,205,237,184,139,23,47,182,183,94,141,139,138,105,237,187,113,
228,79,254,132,95,255,246,219,111,103,38,164,220,115,57,248,243,159,49,45,121,206,156,209,120,107,228,38,8,79,197,38,100,38,45,107,235,187,113,111,160,63,51,113,89,219,131,27,185,185,185,252,198,99,199,
142,53,247,182,58,135,30,63,21,155,208,218,119,227,222,64,63,17,101,45,76,45,90,154,123,251,209,189,214,251,93,215,251,111,243,51,47,62,157,119,181,175,251,202,189,235,252,26,150,149,148,154,183,232,89,
163,126,129,162,184,239,13,244,175,90,181,74,126,236,210,184,167,60,55,212,11,75,114,58,251,111,45,89,178,132,184,233,247,192,167,91,179,215,235,132,248,205,205,11,188,168,207,152,150,196,68,69,203,22,
223,23,151,230,241,160,13,133,148,135,174,199,23,239,118,112,211,41,17,113,211,227,226,5,11,187,28,183,91,251,38,90,163,164,101,131,195,67,215,29,183,179,146,150,121,95,211,123,93,215,29,183,121,141,10,
22,103,54,223,105,29,89,134,164,101,14,215,163,91,143,238,241,227,60,115,218,189,129,254,214,190,174,91,78,126,38,117,197,162,52,163,97,1,239,182,55,157,119,219,238,223,224,207,33,162,204,164,101,89,73,
169,11,23,152,136,168,241,230,37,94,114,47,43,72,116,239,241,131,214,251,93,178,77,186,165,165,197,53,60,244,63,47,29,201,126,234,153,226,148,149,81,138,136,18,58,57,193,170,231,222,2,0,0,0,83,206,103,
171,170,28,5,56,58,49,231,48,255,207,77,238,41,95,136,247,222,123,111,67,73,121,102,98,138,33,202,48,65,147,236,204,210,140,172,52,234,23,220,186,117,107,164,58,204,202,114,12,58,109,247,59,127,250,87,
127,206,243,15,28,57,114,228,243,253,135,28,67,143,254,242,111,222,225,150,197,23,170,94,178,63,238,23,139,227,248,159,141,23,154,42,127,255,159,53,94,104,82,20,229,223,254,167,63,85,20,69,94,82,246,209,
71,31,41,138,242,230,187,111,95,185,223,197,47,80,20,229,249,202,223,178,59,251,90,239,117,125,244,249,33,126,70,88,22,56,6,157,113,57,139,229,107,216,155,239,254,167,147,55,90,218,238,223,112,187,149,
91,143,238,61,255,252,243,178,6,125,106,65,130,166,121,90,81,148,123,143,251,55,109,121,69,22,100,75,226,158,82,20,101,224,137,75,46,234,71,135,15,201,22,223,173,111,252,159,191,185,121,225,225,192,35,
183,123,184,249,246,21,199,51,122,217,116,202,77,143,255,215,95,253,187,220,255,163,36,117,117,246,132,107,244,219,255,188,250,163,195,135,252,173,233,225,209,53,93,188,224,242,189,46,185,12,111,190,251,
246,145,175,142,203,199,231,239,182,63,247,187,47,29,57,37,159,249,79,23,238,182,187,135,135,7,135,6,127,115,243,66,238,63,45,145,159,195,55,140,184,106,176,183,221,187,49,224,26,20,139,23,248,90,65,199,
160,243,202,253,174,61,159,188,39,47,194,43,45,45,29,25,182,186,40,214,245,100,200,243,106,45,0,0,0,152,181,82,117,180,90,29,55,145,251,147,177,169,37,167,210,47,126,241,139,84,227,226,84,211,18,34,154,
204,45,129,18,19,19,93,195,67,163,163,14,71,214,97,112,120,40,59,59,91,253,50,135,195,97,136,138,230,239,82,84,51,152,122,54,146,201,117,231,133,138,143,94,32,175,3,179,90,173,15,135,30,95,125,208,253,
234,171,175,242,51,111,189,245,86,70,66,202,237,199,247,213,149,162,195,229,252,246,183,191,205,47,72,79,79,255,233,79,127,154,158,158,238,116,58,119,124,239,15,182,109,219,198,207,159,58,117,138,199,
60,252,232,247,119,202,209,183,252,246,68,67,252,45,167,157,71,190,182,183,183,247,118,222,236,124,112,235,247,126,239,247,206,156,57,195,19,114,45,95,190,188,189,189,125,243,230,205,141,23,154,90,251,
186,6,159,184,228,39,112,13,170,30,219,160,40,35,119,76,189,245,232,222,250,245,235,249,201,75,151,46,45,140,49,241,147,114,81,227,227,227,127,241,139,95,44,95,190,220,233,116,254,244,167,63,125,243,221,
183,47,216,59,30,12,56,151,228,167,253,221,223,253,221,119,191,251,221,247,222,123,143,151,121,215,174,93,69,69,69,79,61,245,84,231,153,203,254,215,136,136,246,236,217,195,181,236,161,67,135,38,92,211,
123,143,31,200,54,218,174,174,174,13,37,229,7,15,30,36,162,205,155,55,255,215,79,222,35,162,223,46,41,63,114,228,8,63,243,219,255,188,186,199,113,183,233,78,235,174,191,254,211,61,123,246,196,199,199,
47,95,190,124,249,242,229,119,238,220,169,172,172,252,252,243,207,251,18,159,220,116,218,253,172,224,69,251,181,140,132,148,215,255,89,205,169,83,167,248,53,60,46,66,8,65,119,7,98,244,209,138,234,222,
179,0,0,0,48,251,165,234,248,130,149,70,103,44,154,84,166,230,121,85,53,51,170,254,205,223,252,77,187,163,231,225,208,99,121,253,184,226,171,42,144,207,8,50,199,36,28,61,122,84,253,199,220,220,220,123,
3,253,60,76,113,100,200,163,226,86,23,40,236,198,141,27,241,209,11,72,208,48,185,21,89,197,141,95,175,209,186,132,20,213,116,81,134,40,125,127,255,72,183,123,66,66,130,107,120,232,63,255,183,61,220,164,
250,222,123,239,117,158,182,197,233,99,213,149,226,226,5,11,31,14,61,182,90,173,252,22,89,222,61,149,144,148,145,144,82,84,84,36,139,197,85,79,165,111,201,168,88,102,180,200,209,183,252,246,123,143,31,
200,230,207,91,183,110,197,71,47,72,79,72,254,47,255,246,175,126,242,253,127,211,121,230,50,17,93,185,114,229,248,241,227,92,7,191,241,195,255,235,150,211,46,63,97,100,228,174,102,20,174,66,138,162,220,
27,232,151,85,96,103,103,167,49,122,1,17,221,87,141,28,248,244,211,79,31,157,191,245,228,166,227,203,47,191,228,90,176,242,213,234,171,15,186,255,224,15,254,128,23,230,23,191,248,197,170,167,210,215,44,
89,209,252,191,78,252,246,154,138,99,127,243,203,133,134,120,255,107,36,167,197,21,66,52,126,126,210,255,154,26,245,177,119,30,223,151,149,235,159,255,232,39,139,99,147,228,198,191,113,227,198,137,143,
62,95,188,96,225,141,27,55,248,153,167,158,122,202,225,122,180,227,79,126,240,221,239,126,151,136,118,238,220,121,229,202,149,43,87,174,252,253,223,255,61,111,156,31,254,240,135,19,174,224,192,147,193,
251,131,142,204,204,76,82,141,139,248,231,185,149,197,201,43,136,200,45,70,166,50,80,239,21,0,0,0,48,173,244,51,255,149,47,45,94,169,153,81,53,61,61,253,191,239,127,239,71,175,239,124,241,233,92,183,16,
66,17,124,129,141,247,210,217,61,50,139,149,65,31,221,219,113,179,189,189,93,54,218,229,231,231,199,165,44,116,184,30,153,98,226,132,34,72,161,97,183,251,246,35,251,111,253,214,111,169,63,225,216,177,
99,79,27,205,130,196,176,24,153,68,201,237,237,170,122,133,47,169,39,69,17,52,172,40,66,80,124,244,130,206,206,78,89,170,210,210,184,173,91,183,18,209,157,59,119,222,122,235,173,85,230,12,231,208,227,
213,37,171,249,5,221,221,221,70,125,236,253,65,135,44,10,223,122,235,173,223,77,95,27,19,21,173,40,202,215,119,219,82,83,83,249,249,166,166,166,167,98,19,72,136,251,131,142,194,194,66,89,237,45,140,49,
221,126,124,127,171,170,249,51,201,16,255,245,221,182,168,165,241,63,252,225,191,39,34,46,203,164,214,214,214,135,67,143,229,39,116,118,118,198,27,22,240,189,165,196,216,92,75,10,145,114,251,209,61,174,
2,137,232,147,79,62,201,139,91,74,10,201,145,3,252,228,242,5,139,46,63,184,46,175,208,58,122,244,232,147,225,161,132,132,4,121,118,113,252,248,241,206,206,206,221,111,254,101,70,98,74,170,209,242,181,
253,170,255,53,250,244,211,79,215,44,93,249,140,105,9,41,116,233,254,181,9,215,244,165,127,250,13,174,92,91,91,91,147,98,226,251,92,14,245,64,216,197,177,73,151,31,116,201,103,90,91,91,59,250,123,228,
204,101,191,250,213,175,52,191,102,103,103,167,108,240,246,181,130,57,6,75,74,250,51,124,238,113,245,234,213,133,177,9,124,149,32,183,190,63,81,205,50,139,58,21,0,0,96,102,232,102,254,43,133,78,100,38,
166,124,231,59,223,185,115,231,142,124,114,243,230,205,191,247,175,182,55,223,105,83,134,229,229,231,138,183,242,145,220,60,9,63,17,145,200,76,90,246,183,127,251,183,242,175,70,163,241,207,255,252,207,
155,123,91,111,58,238,62,121,50,252,120,104,240,244,237,75,47,254,147,50,245,76,85,95,127,253,245,241,191,251,223,79,45,72,20,66,200,41,238,21,111,197,135,186,57,153,255,26,111,88,208,218,218,202,127,
125,250,233,167,127,248,195,31,114,45,245,225,135,31,46,184,231,54,68,69,223,126,124,95,118,172,159,59,119,46,201,16,175,110,26,236,237,188,25,19,21,45,132,208,9,157,186,108,58,122,244,232,194,216,4,34,
82,215,181,199,142,29,179,196,38,105,158,113,14,13,236,248,201,255,247,242,229,203,223,253,238,119,115,115,115,249,14,97,124,33,63,183,2,246,169,94,255,201,39,159,60,29,103,22,170,113,191,124,145,253,
224,144,235,217,204,116,94,114,94,42,131,78,63,232,30,155,249,171,189,189,189,247,90,15,17,89,172,201,99,207,116,222,204,76,72,121,235,173,183,248,87,75,79,79,255,238,119,191,251,211,159,254,244,94,127,
223,186,223,251,157,246,254,30,237,26,197,152,52,107,244,201,39,159,44,53,154,185,85,117,194,53,37,34,185,37,111,220,184,97,212,47,112,14,13,44,93,186,84,174,233,194,24,147,220,182,252,140,229,217,145,
165,61,114,228,136,240,240,139,255,252,222,132,43,120,231,241,125,217,0,127,249,242,229,167,98,76,220,38,45,4,61,17,163,179,204,146,27,117,42,0,0,64,216,149,170,170,228,236,123,44,105,96,163,76,117,186,
168,37,70,243,2,251,176,102,42,128,93,187,118,61,93,152,222,217,127,203,254,248,193,111,110,93,250,164,237,87,119,30,223,215,188,247,206,227,251,159,180,254,234,55,183,46,222,27,232,23,66,100,37,45,251,
243,127,247,167,114,210,37,46,121,63,249,223,127,171,203,121,234,64,219,175,127,217,126,226,71,111,255,84,125,171,42,34,250,203,191,252,203,172,164,101,66,39,134,133,50,68,195,124,191,123,207,219,211,
43,99,213,170,162,240,173,169,72,152,162,227,206,158,29,185,129,86,70,70,6,55,106,126,253,245,215,111,253,251,55,115,23,62,171,169,192,62,249,228,19,99,244,2,77,247,189,78,39,116,58,49,164,140,175,11,
59,111,26,116,122,65,66,54,118,142,84,99,170,74,151,159,121,182,40,231,7,63,248,1,127,233,183,214,255,206,255,252,139,255,150,157,157,61,54,222,32,54,233,206,64,159,186,50,54,232,13,178,65,117,116,76,
197,184,49,169,103,206,156,89,178,96,33,17,221,30,255,228,226,184,133,143,158,12,172,94,61,210,66,204,11,159,20,107,178,127,125,61,125,217,179,111,188,241,198,123,239,189,199,155,221,104,52,254,224,7,
63,184,218,223,163,93,163,168,104,254,88,185,252,215,218,218,99,163,162,117,66,8,29,77,184,166,218,54,212,5,11,101,37,202,3,6,238,187,28,234,43,195,22,47,88,184,108,217,200,141,124,77,38,211,50,163,101,
75,70,197,183,51,191,177,53,123,253,214,236,245,223,206,252,198,226,5,11,253,175,32,55,129,203,17,2,231,206,157,227,134,97,174,244,249,148,102,120,164,1,94,187,183,0,0,0,192,44,151,170,164,30,184,57,210,
43,58,65,181,42,124,92,199,175,19,186,168,40,93,158,57,237,23,255,229,125,190,80,134,25,141,198,119,222,121,167,173,239,70,235,253,174,255,250,201,123,124,241,181,122,226,213,231,158,123,110,244,154,238,
247,90,239,119,241,103,101,45,76,253,253,223,255,125,117,3,109,105,105,233,175,126,245,43,126,165,166,139,252,237,183,223,62,125,248,203,103,18,151,234,132,110,72,12,63,17,202,240,72,253,161,120,91,223,
145,139,201,184,241,85,8,97,208,27,174,181,181,243,212,170,92,36,169,106,95,210,137,177,90,147,203,181,222,129,62,245,213,75,79,45,72,16,66,39,132,238,254,224,67,57,82,243,204,153,51,75,226,158,18,66,
60,124,242,248,165,242,181,252,177,87,175,94,77,138,49,221,29,124,160,169,198,54,110,220,200,239,186,121,243,166,81,31,59,228,30,150,229,215,165,75,151,146,98,76,242,245,103,206,156,121,218,104,246,49,
80,117,172,32,235,239,239,55,68,69,11,33,250,52,85,90,76,66,239,192,3,205,165,87,182,190,235,247,6,29,69,139,115,206,255,242,31,255,243,15,255,226,185,229,43,212,155,125,220,26,45,88,72,68,247,7,199,85,
147,75,140,102,161,19,164,19,206,39,3,19,174,169,243,201,160,186,13,245,209,240,128,122,77,159,138,77,120,244,100,80,246,221,243,226,221,184,113,131,127,26,30,7,114,103,160,79,232,196,229,251,157,255,
111,199,63,218,250,58,239,187,30,78,184,130,125,170,123,82,124,242,201,39,75,226,158,26,187,34,109,180,113,93,241,113,23,49,0,0,0,152,181,82,117,52,67,243,176,78,190,9,149,183,9,243,85,197,233,200,188,
62,94,95,166,19,66,167,19,58,221,10,115,218,31,255,241,31,171,203,157,231,158,123,238,205,159,253,199,0,23,157,123,210,179,22,166,222,63,215,245,242,203,47,203,11,183,189,186,115,231,206,27,111,188,241,
127,255,135,119,94,92,154,167,211,233,134,196,240,0,61,113,209,19,158,126,203,215,232,67,185,226,195,163,5,122,188,33,238,246,237,219,242,5,71,142,28,105,252,252,228,51,9,75,132,208,169,219,249,184,92,
235,115,61,84,55,13,62,205,181,154,32,131,62,218,110,183,243,243,203,151,47,183,221,239,252,101,251,137,142,254,155,242,34,161,165,75,151,222,121,124,255,166,233,241,31,254,225,31,170,107,41,217,126,156,
149,149,213,237,236,93,81,249,226,27,111,188,193,207,52,53,53,153,12,113,227,38,255,143,138,230,129,170,196,247,146,34,106,186,115,229,211,214,227,151,238,95,147,61,245,199,142,29,115,62,25,232,115,61,
124,248,100,32,37,37,69,86,105,75,141,139,52,61,242,66,136,63,250,171,127,251,241,225,67,43,126,183,244,139,158,230,115,247,218,255,207,239,127,151,135,117,254,143,255,241,63,50,19,83,198,173,81,223,245,
191,109,63,209,237,236,85,215,130,230,88,174,212,133,33,42,122,194,53,213,204,99,208,55,56,86,104,242,117,96,234,210,147,135,198,70,245,186,62,254,248,99,62,139,248,249,207,127,94,215,221,244,241,149,
99,191,243,7,91,175,222,184,246,135,127,245,111,157,67,143,253,175,224,82,163,217,16,21,253,240,225,67,89,121,31,186,250,197,111,110,93,28,114,63,33,212,169,0,0,0,225,92,170,210,216,172,85,238,97,63,173,
170,163,247,153,146,115,163,250,186,171,149,78,232,116,58,157,41,198,104,188,175,252,171,127,245,175,212,127,252,238,119,191,251,205,154,111,5,86,171,18,223,200,53,111,81,122,234,99,211,214,202,111,113,
199,180,188,161,148,172,38,223,123,239,189,140,101,207,158,58,240,191,95,124,58,79,23,165,27,22,202,160,24,30,18,195,79,200,45,155,84,21,31,107,61,76,202,147,145,105,101,221,66,136,248,232,177,169,85,
157,78,231,31,253,209,31,101,47,76,21,66,39,116,194,57,52,160,174,20,99,244,134,113,151,147,31,252,95,230,5,73,92,94,155,23,36,158,57,252,143,239,189,247,30,141,54,21,223,123,112,255,201,162,104,229,206,
163,63,249,147,63,33,162,197,139,23,43,138,242,95,254,203,127,113,56,28,99,149,110,252,162,35,31,214,242,187,210,211,211,239,245,247,173,95,191,190,173,173,141,95,112,244,232,209,62,85,245,198,175,215,
141,221,187,158,92,79,134,92,11,163,248,62,76,242,66,180,143,62,250,232,191,126,242,222,213,7,55,198,245,212,95,237,136,213,71,223,86,247,200,31,252,95,49,81,209,15,30,60,184,116,233,210,238,221,187,71,
218,182,247,236,57,120,240,224,182,109,219,62,250,217,207,51,147,150,157,62,252,229,184,53,234,239,123,178,200,32,59,229,121,121,120,255,136,213,199,40,119,30,251,89,83,83,140,81,211,134,122,103,160,79,
125,69,84,178,209,124,103,252,208,216,69,113,137,43,22,61,187,251,95,255,233,159,252,201,159,124,253,245,215,114,74,212,159,254,244,167,77,77,77,191,248,197,47,212,171,227,117,5,23,197,37,102,37,165,254,
236,103,63,227,243,129,61,123,246,140,220,115,235,222,117,110,82,117,171,38,164,64,173,10,0,0,48,51,68,81,97,145,76,191,35,131,240,120,218,243,113,245,172,208,147,46,154,162,98,72,191,64,137,142,87,12,
122,69,87,223,115,126,164,23,158,136,136,178,22,166,22,39,175,16,66,167,8,197,45,72,167,144,80,132,162,184,27,122,46,120,125,25,17,223,113,221,253,155,158,145,59,36,141,189,38,105,153,162,40,109,15,186,
125,45,116,102,210,178,229,79,61,243,84,92,146,172,28,248,214,158,55,31,222,189,237,188,223,214,215,229,114,63,145,47,206,72,76,137,143,94,144,253,84,170,65,111,208,9,221,19,225,30,16,79,6,196,147,1,122,
50,68,79,134,200,61,60,114,175,82,207,74,152,162,72,23,77,81,6,210,47,160,232,56,37,122,129,162,191,233,184,123,229,222,117,190,19,146,33,42,58,43,105,89,225,146,229,178,34,151,219,36,43,41,181,96,113,
22,15,102,120,56,244,152,111,233,84,184,100,249,200,252,241,138,226,26,30,58,123,251,178,220,50,252,130,124,75,214,111,110,94,148,55,130,202,76,74,33,18,109,163,183,107,42,90,154,55,228,30,146,55,112,
226,111,119,184,30,141,222,222,105,89,158,57,237,162,253,26,191,61,107,97,106,73,242,74,121,167,91,254,65,207,222,186,124,229,222,245,209,59,117,141,109,204,236,133,207,92,119,220,82,223,248,62,223,146,
213,210,219,42,159,201,90,184,172,192,146,221,214,119,195,57,244,152,159,28,253,165,82,51,22,166,152,99,19,137,200,229,30,106,190,125,69,254,148,188,120,131,195,67,109,163,119,132,42,78,94,49,114,191,
92,69,81,20,165,225,230,216,142,225,185,166,141,183,70,110,43,197,91,242,122,255,237,214,190,46,245,173,173,218,251,186,175,220,31,123,134,111,55,69,68,157,253,183,218,70,239,98,165,94,193,78,199,205,
214,251,55,124,173,32,63,67,68,252,147,201,59,129,101,63,245,204,234,165,57,34,74,56,197,208,35,114,13,210,147,33,26,158,166,217,133,1,0,0,230,45,89,121,142,43,65,149,96,74,85,29,9,46,218,98,73,191,64,
137,142,85,244,81,138,112,203,65,158,220,130,42,116,79,70,6,128,186,117,36,162,21,157,94,137,226,50,82,190,76,39,116,178,177,117,228,203,220,252,125,138,108,42,213,44,206,88,85,48,58,239,146,16,220,147,
60,50,129,191,32,193,243,74,73,170,102,47,49,122,17,183,32,33,92,98,120,144,158,140,252,151,134,159,208,240,240,232,192,6,242,86,170,234,72,23,69,58,3,69,197,144,62,86,209,47,160,232,24,37,74,113,171,
150,86,136,145,178,123,116,3,147,166,131,88,25,29,8,49,178,240,99,175,82,148,113,171,38,70,123,234,199,62,65,25,25,103,33,70,255,223,232,211,202,88,203,158,24,183,209,198,125,154,16,110,161,12,11,183,
66,20,69,58,189,34,20,185,149,248,51,132,234,255,84,139,61,238,39,80,175,2,105,246,20,143,231,125,205,142,63,186,60,170,223,93,181,36,158,107,170,249,25,188,126,158,183,5,150,203,54,178,87,104,222,238,
177,204,190,247,186,145,31,151,132,80,132,242,152,134,30,139,39,3,52,228,26,61,183,65,169,10,0,0,48,51,165,106,64,243,170,42,164,40,36,134,73,121,66,195,67,36,116,66,40,164,196,136,168,104,37,74,22,15,
79,104,120,72,12,13,209,48,119,169,235,72,184,136,12,66,175,39,17,45,198,94,166,144,226,22,110,55,41,138,32,161,208,200,176,85,210,249,186,7,144,186,236,147,197,135,155,148,39,194,253,132,220,195,66,81,
72,225,97,177,81,66,232,21,157,158,116,218,42,66,208,48,41,67,194,61,68,195,67,194,237,26,45,82,185,247,95,241,61,71,166,250,214,178,67,52,172,19,130,20,82,132,162,215,233,244,164,27,173,173,20,217,34,
43,184,184,81,198,215,91,163,37,144,91,144,155,134,221,164,112,189,202,213,191,231,0,137,209,177,19,68,227,43,116,245,195,241,127,245,82,205,41,163,219,135,215,145,136,162,72,68,145,46,90,232,162,72,39,
132,78,140,150,170,234,247,122,150,137,94,170,61,207,2,85,189,116,138,207,57,32,20,161,140,182,94,43,130,135,43,243,96,99,95,107,26,128,113,3,163,101,33,170,200,165,83,200,163,130,247,245,9,170,90,117,
92,221,251,68,12,187,104,216,37,134,93,244,68,61,92,4,0,0,0,102,70,160,183,0,224,129,170,79,184,240,35,114,11,229,9,185,163,232,137,142,116,130,136,239,185,58,44,148,209,185,39,21,174,29,159,144,162,35,
138,166,40,190,115,250,200,128,63,49,114,145,10,87,106,81,66,39,20,138,26,169,90,200,79,229,196,69,225,200,52,236,66,121,50,210,119,79,130,72,39,132,142,116,81,66,68,41,66,39,116,58,18,66,117,87,88,126,
49,255,143,103,167,26,86,213,169,202,4,107,173,12,147,155,23,197,45,148,97,82,162,72,68,201,187,149,138,113,183,179,18,163,75,46,84,45,127,238,209,251,8,140,222,232,72,17,92,168,201,130,117,244,141,138,
143,122,77,54,253,41,202,72,37,229,235,53,188,58,110,114,15,11,158,217,96,164,84,213,145,136,18,58,94,242,40,210,233,198,111,93,255,91,192,107,121,199,207,115,229,173,90,112,69,189,58,76,254,232,252,99,
141,212,244,170,213,215,141,95,27,175,247,98,240,122,125,158,92,6,33,196,184,182,80,101,236,43,252,175,160,250,93,170,239,26,59,81,121,66,238,39,124,146,67,195,126,166,224,5,0,0,128,217,44,85,185,143,
214,77,36,72,25,162,97,78,225,122,210,113,219,152,44,71,84,181,145,66,36,162,72,12,145,59,74,8,23,13,235,70,234,155,145,34,149,139,54,46,86,100,27,155,103,121,42,60,22,67,214,142,163,119,153,26,169,27,
248,115,162,72,167,19,170,58,82,150,170,99,203,230,126,66,138,123,180,3,55,144,251,185,43,164,12,19,17,185,149,209,138,60,106,164,208,20,99,229,154,170,140,211,137,177,130,149,198,110,208,170,184,85,119,
144,31,89,241,209,130,85,4,214,154,200,53,46,5,180,192,35,179,22,184,85,213,161,142,116,81,36,116,66,68,145,142,60,250,208,41,176,106,85,211,213,174,190,251,173,24,189,41,214,104,49,45,228,0,14,247,104,
99,164,219,99,245,117,65,182,164,122,46,152,50,126,162,83,205,98,4,190,118,202,184,146,149,212,123,53,15,20,65,191,63,0,0,64,152,150,170,210,48,185,21,18,202,72,254,118,235,84,205,129,170,26,116,164,28,
121,66,34,138,220,98,164,225,112,172,214,28,45,113,70,166,188,18,163,237,112,1,214,22,178,66,29,63,195,148,16,68,81,35,31,229,217,168,169,125,87,128,179,184,203,49,161,195,68,10,185,135,73,225,53,18,227,
74,49,34,85,111,186,103,171,167,170,158,11,113,197,125,53,109,250,41,221,70,155,87,21,85,169,58,246,91,248,121,123,144,197,226,248,82,149,198,149,233,234,138,214,61,114,151,218,177,213,39,223,11,19,212,
146,120,206,30,229,117,49,252,127,172,215,225,20,242,236,98,56,200,211,27,0,0,0,152,233,82,85,22,109,110,34,55,41,58,82,52,253,188,138,170,153,77,86,12,238,241,253,176,52,190,13,76,140,43,44,132,8,120,
49,60,191,139,63,103,88,245,105,234,55,185,85,47,14,246,86,67,170,106,85,241,92,35,69,85,3,141,47,82,181,151,243,104,170,58,242,190,168,218,130,73,209,46,75,160,27,73,179,137,100,77,44,191,113,194,206,
241,137,10,185,177,47,242,248,155,240,88,126,197,207,239,78,99,23,140,133,64,209,44,162,240,190,168,1,174,157,207,90,60,240,211,27,0,0,0,152,133,82,85,93,118,200,186,205,227,5,138,231,63,253,55,224,137,
80,171,20,109,191,173,223,175,163,201,221,12,115,116,158,129,9,190,98,194,143,247,232,73,159,222,178,71,253,117,19,45,249,12,153,252,239,62,139,203,140,34,21,96,94,81,208,131,2,48,21,132,152,108,237,161,
15,58,122,125,20,166,129,20,76,193,254,117,250,150,106,214,191,98,86,46,205,9,159,235,129,230,237,149,73,72,126,0,97,146,252,16,164,0,51,156,248,66,14,91,61,98,27,144,240,80,161,2,204,183,228,23,96,156,
34,120,1,166,42,189,114,52,133,16,179,250,41,15,108,128,121,158,240,144,252,0,194,63,249,249,15,73,4,41,192,52,165,87,69,81,130,13,88,253,84,5,54,98,27,144,240,144,252,0,34,37,249,249,10,76,47,113,138,
192,5,8,52,185,122,15,177,73,6,172,126,146,81,141,4,12,72,120,72,126,0,17,151,252,38,142,211,177,75,137,17,174,0,129,5,171,226,125,26,30,207,198,160,160,2,86,63,149,129,141,4,12,243,50,225,33,249,1,68,
92,242,243,25,170,10,34,20,32,212,12,168,158,233,72,17,158,49,27,90,192,234,39,27,213,72,192,48,191,19,30,146,31,64,196,37,63,63,161,58,54,63,29,58,12,1,66,203,182,98,236,118,152,98,252,212,166,161,5,
108,96,55,86,69,2,6,36,60,36,63,128,57,148,252,252,132,170,215,88,158,153,217,66,0,230,66,182,85,133,140,66,138,103,194,13,150,62,136,48,214,4,48,18,48,204,129,132,167,138,159,201,87,171,72,126,0,225,
159,252,188,36,53,111,113,202,143,207,93,58,135,141,15,16,178,252,21,249,202,248,155,70,133,144,106,245,161,212,169,170,198,84,36,96,136,236,132,71,66,125,195,218,144,171,85,36,63,128,136,72,126,94,147,
154,38,84,17,167,0,83,165,229,66,11,17,21,172,40,8,60,135,122,18,69,133,69,52,22,172,35,225,170,137,88,242,219,74,36,31,32,176,33,226,18,30,241,93,94,199,39,53,77,146,155,176,90,245,158,252,20,36,63,128,
105,84,176,162,64,29,185,1,134,173,175,164,166,126,94,29,167,137,137,137,217,217,217,113,113,113,216,224,0,65,113,58,157,87,174,92,233,239,239,31,139,217,149,5,94,35,84,8,225,167,3,127,130,82,53,240,58,
21,9,24,34,59,225,17,133,144,243,144,252,0,194,57,249,77,50,84,57,78,141,70,35,70,184,1,132,70,81,20,167,211,217,218,218,42,99,150,3,214,51,201,6,87,170,250,107,82,29,95,167,122,22,169,9,9,9,25,25,25,
70,163,17,63,15,132,127,194,187,122,245,106,32,9,111,194,106,21,201,15,32,60,147,95,32,209,170,105,151,249,250,226,215,68,148,148,148,148,149,149,197,185,140,147,40,70,181,1,132,16,170,252,192,237,118,
171,99,182,96,101,193,212,151,170,129,212,169,9,9,9,153,153,153,70,163,81,8,129,144,134,136,8,33,78,120,109,109,109,154,132,231,53,207,5,85,170,34,249,1,132,67,242,155,56,90,199,159,85,170,67,53,46,46,
142,63,1,113,10,48,249,108,75,68,15,31,62,148,1,91,184,170,208,51,84,189,180,251,76,88,170,106,210,173,175,134,34,147,201,196,9,88,167,211,33,176,33,178,18,158,162,40,50,225,57,28,14,117,181,26,122,169,
138,228,7,16,54,201,207,255,89,165,58,90,53,167,148,8,82,128,41,143,89,207,128,213,92,13,233,171,84,213,5,246,37,222,235,212,132,132,132,236,236,236,248,248,120,174,83,209,164,10,145,66,238,174,58,157,
46,62,62,62,59,59,59,33,33,129,136,154,207,55,7,85,74,122,15,173,81,154,228,39,195,4,219,31,96,146,241,203,209,20,31,31,159,149,149,197,193,219,116,174,105,194,19,75,207,188,166,121,78,125,74,9,0,83,155,
115,227,227,227,51,51,51,253,159,82,122,165,155,56,13,143,143,103,117,157,154,149,149,197,117,170,108,82,5,136,184,132,199,213,170,76,120,92,173,134,122,230,136,228,7,16,25,201,207,243,172,50,49,49,17,
161,10,48,125,1,75,68,70,163,81,115,110,25,74,169,170,237,247,215,148,173,163,227,83,101,157,138,86,34,152,51,9,207,179,121,6,201,15,96,142,37,63,63,55,9,207,206,206,70,168,2,76,107,192,234,116,186,140,
140,12,63,225,236,53,231,234,130,250,26,206,190,60,62,21,117,42,204,201,106,213,100,50,81,144,157,137,72,126,0,225,153,252,2,121,187,230,172,18,1,11,48,221,169,150,243,236,217,175,207,6,248,70,221,4,217,
215,71,135,38,46,246,135,57,25,66,70,163,49,43,43,203,243,36,47,144,10,21,201,15,32,130,146,159,103,94,35,220,36,28,96,70,98,86,158,91,6,120,153,147,46,144,212,203,56,251,38,36,36,160,78,133,185,93,173,
134,48,146,6,201,15,32,220,146,95,80,73,138,111,201,129,188,6,48,3,121,86,222,1,71,19,167,190,2,208,75,171,170,159,129,170,68,148,153,153,137,139,168,96,14,71,145,78,167,83,95,165,49,25,72,126,0,179,155,
252,16,125,0,97,29,188,36,4,77,124,98,169,11,240,64,128,38,85,152,63,57,79,54,172,134,220,153,8,0,97,146,252,252,100,43,65,72,100,0,179,28,174,129,68,98,112,151,85,101,100,100,160,72,133,249,80,176,134,
220,153,136,228,7,16,17,201,15,0,194,40,96,39,223,170,42,161,73,21,230,67,157,202,13,171,234,127,202,199,216,62,0,145,146,252,38,136,89,68,51,64,132,208,97,19,0,248,77,121,129,118,38,34,249,1,132,91,240,
98,35,0,68,208,185,101,232,165,42,162,29,16,66,136,2,128,57,150,252,0,32,82,160,85,21,32,208,156,135,1,0,0,145,23,190,8,91,128,8,167,87,255,195,203,4,144,130,104,138,38,133,44,47,47,79,77,77,77,78,78,
230,127,58,28,142,139,23,47,54,54,54,58,157,206,25,91,219,157,59,119,26,12,6,34,122,255,253,247,123,123,123,241,243,67,48,245,170,224,219,97,8,33,102,120,170,212,29,59,118,240,244,230,13,13,13,117,117,
117,28,77,197,197,197,68,100,179,217,106,107,107,241,235,0,132,28,215,8,222,89,148,147,147,83,93,93,205,37,193,222,189,123,177,67,194,4,165,170,66,211,149,125,45,22,75,117,117,181,217,108,86,63,105,50,
153,138,139,139,139,139,139,107,107,107,109,54,219,12,172,106,117,117,53,215,169,0,33,36,180,192,227,35,168,228,87,82,82,82,86,86,230,235,175,187,119,239,14,60,202,182,111,223,206,143,113,38,6,48,3,34,
49,120,101,233,236,9,165,51,68,64,169,58,77,140,70,227,230,205,155,57,54,236,118,251,209,163,71,59,59,59,141,70,227,198,141,27,211,210,210,184,130,124,252,248,113,103,103,231,172,4,39,64,112,37,235,140,
55,169,18,17,26,27,0,34,20,130,23,32,2,74,213,162,162,34,46,19,93,46,215,71,31,125,196,221,253,78,167,243,192,129,3,53,53,53,60,30,96,237,218,181,251,247,239,151,231,151,43,86,172,224,254,17,214,211,211,
211,213,213,197,93,39,76,51,150,192,110,183,183,181,181,169,95,0,16,137,2,111,134,1,0,4,239,100,200,1,9,0,115,164,84,157,204,104,30,121,143,202,75,151,46,105,134,165,158,59,119,142,203,205,228,228,100,
163,209,232,116,58,173,86,235,214,173,91,53,159,144,156,156,108,50,153,56,168,140,70,227,182,109,219,52,99,9,204,102,179,217,108,246,19,117,124,94,43,199,196,0,68,22,121,82,247,197,23,95,212,215,215,123,
190,64,211,17,233,217,153,88,80,80,144,157,157,205,253,24,124,250,119,238,220,185,230,230,102,254,167,122,184,216,7,31,124,176,126,253,250,156,156,28,12,29,3,152,159,193,171,94,102,34,90,189,122,53,183,
55,217,108,182,99,199,142,57,157,78,163,209,248,198,27,111,240,139,213,67,248,228,48,220,158,158,30,217,252,228,127,249,125,41,41,41,89,185,114,165,204,245,158,239,146,11,217,208,208,16,27,27,155,159,
159,207,207,183,180,180,28,62,124,88,253,81,161,45,0,68,94,169,58,25,114,87,235,235,235,211,252,169,187,187,91,62,78,77,77,181,217,108,27,54,108,224,127,118,116,116,28,56,112,64,238,253,178,222,93,191,
126,61,127,160,203,229,250,252,243,207,57,66,202,203,203,11,11,11,241,91,2,120,85,93,93,157,147,147,163,57,253,75,78,78,78,74,74,210,156,224,197,196,196,124,239,123,223,195,144,110,0,4,47,17,173,89,179,
70,253,129,188,36,181,181,181,78,167,179,163,163,131,139,191,103,159,125,86,150,170,50,83,183,182,182,6,187,252,94,107,101,205,187,172,86,171,231,104,90,117,31,44,17,229,231,231,39,36,36,200,250,33,180,
5,128,121,87,170,250,161,30,60,158,148,148,68,68,50,42,18,18,18,202,203,203,47,92,184,208,219,219,91,87,87,39,155,84,229,62,247,213,87,95,201,240,144,47,0,136,104,187,118,237,82,255,51,240,171,28,234,
235,235,175,94,189,234,245,202,140,146,146,18,142,26,187,221,94,91,91,219,219,219,43,155,97,138,139,139,61,167,224,144,103,128,0,48,135,131,151,47,107,86,63,227,121,137,115,119,119,247,103,159,125,230,
116,58,101,115,105,78,78,14,55,172,94,185,114,133,75,213,220,220,92,110,197,180,90,173,178,33,233,220,185,115,33,44,63,43,47,47,231,58,213,229,114,29,58,116,168,179,179,83,190,43,39,39,231,246,237,219,
154,198,105,217,176,37,23,50,45,45,205,106,181,118,118,118,134,182,0,16,134,102,115,94,85,139,197,34,31,115,155,235,197,139,23,249,159,102,179,185,184,184,120,251,246,237,187,118,237,170,169,169,177,90,
173,68,148,154,154,42,95,127,245,234,85,252,120,0,19,90,185,114,37,63,56,125,250,52,167,64,155,205,102,183,219,249,201,172,172,44,245,139,7,7,7,81,167,2,32,120,217,245,235,215,185,152,187,112,225,130,
124,50,46,46,142,136,154,155,155,93,46,23,17,25,12,6,46,7,101,15,123,123,123,59,191,43,168,229,151,212,131,6,249,122,107,155,205,214,209,209,193,79,62,243,204,51,158,11,201,15,234,234,234,120,145,228,
194,132,182,0,16,134,166,189,85,213,110,183,243,153,22,183,155,170,165,164,164,200,199,93,93,93,188,171,169,7,157,176,228,228,228,77,155,54,189,251,238,187,248,181,96,110,155,142,43,51,228,220,23,149,
149,149,149,149,149,154,191,122,70,37,0,204,135,224,13,234,178,42,175,243,103,93,186,116,137,147,53,143,1,144,37,166,28,6,26,218,242,123,29,52,216,223,223,207,15,22,45,90,228,103,57,7,7,7,213,35,22,112,
244,155,51,166,189,85,181,173,173,141,31,228,230,230,26,141,70,245,159,86,173,90,197,15,122,122,122,100,59,252,225,195,135,119,239,222,189,103,207,158,134,134,6,121,142,104,48,24,82,83,83,185,156,101,
25,25,25,248,241,0,38,132,129,167,0,8,222,233,112,230,204,25,153,220,45,22,11,151,152,118,187,93,78,61,57,235,203,143,163,223,156,49,237,173,170,141,141,141,121,121,121,38,147,201,96,48,108,219,182,77,
61,175,170,28,55,125,226,196,9,126,176,115,231,206,166,166,38,57,68,53,39,39,71,14,78,125,252,248,177,122,40,247,234,213,171,251,250,250,184,150,45,41,41,89,189,122,53,174,86,6,240,36,187,53,142,28,57,
130,139,94,1,16,188,83,165,183,183,183,167,167,39,57,57,217,96,48,84,84,84,240,147,178,113,42,228,229,247,218,19,155,144,144,192,15,238,222,189,235,235,141,70,163,81,54,163,114,139,44,142,126,40,85,3,
229,116,58,15,30,60,200,119,171,50,155,205,158,115,81,213,214,214,170,79,194,60,199,122,19,145,205,102,227,215,124,246,217,103,60,89,149,201,100,170,174,174,14,112,242,41,207,91,0,240,24,118,76,199,3,
115,134,186,135,110,197,138,21,178,107,239,252,249,243,60,21,78,105,105,41,169,250,230,74,74,74,178,178,178,26,27,27,49,56,21,0,193,27,154,214,214,86,110,114,146,3,85,27,27,27,229,95,67,91,254,182,182,
54,174,47,115,115,115,121,184,106,78,78,142,252,124,57,50,213,211,198,141,27,249,129,203,229,226,41,8,112,244,67,169,26,92,28,238,219,183,79,51,111,191,195,225,184,120,241,162,230,18,188,134,134,134,197,
139,23,203,157,146,136,58,58,58,174,92,185,34,247,48,167,211,201,31,149,153,153,41,71,180,240,71,225,183,132,121,142,91,56,72,117,109,239,251,239,191,95,95,95,191,100,201,146,156,156,28,147,201,228,117,
192,22,0,204,195,224,245,108,21,10,225,198,170,231,206,157,83,79,104,213,209,209,161,78,232,161,45,127,93,93,29,151,10,6,131,65,211,182,101,179,217,60,231,166,45,43,43,211,220,222,246,248,241,227,188,
24,56,250,161,84,13,90,32,35,184,3,28,229,29,236,236,84,104,58,133,249,224,208,161,67,60,1,184,230,121,238,184,176,90,173,234,63,241,61,222,228,197,176,0,128,224,13,150,211,233,108,111,111,151,203,118,
229,202,149,41,89,254,253,251,247,79,120,11,0,169,163,163,35,33,33,129,95,217,211,211,163,105,43,197,209,111,110,16,69,133,69,252,72,81,20,183,219,205,15,228,127,137,136,20,34,162,230,11,205,68,244,210,
75,47,69,69,69,233,116,58,108,56,152,195,220,110,247,240,240,240,151,95,126,73,68,50,64,72,33,133,70,66,67,19,35,99,193,50,62,94,214,174,93,43,132,64,188,0,204,64,204,14,13,13,157,58,117,202,107,204,122,
79,109,136,214,72,54,225,109,192,32,178,162,213,127,9,138,176,4,0,0,0,128,48,133,82,21,0,0,0,0,80,170,2,0,0,0,0,4,67,143,77,0,0,0,0,17,100,255,254,253,216,8,243,7,90,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,
0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,
0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,
0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,
0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,98,19,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,
0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,
0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,
2,0,0,0,0,160,84,245,175,188,188,124,215,174,93,86,171,21,63,109,216,42,40,40,216,181,107,87,65,65,1,54,5,0,0,142,165,48,173,170,170,170,118,237,218,101,52,26,35,119,21,244,179,248,221,175,191,254,186,
217,108,150,255,236,233,233,57,119,238,92,115,115,51,87,156,197,197,197,71,142,28,225,127,190,254,250,235,68,180,111,223,190,112,216,100,70,163,241,141,55,222,240,124,190,165,165,229,210,165,75,91,183,
110,109,105,105,57,124,248,240,28,222,239,53,191,142,230,55,53,24,12,123,247,238,197,209,33,162,109,217,178,37,45,45,141,136,58,58,58,14,28,56,96,177,88,170,170,170,146,147,147,137,168,161,161,161,174,
174,14,155,40,172,242,80,126,126,254,158,61,123,156,78,39,182,198,172,103,180,158,158,158,253,251,247,107,158,215,228,175,240,255,201,52,217,217,229,114,93,186,116,233,204,153,51,189,189,189,248,161,195,
225,23,113,56,28,23,47,94,156,63,135,98,253,236,126,189,203,229,122,231,157,119,184,254,219,180,105,83,101,101,229,192,192,128,205,102,11,255,13,199,41,92,243,228,60,105,205,109,108,108,44,44,44,204,206,
206,214,148,170,86,171,213,108,54,55,52,52,224,176,50,229,44,22,203,243,207,63,159,159,159,47,143,83,237,237,237,39,79,158,156,48,213,241,153,85,80,167,79,85,85,85,139,22,45,122,255,253,247,101,90,170,
174,174,30,28,28,220,189,123,247,132,239,45,40,40,168,172,172,212,68,202,241,227,199,145,225,212,27,231,227,143,63,238,236,236,148,207,231,228,228,84,87,87,123,62,63,29,21,173,60,228,134,103,50,14,159,
38,137,16,34,212,108,54,187,92,174,69,139,22,25,141,198,57,112,218,160,222,85,10,10,10,86,173,90,181,125,251,246,47,190,248,162,190,190,62,82,86,161,164,164,36,43,43,139,207,177,237,118,251,233,211,167,
61,155,87,66,139,98,175,45,53,94,249,105,217,153,204,47,194,31,75,68,243,164,90,213,135,201,114,56,157,206,253,251,247,239,220,185,243,165,151,94,178,217,108,117,117,117,145,248,3,116,118,118,6,146,206,
35,157,211,233,188,123,247,110,74,74,138,230,121,217,14,135,162,100,58,74,156,158,158,30,89,62,150,151,151,231,229,229,45,91,182,108,58,242,122,110,110,110,123,123,187,44,46,249,12,228,139,47,190,8,252,
19,100,203,171,197,98,169,174,174,222,188,121,243,7,31,124,128,54,63,102,183,219,115,115,115,213,37,233,242,229,203,237,118,187,186,201,100,58,164,167,167,187,92,46,131,193,80,80,80,48,249,172,9,26,43,
86,172,32,162,175,190,250,170,172,172,108,213,170,85,17,84,207,5,162,185,185,185,185,185,185,186,186,186,172,172,172,175,175,47,34,154,147,248,220,172,165,165,133,27,185,45,22,75,69,69,133,213,106,173,
173,173,157,3,191,72,93,93,93,94,94,94,97,97,33,74,213,89,224,112,56,76,38,147,204,205,220,198,32,219,189,119,237,218,197,7,122,78,207,124,158,199,39,76,46,151,171,169,169,73,254,102,11,23,46,44,46,46,
230,202,169,167,167,231,208,161,67,51,147,38,185,5,75,230,233,45,91,182,164,164,164,28,63,126,92,46,167,205,102,83,199,9,7,15,47,167,102,21,194,92,107,107,107,114,114,114,73,73,137,250,136,156,151,151,
103,183,219,57,7,27,141,198,245,235,215,231,228,228,248,95,53,171,213,186,117,235,86,117,159,178,230,28,116,231,206,157,221,221,221,253,253,253,185,185,185,6,131,193,229,114,125,245,213,87,55,111,222,
92,187,118,45,111,82,205,239,27,185,155,212,207,78,85,81,81,161,233,85,172,171,171,107,108,108,92,191,126,253,116,124,157,193,96,24,28,28,148,207,44,92,184,144,136,6,6,6,66,248,180,222,222,222,243,231,
207,151,149,149,21,21,21,97,216,0,107,107,107,203,203,203,211,20,145,77,77,77,211,90,170,230,228,228,152,76,166,47,190,248,98,205,154,53,86,171,21,165,234,148,203,203,203,235,233,233,169,175,175,95,189,
122,117,86,86,150,60,48,122,230,175,27,55,110,112,247,136,28,72,198,35,1,212,61,18,158,199,46,63,249,78,157,80,54,111,222,236,114,185,62,250,232,163,233,72,121,181,181,181,233,233,233,69,69,69,178,84,
245,127,188,229,51,106,206,233,118,187,253,252,249,243,188,89,106,106,106,120,69,248,0,126,226,196,9,206,26,59,118,236,112,185,92,234,211,239,96,155,48,213,155,34,63,63,191,163,163,67,246,38,245,246,246,
30,56,112,160,160,160,160,188,188,124,38,143,69,211,215,238,230,114,185,98,98,98,60,171,115,126,172,41,54,188,214,241,94,95,233,235,215,33,162,146,146,146,213,171,87,243,15,170,249,185,213,191,117,79,
79,207,225,195,135,167,182,39,77,31,254,135,128,125,251,246,121,118,12,241,30,44,79,152,74,74,74,158,121,230,25,249,215,23,94,120,225,244,233,211,60,198,110,243,230,205,27,55,110,244,236,172,159,25,6,
131,97,213,170,85,252,179,241,50,63,120,240,128,127,93,163,209,184,121,243,102,135,195,193,199,169,146,146,146,178,178,178,129,129,129,136,56,29,175,175,175,95,179,102,141,250,136,204,185,80,246,254,111,
219,182,141,136,184,21,176,160,160,160,162,162,34,49,49,49,180,211,217,180,180,52,155,205,198,29,31,91,182,108,41,43,43,115,56,28,103,207,158,221,191,127,191,230,247,141,232,77,234,75,81,81,145,193,96,
104,108,108,212,60,239,116,58,121,123,250,41,247,91,91,91,57,29,230,231,231,243,129,73,142,4,40,47,47,47,44,44,52,24,12,234,67,149,28,135,45,95,223,208,208,192,221,76,149,149,149,149,149,149,33,116,31,
123,214,184,234,164,171,233,149,243,115,40,44,41,41,89,185,114,37,103,125,205,161,144,207,103,238,220,185,35,143,149,234,110,74,222,73,248,121,94,217,99,199,142,113,34,151,155,46,54,54,150,215,215,225,
112,124,246,217,103,234,38,79,245,49,93,125,224,14,249,208,220,215,215,231,112,56,228,105,94,73,73,73,119,119,183,231,203,188,254,64,82,117,117,53,159,7,126,241,197,23,154,116,229,213,242,229,203,93,46,
87,125,125,253,146,37,75,210,211,211,53,95,84,92,92,220,208,208,144,154,154,170,62,253,43,42,42,146,11,160,233,246,245,181,108,1,158,121,122,253,165,124,53,73,68,4,171,213,106,50,153,46,94,188,72,68,237,
237,237,249,249,249,22,139,133,247,7,175,249,139,67,76,51,86,117,213,170,85,114,107,240,177,139,70,187,119,253,231,59,121,146,89,93,93,61,125,117,42,235,238,238,78,75,75,227,17,14,254,143,183,85,85,85,
185,185,185,95,125,245,21,255,179,188,188,60,41,41,137,31,244,247,247,115,251,2,15,252,219,184,113,35,95,222,112,241,226,197,226,226,98,171,213,42,3,48,59,59,219,225,112,132,112,102,21,23,23,71,68,253,
253,253,158,205,195,242,49,239,141,178,54,224,189,87,30,33,141,70,227,198,141,27,185,10,151,177,191,112,225,66,62,157,224,227,33,17,241,190,237,231,52,67,221,238,22,200,1,39,168,234,226,238,221,187,234,
18,211,100,50,201,47,218,184,113,99,117,117,181,215,156,235,231,149,126,126,157,130,130,130,178,178,50,185,139,150,151,151,167,166,166,170,195,156,255,196,239,170,174,174,158,218,248,13,163,82,213,104,
52,154,76,38,175,71,109,79,165,165,165,156,30,100,229,164,62,146,30,61,122,148,127,251,222,222,222,238,238,110,205,161,121,74,164,165,165,241,33,149,121,29,186,202,123,173,108,12,107,110,110,46,45,45,
149,191,238,250,245,235,99,98,98,100,199,104,125,125,125,86,86,214,234,213,171,35,165,174,234,238,238,78,73,73,145,163,178,158,125,246,89,34,186,112,225,2,31,73,205,102,243,199,31,127,204,7,235,230,230,
230,164,164,164,226,226,226,83,167,78,133,112,166,213,209,209,33,227,237,202,149,43,105,105,105,167,78,157,226,35,78,111,111,175,122,40,66,164,111,82,175,50,51,51,93,46,87,104,61,110,78,167,115,207,158,
61,158,99,85,171,171,171,211,211,211,143,31,63,222,220,220,204,125,244,175,191,254,250,190,125,251,188,190,190,175,175,47,180,134,13,198,249,233,214,173,91,242,148,166,178,178,210,102,179,113,92,84,87,
87,87,84,84,116,119,119,243,41,141,175,67,33,103,193,134,134,6,62,252,213,212,212,188,250,234,171,31,126,248,161,220,157,210,210,210,6,7,7,249,144,90,85,85,85,86,86,118,243,230,77,62,8,148,150,150,202,
235,15,248,184,172,57,119,45,44,44,108,106,106,226,161,59,53,53,53,242,208,204,255,140,137,137,225,99,186,209,104,124,249,229,151,211,210,210,58,59,59,39,121,104,62,119,238,156,236,35,206,202,202,106,
109,109,141,141,141,213,84,162,94,127,32,207,165,178,90,173,89,89,89,19,126,99,74,74,10,31,90,59,59,59,115,114,114,52,253,33,188,155,157,62,125,122,255,254,253,86,171,117,211,166,77,111,188,241,70,71,
71,199,187,239,190,235,116,58,53,219,211,255,178,5,114,228,244,250,75,249,42,233,34,2,23,52,124,244,187,118,237,90,126,126,254,138,21,43,130,109,75,83,119,155,212,215,215,175,92,185,82,238,255,254,243,
29,103,79,110,29,152,214,58,85,22,127,139,22,45,114,58,157,126,142,183,220,168,217,208,208,32,151,83,110,13,245,102,113,58,157,231,206,157,171,172,172,204,201,201,177,217,108,124,21,132,122,120,76,74,
74,74,83,83,83,8,203,217,217,217,233,114,185,210,211,211,67,30,238,178,109,219,182,193,193,65,174,194,45,22,75,105,105,105,90,90,26,47,188,231,241,208,207,105,134,39,63,7,156,192,241,65,224,224,193,131,
242,8,153,156,156,124,228,200,17,222,116,157,157,157,92,247,123,230,92,255,175,244,243,235,100,103,103,243,233,174,230,119,180,88,44,197,197,197,45,45,45,252,39,167,211,217,216,216,88,93,93,237,121,144,
153,11,165,42,95,98,76,68,199,143,31,15,228,197,242,20,118,66,131,131,131,6,131,97,202,199,185,251,170,77,3,111,177,79,73,73,185,123,247,174,122,169,122,123,123,147,147,147,35,101,72,62,87,141,50,227,
166,167,167,247,244,244,112,84,44,89,178,196,229,114,169,207,20,185,82,201,200,200,152,146,78,1,174,126,188,230,227,136,222,164,94,153,76,38,135,195,49,181,177,150,147,147,211,208,208,32,203,253,47,191,
252,114,202,143,44,178,69,161,176,176,208,102,179,201,82,123,221,186,117,118,187,93,158,123,212,214,214,238,220,185,179,180,180,180,182,182,214,215,161,144,136,86,175,94,221,209,209,33,159,225,113,237,
252,46,207,243,153,51,103,206,228,231,231,115,77,201,95,161,78,96,237,237,237,185,185,185,234,133,84,55,129,180,182,182,150,149,149,241,161,153,143,233,181,181,181,252,57,78,167,147,107,133,201,31,154,
249,172,213,98,177,112,214,223,191,127,127,121,121,121,128,63,80,65,65,129,38,211,240,78,238,231,235,184,199,227,236,217,179,252,213,21,21,21,207,60,243,140,102,81,229,233,125,103,103,39,239,111,242,248,
118,233,210,37,185,61,39,191,243,248,249,165,34,23,247,254,243,193,205,102,179,173,91,183,46,51,51,51,216,82,149,47,157,92,182,108,153,28,10,98,183,219,3,204,119,155,54,109,154,129,58,53,240,227,109,70,
70,134,250,4,213,179,199,32,49,49,145,187,5,24,159,170,57,157,206,246,246,118,217,180,84,82,82,66,68,158,29,74,1,58,126,252,120,229,40,158,193,96,96,96,32,192,31,69,94,34,204,107,215,219,219,235,191,75,
208,207,105,134,39,95,7,156,64,154,81,101,3,153,195,225,224,51,73,254,39,231,92,117,245,220,215,215,199,191,145,38,231,78,248,74,95,191,206,157,59,119,210,210,210,182,108,217,114,231,206,29,245,102,228,
223,250,218,181,107,242,153,174,174,46,63,105,58,34,75,85,245,166,239,232,232,80,55,147,76,216,182,31,233,98,98,98,76,38,147,186,105,54,178,112,206,227,49,0,234,92,200,171,166,121,241,227,199,143,229,
30,63,29,123,17,23,163,145,190,73,103,6,31,89,212,87,191,217,108,182,111,126,243,155,75,150,44,153,170,175,40,46,46,230,97,3,52,126,114,43,78,186,154,57,34,28,14,7,23,109,190,14,133,94,83,181,215,11,251,
216,163,71,143,52,59,91,85,85,149,197,98,81,215,115,190,206,94,120,184,2,191,151,143,233,158,41,100,74,14,205,237,237,237,124,33,142,103,63,146,255,31,200,106,181,106,50,205,132,100,239,191,252,234,244,
244,116,255,231,111,114,188,196,180,238,60,158,191,84,36,210,28,253,200,99,12,64,128,31,82,93,93,221,211,211,211,214,214,198,237,202,220,198,28,72,190,171,168,168,48,24,12,54,155,109,6,234,212,132,132,
4,217,12,225,231,120,203,191,41,31,246,61,155,3,147,147,147,91,90,90,228,240,48,245,156,33,205,205,205,57,57,57,92,186,101,101,101,117,119,119,135,188,82,124,41,24,55,129,45,91,182,140,59,220,243,242,
242,14,30,60,56,225,239,194,141,178,121,121,121,177,177,177,129,76,209,229,235,52,99,66,234,3,78,32,77,93,60,254,138,199,255,168,175,222,139,137,137,81,87,83,254,11,15,63,175,244,243,235,240,49,153,175,
2,42,46,46,118,56,28,220,189,201,11,95,93,93,205,211,152,76,147,112,153,172,106,126,10,173,105,54,124,180,183,183,231,228,228,88,44,22,206,133,231,206,157,227,231,213,23,229,176,5,11,22,80,168,151,230,
204,171,77,234,73,94,107,56,85,124,29,22,3,25,242,24,32,46,79,45,22,203,171,175,190,170,110,94,226,164,171,46,100,213,135,117,95,135,66,175,169,122,112,112,112,209,162,69,19,46,137,209,104,124,237,181,
215,120,95,229,150,15,245,216,211,9,143,233,126,54,224,36,15,205,151,46,93,218,184,113,35,17,157,58,117,42,168,31,40,132,159,41,61,61,189,189,189,93,157,134,53,121,46,240,221,102,6,118,158,136,195,99,
159,202,202,202,184,219,87,10,106,12,192,115,207,61,167,30,45,22,148,187,119,239,118,117,117,21,23,23,15,14,14,78,247,148,222,114,36,73,32,199,91,62,236,171,89,173,214,228,228,100,63,115,51,119,118,118,
218,237,118,158,19,35,57,57,249,227,143,63,158,228,2,171,55,8,143,219,81,247,198,248,113,232,208,161,181,107,215,202,81,251,126,214,212,207,105,198,52,169,173,173,77,72,72,88,179,102,141,28,150,19,84,
53,229,235,149,19,254,58,242,18,49,238,6,175,168,168,104,109,109,229,63,77,235,68,123,20,17,151,85,121,221,155,29,14,135,159,6,246,136,208,221,221,29,72,174,13,103,151,47,95,206,201,201,89,177,98,5,31,
191,228,233,239,237,219,183,115,114,114,212,163,227,151,46,93,74,68,87,175,94,245,218,172,130,77,234,7,95,47,28,96,15,81,224,231,241,94,139,191,169,93,242,222,222,94,238,131,219,178,101,139,250,40,31,
236,161,208,235,78,18,19,19,19,200,2,23,21,21,153,76,166,218,218,218,41,159,94,103,146,135,102,110,182,49,153,76,158,237,163,83,251,3,21,20,20,24,12,6,110,169,82,63,175,190,38,50,12,119,158,8,194,99,159,
52,85,230,142,29,59,242,242,242,2,47,85,253,236,207,19,230,59,190,117,78,98,98,98,126,126,126,224,125,220,33,168,174,174,54,24,12,178,87,196,207,241,182,163,163,163,184,184,120,233,210,165,154,184,11,
164,205,226,252,249,243,107,214,172,121,240,224,129,156,79,102,170,212,213,213,21,22,22,114,31,78,32,17,42,103,185,50,155,205,213,213,213,85,85,85,94,207,4,38,115,154,17,178,67,135,14,189,246,218,107,
27,55,110,228,177,194,220,37,165,206,185,190,248,121,101,224,45,74,189,189,189,93,93,93,201,201,201,139,22,45,226,223,122,186,135,241,140,221,88,85,144,8,231,108,109,50,153,212,123,216,217,179,103,147,
147,147,185,109,159,136,74,74,74,106,106,106,34,235,0,119,252,248,241,152,152,152,154,154,26,185,94,229,229,229,145,181,22,54,155,205,225,112,20,22,22,154,76,166,235,215,175,203,231,235,235,235,237,118,
251,134,13,27,120,213,228,128,69,207,110,148,222,222,94,187,221,158,153,153,201,247,124,227,171,170,195,106,147,10,33,102,55,70,78,158,60,233,114,185,138,138,138,60,255,196,251,127,176,229,62,159,48,200,
43,91,185,85,192,96,48,220,190,125,123,202,23,190,185,185,185,161,161,33,45,45,141,199,98,114,210,93,188,120,113,128,135,66,131,193,176,104,209,162,222,222,94,207,119,45,90,180,40,192,75,48,41,224,206,
56,207,99,58,23,121,158,105,88,179,1,67,110,26,185,116,233,82,176,63,16,47,85,128,233,150,136,120,4,240,238,241,108,54,91,114,114,114,224,31,18,224,178,77,237,153,103,68,224,222,127,217,182,36,93,188,
120,209,100,50,241,77,97,60,243,23,15,226,92,181,106,149,124,166,171,171,203,100,50,241,45,82,141,70,227,150,45,91,212,147,151,5,146,239,106,107,107,185,104,152,142,251,172,22,20,20,212,212,212,228,228,
228,200,65,210,254,143,183,157,157,157,54,155,173,176,176,144,199,155,242,159,170,171,171,57,101,200,11,1,75,74,74,74,75,75,53,223,85,95,95,63,56,56,88,88,88,120,254,252,249,201,44,176,122,252,55,227,
44,35,211,208,224,224,96,32,189,1,189,189,189,54,155,205,229,114,37,36,36,4,123,154,49,125,156,78,231,175,127,253,107,147,201,196,195,148,235,234,234,56,231,202,95,159,127,50,207,219,18,249,121,165,255,
95,135,139,117,185,37,83,83,83,249,92,66,254,214,114,131,243,213,150,158,219,127,50,244,154,172,172,40,74,24,30,14,78,158,60,105,177,88,182,111,223,78,163,147,152,212,215,215,15,12,12,188,240,194,11,60,
228,130,167,135,136,172,99,92,111,111,239,135,31,126,88,90,90,202,235,197,171,214,214,214,22,89,107,193,163,178,212,35,225,216,71,31,125,180,126,253,122,94,53,255,243,155,214,214,214,86,85,85,241,28,73,
54,155,141,175,70,156,207,155,212,243,144,196,109,147,53,53,53,154,153,146,92,46,151,186,220,111,108,108,116,58,157,154,114,223,233,116,218,237,246,101,203,150,105,142,188,133,133,133,125,125,125,124,
17,247,75,47,189,100,183,219,167,105,158,132,186,186,186,212,212,212,226,226,226,91,183,110,217,108,182,179,103,207,150,149,149,169,103,81,169,170,170,138,137,137,169,173,173,229,123,98,201,153,98,228,
161,144,83,117,89,89,153,156,16,145,211,161,103,215,185,175,214,157,231,159,127,94,78,209,21,96,239,63,47,121,102,102,230,75,47,189,244,248,241,99,158,1,96,253,250,245,60,217,28,111,64,26,29,180,192,23,
8,203,121,232,2,223,93,189,54,210,248,255,129,26,27,27,243,242,242,170,170,170,184,21,167,188,188,92,115,149,24,143,112,144,77,215,41,41,41,234,222,127,38,251,67,130,109,129,243,191,108,254,119,197,64,
154,36,114,115,115,131,26,226,57,235,52,99,159,52,59,30,55,53,121,230,175,230,230,230,165,75,151,202,49,3,123,246,236,169,171,171,139,141,141,229,107,128,120,10,82,117,97,20,96,190,59,112,224,64,77,77,
77,69,69,5,141,159,149,41,52,234,17,141,124,89,146,102,70,54,255,199,219,218,218,218,242,242,242,53,107,214,240,58,242,74,17,209,103,159,125,182,97,195,6,254,100,121,64,208,124,53,95,216,55,153,35,82,
115,115,51,215,205,173,173,173,252,57,86,171,117,237,218,181,131,131,131,199,142,29,147,201,43,55,55,151,219,23,121,6,61,249,118,126,177,188,211,123,73,73,137,193,96,224,230,152,214,214,86,190,149,128,
220,194,60,250,130,167,26,224,41,174,204,102,115,104,167,199,193,54,21,45,93,186,180,184,184,152,15,167,251,246,237,227,158,40,30,93,202,63,153,122,54,43,201,207,43,253,252,58,183,111,223,206,202,202,
82,95,92,116,232,208,33,245,111,157,153,153,41,115,183,205,102,11,246,102,64,254,91,130,68,81,225,104,107,141,66,110,197,173,40,10,87,171,227,106,86,133,154,47,52,19,209,75,47,189,20,21,21,165,211,233,
8,96,238,114,187,221,195,195,195,95,126,249,37,17,189,184,250,197,177,88,80,72,33,197,51,70,52,193,66,52,18,47,107,215,174,21,66,76,73,188,88,173,214,130,130,2,217,194,199,19,137,203,66,135,187,203,229,
109,38,30,60,120,160,158,204,210,106,181,110,216,176,129,27,105,252,207,171,74,222,110,196,26,212,44,220,252,98,77,23,63,15,24,141,137,137,225,235,38,213,243,170,18,81,79,79,15,167,19,245,93,16,249,80,
248,217,103,159,201,81,37,19,206,171,42,199,24,104,86,161,164,164,100,205,154,53,124,255,136,166,166,38,158,209,144,231,160,241,156,7,212,115,101,229,12,166,228,49,175,106,102,102,166,108,250,178,217,
108,205,205,205,254,187,192,252,108,73,30,69,167,30,84,224,103,94,85,245,15,106,179,217,6,7,7,213,147,116,170,75,85,158,55,199,235,55,238,216,177,195,225,112,240,228,3,154,175,126,253,245,215,77,38,147,
28,205,166,153,111,210,255,178,249,223,21,253,255,82,60,237,151,156,112,55,168,89,171,220,110,247,208,208,16,159,189,168,147,154,66,10,255,85,198,233,12,68,43,76,6,151,245,65,221,11,218,23,205,220,168,
45,45,45,154,155,81,111,217,178,69,222,42,136,39,102,226,239,229,153,233,212,55,178,62,123,246,172,44,157,229,33,133,70,231,85,149,35,224,185,34,95,185,114,37,141,78,187,230,117,94,85,63,7,156,121,146,
97,101,180,142,101,88,95,37,168,226,183,84,213,188,20,165,42,204,219,82,117,44,22,102,175,84,5,128,16,146,31,71,45,74,213,8,194,247,14,80,207,196,4,40,85,189,132,165,122,112,30,0,0,192,220,132,92,23,102,
140,70,99,110,110,238,100,230,168,130,57,73,143,120,6,152,226,228,167,96,43,0,132,81,48,170,47,195,8,219,75,50,128,136,156,78,231,124,158,191,114,158,134,105,0,33,137,206,14,128,9,162,136,38,234,106,64,
71,4,64,24,134,45,0,204,13,186,160,162,221,233,116,170,7,179,2,204,61,188,135,163,251,9,96,126,84,181,216,4,0,225,30,137,193,181,170,94,189,122,21,117,42,204,135,106,85,125,183,130,177,115,54,49,193,185,
28,146,31,64,248,166,194,209,128,245,26,185,72,109,0,179,21,149,19,118,131,232,252,71,178,16,130,31,23,172,44,32,162,254,254,126,52,172,194,220,46,82,185,73,181,191,191,159,136,74,94,40,25,255,231,137,
179,32,146,31,64,68,36,63,13,164,54,128,25,75,178,15,31,62,12,48,141,122,41,85,253,68,190,252,136,182,182,54,183,219,141,120,134,185,26,69,110,183,123,170,238,26,128,228,7,48,187,201,47,144,164,38,83,
27,66,21,96,102,2,86,125,95,146,64,206,42,117,190,170,90,207,55,23,174,42,36,52,172,194,92,79,120,178,73,117,77,209,154,160,222,142,228,7,16,118,201,79,76,16,179,132,62,67,128,153,77,178,14,135,131,79,
44,181,253,150,129,151,170,129,104,109,109,69,72,195,92,173,83,61,111,231,173,222,207,39,220,237,145,252,0,194,40,249,77,20,121,232,51,4,152,201,104,245,211,111,233,39,244,130,152,1,64,8,177,250,185,213,
68,228,112,56,90,91,91,31,62,124,136,28,12,115,41,219,61,124,248,176,181,181,149,111,63,93,250,98,169,103,8,41,30,121,207,107,207,5,146,31,64,152,36,191,64,2,150,84,125,134,200,107,0,211,154,103,57,202,
40,200,126,75,93,32,103,156,234,212,203,213,106,127,127,63,170,85,152,123,117,42,119,253,115,157,170,221,177,131,220,205,145,252,0,194,36,249,5,30,125,109,109,109,8,88,128,105,58,165,124,240,224,129,122,
118,157,113,225,233,55,224,162,82,158,78,9,240,188,83,122,122,201,211,55,111,223,28,28,28,116,58,157,38,147,41,58,58,58,192,55,2,132,97,158,147,253,254,158,117,170,124,1,17,41,164,120,77,96,126,118,251,
91,119,110,17,17,135,137,193,96,64,140,0,76,83,242,115,185,92,68,148,154,146,234,89,155,106,98,214,115,76,57,63,195,121,205,229,114,61,124,248,48,62,62,30,121,13,96,106,243,44,135,42,159,85,122,237,183,
116,43,238,64,75,213,0,195,50,121,105,50,87,171,15,31,62,228,106,213,255,148,117,0,225,22,60,50,213,113,157,170,238,247,247,82,146,250,61,225,67,242,3,8,207,228,167,248,8,93,207,14,67,26,109,133,225,128,
53,26,141,6,131,1,121,13,96,74,242,236,131,7,15,218,219,219,101,168,122,38,89,110,12,242,153,100,139,10,139,198,94,72,10,5,124,225,136,16,226,116,243,105,126,38,33,33,33,51,51,211,104,52,122,230,108,128,
176,77,117,78,167,179,173,173,141,27,83,213,169,206,237,118,171,211,33,135,70,200,125,130,103,191,62,75,68,38,147,41,35,35,195,100,50,233,116,186,208,230,125,4,128,64,146,223,100,34,87,8,113,166,229,12,
63,150,49,139,188,6,16,114,158,237,239,239,151,231,147,52,190,61,104,92,191,165,162,168,175,235,24,139,89,101,18,165,234,72,174,37,209,216,220,40,159,79,72,72,200,200,200,48,26,141,248,133,32,204,57,157,
206,171,87,175,202,34,85,93,167,122,13,161,201,140,93,67,242,3,152,173,228,23,108,157,42,132,208,228,181,248,248,248,140,140,140,184,184,56,156,94,2,4,21,167,78,167,179,163,163,67,61,225,177,38,84,199,
10,78,133,220,138,91,253,164,234,179,38,87,170,10,158,176,78,16,17,53,54,53,226,183,129,8,165,238,55,212,182,167,18,113,8,81,168,183,158,66,242,3,152,173,228,23,66,147,234,72,106,67,94,3,152,158,60,235,
171,247,67,38,223,41,46,85,137,72,134,52,255,243,55,103,127,131,223,3,34,180,72,245,222,18,51,185,174,127,36,63,128,89,76,126,193,70,174,38,90,145,215,0,166,35,207,142,59,165,244,120,114,42,75,213,145,
168,30,31,210,190,70,160,163,221,8,194,132,231,174,232,25,30,83,88,167,34,249,1,204,122,242,155,100,180,34,175,1,76,95,158,213,132,234,84,150,170,228,187,97,85,189,136,136,100,136,20,94,206,231,166,162,
78,69,242,3,152,245,228,23,236,183,248,9,88,4,41,192,20,230,89,95,141,169,158,165,170,126,50,95,57,18,180,10,145,32,69,81,132,16,234,231,49,133,50,132,109,218,211,78,147,225,173,72,157,170,125,88,81,20,
18,36,20,161,14,19,117,140,200,228,135,144,1,240,147,113,130,74,126,161,125,203,72,96,146,162,9,88,228,53,128,89,204,179,250,201,30,62,248,244,115,180,90,245,186,124,56,25,133,240,76,123,94,231,197,152,
146,198,84,36,63,128,8,61,201,148,49,139,188,6,16,38,121,86,63,201,120,230,106,149,104,164,209,72,189,52,154,24,70,62,134,176,141,37,25,60,52,185,86,25,36,63,128,136,62,201,68,94,3,8,195,60,171,159,178,
37,16,68,10,169,103,176,66,12,67,36,132,209,104,248,76,79,145,138,228,7,16,89,39,153,227,110,202,74,35,225,58,18,180,242,175,56,157,4,8,38,201,18,77,170,211,67,63,37,129,61,214,62,36,70,150,72,32,148,
33,220,195,199,247,37,135,211,153,89,145,252,0,194,33,249,5,24,179,56,117,4,8,144,159,46,193,73,198,145,126,250,162,26,253,152,16,214,201,110,198,51,16,146,31,64,248,36,191,48,60,68,0,68,116,168,78,95,
200,232,17,231,0,115,184,62,6,64,242,67,120,2,132,73,248,132,214,136,169,71,96,3,76,95,15,0,98,4,32,60,147,159,255,47,66,228,2,76,71,122,213,76,209,56,189,165,170,215,48,70,108,67,68,7,207,212,214,172,
72,126,0,225,156,252,124,5,166,151,56,69,224,2,4,26,156,222,227,203,51,102,131,10,88,253,36,163,26,9,24,34,145,159,171,239,167,164,90,69,242,3,8,243,228,55,113,156,170,39,194,2,128,64,130,85,17,94,35,
215,51,102,131,10,88,253,84,6,54,18,48,68,84,194,243,26,45,147,172,86,145,252,0,34,34,249,249,12,85,5,17,10,16,106,6,84,5,206,72,228,10,159,233,53,240,128,213,79,54,170,145,128,97,126,39,60,36,63,128,
136,75,126,126,66,85,51,141,29,0,4,157,109,71,239,209,72,170,169,196,39,19,176,1,149,170,72,192,128,132,135,228,7,48,151,146,159,159,80,245,26,203,152,126,17,32,168,152,26,119,83,113,154,212,220,225,250,
32,194,216,199,61,66,144,128,33,130,19,158,42,126,38,95,173,34,249,1,132,127,242,243,146,212,188,197,41,63,62,119,233,28,54,62,64,200,242,87,228,203,27,223,132,156,106,245,161,212,169,227,239,69,137,4,
12,17,156,240,72,144,50,5,213,42,146,31,64,68,36,63,175,73,77,19,170,136,83,128,169,210,114,161,133,136,10,86,20,4,158,67,61,137,162,194,34,26,11,86,237,157,148,189,220,95,71,241,30,213,8,108,136,196,
132,71,124,131,211,241,73,77,147,228,38,172,86,189,39,63,5,201,15,96,26,21,172,40,80,71,110,128,97,235,43,169,169,159,87,199,105,98,98,98,118,118,118,92,92,28,54,56,64,80,156,78,231,149,43,87,250,251,
251,199,98,118,101,129,215,8,213,220,236,67,211,129,63,65,169,26,120,157,138,4,12,145,157,240,136,66,200,121,72,126,0,225,156,252,38,25,170,28,167,70,163,17,35,220,0,66,163,40,138,211,233,108,109,109,
149,49,203,1,235,153,100,131,43,85,253,53,169,142,175,83,61,139,84,36,96,152,123,9,111,194,106,21,201,15,32,60,147,95,32,209,170,105,151,249,250,226,215,68,148,148,148,148,149,149,101,52,26,101,18,197,
168,54,128,16,66,149,31,184,221,110,117,204,22,172,44,152,250,82,53,144,58,21,9,24,230,76,194,243,154,231,130,42,85,145,252,0,194,33,249,77,28,173,227,207,42,213,161,26,23,23,199,159,128,56,5,152,100,
204,114,136,61,124,248,80,6,108,225,170,66,207,80,245,210,238,51,97,169,170,73,183,190,26,138,144,128,97,142,37,188,201,150,170,72,126,0,97,147,252,252,159,85,170,163,85,115,74,137,32,5,152,242,152,245,
12,88,205,213,144,190,74,85,93,96,95,226,175,78,85,247,248,35,188,33,34,8,33,100,213,24,31,31,159,149,149,149,144,144,64,68,205,231,155,131,218,141,189,135,214,40,77,242,211,233,116,242,123,1,96,50,241,
203,209,164,14,222,166,115,77,193,165,33,197,203,164,224,234,83,74,0,152,218,156,27,31,31,159,153,153,25,66,197,168,155,56,13,143,143,103,207,246,84,36,96,152,75,9,143,171,213,80,207,28,145,252,0,34,35,
249,121,158,85,38,38,38,34,84,1,166,47,96,137,200,104,52,106,206,45,67,41,85,181,253,254,154,178,117,116,124,42,122,73,96,238,37,60,207,230,25,36,63,128,57,150,252,252,220,36,60,59,59,27,161,10,48,173,
1,171,211,233,50,50,50,252,132,179,215,156,171,11,234,107,48,154,7,230,91,181,58,169,251,137,35,249,1,204,106,242,11,228,237,154,179,74,4,44,192,116,167,90,147,201,68,68,103,191,62,27,224,27,117,19,100,
95,116,104,194,60,11,161,192,59,19,125,205,119,129,228,7,16,254,201,207,51,175,17,110,18,14,48,35,49,43,207,45,197,168,32,74,85,255,81,138,14,77,152,243,241,67,161,142,164,65,242,3,8,183,228,23,84,158,
226,235,131,145,218,0,102,224,220,82,94,142,175,137,83,95,1,232,165,85,213,207,64,85,66,135,38,204,245,40,154,76,103,34,146,31,64,88,37,63,68,31,64,88,7,47,9,65,19,159,88,234,2,60,16,160,67,19,230,79,
206,155,124,103,34,0,132,73,242,243,147,173,4,33,145,1,204,114,184,6,18,137,193,93,86,133,14,77,152,39,5,107,200,157,137,72,126,0,17,145,252,0,32,140,2,118,242,173,170,18,58,52,97,62,212,169,232,76,4,
152,3,201,111,130,152,69,52,3,68,8,29,54,1,128,223,148,23,104,103,34,146,31,64,184,5,47,54,2,64,4,157,91,134,94,170,34,218,1,33,132,40,0,152,99,201,15,0,34,5,90,85,1,2,205,121,24,0,0,16,121,225,139,176,
5,136,112,122,245,63,188,92,47,37,136,166,232,26,170,242,242,242,212,212,212,228,228,100,254,167,195,225,184,120,241,98,99,99,163,211,233,156,238,149,44,47,47,79,76,76,204,201,201,145,207,180,180,180,
156,57,115,166,183,183,23,123,0,4,92,175,10,190,29,134,16,2,87,22,2,204,153,184,158,3,107,81,83,83,195,185,245,139,47,190,168,175,175,39,162,29,59,118,240,52,38,13,13,13,117,117,117,252,50,163,209,248,
242,203,47,231,231,231,203,44,188,119,239,94,175,175,156,243,118,237,218,197,15,222,127,255,125,84,2,145,84,170,42,52,93,217,215,98,177,84,87,87,155,205,102,245,147,38,147,169,184,184,184,184,184,184,
182,182,214,102,179,77,223,26,230,228,228,20,23,23,107,158,204,207,207,207,207,207,255,248,227,143,59,59,59,177,19,64,32,9,45,240,248,192,104,1,128,121,197,98,177,108,223,190,93,254,51,108,51,203,166,
77,155,100,107,209,76,170,174,174,86,55,21,169,113,185,140,93,8,2,45,85,167,137,209,104,220,188,121,51,159,180,217,237,246,163,71,143,118,118,118,26,141,198,141,27,55,166,165,165,241,78,252,248,241,227,
233,14,236,142,142,142,227,199,143,247,246,246,90,173,214,141,27,55,242,242,172,93,187,118,255,254,253,216,9,32,136,146,117,154,155,84,75,74,74,202,202,202,248,241,238,221,187,189,190,70,182,130,120,210,
180,139,20,20,20,88,173,86,117,146,104,104,104,232,232,232,8,42,220,118,238,220,105,48,24,208,252,0,224,203,138,21,43,212,255,204,205,205,157,245,82,213,179,254,179,90,173,92,167,186,92,174,15,63,252,
80,198,50,42,69,64,169,74,69,69,69,156,86,93,46,215,71,31,125,196,221,253,78,167,243,192,129,3,178,207,66,93,50,90,44,150,21,43,86,168,219,65,123,122,122,186,186,186,212,9,88,51,150,192,110,183,183,181,
181,249,233,185,80,231,239,206,206,206,139,23,47,242,231,207,202,249,37,192,204,216,178,101,11,159,13,170,113,87,70,224,61,125,213,213,213,92,167,2,128,47,121,121,121,154,82,245,240,225,195,225,182,144,
11,22,44,224,7,119,239,222,157,173,115,206,158,158,30,52,15,193,116,149,170,147,233,208,204,204,204,228,7,151,46,93,210,12,75,61,119,238,28,23,139,201,201,201,70,163,209,233,116,90,173,214,173,91,183,
106,62,33,57,57,217,100,50,113,102,53,26,141,219,182,109,211,140,37,48,155,205,102,179,217,87,234,181,217,108,211,58,192,0,96,182,248,169,56,101,157,234,114,185,142,31,63,222,220,220,204,231,120,124,146,
198,255,245,95,173,250,105,187,5,0,41,39,39,71,54,199,240,121,157,193,96,40,40,40,224,160,99,50,244,108,54,219,229,203,151,139,138,138,56,247,217,108,182,218,218,90,126,65,97,97,161,193,96,112,56,28,167,
78,157,146,239,205,201,201,169,174,174,38,34,135,195,113,246,236,217,149,43,87,114,250,179,219,237,95,126,249,165,159,212,166,25,189,170,238,130,79,78,78,230,145,154,60,250,206,115,156,43,167,218,162,
162,34,94,36,121,180,81,95,91,162,126,215,192,192,64,105,105,169,201,100,82,127,66,8,155,81,174,233,193,131,7,75,75,75,121,129,213,27,164,170,170,138,7,218,170,75,94,163,209,248,189,239,125,143,151,83,
142,39,156,112,249,189,178,88,44,207,63,255,188,28,203,235,249,46,245,239,248,224,193,3,249,249,178,219,86,190,49,180,5,128,73,149,170,147,33,203,202,190,190,62,205,159,186,187,187,229,227,212,212,84,
155,205,182,97,195,6,254,103,71,71,199,129,3,7,228,206,33,235,221,245,235,215,243,7,186,92,174,207,63,255,156,119,74,14,242,192,23,41,53,53,149,31,216,237,118,236,1,48,39,115,167,108,79,149,97,34,107,
83,62,212,22,22,22,226,184,9,48,121,203,151,47,151,205,49,22,139,133,11,184,236,236,108,117,169,42,165,167,167,171,7,228,228,228,228,36,36,36,196,196,196,200,68,105,50,153,42,43,43,187,187,187,53,13,159,
38,147,73,14,13,226,196,58,125,99,231,172,86,235,166,77,155,52,221,41,197,197,197,121,121,121,31,124,240,129,230,160,177,122,245,234,169,61,167,141,137,137,81,15,252,85,111,144,75,151,46,113,29,41,155,
183,136,40,43,43,139,23,213,225,112,240,177,46,168,229,247,172,149,53,239,42,44,44,60,116,232,144,102,59,107,134,222,166,165,165,45,90,180,72,126,120,104,11,0,179,89,170,250,161,14,197,164,164,36,62,25,
229,127,38,36,36,148,151,151,95,184,112,161,183,183,183,174,174,78,54,169,202,253,227,171,175,190,82,39,224,192,175,91,44,47,47,151,253,254,231,207,159,199,30,0,115,207,179,207,62,43,79,198,52,237,46,
141,141,141,92,170,26,12,134,172,172,44,175,217,148,241,8,54,175,135,111,0,96,70,163,49,61,61,157,31,95,187,118,173,175,175,143,243,75,90,90,154,172,165,212,28,14,7,95,176,33,219,231,146,147,147,27,26,
26,246,237,219,103,52,26,95,123,237,53,46,251,86,172,88,161,73,106,178,117,198,98,177,200,203,63,138,139,139,3,44,85,107,107,107,47,95,190,44,155,45,253,143,79,221,184,113,35,231,98,217,111,195,109,168,
38,147,233,229,151,95,214,140,109,184,123,247,110,224,163,93,101,131,174,228,181,107,232,200,145,35,205,205,205,234,13,242,252,243,207,31,62,124,184,179,179,211,110,183,115,89,95,84,84,196,111,204,206,
206,230,119,93,188,120,49,132,229,151,191,227,55,191,249,77,126,44,155,186,249,93,6,131,97,227,198,141,154,117,180,219,237,181,181,181,189,189,189,242,8,105,50,153,228,34,133,176,0,16,190,165,170,197,
98,145,143,185,205,85,142,34,229,62,125,126,220,211,211,115,226,196,137,206,206,78,217,26,74,68,87,175,94,13,173,181,73,142,130,237,232,232,8,185,171,2,32,28,240,192,83,245,51,124,229,147,140,44,207,17,
105,78,167,211,225,112,240,209,159,207,15,1,32,100,171,86,173,82,55,233,25,141,70,217,246,41,11,23,77,3,13,23,151,23,46,92,144,193,123,225,194,5,142,205,238,238,110,110,142,73,76,76,212,188,113,112,112,
144,79,59,123,123,123,101,162,76,73,73,153,242,53,42,40,40,144,151,65,203,229,151,163,245,150,45,91,166,121,253,245,235,215,167,118,1,6,7,7,249,20,90,189,65,98,98,98,248,175,109,109,109,92,170,114,61,
96,52,26,229,70,224,205,24,236,242,51,217,52,75,68,199,142,29,227,7,39,78,156,224,17,137,38,147,201,106,181,170,207,10,122,123,123,249,232,106,179,217,158,123,238,57,238,197,90,188,120,113,200,11,0,179,
92,170,202,115,32,207,188,168,14,179,174,174,46,34,170,171,171,139,141,141,85,143,20,225,243,176,77,155,54,189,251,238,187,147,92,18,117,251,80,79,79,143,28,96,0,48,175,200,82,213,51,29,2,64,80,178,178,
178,248,65,123,123,59,87,87,29,29,29,92,184,100,102,102,250,233,238,155,204,133,77,3,3,3,252,96,58,46,121,148,153,218,108,54,107,90,64,73,53,162,47,52,193,94,86,245,224,193,3,205,51,178,95,136,199,0,200,
18,179,163,163,131,55,105,104,203,47,223,229,112,56,100,91,248,221,187,119,229,11,158,126,250,105,95,13,216,131,131,131,252,128,235,233,105,221,128,40,85,167,139,60,7,202,205,205,61,121,242,164,186,67,
100,213,170,85,114,247,149,207,31,62,124,248,240,225,195,60,36,89,206,219,111,48,24,82,83,83,185,156,101,25,25,25,65,133,186,236,109,161,241,3,97,1,34,87,104,83,118,203,129,101,158,105,0,0,2,39,71,166,
210,232,92,221,154,162,68,211,20,7,147,231,116,58,109,54,27,23,6,92,36,240,243,87,174,92,193,198,65,169,26,186,198,198,198,188,188,60,147,201,100,48,24,182,109,219,166,158,87,85,6,249,137,19,39,248,193,
206,157,59,155,154,154,228,16,213,156,156,28,57,56,245,241,227,199,234,19,214,213,171,87,247,245,245,113,135,72,73,73,201,234,213,171,253,12,151,145,151,13,210,60,187,33,7,204,79,189,189,189,28,92,234,
49,54,204,104,52,202,82,213,243,74,71,0,8,156,102,58,85,79,211,52,193,170,108,183,155,142,43,131,229,97,193,110,183,239,219,183,47,12,55,251,229,203,151,185,48,72,77,77,93,180,104,17,17,185,92,46,57,236,
62,180,229,151,239,50,153,76,114,144,49,127,56,187,121,243,166,159,51,22,121,224,141,136,13,136,82,213,251,57,208,193,131,7,249,110,85,102,179,217,115,46,170,218,218,90,25,204,6,131,193,115,248,29,17,
217,108,54,126,205,103,159,125,198,147,85,153,76,166,234,234,234,64,46,248,80,215,169,228,49,188,79,14,160,6,152,51,174,93,187,198,251,188,217,108,206,201,201,81,95,89,85,84,84,196,15,92,46,87,107,107,
43,182,21,64,200,228,116,170,154,22,16,57,85,220,116,76,176,154,147,147,147,155,155,203,143,219,218,218,166,124,165,154,155,155,121,230,41,158,100,224,216,177,99,92,183,241,148,231,169,169,169,179,62,
49,170,205,102,91,183,110,157,201,100,146,173,93,151,46,93,154,228,242,183,182,182,86,84,84,240,88,130,245,235,215,115,85,176,118,237,90,254,171,195,225,240,117,202,81,94,94,46,251,244,175,93,187,22,17,
27,16,165,170,207,54,158,125,251,246,105,230,237,119,56,28,23,47,94,212,76,151,211,208,208,176,120,241,98,245,188,229,29,29,29,87,174,92,145,39,76,78,167,147,63,42,51,51,83,238,31,252,81,190,190,93,14,
199,6,152,39,212,35,253,191,249,205,111,198,198,198,106,230,85,37,162,166,166,38,204,153,2,48,153,146,81,118,80,240,5,61,210,149,43,87,56,250,60,39,88,13,153,201,100,210,12,124,84,95,181,51,181,62,251,
236,51,158,107,73,221,177,201,122,122,122,38,243,201,158,51,0,132,118,99,85,121,97,153,103,169,26,218,242,59,157,206,207,63,255,156,27,191,52,239,114,185,92,159,125,246,153,231,175,175,249,228,150,150,
22,217,40,48,125,27,16,165,234,180,11,36,168,2,12,188,160,102,167,170,173,173,69,187,41,68,34,207,33,249,129,223,218,244,192,129,3,220,180,99,48,24,42,43,43,43,43,43,213,127,13,100,24,140,231,45,0,120,
178,67,220,179,27,128,84,211,169,246,244,244,104,162,178,185,185,89,54,209,249,154,96,53,88,46,151,75,206,42,74,211,60,146,173,179,179,243,221,119,223,45,42,42,226,193,123,234,106,44,76,70,13,169,231,
79,176,219,237,154,38,207,208,150,223,102,179,217,237,118,255,183,0,80,159,39,244,247,247,243,9,9,223,157,65,61,161,80,248,111,192,136,35,138,10,71,58,4,21,69,113,187,221,252,64,254,151,136,72,33,34,106,
190,208,76,68,107,215,174,21,66,232,116,58,108,56,152,195,220,110,247,208,208,208,169,83,167,136,72,6,8,41,164,208,72,104,104,98,100,44,88,38,29,47,37,37,37,234,137,190,189,150,170,178,136,156,48,93,21,
20,20,88,173,86,245,105,125,67,67,67,71,71,71,32,227,231,124,221,173,10,165,42,68,92,204,122,79,109,145,144,221,212,247,112,66,220,205,58,245,221,170,208,4,54,181,209,234,191,4,213,99,171,1,132,143,250,
250,250,9,167,251,13,60,99,53,55,55,55,55,55,135,118,72,69,94,4,0,128,112,128,246,81,0,0,0,0,64,169,10,0,0,0,0,16,12,12,0,0,0,0,8,71,54,155,77,61,217,28,204,174,160,46,233,134,41,132,86,85,0,0,0,0,64,
169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,
64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,
0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,0,74,85,
0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,216,4,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,
0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,
0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,
0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,253,43,47,47,223,181,107,151,213,106,197,79,27,182,10,10,10,118,237,218,85,80,80,128,77,1,0,128,99,41,76,171,170,170,170,93,187,118,25,141,198,200,93,5,253,
44,126,247,235,175,191,110,54,155,229,63,123,122,122,206,157,59,215,220,220,204,21,103,113,113,241,145,35,71,248,159,175,191,254,58,17,237,219,183,47,28,54,153,209,104,124,227,141,55,60,159,111,105,105,
185,116,233,210,214,173,91,91,90,90,14,31,62,60,135,247,123,205,175,163,249,77,13,6,195,222,189,123,113,116,128,41,180,115,231,206,238,238,238,3,7,14,96,83,64,216,226,140,214,211,211,179,127,255,126,205,
243,154,252,85,85,85,149,159,159,191,103,207,30,167,211,25,206,235,34,255,233,114,185,46,93,186,116,230,204,153,222,222,94,252,208,225,240,139,56,28,142,139,23,47,214,213,213,205,147,213,215,207,238,215,
187,92,174,119,222,121,135,235,191,77,155,54,85,86,86,14,12,12,216,108,182,240,223,112,29,29,29,158,137,115,158,180,230,54,54,54,22,22,22,102,103,103,107,74,85,171,213,106,54,155,27,26,26,112,88,153,242,
115,226,252,252,124,205,121,81,128,167,67,124,102,21,254,167,79,37,37,37,89,89,89,201,201,201,68,100,183,219,79,159,62,237,121,34,4,16,182,44,22,139,217,108,118,185,92,139,22,45,50,26,141,97,91,131,134,
144,157,137,168,160,160,96,213,170,85,219,183,111,255,226,139,47,234,235,235,35,101,21,166,227,168,82,80,80,80,89,89,233,181,165,198,43,63,45,59,147,249,69,248,99,137,104,158,84,171,250,48,89,14,167,211,
185,127,255,254,157,59,119,190,244,210,75,54,155,173,174,174,46,18,127,128,206,206,206,221,187,119,207,249,157,198,233,116,222,189,123,55,37,37,69,243,124,90,90,26,23,241,200,91,211,225,227,143,63,238,
236,236,228,99,101,69,69,133,197,98,209,52,222,68,122,45,222,210,210,194,107,100,177,88,42,42,42,172,86,107,109,109,45,126,119,245,89,199,247,190,247,61,131,193,208,208,208,16,158,135,199,96,179,248,92,
178,98,197,10,34,250,234,171,175,202,202,202,86,173,90,21,65,245,92,32,154,155,155,155,155,155,171,171,171,203,202,202,250,250,250,34,162,57,105,110,31,85,234,234,234,242,242,242,10,11,11,81,170,206,2,
135,195,97,50,153,228,33,143,115,179,108,247,222,181,107,23,159,27,113,79,10,159,231,241,9,147,203,229,106,106,106,146,191,217,194,133,11,139,139,139,185,114,234,233,233,57,116,232,208,204,156,227,114,
11,150,76,36,91,182,108,73,73,73,57,126,252,184,92,78,155,205,166,142,19,14,30,94,78,205,42,132,185,214,214,214,228,228,228,146,146,18,245,17,57,47,47,207,110,183,115,57,101,52,26,215,175,95,159,147,147,
227,127,213,172,86,235,214,173,91,213,169,87,115,14,202,61,191,253,253,253,185,185,185,6,131,193,229,114,125,245,213,87,55,111,222,92,187,118,45,111,82,205,239,27,185,155,52,168,180,97,181,90,115,114,
114,172,86,43,111,237,136,102,177,88,242,243,243,59,58,58,100,187,111,111,111,239,129,3,7,10,10,10,202,203,203,231,79,15,215,132,86,173,90,197,33,144,153,153,137,205,18,110,242,242,242,122,122,122,234,
235,235,87,175,94,157,149,149,37,15,140,158,249,235,198,141,27,220,73,34,7,146,241,72,0,206,122,252,140,231,177,203,79,190,83,135,210,230,205,155,93,46,215,71,31,125,52,29,41,175,182,182,54,61,61,189,
168,168,72,150,170,254,143,183,229,229,229,121,121,121,156,211,237,118,251,249,243,231,121,179,212,212,212,240,138,240,1,252,196,137,19,124,28,219,177,99,135,203,229,82,143,148,8,249,228,39,124,142,42,
211,215,238,230,114,185,98,98,98,60,171,115,126,172,41,54,188,214,241,94,95,233,235,215,33,162,146,146,146,213,171,87,243,15,170,249,185,213,191,117,79,79,207,225,195,135,167,118,172,136,62,252,15,1,251,
246,237,243,28,235,195,123,176,60,97,42,41,41,121,230,153,103,228,95,95,120,225,133,211,167,79,31,56,112,128,67,119,227,198,141,179,53,202,205,96,48,172,90,181,138,127,54,94,230,7,15,30,240,175,107,52,
26,55,111,222,236,112,56,248,56,85,82,82,82,86,86,54,48,48,16,17,167,227,245,245,245,107,214,172,81,31,145,115,114,114,76,38,147,236,253,223,182,109,27,17,189,255,254,251,188,226,21,21,21,137,137,137,
161,157,206,166,165,165,217,108,54,238,248,216,178,101,75,89,89,153,195,225,56,123,246,236,254,253,251,53,191,111,68,111,210,160,12,14,14,122,166,40,62,76,240,161,231,216,177,99,78,167,83,142,171,206,
207,207,231,3,147,28,9,48,221,71,150,192,197,197,197,17,81,127,127,191,103,69,174,121,70,189,204,154,142,72,95,135,87,121,46,148,152,152,200,39,78,118,187,253,232,209,163,234,18,63,240,227,251,236,202,
202,202,226,1,106,197,197,197,22,139,5,163,6,195,135,213,106,53,153,76,23,47,94,36,162,246,246,246,252,252,124,249,3,121,205,95,28,146,154,177,170,171,86,173,146,123,53,31,187,104,180,123,215,127,190,
147,13,37,213,213,213,211,87,167,178,238,238,238,180,180,52,30,225,224,255,120,91,85,85,149,155,155,251,213,87,95,241,63,203,203,203,147,146,146,248,65,127,127,63,183,47,240,192,191,141,27,55,242,229,
13,188,111,171,207,192,179,179,179,29,14,71,8,141,244,129,28,85,52,35,224,249,88,33,143,144,70,163,113,227,198,141,92,133,203,163,202,194,133,11,249,116,162,178,178,146,31,112,25,237,231,52,67,221,238,
38,15,71,177,177,177,124,204,113,56,28,159,125,246,89,104,45,14,6,131,225,238,221,187,234,99,160,201,100,146,95,180,113,227,198,234,234,106,175,71,51,63,175,244,243,235,20,20,20,148,149,149,201,93,180,
188,188,60,53,53,85,221,192,196,127,226,119,85,87,87,79,237,197,69,97,84,170,26,141,70,147,201,212,221,221,29,200,139,75,75,75,57,191,202,202,73,157,183,100,42,234,237,237,237,238,238,78,79,79,159,242,
165,77,75,75,227,179,100,230,117,232,42,239,181,178,151,182,185,185,185,180,180,84,254,186,235,215,175,143,137,137,249,224,131,15,248,176,82,95,95,159,149,149,181,122,245,234,72,169,171,186,187,187,83,
82,82,228,168,172,103,159,125,150,136,46,92,184,192,71,82,179,217,252,241,199,31,243,193,186,185,185,57,41,41,169,184,184,248,212,169,83,33,228,215,142,142,14,25,111,87,174,92,73,75,75,59,117,234,20,31,
113,122,123,123,213,67,17,34,125,147,6,46,33,33,193,229,114,201,3,92,105,105,169,28,98,207,135,30,46,223,157,78,231,158,61,123,60,199,170,206,192,145,37,112,157,157,157,46,151,43,61,61,189,160,160,192,
79,78,74,75,75,27,28,28,228,131,102,85,85,85,89,89,217,205,155,55,121,11,248,57,188,178,194,194,194,166,166,38,30,156,83,83,83,179,113,227,70,185,147,4,126,124,159,245,182,231,228,228,228,134,134,134,
11,23,46,20,23,23,175,88,177,66,221,84,19,108,231,131,213,106,149,127,210,140,225,227,190,32,57,36,142,63,220,225,112,240,238,33,59,61,178,179,179,53,221,86,50,91,107,178,248,124,40,85,121,83,240,209,
239,218,181,107,249,249,249,154,31,40,16,234,241,60,245,245,245,43,87,174,148,201,194,127,190,227,236,201,173,3,211,90,167,202,226,111,209,162,69,78,167,211,207,241,150,27,53,27,26,26,228,114,202,173,
161,222,44,78,167,243,220,185,115,149,149,149,57,57,57,54,155,141,175,130,200,205,205,149,71,182,148,148,148,166,166,166,233,59,170,248,177,109,219,182,193,193,65,174,194,45,22,75,105,105,105,90,90,26,
47,188,103,67,175,159,211,12,79,158,135,163,16,46,68,174,169,169,137,137,137,57,120,240,160,108,239,76,78,78,62,114,228,8,111,186,206,206,78,174,251,61,115,174,255,87,250,249,117,178,179,179,93,46,151,
231,15,106,177,88,138,139,139,91,90,90,248,79,78,167,179,177,177,177,186,186,90,211,233,58,71,74,85,139,197,82,85,85,69,68,199,143,31,15,228,197,242,20,54,144,246,39,131,193,48,229,227,220,125,213,166,
129,183,216,167,164,164,220,189,123,87,189,84,189,189,189,201,201,201,145,50,36,159,171,70,57,42,43,61,61,189,167,167,135,163,98,201,146,37,234,66,138,136,110,221,186,69,68,25,25,25,83,210,20,196,103,
231,158,34,125,147,6,168,188,188,60,45,45,237,139,47,190,144,207,168,75,171,206,206,206,246,246,246,220,220,92,63,225,51,3,71,150,160,28,63,126,188,114,20,95,107,60,48,48,160,57,208,171,207,88,206,156,
57,147,159,159,159,150,150,198,251,152,159,195,43,63,169,110,228,56,113,226,196,214,173,91,121,191,13,252,248,62,235,120,40,100,71,71,71,111,111,175,221,110,207,203,203,211,108,159,192,59,31,44,22,203,
166,77,155,238,222,189,203,201,178,188,188,188,178,178,50,54,54,54,240,95,223,107,183,21,103,238,249,57,86,149,123,255,121,159,177,217,108,235,214,173,11,97,144,134,197,98,121,254,249,231,151,45,91,38,
47,244,182,219,237,1,230,187,77,155,54,205,64,157,26,248,241,54,35,35,67,30,246,189,30,193,100,47,7,139,141,141,229,224,109,111,111,151,77,75,37,37,37,68,212,216,216,56,125,71,21,63,205,228,124,137,48,
175,93,111,111,175,255,211,87,63,167,25,158,212,135,163,214,214,214,178,178,50,245,193,202,127,51,170,108,32,115,56,28,239,190,251,174,220,248,156,115,213,113,215,215,215,199,191,145,230,80,54,225,43,
125,253,58,119,238,220,73,75,75,219,178,101,203,157,59,119,212,155,145,127,235,107,215,174,201,103,186,186,186,252,164,233,136,44,85,213,155,190,163,163,227,195,15,63,12,36,67,112,219,126,164,139,137,
137,49,153,76,234,166,217,200,210,220,220,92,81,81,193,99,0,184,247,255,236,217,179,114,213,52,47,126,252,248,177,220,227,167,99,47,226,98,52,210,55,169,127,91,183,110,85,215,166,154,67,91,85,85,21,55,
188,169,27,90,188,230,173,153,57,178,4,187,47,53,55,55,243,201,234,178,101,203,184,107,44,47,47,239,224,193,131,94,15,8,143,30,61,210,236,78,190,14,175,190,154,91,150,44,89,18,212,241,125,214,165,166,
166,58,28,14,46,169,219,218,218,52,253,164,20,76,231,67,105,105,233,224,224,160,76,174,117,117,117,169,169,169,65,117,62,204,64,183,85,4,209,28,253,200,99,12,64,128,31,82,93,93,221,211,211,211,214,214,
198,13,216,60,108,32,144,124,87,81,81,97,48,24,108,54,219,12,212,169,234,254,28,63,199,91,142,62,62,236,123,54,7,38,39,39,183,180,180,200,225,97,178,235,156,15,5,57,57,57,92,186,101,101,101,117,119,119,
135,188,82,193,30,85,60,143,18,121,121,121,177,177,177,129,76,209,229,235,52,99,66,3,3,3,129,103,70,57,3,64,117,117,117,78,78,142,250,234,189,152,152,24,117,53,229,191,240,240,243,74,63,191,14,151,167,
124,21,80,113,113,177,195,225,224,35,12,47,124,117,117,117,117,117,245,244,237,120,225,50,89,213,252,20,90,211,108,248,104,111,111,207,201,201,177,88,44,203,151,47,119,185,92,231,206,157,227,231,53,35,
41,137,104,193,130,5,50,44,177,73,67,195,157,212,220,187,180,124,249,114,89,170,26,141,198,215,94,123,141,127,14,174,63,60,39,183,242,204,34,211,125,100,9,129,231,16,133,210,210,210,64,250,226,253,39,
63,95,199,235,160,142,239,179,75,246,254,243,63,121,12,128,186,159,212,43,255,157,15,234,103,186,186,186,66,30,255,58,77,221,86,17,132,199,62,149,149,149,113,183,175,20,212,24,128,231,158,123,78,61,90,
44,40,119,239,222,229,95,112,112,112,112,186,231,164,75,73,73,81,15,210,243,127,188,229,195,190,154,213,106,229,61,217,215,150,233,236,236,180,219,237,203,151,47,183,219,237,201,201,201,31,127,252,241,
108,29,85,14,29,58,180,118,237,90,57,202,223,207,154,250,57,205,152,38,181,181,181,9,9,9,107,214,172,145,131,160,130,170,166,124,189,114,194,95,71,94,34,198,221,224,21,21,21,173,173,173,234,244,52,103,
75,213,208,116,118,118,58,28,14,63,13,236,17,161,187,187,123,209,162,69,17,189,10,151,47,95,206,201,201,89,177,98,5,31,191,100,174,186,125,251,182,230,250,244,165,75,151,18,209,213,171,87,189,54,143,97,
147,6,174,190,190,62,41,41,41,63,63,95,94,159,87,84,84,100,50,153,60,219,89,3,41,124,195,118,53,235,234,234,10,11,11,45,22,203,132,175,156,240,240,234,149,188,222,34,34,206,150,185,247,159,135,66,18,17,
143,1,8,182,45,83,221,249,224,245,5,115,163,183,106,230,241,216,39,77,149,185,99,199,14,207,65,26,254,207,157,60,207,240,3,204,119,124,235,156,196,196,196,252,252,252,192,251,184,67,80,93,93,205,115,165,
77,120,188,237,232,232,40,46,46,94,186,116,169,230,160,20,72,155,197,249,243,231,215,172,89,243,224,193,3,57,159,204,204,31,85,120,179,203,89,174,204,102,115,117,117,117,85,85,149,215,51,129,201,156,102,
132,236,208,161,67,175,189,246,154,28,118,207,189,243,129,204,9,227,231,149,129,183,40,245,246,246,118,117,117,37,39,39,47,90,180,136,127,107,57,28,107,154,140,221,88,85,144,8,219,99,193,141,27,55,76,
38,147,122,15,59,123,246,108,114,114,50,183,237,19,81,73,73,73,77,77,77,100,29,224,142,31,63,30,19,19,83,83,83,35,215,171,188,188,60,178,214,194,102,179,57,28,142,194,194,66,147,201,116,253,250,117,117,
57,101,183,219,55,108,216,192,171,86,80,80,80,88,88,104,179,217,60,219,108,56,233,102,102,102,242,61,223,248,18,239,176,218,164,66,136,112,139,145,195,135,15,247,244,244,20,23,23,171,251,187,3,236,111,
162,209,137,111,229,149,173,179,142,167,143,209,60,201,251,67,32,141,124,193,54,216,23,20,20,24,12,6,30,69,119,231,206,29,131,193,16,254,119,238,200,204,204,36,162,237,219,183,239,26,101,54,155,77,38,
147,122,7,8,156,175,146,104,106,207,27,231,9,238,253,151,109,75,210,197,139,23,77,38,19,239,90,158,249,139,119,191,85,171,86,201,103,186,186,186,76,38,19,223,34,213,104,52,110,217,178,69,125,107,162,64,
242,93,109,109,45,23,13,211,113,159,213,130,130,130,154,154,154,156,156,28,57,176,219,255,241,182,179,179,211,102,179,21,22,22,242,120,83,254,83,117,117,53,167,140,172,172,44,185,34,165,165,165,158,103,
227,131,131,131,133,133,133,231,207,159,159,214,163,202,224,224,160,175,211,54,77,146,178,217,108,46,151,43,33,33,33,216,211,140,233,227,116,58,127,253,235,95,155,76,38,30,166,92,87,87,199,57,87,254,250,
252,147,121,30,220,252,188,210,255,175,195,197,186,220,146,169,169,169,124,46,33,127,107,185,193,45,22,75,117,117,181,231,246,159,12,189,38,43,43,138,18,134,135,131,147,39,79,90,44,150,237,219,183,211,
232,188,170,245,245,245,3,3,3,47,188,240,2,119,222,241,244,16,145,117,140,235,237,237,253,240,195,15,75,75,75,121,189,120,213,218,218,218,34,107,45,120,84,150,250,194,64,246,209,71,31,173,95,191,158,87,
205,255,252,166,181,181,181,85,85,85,60,167,146,205,102,227,235,90,230,243,38,13,252,148,122,221,186,117,93,93,93,156,159,158,127,254,121,57,11,149,186,247,223,233,116,218,237,246,101,203,150,169,91,11,
248,200,66,163,195,143,248,250,86,217,76,59,195,154,155,155,57,195,181,182,182,242,94,196,215,167,15,14,14,30,59,118,44,144,243,165,117,235,214,201,121,211,120,230,63,205,107,100,139,148,213,106,229,139,
169,121,16,103,93,93,93,102,102,230,134,13,27,228,37,240,60,123,165,122,42,193,89,39,175,240,80,255,58,124,60,84,143,3,9,28,207,221,161,217,62,14,135,131,83,248,204,39,221,136,166,25,251,164,105,86,228,
166,38,207,252,213,220,220,188,116,233,82,57,102,96,207,158,61,117,117,117,177,177,177,124,13,16,79,65,170,46,140,2,204,119,7,14,28,168,169,169,169,168,168,32,111,115,189,5,75,61,54,134,47,75,210,76,105,
231,255,120,91,91,91,91,94,94,190,102,205,26,94,71,94,41,34,250,236,179,207,54,108,216,192,159,108,179,217,206,158,61,171,25,56,65,68,14,135,131,215,122,90,143,42,124,249,41,183,47,114,224,171,131,110,
237,218,181,242,78,239,37,37,37,6,131,129,155,99,90,91,91,249,86,2,114,11,243,232,11,158,106,128,167,184,50,155,205,129,183,29,76,166,169,104,233,210,165,197,197,197,60,105,201,190,125,251,184,83,158,
135,63,241,79,166,25,234,195,252,188,210,207,175,115,251,246,237,172,172,44,245,197,69,135,14,29,82,255,214,153,153,153,50,119,219,108,182,96,111,6,228,191,37,72,20,21,22,141,60,84,200,173,184,21,69,225,
106,117,92,205,170,80,243,133,102,34,90,187,118,173,16,66,167,211,225,8,5,115,152,219,237,30,26,26,58,117,234,20,17,189,184,250,197,177,88,80,72,33,197,51,70,52,193,66,52,197,241,194,99,79,53,93,246,60,
64,138,51,95,73,73,201,154,53,107,120,150,162,166,166,38,158,180,79,206,218,104,181,90,55,108,216,192,141,52,234,121,85,51,51,51,101,203,141,205,102,107,110,110,158,197,250,76,51,139,97,75,75,203,201,
147,39,229,144,18,205,12,136,154,187,197,170,87,208,102,179,221,190,125,187,172,172,140,175,67,231,137,12,123,122,122,76,38,19,79,200,234,57,115,42,79,0,105,48,24,228,81,91,253,213,179,142,7,216,241,48,
92,245,243,60,205,22,79,115,163,217,62,60,90,87,93,221,110,217,178,37,45,45,77,206,188,243,234,171,175,222,189,123,151,187,44,213,51,151,105,222,43,39,120,151,55,94,225,23,171,119,69,245,237,236,249,126,
90,237,237,237,51,63,219,151,58,102,213,73,77,33,133,255,42,227,116,186,163,21,38,137,203,250,41,185,23,180,255,163,138,140,11,34,234,233,233,225,153,67,248,123,141,70,227,203,47,191,44,207,249,121,50,
13,89,58,203,227,45,141,206,200,38,47,15,224,138,124,229,202,149,52,58,147,174,215,121,85,53,179,174,206,183,73,51,188,103,88,95,37,168,226,183,84,213,188,20,193,12,243,54,144,198,98,97,150,74,85,152,
76,147,164,38,55,68,28,207,91,248,168,75,88,30,163,28,84,169,74,126,231,85,37,213,237,197,249,79,21,21,21,154,121,85,125,149,170,94,179,248,236,38,63,142,90,148,170,17,132,79,29,213,51,49,1,74,85,47,165,
170,151,144,70,169,10,40,85,81,170,162,84,133,72,75,126,19,148,170,200,110,97,134,27,230,213,231,93,128,82,149,2,157,1,64,96,219,2,80,160,193,162,96,43,0,132,81,48,170,47,195,8,219,75,50,128,136,156,78,
231,124,158,191,114,158,134,105,0,33,25,220,100,85,138,162,168,47,136,6,152,39,81,228,63,150,144,252,194,86,103,103,39,223,147,9,144,252,0,32,66,233,252,71,187,231,25,143,122,48,43,192,220,195,123,248,
195,135,15,177,41,0,230,65,85,139,77,0,16,238,145,24,220,184,156,182,182,54,212,169,48,31,170,213,246,246,118,47,231,108,98,130,115,57,36,63,128,240,77,133,163,1,235,53,114,145,218,0,102,43,42,39,236,
174,215,249,143,100,33,4,63,46,88,89,64,68,253,253,253,104,88,133,185,93,164,42,138,226,112,56,184,85,181,228,133,146,241,127,158,56,11,34,249,1,68,68,242,211,64,106,3,152,177,36,235,181,223,210,79,204,
234,2,140,124,249,17,109,109,109,110,183,27,241,12,115,53,138,220,110,247,84,221,53,0,201,15,96,118,147,95,32,73,77,166,54,132,42,192,204,4,172,247,126,75,223,116,190,170,90,207,55,23,174,42,36,162,254,
254,254,135,15,31,34,1,195,92,77,120,188,135,19,209,154,162,53,65,189,29,201,15,32,236,146,159,152,32,102,9,125,134,0,51,155,100,125,246,91,6,94,170,6,162,173,173,13,213,42,204,189,16,114,187,221,15,30,
60,184,122,245,170,231,159,52,145,134,228,7,16,25,201,111,162,200,67,159,33,192,12,231,89,95,253,150,126,66,47,136,25,0,132,16,171,159,91,77,68,14,135,163,181,181,213,225,112,32,7,195,220,171,83,57,225,
149,190,88,234,25,66,138,71,222,243,218,115,129,228,7,16,38,201,47,144,128,37,244,25,2,204,212,89,101,104,253,150,186,64,206,56,213,169,23,213,42,204,147,58,213,243,174,54,65,65,242,3,8,147,228,23,120,
244,161,207,16,96,186,243,172,247,240,244,27,112,81,41,79,167,4,120,222,41,61,189,228,233,155,183,111,186,92,174,135,15,31,198,199,199,71,71,71,7,248,70,128,48,204,115,138,162,248,170,83,229,11,136,198,
221,82,53,192,120,185,117,231,22,17,57,157,78,147,201,196,119,69,71,140,0,76,71,242,115,185,92,68,148,154,146,234,89,155,106,98,214,115,76,57,63,131,188,6,48,195,121,86,19,164,110,197,29,104,169,26,96,
88,38,47,77,150,81,109,52,26,13,6,131,255,41,235,0,194,45,120,212,169,174,189,189,93,83,167,6,213,164,138,228,7,16,158,201,79,241,17,186,158,29,134,52,190,21,6,121,13,96,250,242,172,103,146,229,198,32,
159,73,182,168,176,104,236,133,164,80,192,23,142,8,33,78,55,159,230,103,76,38,83,70,70,134,201,100,242,204,217,0,97,155,234,250,251,251,101,158,83,167,58,183,219,173,78,135,28,26,33,247,9,158,253,250,
172,58,70,116,58,93,104,243,62,2,64,32,201,111,50,145,43,132,56,211,114,6,121,13,96,90,243,172,50,158,12,106,25,170,99,49,171,76,162,84,29,201,181,36,26,155,27,229,243,241,241,241,25,25,25,113,113,113,
72,195,16,230,193,227,116,58,59,58,58,212,19,49,202,58,213,107,8,77,102,236,26,146,31,192,108,37,191,96,235,84,33,4,242,26,192,180,230,89,207,32,37,133,220,138,91,253,164,234,179,38,87,170,10,158,176,
78,16,17,53,54,53,226,183,129,8,165,238,55,212,182,167,18,113,8,81,168,183,158,66,242,3,152,173,228,23,66,147,234,72,106,67,94,3,152,158,60,235,171,247,67,38,223,41,46,85,137,72,134,52,255,243,55,103,
127,131,223,3,34,180,72,245,222,18,51,185,174,127,36,63,128,89,76,126,193,70,174,38,90,145,215,0,166,35,207,142,59,165,244,120,114,42,75,213,145,168,30,31,210,190,70,160,163,221,8,194,132,231,174,232,
25,30,83,88,167,34,249,1,204,122,242,155,100,180,34,175,1,76,95,158,213,132,234,84,150,170,228,187,97,85,189,136,136,100,136,20,94,206,231,166,162,78,69,242,3,152,245,228,23,236,183,248,9,88,4,41,192,
20,230,89,95,141,169,158,165,170,126,50,95,57,18,180,10,145,32,69,81,132,16,234,231,49,133,50,132,109,218,211,78,147,225,173,72,157,170,125,88,81,20,18,36,20,161,14,19,117,140,200,228,135,144,1,240,147,
113,130,74,126,161,125,203,72,96,146,162,9,88,228,53,128,89,204,179,250,201,30,62,248,244,115,180,90,245,186,124,56,25,133,240,76,123,94,231,197,152,146,198,84,36,63,128,8,61,201,148,49,139,188,6,16,38,
121,86,63,201,120,230,106,149,104,164,209,72,189,52,154,24,70,62,134,176,141,37,25,60,52,185,86,25,36,63,128,136,62,201,68,94,3,8,195,60,171,159,178,37,16,68,10,169,103,176,66,12,67,36,132,209,104,248,
76,79,145,58,46,173,146,34,132,144,97,226,235,62,58,8,28,0,95,167,112,94,162,99,170,79,50,199,221,148,149,70,106,213,145,212,38,255,138,211,73,128,96,146,44,209,164,58,61,244,83,18,216,99,237,67,98,100,
137,4,66,25,194,61,124,124,95,114,56,109,103,150,218,65,222,227,211,48,0,4,82,65,250,138,172,105,57,195,196,169,35,64,48,231,147,65,197,239,204,149,170,190,162,26,217,23,34,49,243,205,202,87,35,29,2,224,
16,1,16,209,117,234,244,133,140,30,113,14,128,40,0,136,196,212,136,104,5,136,172,100,23,90,216,234,17,216,0,211,209,3,224,53,58,16,50,0,83,21,170,154,104,154,76,20,163,163,3,96,102,210,171,102,138,198,
233,45,85,145,134,97,238,5,207,20,214,172,94,167,212,1,128,41,140,44,207,40,14,45,126,39,142,86,132,47,64,160,201,213,123,124,77,50,90,245,147,140,106,164,97,136,232,132,55,85,217,46,208,180,167,158,90,
7,0,2,202,125,194,107,34,244,76,129,193,198,47,162,21,96,138,163,85,153,150,104,13,174,84,197,217,39,204,165,179,61,175,209,50,153,106,213,103,128,40,72,120,0,161,158,254,169,2,103,36,17,10,159,1,27,120,
252,34,90,1,34,37,90,3,45,85,113,246,9,56,219,11,57,243,105,38,198,2,128,160,227,87,140,205,70,44,103,230,15,57,255,33,90,1,34,37,90,3,45,85,113,246,9,56,219,11,177,108,85,205,79,238,249,2,76,232,6,16,
84,76,141,187,77,49,77,205,84,252,136,86,128,48,143,86,125,16,97,236,227,6,89,56,251,132,8,62,219,83,197,207,100,170,85,47,97,226,45,237,241,227,115,151,206,225,135,0,8,89,254,138,124,121,31,169,16,130,
23,209,10,16,41,209,58,146,184,139,10,139,60,79,40,189,78,233,239,181,49,21,103,159,16,185,5,43,209,184,91,1,107,254,228,245,159,129,159,206,105,110,162,131,180,7,48,181,10,86,20,132,16,185,136,86,128,
48,140,86,63,173,162,65,148,170,126,186,72,228,3,4,54,68,220,217,222,72,181,42,200,79,146,11,124,220,155,38,76,212,207,171,163,35,49,49,49,59,59,59,46,46,14,63,1,64,80,156,78,231,149,43,87,250,251,251,
199,82,224,202,2,175,161,58,97,169,138,104,5,8,159,104,13,189,84,13,188,78,69,145,10,145,125,182,71,161,55,172,6,149,249,56,237,25,141,70,140,153,1,8,141,162,40,78,167,179,181,181,85,166,64,206,127,129,
132,45,162,21,32,60,163,53,184,82,213,95,147,234,248,58,213,179,72,197,217,39,204,189,179,189,9,171,85,95,241,34,255,249,245,197,175,137,40,41,41,41,43,43,203,104,52,202,176,196,56,25,128,16,50,31,63,
112,187,221,234,20,88,176,178,32,180,82,21,209,10,16,14,209,234,191,84,141,74,121,58,37,160,47,243,91,167,38,38,38,62,247,220,115,207,60,243,76,116,116,52,126,30,8,127,6,131,97,233,210,165,139,22,45,114,
58,157,131,131,131,68,116,235,206,173,165,139,151,250,202,115,65,36,42,133,124,101,190,184,184,56,254,28,33,4,50,31,64,8,212,177,99,48,24,76,38,19,135,240,173,59,183,158,94,242,116,208,1,139,104,5,8,143,
104,245,31,101,62,91,85,53,231,154,190,122,73,112,246,9,115,236,108,47,168,82,213,127,127,162,166,133,6,161,1,48,181,81,172,40,202,195,135,15,101,252,22,174,42,68,180,2,68,104,180,122,189,160,159,207,
39,117,1,158,122,250,169,83,213,61,254,8,111,136,172,179,61,33,68,124,124,124,86,86,86,66,66,2,17,53,159,111,158,212,110,172,120,153,102,88,221,66,3,0,83,27,197,241,241,241,153,153,153,161,228,32,68,43,
64,132,68,171,206,127,21,236,25,207,158,237,169,58,157,14,93,36,16,161,193,195,123,175,103,181,58,121,220,72,147,152,152,136,204,7,48,125,33,76,68,70,163,145,131,183,233,92,19,162,21,96,238,69,171,206,
107,121,234,121,193,163,102,70,42,244,146,192,220,59,219,147,213,170,38,132,66,191,73,35,81,118,118,54,98,4,96,186,79,56,51,50,50,2,124,61,162,21,32,60,163,117,108,190,115,143,48,212,5,245,53,24,205,3,
243,173,90,13,240,158,55,154,79,211,52,210,32,82,0,166,59,120,77,38,19,17,157,253,250,108,176,111,71,180,2,132,121,180,234,38,72,195,24,205,3,243,44,132,66,28,247,230,77,86,86,22,225,182,195,0,51,18,191,
178,169,70,168,32,90,1,34,34,90,131,40,85,253,71,41,70,243,192,156,143,31,154,138,113,111,18,95,113,136,96,1,152,129,243,76,121,129,175,58,243,5,30,125,136,86,128,217,141,86,63,1,232,165,85,213,207,64,
85,194,104,30,152,235,81,20,212,184,55,0,8,187,40,38,33,72,168,103,249,192,54,1,136,136,104,245,37,160,177,170,24,205,3,243,234,132,47,228,113,111,28,120,216,140,0,179,155,253,2,140,68,68,43,64,68,68,
107,112,151,85,97,52,15,204,147,130,117,146,227,222,0,96,214,243,31,161,73,21,32,82,170,213,201,183,170,74,24,205,3,243,161,78,13,125,220,27,34,3,32,140,50,160,64,180,2,204,1,58,108,2,0,255,217,14,227,
222,0,34,49,116,1,96,110,68,171,46,128,79,64,196,195,124,15,33,68,1,64,164,70,48,78,47,1,34,28,90,85,1,2,61,225,67,206,3,0,0,152,97,122,245,63,188,92,47,37,136,166,232,26,170,242,242,242,212,212,212,228,
228,100,254,167,195,225,184,120,241,98,99,99,163,211,233,156,214,53,180,88,44,43,86,172,80,127,53,17,217,108,182,206,206,206,230,230,102,236,1,16,112,189,42,248,118,24,66,8,255,87,22,162,9,22,32,130,226,
122,14,172,69,77,77,13,39,184,47,190,248,162,190,190,158,136,118,236,216,193,211,152,52,52,52,212,213,213,241,203,140,70,227,203,47,191,156,159,159,47,179,240,222,189,123,189,190,18,32,76,75,85,133,166,
235,186,126,139,197,82,93,93,109,54,155,213,79,154,76,166,226,226,226,226,226,226,218,218,90,155,205,54,125,107,88,90,90,154,147,147,163,121,50,39,39,39,39,39,39,41,41,9,145,9,1,38,52,154,145,121,47,74,
74,74,202,202,202,248,241,238,221,187,189,190,70,166,22,79,154,100,83,80,80,96,181,90,213,251,127,67,67,67,71,71,71,103,103,103,32,231,150,137,137,137,234,247,182,180,180,156,57,115,166,183,183,23,187,
3,128,38,199,109,223,190,93,254,243,227,143,63,14,36,196,102,222,166,77,155,212,77,54,0,145,87,170,78,19,163,209,184,121,243,102,206,172,118,187,253,232,209,163,157,157,157,70,163,113,227,198,141,105,
105,105,68,84,93,93,253,248,241,227,233,14,236,150,150,150,147,39,79,58,157,78,117,221,92,88,88,136,82,21,130,43,89,39,106,82,13,31,91,182,108,225,16,83,227,243,195,9,155,79,114,114,114,138,139,139,53,
79,230,231,231,231,231,231,135,109,26,6,152,45,43,86,172,80,255,51,55,55,119,214,99,100,239,222,189,154,103,172,86,43,215,169,46,151,235,195,15,63,148,231,156,158,175,4,152,119,165,106,81,81,17,215,169,
46,151,235,163,143,62,226,238,126,167,211,121,224,192,1,217,103,177,118,237,218,253,251,247,203,211,211,21,43,86,168,211,100,79,79,79,87,87,151,58,179,106,198,18,216,237,246,182,182,54,95,169,119,112,
112,80,221,112,219,219,219,123,254,252,121,217,112,5,16,185,252,84,156,178,78,117,185,92,199,143,31,231,177,46,229,229,229,28,89,252,223,9,207,211,58,58,58,142,31,63,222,219,219,107,181,90,55,110,220,
200,129,172,142,86,0,32,162,188,188,60,77,169,122,248,240,225,112,91,200,5,11,22,240,131,187,119,239,162,111,4,230,96,169,58,153,209,60,153,153,153,252,224,210,165,75,154,97,169,231,206,157,227,114,51,
57,57,217,104,52,58,157,78,171,213,186,117,235,86,205,39,36,39,39,155,76,38,78,171,70,163,113,219,182,109,154,177,4,102,179,217,108,54,251,202,187,154,67,134,197,98,89,185,114,165,92,36,236,1,48,247,228,
228,228,200,246,212,207,63,255,92,158,167,113,140,112,157,90,88,88,232,127,164,184,186,14,238,236,236,188,120,241,34,191,17,29,136,0,154,112,147,205,49,6,131,129,136,12,6,67,65,65,129,250,90,8,121,150,
104,179,217,46,95,190,92,84,84,196,113,100,179,217,106,107,107,249,5,133,133,133,6,131,193,225,112,156,58,117,74,190,55,39,39,167,186,186,154,136,28,14,199,217,179,103,87,174,92,201,233,207,110,183,127,
249,229,151,126,198,206,105,70,175,86,87,87,203,193,60,201,201,201,187,118,237,34,34,110,196,241,28,231,202,169,182,168,168,136,23,73,30,16,212,71,12,245,187,6,6,6,74,75,75,77,38,147,250,19,0,102,186,
84,157,12,89,86,246,245,245,105,254,212,221,221,45,31,167,166,166,218,108,182,13,27,54,240,63,59,58,58,14,28,56,32,131,92,214,187,235,215,175,231,15,116,185,92,50,7,115,144,79,184,36,28,156,204,229,114,
53,53,53,161,247,31,230,164,103,159,125,150,31,216,237,118,77,50,107,108,108,228,148,105,48,24,178,178,178,124,93,89,104,179,217,166,117,4,57,192,156,177,124,249,114,217,246,97,177,88,184,128,203,206,
206,246,26,92,233,233,233,234,241,223,57,57,57,9,9,9,49,49,49,50,81,154,76,166,202,202,202,238,238,110,77,195,167,201,100,82,119,6,154,205,230,233,27,59,103,181,90,55,109,218,36,139,84,86,92,92,156,151,
151,247,193,7,31,104,206,111,87,175,94,237,107,232,60,64,196,148,170,126,168,67,49,41,41,137,211,39,255,51,33,33,161,188,188,252,194,133,11,189,189,189,117,117,117,178,73,85,6,249,87,95,125,165,110,43,
10,182,232,52,24,12,153,153,153,1,94,95,2,16,158,120,224,169,250,153,247,223,127,191,183,183,215,98,177,120,134,24,115,58,157,14,135,131,83,11,7,93,128,82,83,83,101,249,139,45,15,192,140,70,99,122,122,
58,63,190,118,237,90,95,95,31,151,170,105,105,105,220,85,168,121,189,195,225,224,11,54,100,59,107,114,114,114,67,67,195,190,125,251,140,70,227,107,175,189,198,177,185,98,197,10,77,82,147,173,51,22,139,
69,94,254,81,92,92,28,96,10,171,173,173,189,124,249,178,108,160,245,63,62,117,227,198,141,156,139,101,215,10,183,161,154,76,166,151,95,126,89,211,81,121,247,238,93,140,118,133,233,54,155,243,170,202,132,
74,163,109,174,23,47,94,148,167,140,197,197,197,219,183,111,223,181,107,87,77,77,141,213,106,85,39,75,34,186,122,245,106,176,95,183,123,84,71,71,7,127,197,166,77,155,140,70,35,118,2,152,87,28,14,7,63,
72,76,76,12,240,45,229,229,229,178,223,255,252,249,243,216,134,0,108,213,170,85,92,213,57,28,14,155,205,118,238,220,57,249,167,162,162,34,207,215,247,246,246,114,113,121,225,194,5,249,36,63,118,58,157,
178,167,209,51,54,7,7,7,185,117,166,183,183,87,38,202,148,148,148,41,95,163,130,130,2,121,25,180,44,151,229,122,45,91,182,76,243,250,235,215,175,99,55,128,233,54,237,173,170,118,187,157,187,54,60,155,
112,212,97,214,213,213,69,68,117,117,117,177,177,177,114,214,55,150,156,156,188,105,211,166,119,223,125,119,170,22,233,248,241,227,60,146,207,96,48,240,192,3,236,7,16,137,66,155,7,81,246,214,61,120,240,
32,144,215,171,103,3,232,232,232,192,88,52,0,41,43,43,139,31,180,183,183,115,185,217,209,209,193,249,37,51,51,211,79,120,78,230,194,166,129,129,1,126,160,233,163,159,18,50,83,155,205,102,245,168,57,249,
36,126,116,152,131,165,106,91,91,27,239,220,185,185,185,60,93,148,250,124,148,31,244,244,244,200,231,15,31,62,124,248,240,97,30,211,45,167,117,228,154,146,203,89,150,145,145,17,96,168,191,254,250,235,
114,230,1,22,23,23,135,31,30,230,176,222,222,94,110,4,85,119,92,48,163,209,40,75,85,207,225,227,94,235,84,238,52,228,56,149,35,200,1,64,142,76,165,209,169,220,52,85,157,213,106,197,24,51,128,8,40,85,27,
27,27,243,242,242,76,38,147,193,96,216,182,109,155,122,94,85,25,228,39,78,156,224,7,59,119,238,108,106,106,146,67,84,121,162,126,254,211,227,199,143,213,39,172,171,87,175,238,235,235,227,6,209,146,146,
146,213,171,87,251,26,46,99,54,155,191,247,189,239,201,139,168,44,22,139,188,120,203,229,114,161,73,21,230,158,107,215,174,113,214,52,155,205,57,57,57,234,157,92,118,74,186,92,174,214,214,86,255,159,35,
135,211,209,248,43,29,1,128,60,166,83,245,52,77,19,172,202,134,207,233,24,56,46,207,96,237,118,251,190,125,251,240,43,195,188,40,85,157,78,231,193,131,7,121,214,125,179,217,236,57,23,85,109,109,173,12,
102,131,193,224,121,165,8,141,222,7,149,136,62,251,236,51,158,172,202,100,50,85,87,87,203,246,30,255,124,125,236,231,159,127,142,61,0,230,30,155,205,246,220,115,207,241,73,221,55,191,249,205,216,216,88,
205,188,170,68,212,212,212,228,255,158,198,85,85,85,178,149,8,119,92,4,240,36,167,83,213,4,136,156,213,120,58,38,88,205,201,201,201,205,205,229,199,109,109,109,83,190,82,205,205,205,60,243,20,79,50,112,
236,216,49,62,80,200,91,148,99,90,101,152,131,165,42,17,245,246,246,238,219,183,79,51,111,191,195,225,184,120,241,162,102,102,199,134,134,134,197,139,23,171,111,177,211,209,209,113,229,202,21,57,235,135,
211,233,228,143,202,204,204,148,131,102,248,163,124,125,251,23,95,124,17,27,27,171,174,83,121,166,42,110,187,197,30,0,97,203,115,160,24,95,224,31,200,123,15,28,56,192,249,210,96,48,84,86,86,86,86,86,170,
255,58,97,233,169,174,83,201,99,170,1,57,25,36,192,188,37,167,83,165,241,215,72,17,209,149,43,87,228,229,16,154,9,86,67,102,50,153,52,7,4,245,101,79,83,235,179,207,62,227,201,170,212,29,155,172,167,167,
7,63,61,204,205,82,149,5,18,84,1,6,94,80,179,83,241,85,32,104,19,130,249,230,192,129,3,5,5,5,86,171,85,157,108,26,26,26,2,153,163,45,38,38,6,27,16,192,15,57,157,106,79,79,143,230,4,178,185,185,185,162,
162,130,175,121,242,53,193,106,176,92,46,215,165,75,151,102,166,163,163,179,179,243,221,119,223,45,42,42,226,193,123,242,249,150,150,150,64,6,184,3,76,57,81,84,56,50,118,77,81,20,183,219,205,15,228,127,
137,136,20,34,162,230,11,205,68,180,118,237,90,33,132,78,167,195,134,131,57,204,237,118,15,13,13,157,58,117,138,136,100,128,144,66,10,141,132,134,38,70,198,130,5,241,2,16,126,49,235,61,181,69,66,180,170,
239,86,133,233,75,97,14,71,171,255,18,20,73,20,0,0,0,0,194,20,74,85,0,0,0,0,64,169,10,0,0,0,0,16,12,61,54,1,0,0,64,24,178,217,108,152,252,27,0,173,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,84,
5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,
84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,
84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,128,82,21,0,0,0,0,0,165,42,0,0,0,0,160,
84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,177,9,0,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,0,
0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,2,0,
0,0,0,74,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,0,0,0,0,74,85,0,0,0,0,64,169,10,0,0,0,0,128,82,21,0,0,0,0,80,170,2,0,0,0,0,160,84,5,0,0,0,0,64,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,250,
87,94,94,190,107,215,46,171,213,138,159,54,108,21,20,20,236,218,181,171,160,160,0,155,2,2,183,115,231,206,45,91,182,96,59,64,164,51,26,141,187,118,237,170,170,170,194,166,0,8,144,126,22,191,251,245,215,
95,55,155,205,242,159,61,61,61,231,206,157,107,110,110,230,138,179,184,184,248,200,145,35,252,207,215,95,127,157,136,246,237,219,23,38,7,154,55,222,120,195,243,249,150,150,150,75,151,46,109,221,186,181,
165,165,229,240,225,195,115,120,167,209,252,58,154,223,212,96,48,236,221,187,23,161,53,133,170,170,170,242,243,243,53,59,91,128,251,24,239,174,17,177,79,150,148,148,100,101,101,37,39,39,19,145,221,110,
63,125,250,180,231,14,6,16,14,118,236,216,225,114,185,60,83,82,65,65,65,101,101,229,23,95,124,81,95,95,143,173,4,48,23,74,85,34,114,185,92,239,188,243,14,39,212,77,155,54,85,86,86,14,12,12,216,108,182,
240,223,112,29,29,29,7,14,28,208,60,57,79,90,115,27,27,27,11,11,11,179,179,179,53,149,132,213,106,53,155,205,13,13,13,136,171,233,240,241,199,31,119,118,118,114,58,172,168,168,176,88,44,251,247,239,159,
99,229,120,75,75,11,175,148,197,98,169,168,168,176,90,173,181,181,181,248,233,229,89,199,247,190,247,61,131,193,208,208,208,80,87,87,23,134,75,200,133,154,215,147,216,57,166,189,189,61,63,63,223,106,181,
114,72,74,217,217,217,46,151,11,117,42,192,212,10,151,1,0,78,167,115,255,254,253,46,151,235,165,151,94,34,162,186,186,186,221,187,119,71,220,241,174,179,179,115,247,238,221,115,187,73,149,127,172,187,
119,239,166,164,164,104,158,79,75,75,227,34,30,113,53,173,154,155,155,219,219,219,147,147,147,231,204,169,145,197,98,201,207,207,239,232,232,144,177,211,219,219,123,224,192,129,206,206,206,242,242,114,
252,226,108,213,170,85,6,131,193,229,114,101,102,102,98,107,204,174,107,215,174,201,35,158,90,74,74,74,119,119,55,182,15,192,212,210,135,213,210,56,28,14,147,201,36,207,206,185,25,73,142,19,216,181,107,
23,17,217,237,118,238,118,41,40,40,88,181,106,21,119,23,186,92,174,166,166,38,217,210,176,112,225,194,226,226,98,62,142,244,244,244,28,58,116,200,233,116,206,76,179,199,27,111,188,33,219,60,182,108,217,
146,146,146,114,252,248,113,185,156,54,155,77,221,74,196,77,71,188,156,154,85,8,115,173,173,173,201,201,201,37,37,37,234,246,131,188,188,60,187,221,206,205,12,70,163,113,253,250,245,57,57,57,254,87,205,
106,181,110,221,186,85,221,74,164,25,93,176,115,231,206,238,238,238,254,254,254,220,220,92,206,211,95,125,245,213,205,155,55,215,174,93,203,155,84,243,251,70,238,38,13,202,224,224,160,166,212,219,188,
121,51,199,14,239,102,199,142,29,115,58,157,114,176,74,126,126,62,15,33,144,35,1,202,203,203,243,242,242,248,45,61,61,61,135,15,31,238,237,237,157,173,213,137,139,139,35,162,254,254,126,207,162,92,243,
140,122,177,53,221,172,53,53,53,188,75,240,26,157,56,113,130,119,69,185,143,37,38,38,242,14,105,183,219,143,30,61,170,110,15,83,15,177,208,4,105,248,200,202,202,114,56,28,23,47,94,44,46,46,182,88,44,179,
248,123,129,205,102,91,183,110,93,94,94,158,250,240,82,82,82,98,48,24,174,92,185,34,255,185,114,229,74,78,94,126,66,140,211,4,247,46,178,157,59,119,58,28,14,78,115,252,215,166,166,166,204,204,76,254,168,
150,150,150,147,39,79,202,163,171,195,225,248,236,179,207,212,59,115,88,133,54,192,28,44,85,189,218,183,111,159,231,88,85,174,101,101,119,97,73,73,201,51,207,60,35,255,250,194,11,47,156,62,125,250,192,
129,3,156,194,55,110,220,232,217,89,63,51,12,6,195,170,85,171,248,96,193,203,252,224,193,3,62,186,25,141,198,205,155,55,59,28,142,61,123,246,56,157,206,146,146,146,178,178,178,129,129,129,136,232,60,170,
175,175,95,179,102,77,86,86,150,92,218,156,156,28,147,201,36,123,255,183,109,219,70,68,239,191,255,62,175,120,69,69,69,98,98,98,104,21,64,90,90,154,205,102,227,67,249,150,45,91,202,202,202,28,14,199,217,
179,103,247,239,223,175,249,125,35,122,147,6,37,33,33,193,229,114,201,252,84,90,90,122,241,226,69,222,175,172,86,235,198,141,27,121,155,56,157,206,61,123,246,120,142,85,229,243,1,46,245,120,236,77,117,
117,245,44,142,5,239,236,236,116,185,92,233,233,233,5,5,5,126,250,82,210,210,210,6,7,7,121,36,116,85,85,85,89,89,217,205,155,55,121,35,148,151,151,247,247,247,243,73,11,175,209,198,141,27,213,99,166,11,
11,11,155,154,154,118,239,222,205,69,237,198,141,27,63,248,224,3,62,195,169,169,169,49,153,76,124,98,204,91,175,186,186,58,220,170,85,139,197,146,156,156,220,208,208,112,225,194,133,226,226,226,21,43,
86,168,139,164,96,207,232,172,86,171,252,147,102,88,176,255,202,73,158,73,102,103,103,107,218,2,248,248,70,68,149,149,149,252,96,110,143,4,224,115,134,156,156,28,57,98,141,207,37,120,149,249,224,211,208,
208,192,219,173,166,166,230,213,87,95,253,240,195,15,67,168,26,13,6,67,106,106,106,109,109,109,111,111,47,111,255,252,252,252,134,134,6,245,206,44,119,245,112,11,109,128,41,17,70,51,0,24,141,70,147,201,
20,96,239,73,105,105,41,159,47,202,202,73,93,140,30,61,122,148,143,23,189,189,189,221,221,221,158,93,213,147,151,150,150,182,75,197,215,181,201,46,151,107,255,254,253,124,120,106,110,110,118,56,28,169,
169,169,252,167,245,235,215,199,196,196,200,252,81,95,95,223,211,211,179,122,245,234,72,217,117,186,187,187,23,45,90,100,52,26,249,159,207,62,251,44,17,93,184,112,129,15,211,102,179,249,232,209,163,114,
197,155,154,154,114,114,114,44,22,75,8,95,212,209,209,33,235,6,110,177,56,117,234,20,87,159,189,189,189,234,161,8,145,190,73,3,84,94,94,158,150,150,246,213,87,95,201,103,106,107,107,101,225,210,217,217,
217,222,222,238,103,159,183,88,44,197,197,197,45,45,45,188,13,157,78,103,99,99,163,217,108,46,41,41,153,197,149,58,126,252,184,201,100,170,172,172,220,181,107,215,206,157,59,171,170,170,60,187,254,213,
123,194,153,51,103,72,213,3,91,87,87,87,91,91,203,191,187,211,233,60,119,238,156,201,100,226,102,39,166,110,95,63,113,226,132,201,100,90,181,106,21,239,171,201,201,201,167,78,157,226,146,183,179,179,243,
226,197,139,33,239,171,211,103,197,138,21,188,5,122,123,123,237,118,123,94,94,158,231,17,41,38,38,230,157,119,222,217,189,123,119,119,119,119,89,89,217,198,141,27,91,91,91,119,239,222,253,254,251,239,
155,76,166,141,27,55,202,29,96,211,166,77,68,180,123,247,238,221,187,119,183,181,181,85,86,86,6,245,235,191,240,194,11,87,174,92,209,124,114,115,115,243,145,35,71,184,66,229,79,158,219,35,86,121,164,19,
31,247,56,127,45,90,180,72,230,175,213,171,87,119,116,116,200,93,142,155,84,74,75,75,67,248,34,117,18,105,108,108,36,162,150,150,22,249,201,93,93,93,38,147,137,199,2,133,103,104,3,76,94,184,180,170,90,
44,22,158,188,227,248,241,227,129,188,216,100,50,93,188,120,49,144,79,30,28,28,52,24,12,70,163,113,106,199,0,120,189,172,42,144,131,78,76,76,12,63,78,73,73,185,123,247,174,122,169,122,123,123,147,147,
147,167,124,81,167,201,149,43,87,210,210,210,86,173,90,197,135,197,244,244,244,158,158,30,62,158,46,89,178,68,221,230,71,68,183,110,221,34,162,140,140,140,41,233,138,74,74,74,242,250,124,164,111,82,255,
182,110,221,170,174,77,53,87,31,86,85,85,113,195,155,250,220,207,235,90,103,100,100,208,232,96,59,153,237,252,108,213,153,209,220,220,220,220,220,204,7,129,101,203,150,113,119,124,94,94,222,193,131,7,
189,238,51,143,30,61,34,162,216,216,88,117,5,47,187,248,153,250,175,106,220,136,187,100,201,18,185,175,170,139,170,190,190,62,222,151,194,170,219,52,53,53,213,225,112,112,76,181,181,181,21,23,23,107,174,
233,209,156,209,165,165,165,157,58,117,74,158,177,171,207,232,74,75,75,7,7,7,229,53,121,117,117,117,169,169,169,171,87,175,14,188,243,65,14,159,224,182,128,244,244,244,121,152,59,59,59,59,237,118,187,
92,119,30,73,124,249,242,101,95,25,202,235,248,254,208,36,36,36,104,158,89,176,96,65,216,134,54,64,196,151,170,6,131,129,71,160,242,161,54,192,254,17,30,217,22,233,98,98,98,76,38,147,92,253,136,211,220,
220,92,81,81,193,99,0,184,247,255,236,217,179,114,213,52,47,126,252,248,177,159,210,97,242,123,17,151,101,145,190,73,253,227,30,106,238,88,92,190,124,185,44,85,141,70,227,107,175,189,70,68,237,237,237,
92,127,120,78,110,165,198,191,66,117,117,117,117,117,117,184,173,163,231,40,133,210,210,210,64,250,226,121,160,106,75,75,139,28,115,194,125,208,254,3,144,255,171,62,10,133,39,217,251,207,255,228,49,0,
185,185,185,154,203,207,131,58,163,83,63,211,213,213,21,242,248,215,105,106,11,136,8,124,206,192,99,0,184,247,159,163,210,107,134,26,28,28,92,180,104,209,52,45,9,7,117,56,135,54,64,4,151,170,114,178,170,
249,41,180,166,217,240,209,222,222,206,93,165,203,151,47,119,185,92,231,206,157,147,7,101,175,39,253,3,3,3,216,164,147,84,95,95,159,148,148,148,159,159,47,7,61,23,21,21,153,76,38,207,118,214,64,10,223,
112,94,211,186,186,186,194,194,194,64,58,226,173,86,43,87,114,65,93,66,39,175,226,10,255,163,16,247,254,243,232,26,34,226,49,0,193,182,101,170,207,232,230,112,19,192,76,226,115,134,229,203,151,219,237,
118,62,83,226,231,185,201,223,243,212,200,243,192,56,125,231,180,248,117,96,46,137,200,187,85,117,118,118,170,7,125,70,40,30,235,25,209,171,192,189,93,43,86,172,224,41,90,100,179,202,237,219,183,13,6,
131,122,42,165,165,75,151,18,209,213,171,87,53,159,224,245,152,62,159,55,105,32,14,31,62,220,211,211,195,205,57,242,73,187,221,30,120,53,79,222,230,217,153,69,5,5,5,158,35,83,121,24,116,32,237,124,193,
158,8,21,20,20,24,12,6,30,148,114,231,206,29,205,190,26,134,120,118,170,237,219,183,203,193,241,102,179,89,51,24,55,112,190,10,166,169,13,198,249,160,183,183,183,167,167,39,37,37,133,207,37,46,93,186,
36,159,119,56,28,139,23,47,86,191,88,61,146,53,144,159,35,180,19,245,112,11,109,128,41,46,85,5,137,176,93,202,27,55,110,152,76,38,117,251,202,217,179,103,147,147,147,229,189,233,74,74,74,106,106,106,34,
107,211,31,63,126,60,38,38,166,166,166,70,174,87,121,121,121,100,173,133,205,102,115,56,28,133,133,133,38,147,233,250,245,235,242,249,250,250,122,187,221,190,97,195,6,94,181,130,130,130,194,194,66,155,
205,230,89,118,112,251,80,102,102,38,215,37,60,205,74,88,109,82,33,68,24,198,200,161,67,135,28,14,199,186,117,235,140,70,35,231,167,231,159,127,94,174,178,186,247,223,233,116,218,237,246,101,203,150,169,
207,244,108,54,91,97,97,161,172,14,45,22,75,117,117,245,44,206,96,202,67,42,107,106,106,228,245,31,86,171,117,211,166,77,131,131,131,199,142,29,11,112,63,204,202,202,146,71,3,207,235,87,228,153,173,213,
106,229,139,50,249,75,235,234,234,120,95,149,119,250,45,40,40,168,169,169,9,159,226,85,222,89,99,183,202,251,239,191,79,68,203,151,47,159,146,51,58,30,8,203,225,57,51,45,127,115,6,95,213,84,88,88,40,71,
18,203,12,149,150,150,38,99,138,143,66,167,78,157,242,218,242,98,48,24,248,149,22,139,101,203,150,45,6,131,33,228,70,156,112,11,109,128,41,161,215,100,101,69,81,194,112,41,79,158,60,105,177,88,182,111,
223,78,163,243,170,214,215,215,15,12,12,188,240,194,11,60,200,140,103,208,140,184,51,242,15,63,252,176,180,180,148,215,139,87,173,173,173,45,178,214,130,239,218,226,121,131,150,143,62,250,104,253,250,
245,188,106,254,231,55,173,173,173,173,170,170,226,233,63,109,54,27,79,1,51,159,55,105,32,156,78,231,175,127,253,235,234,234,234,109,219,182,237,219,183,239,139,47,190,88,179,102,13,255,16,77,77,77,45,
45,45,234,106,245,232,209,163,27,54,108,224,72,225,89,171,106,107,107,203,203,203,51,51,51,229,166,182,217,108,179,123,239,134,186,186,58,163,209,184,113,227,198,178,178,50,126,166,165,165,37,240,25,145,
63,251,236,51,185,142,54,155,237,236,217,179,242,115,164,29,59,118,240,100,147,154,153,83,247,237,219,87,85,85,85,81,81,193,195,91,93,46,215,165,75,151,52,163,57,103,17,55,146,201,222,127,185,171,115,
123,94,8,31,120,234,212,169,87,95,125,181,166,166,134,71,54,151,151,151,39,39,39,127,241,197,23,178,220,201,201,201,41,47,47,175,171,171,227,89,138,3,175,156,90,91,91,249,30,99,243,231,142,184,124,235,
62,131,193,160,73,64,124,60,92,185,114,37,135,88,79,79,143,175,43,49,154,155,155,147,146,146,138,139,139,139,139,139,121,226,176,201,92,125,21,134,161,13,16,80,171,144,223,150,32,81,84,88,52,242,80,33,
183,226,86,20,133,171,213,113,53,171,66,205,23,154,137,104,237,218,181,66,8,157,78,135,205,10,115,152,219,237,30,26,26,226,38,144,23,87,191,56,22,11,10,41,164,120,198,136,38,88,136,16,47,97,196,243,54,
19,145,197,215,237,230,249,178,51,30,163,204,243,170,202,81,218,124,85,153,122,149,183,108,217,146,150,150,198,243,13,147,223,121,85,229,39,203,63,85,84,84,104,230,85,85,143,134,228,107,248,228,39,151,
148,148,172,89,179,134,171,219,153,156,87,213,123,204,142,252,71,113,187,221,50,78,17,173,0,225,152,97,125,149,160,138,223,82,85,243,82,4,51,204,219,64,26,139,5,148,170,40,85,33,162,146,31,74,85,128,57,
80,170,122,9,75,245,224,60,0,8,14,162,7,32,82,130,17,209,10,16,9,244,83,19,240,0,243,57,33,134,235,32,111,32,162,206,206,78,190,5,37,204,219,144,84,255,19,209,10,16,113,9,52,184,206,14,68,56,204,195,40,
34,116,53,0,0,0,204,18,221,132,73,90,205,233,116,170,7,179,2,204,61,188,135,63,124,248,48,192,42,214,219,31,176,21,1,34,229,100,20,155,0,32,220,35,49,184,86,213,182,182,54,212,169,48,31,170,213,246,246,
118,47,37,169,8,174,108,69,176,0,204,66,202,243,209,19,34,159,65,180,2,132,121,180,250,43,85,61,35,89,8,193,143,11,86,22,16,81,127,127,63,26,86,97,110,23,169,138,162,56,28,14,110,85,45,121,161,100,252,
159,131,251,52,4,11,192,140,133,109,32,61,33,136,86,128,176,141,86,63,5,107,64,173,170,178,96,37,162,182,182,54,183,219,141,120,134,185,26,69,110,183,59,180,187,6,168,195,68,6,11,34,5,96,102,34,55,168,
158,16,68,43,64,216,69,171,111,58,95,85,173,231,155,11,87,21,18,81,127,127,255,195,135,15,113,246,9,115,245,108,143,247,112,34,90,83,180,38,180,130,149,208,11,1,48,179,97,27,90,79,8,162,21,32,140,162,
53,240,82,53,16,109,109,109,168,86,97,238,133,144,219,237,126,240,224,193,213,171,87,61,255,164,137,52,255,167,131,232,133,0,152,225,200,13,249,254,201,136,86,128,48,137,86,63,161,23,196,12,0,66,136,213,
207,173,38,34,135,195,209,218,218,234,112,56,80,173,194,220,171,83,249,108,175,244,197,82,207,16,82,130,25,172,138,94,8,128,25,136,220,64,122,66,212,147,170,34,90,1,194,57,90,131,46,85,229,25,167,250,
188,19,213,42,204,147,58,85,187,99,43,1,157,209,121,66,47,4,192,116,71,174,175,218,148,130,188,180,31,209,10,48,59,209,234,55,224,162,82,158,78,9,54,245,62,189,228,233,155,183,111,186,92,174,135,15,31,
198,199,199,71,71,71,7,248,70,128,48,60,201,83,20,197,87,157,42,95,64,68,10,41,190,18,152,231,37,26,252,12,34,5,96,134,35,87,147,255,60,123,66,16,173,0,225,25,173,110,197,29,104,169,26,96,88,38,47,77,
150,81,109,52,26,13,6,131,255,41,235,0,194,45,120,212,231,121,237,237,237,154,58,53,192,38,85,207,132,167,73,132,234,252,135,72,1,152,190,200,13,42,108,17,173,0,97,21,173,220,24,228,51,96,139,10,139,198,
94,72,138,247,60,237,17,228,252,223,211,205,167,249,25,147,201,148,145,145,97,50,153,60,79,88,1,194,246,60,175,191,191,95,158,228,169,207,243,220,110,183,250,92,144,67,35,228,62,65,33,196,153,150,51,136,
20,128,105,141,92,101,60,26,223,43,130,104,5,8,243,104,85,95,212,56,22,182,202,36,74,213,145,106,149,68,99,115,163,124,62,62,62,62,35,35,35,46,46,14,231,160,16,230,193,227,116,58,59,58,58,212,179,16,203,
58,117,74,18,158,182,241,6,145,2,48,157,145,235,25,176,33,156,97,34,90,1,102,43,90,221,138,91,253,164,234,179,38,87,170,10,158,91,89,16,17,53,54,53,226,183,129,8,165,30,52,163,109,79,37,226,16,162,80,
239,187,56,22,44,136,20,128,233,137,92,47,103,149,33,245,132,32,90,1,102,43,90,101,242,157,226,82,149,136,100,72,243,63,127,115,246,55,248,61,32,66,139,84,239,109,168,147,235,250,247,76,126,136,20,128,
233,136,220,113,45,52,161,246,132,32,90,1,102,55,90,167,184,84,29,137,234,241,33,237,107,4,58,58,77,32,76,120,238,138,158,225,49,133,117,170,175,228,135,72,1,152,190,200,13,121,196,14,162,21,96,118,163,
213,87,169,170,15,97,57,20,69,17,66,40,138,66,130,132,34,72,76,208,55,138,9,234,32,76,194,198,235,174,232,229,100,110,42,138,84,245,73,36,231,63,65,194,255,77,4,16,41,0,1,70,174,247,220,54,58,226,13,209,
10,16,86,121,214,127,193,58,97,76,233,67,14,233,209,122,87,225,51,80,65,35,197,43,5,112,107,16,128,25,51,97,70,241,95,158,78,50,33,113,8,200,143,29,105,181,225,143,20,136,20,128,105,137,220,144,71,150,
35,90,1,166,42,90,101,164,120,137,77,101,108,118,170,64,162,85,63,249,133,243,122,75,116,25,243,35,255,36,196,54,132,95,116,249,24,241,50,133,237,37,154,232,80,127,151,186,123,17,145,2,48,235,145,139,
104,5,152,2,194,111,60,6,60,214,116,10,74,85,95,21,180,151,57,177,0,34,240,140,112,10,119,96,175,103,150,50,88,16,41,0,225,19,185,136,86,128,169,77,124,154,226,48,180,56,213,79,230,160,48,125,217,29,96,
214,115,222,52,125,178,166,97,6,0,194,39,114,17,173,0,83,82,167,78,126,64,78,40,165,234,244,245,144,2,132,101,2,156,170,144,197,25,29,64,132,68,46,162,21,96,210,69,170,255,192,9,109,168,247,196,165,234,
196,69,170,50,65,180,3,68,86,86,83,72,153,194,175,240,57,160,13,145,2,16,86,145,139,104,5,152,100,104,250,40,82,125,13,173,153,154,82,213,95,157,170,248,56,52,224,44,20,32,144,244,137,72,1,64,180,2,204,
21,218,51,61,161,173,30,53,181,41,207,13,55,5,165,170,247,58,85,25,139,103,244,143,0,0,0,0,224,76,111,92,233,41,187,41,132,207,130,53,192,106,85,31,80,109,234,173,78,245,218,224,138,9,231,0,0,0,0,230,
99,181,170,153,58,131,20,34,18,202,184,130,53,4,122,207,175,241,57,253,135,183,34,149,31,159,187,116,14,191,16,0,0,0,0,72,249,43,242,229,189,162,100,221,24,108,195,106,16,151,85,105,234,84,20,169,0,0,
0,0,224,75,203,133,22,34,42,88,81,16,96,169,25,92,169,170,157,241,88,33,77,157,170,46,82,19,19,19,179,179,179,227,226,226,240,171,0,0,0,0,204,115,78,167,243,202,149,43,253,253,253,68,212,124,161,153,136,
10,86,22,200,26,50,168,241,162,162,168,176,72,22,163,234,59,41,143,43,85,85,119,107,213,212,169,92,164,26,141,70,92,95,5,0,0,0,0,178,92,116,58,157,173,173,173,92,176,202,106,85,83,167,250,187,101,128,
50,81,169,170,233,235,151,255,252,250,226,215,68,148,148,148,148,149,149,101,52,26,229,215,224,154,42,0,0,0,0,144,69,163,219,237,86,23,172,5,43,11,130,45,85,117,94,63,218,203,252,169,222,234,84,117,143,
63,234,84,0,0,0,0,224,178,144,43,67,33,68,124,124,124,86,86,86,66,66,2,17,53,159,111,214,188,108,194,26,50,42,229,233,20,175,85,176,87,154,246,84,157,78,39,23,5,0,0,0,0,192,179,96,53,24,12,38,147,201,
233,116,14,14,14,222,186,115,235,233,37,79,83,192,173,156,58,95,127,208,76,80,165,198,237,169,168,80,1,0,0,0,32,144,130,53,62,62,62,51,51,83,253,100,128,111,215,121,41,79,125,224,38,213,196,196,68,212,
169,0,0,0,0,16,120,181,74,68,70,163,145,135,1,52,157,107,10,252,189,94,90,85,125,222,2,128,136,136,178,179,179,81,167,2,0,0,0,64,80,213,170,78,167,203,200,200,240,83,203,146,183,214,86,93,128,159,174,
105,82,69,181,10,0,0,0,0,129,151,170,60,12,192,100,50,17,209,217,175,207,6,248,70,93,80,95,147,149,149,69,19,141,19,0,0,0,0,0,240,90,176,202,134,85,49,106,42,75,85,158,157,10,77,170,0,0,0,0,16,108,157,
42,132,144,83,157,106,234,84,95,229,165,30,27,14,0,0,0,0,102,186,114,37,193,255,143,252,246,216,235,2,253,32,0,0,0,0,128,169,171,85,3,169,51,117,216,80,0,0,0,0,48,107,213,170,223,145,165,19,205,171,138,
22,85,0,0,0,0,152,37,99,165,170,231,93,169,0,0,0,0,0,166,209,68,173,162,24,0,0,0,0,0,0,97,10,165,42,0,0,0,0,68,114,169,138,73,0,0,0,0,0,32,76,75,85,0,0,0,0,0,148,170,0,0,0,0,0,40,85,1,0,0,0,0,165,42,0,
0,0,0,64,8,244,145,190,2,7,15,30,52,155,205,68,244,243,159,255,124,255,254,253,129,191,113,239,222,189,57,57,57,33,188,209,171,63,251,179,63,123,249,229,151,137,200,102,179,237,216,177,3,59,22,0,0,0,64,
152,150,170,53,53,53,223,249,206,119,248,177,103,233,38,107,196,169,42,19,103,146,92,53,187,221,190,121,243,102,236,64,48,125,177,179,110,221,58,255,167,103,158,62,253,244,211,189,123,247,202,127,238,
216,177,99,229,202,149,50,220,236,118,251,241,227,199,63,249,228,19,187,221,30,224,242,188,240,194,11,111,189,245,22,118,120,0,181,9,219,38,178,178,178,254,251,127,255,239,190,222,254,230,155,111,254,
234,87,191,154,124,156,102,101,101,109,216,176,65,253,222,71,143,30,253,195,63,252,131,250,32,0,128,82,117,98,57,57,57,47,188,240,194,233,211,167,101,104,201,160,154,75,126,242,147,159,96,103,130,240,
145,149,149,245,199,127,252,199,169,169,169,234,39,205,102,243,43,175,188,242,202,43,175,104,50,165,159,15,217,190,125,59,54,38,64,120,198,233,134,13,27,94,121,229,21,245,51,113,113,113,175,188,242,74,
69,69,197,31,252,193,31,4,126,70,10,48,223,75,85,34,90,183,110,157,44,85,55,108,216,128,141,14,48,37,52,109,168,234,84,247,23,127,241,23,220,242,218,213,213,245,179,159,253,236,244,233,211,102,179,249,
71,63,250,209,234,213,171,137,232,199,63,254,241,131,7,15,100,84,122,205,160,126,218,132,0,32,112,190,42,206,201,199,41,59,124,248,48,119,125,124,235,91,223,250,195,63,252,67,254,228,111,127,251,219,104,
91,5,148,170,65,88,187,118,45,7,18,17,85,84,84,248,121,229,142,29,59,254,201,63,249,39,113,113,113,252,207,147,39,79,254,253,223,255,189,38,80,213,175,57,124,248,240,130,5,11,52,31,34,187,102,78,158,60,
41,27,59,3,25,210,250,173,111,125,235,183,126,235,183,248,24,193,184,35,70,6,188,252,100,62,22,252,250,215,191,166,209,142,209,29,59,118,240,217,173,250,75,137,168,166,166,102,253,250,245,242,164,217,
102,179,29,61,122,244,151,191,252,165,124,1,127,8,17,125,255,251,223,87,159,34,251,170,66,0,38,244,237,111,127,155,247,246,71,143,30,253,224,7,63,224,198,21,187,221,254,175,255,245,191,150,195,111,182,
111,223,62,97,10,4,128,48,143,83,117,29,252,203,95,254,82,166,176,149,43,87,98,11,195,156,49,189,51,0,60,122,244,136,136,226,226,226,190,245,173,111,113,45,104,54,155,249,73,141,172,172,172,131,7,15,190,
242,202,43,178,78,37,162,151,95,126,249,173,183,222,170,169,169,145,207,236,221,187,87,253,154,170,170,42,245,235,39,169,160,160,64,93,167,210,104,71,204,7,31,124,16,218,7,238,221,187,247,59,223,249,142,
186,115,39,39,39,231,15,255,240,15,255,236,207,254,204,243,197,239,188,243,142,186,43,231,149,87,94,81,175,56,64,224,138,139,139,249,193,137,19,39,52,157,128,71,143,30,149,187,162,175,1,175,68,212,218,
218,186,110,221,186,117,235,214,125,250,233,167,216,158,0,225,25,167,123,247,238,13,100,36,15,0,74,85,127,30,63,126,124,242,228,73,26,237,247,255,173,223,250,45,34,250,135,127,248,7,207,87,238,220,185,
83,246,131,108,222,188,89,157,35,191,243,157,239,100,101,101,17,81,77,77,141,28,231,250,179,159,253,140,83,233,212,14,199,57,124,248,240,247,191,255,125,77,146,78,77,77,229,82,251,39,63,249,201,207,127,
254,115,126,210,110,183,243,203,124,93,107,178,99,199,14,94,218,71,143,30,253,240,135,63,92,183,110,221,155,111,190,41,75,112,207,50,244,31,254,225,31,248,3,207,158,61,203,207,172,95,191,30,59,40,248,
241,202,43,175,252,122,60,142,20,121,118,116,243,230,77,205,91,206,159,63,175,62,55,195,54,4,152,110,63,254,241,143,213,65,122,240,224,65,153,89,166,54,78,205,102,179,76,145,215,174,93,195,150,7,148,170,
129,58,113,226,4,141,94,92,197,109,150,242,124,209,107,128,253,237,223,254,45,87,159,123,247,238,149,237,175,92,233,202,210,237,228,201,147,234,62,244,169,242,147,159,252,228,173,183,222,106,109,109,149,
39,172,93,93,93,252,56,62,62,126,50,103,204,220,131,243,171,95,253,74,150,161,249,249,249,154,215,203,205,210,210,210,194,15,166,176,193,24,128,201,221,155,136,146,147,147,177,65,0,230,76,156,254,232,
71,63,146,89,99,58,82,36,192,108,153,246,177,170,191,250,213,175,254,197,191,248,23,169,169,169,187,118,237,226,42,83,29,132,158,103,141,234,179,73,187,221,206,129,183,100,201,18,245,57,104,91,91,219,
52,45,109,77,77,141,201,100,170,168,168,240,211,231,18,32,175,103,204,119,238,220,225,7,86,171,213,215,27,123,122,122,176,95,66,32,66,24,208,204,205,174,216,211,0,102,76,128,19,110,76,50,78,119,236,216,
33,7,176,125,250,233,167,158,121,22,32,114,205,196,221,170,142,29,59,70,68,92,252,113,35,107,24,50,155,205,31,124,240,193,119,190,243,157,87,94,121,101,242,117,42,192,44,146,189,1,79,63,253,180,230,79,
234,139,45,154,155,155,177,173,0,230,64,156,202,235,122,9,151,228,2,74,213,208,236,223,191,159,187,242,187,186,186,188,158,92,170,67,81,29,162,178,100,188,125,251,182,255,192,158,188,111,127,251,219,220,
14,250,232,209,163,159,255,252,231,147,31,8,235,117,105,23,47,94,204,15,58,59,59,177,243,193,52,105,104,104,224,7,107,215,174,213,156,119,201,217,226,108,54,27,166,93,4,152,3,113,250,215,127,253,215,168,
83,1,165,234,20,248,157,223,249,157,117,235,214,189,246,218,107,94,255,106,183,219,109,54,27,63,254,221,223,253,93,14,218,29,59,118,200,97,55,60,142,243,194,133,11,252,207,162,162,162,23,94,120,129,136,
190,241,141,111,120,78,86,197,117,45,17,61,255,252,243,220,141,226,245,101,190,60,126,252,152,47,252,122,225,133,23,60,223,37,251,98,204,102,51,47,67,32,135,33,185,180,178,131,70,14,72,5,152,114,242,62,
55,113,113,113,111,191,253,54,239,126,102,179,249,175,255,250,175,229,160,240,247,223,127,31,27,10,32,162,227,212,108,54,239,221,187,151,211,202,163,71,143,222,124,243,77,212,169,48,39,233,195,100,57,
222,121,231,29,158,12,57,53,53,85,94,32,201,126,254,243,159,243,176,155,95,254,242,151,107,215,174,141,139,139,51,155,205,114,162,86,79,71,143,30,229,83,204,184,184,56,57,141,185,215,25,178,212,126,243,
155,223,240,187,204,102,179,102,1,212,154,155,155,31,61,122,196,53,180,255,27,78,238,221,187,151,239,119,23,23,23,167,89,218,147,39,79,70,214,237,100,97,86,200,57,119,165,239,127,255,251,129,12,65,179,
219,237,255,238,223,253,59,190,11,78,106,106,170,103,176,188,249,230,155,254,39,107,244,188,5,128,156,72,88,51,115,48,192,124,150,147,147,163,137,211,192,111,65,60,249,56,125,251,237,183,229,69,17,113,
113,113,63,254,241,143,127,252,227,31,171,83,39,18,13,204,13,186,48,89,142,214,214,214,205,155,55,127,250,233,167,234,154,242,228,201,147,63,252,225,15,101,176,181,182,182,254,233,159,254,169,108,127,
229,158,122,207,206,145,214,214,214,55,223,124,83,246,191,159,61,123,246,251,223,255,254,227,199,143,253,47,192,233,211,167,213,239,226,56,247,252,112,187,221,174,94,6,255,118,236,216,241,243,159,255,
92,253,153,54,155,237,103,63,251,25,50,61,204,64,64,189,246,218,107,159,126,250,169,122,95,181,219,237,159,126,250,233,230,205,155,49,23,35,192,28,136,83,204,18,3,243,132,40,42,44,226,71,138,162,184,221,
110,126,32,255,75,68,164,16,17,53,95,104,38,162,181,107,215,10,33,116,58,29,54,28,0,0,0,0,4,197,237,118,15,13,13,157,58,117,138,136,2,44,65,81,116,2,0,0,0,64,152,66,169,10,0,0,0,0,40,85,1,0,0,0,0,80,170,
2,0,0,0,0,74,85,0,0,0,0,128,208,9,18,1,149,170,254,95,7,0,0,0,0,48,101,21,170,16,94,31,251,44,85,253,191,14,0,0,0,0,96,134,5,48,0,0,229,43,0,0,0,0,132,85,169,138,22,86,0,0,0,0,152,62,129,84,155,58,20,
169,0,0,0,0,16,158,2,155,1,0,181,43,0,0,0,0,76,7,49,249,82,117,212,216,93,89,1,0,0,0,0,66,46,80,133,160,0,58,243,117,19,126,132,154,211,233,84,20,5,5,43,0,0,0,0,4,133,107,200,135,15,31,6,82,115,6,84,170,
122,190,179,173,173,13,117,42,0,0,0,0,132,86,173,182,183,183,7,82,161,122,47,85,229,27,60,39,101,45,88,89,64,68,253,253,253,104,88,5,0,0,0,128,96,139,84,69,81,28,14,7,183,170,150,188,80,18,224,27,3,26,
171,42,132,144,197,107,91,91,155,219,237,70,169,10,0,0,0,0,129,151,170,110,183,187,173,173,205,215,95,3,45,85,189,54,172,178,194,85,133,68,212,223,223,255,240,225,67,52,172,2,0,0,0,64,128,117,170,162,
40,92,67,18,209,154,162,53,129,191,87,23,194,247,181,181,181,161,90,5,0,0,0,128,64,234,84,183,219,253,224,193,131,171,87,175,122,254,137,136,200,111,57,25,149,242,116,138,175,191,105,70,172,10,33,158,
94,242,244,205,219,55,93,46,215,195,135,15,227,227,227,163,163,163,61,95,9,0,0,0,0,160,140,226,58,149,155,84,75,95,44,245,172,86,221,138,59,148,82,85,86,168,234,74,84,93,173,26,141,70,131,193,224,103,
204,0,0,0,0,0,204,195,34,149,84,237,169,237,237,237,178,78,245,236,150,87,200,95,71,189,40,42,44,26,123,225,232,75,253,247,236,11,33,206,180,156,225,199,38,147,41,35,35,195,100,50,105,42,90,0,0,0,0,152,
183,165,42,15,78,149,141,169,52,218,158,170,140,39,43,90,89,124,142,85,161,138,183,82,85,126,132,159,58,85,8,33,72,52,54,55,202,39,227,227,227,51,50,50,226,226,226,8,109,171,0,0,0,0,243,187,72,117,58,
157,29,29,29,234,217,254,53,117,234,88,193,169,144,91,113,171,159,84,125,214,228,74,85,190,97,107,99,83,35,126,21,0,0,0,0,240,74,14,78,213,20,169,92,167,42,164,184,221,110,82,141,25,208,148,170,250,73,
126,253,139,171,95,36,162,223,156,253,13,126,9,0,0,0,0,240,44,82,201,107,123,234,68,163,84,153,126,74,22,165,248,249,98,126,160,233,253,199,96,0,0,0,0,128,121,194,179,240,83,183,149,106,235,84,85,241,
26,64,169,26,88,239,191,124,1,143,1,16,36,20,154,224,197,248,217,0,0,0,0,230,67,121,234,89,248,105,46,150,146,19,169,242,248,84,175,21,173,44,77,185,62,213,203,58,85,83,164,250,170,50,121,129,228,139,
71,70,174,242,107,197,216,187,208,158,10,0,0,0,48,231,77,216,46,41,203,83,255,213,166,215,58,149,136,244,190,10,219,64,22,72,8,161,254,74,46,79,101,45,59,242,36,161,102,5,0,0,0,152,127,85,172,143,30,123,
63,141,175,154,58,149,136,244,234,58,53,192,130,85,182,152,122,150,173,132,78,127,0,0,0,0,8,188,54,245,81,164,142,148,170,158,117,106,160,13,185,227,43,87,84,168,0,0,0,0,16,96,181,234,89,164,106,234,84,
126,139,222,95,145,234,245,51,69,144,223,13,0,0,0,0,224,183,200,244,44,82,153,222,123,197,233,173,1,86,254,201,231,240,83,140,74,5,0,0,0,0,31,245,168,103,85,58,238,121,111,173,159,122,237,0,83,197,223,
71,248,255,2,66,235,42,0,0,0,0,4,91,211,250,238,162,215,107,234,84,89,134,162,91,31,0,0,0,0,102,151,222,179,78,69,145,10,0,0,0,0,51,198,235,37,251,236,255,63,0,37,219,177,105,22,195,232,104,0,0,0,0,73,
69,78,68,174,66,96,130,0,0};

const char* MainWindow::trio_png = (const char*) resource_MainWindow_trio_png;
const int MainWindow::trio_pngSize = 69551;

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


//[EndFile] You can add extra defines here...
//[/EndFile]
