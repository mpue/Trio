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

#include "FXPanel.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
FXPanel::FXPanel (TrioAudioProcessor* p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->processor = p;
    //[/Constructor_pre]

    addAndMakeVisible (dampSlider = new Slider ("dampSlider"));
    dampSlider->setRange (0, 1, 0.01);
    dampSlider->setSliderStyle (Slider::Rotary);
    dampSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    dampSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    dampSlider->addListener (this);

    addAndMakeVisible (freezeSlider = new Slider ("freezeSlider"));
    freezeSlider->setRange (0, 1, 0.01);
    freezeSlider->setSliderStyle (Slider::Rotary);
    freezeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    freezeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    freezeSlider->addListener (this);

    addAndMakeVisible (sizeSlider = new Slider ("sizeSlider"));
    sizeSlider->setRange (0, 1, 0.01);
    sizeSlider->setSliderStyle (Slider::Rotary);
    sizeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    sizeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    sizeSlider->addListener (this);

    addAndMakeVisible (widthSlider = new Slider ("widthSlider"));
    widthSlider->setRange (0, 1, 0.01);
    widthSlider->setSliderStyle (Slider::Rotary);
    widthSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    widthSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    widthSlider->addListener (this);

    addAndMakeVisible (wetSlider = new Slider ("wetSlider"));
    wetSlider->setRange (0, 1, 0.01);
    wetSlider->setSliderStyle (Slider::Rotary);
    wetSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    wetSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    wetSlider->addListener (this);

    addAndMakeVisible (drySlider = new Slider ("drySlider"));
    drySlider->setRange (0, 1, 0.01);
    drySlider->setSliderStyle (Slider::Rotary);
    drySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    drySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    drySlider->addListener (this);

    addAndMakeVisible (enableReverbButton = new ToggleButton ("enableReverbButton"));
    enableReverbButton->setButtonText (TRANS("ON"));
    enableReverbButton->addListener (this);
    enableReverbButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (delayTimeLeftSlider = new Slider ("delayTimeLeftSlider"));
    delayTimeLeftSlider->setRange (0, 1, 0.01);
    delayTimeLeftSlider->setSliderStyle (Slider::Rotary);
    delayTimeLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayTimeLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayTimeLeftSlider->addListener (this);

    addAndMakeVisible (enableDelayButton = new ToggleButton ("enableDelayButton"));
    enableDelayButton->setButtonText (TRANS("ON"));
    enableDelayButton->addListener (this);
    enableDelayButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (delayTimeRightSlider = new Slider ("delayTimeRightSlider"));
    delayTimeRightSlider->setRange (0, 1, 0.01);
    delayTimeRightSlider->setSliderStyle (Slider::Rotary);
    delayTimeRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayTimeRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayTimeRightSlider->addListener (this);

    addAndMakeVisible (delayFBLeftSlider = new Slider ("delayFBLeftSlider"));
    delayFBLeftSlider->setRange (0, 1, 0.01);
    delayFBLeftSlider->setSliderStyle (Slider::Rotary);
    delayFBLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayFBLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayFBLeftSlider->addListener (this);

    addAndMakeVisible (delayFBRightSlider = new Slider ("delayFBRightSlider"));
    delayFBRightSlider->setRange (0, 1, 0.01);
    delayFBRightSlider->setSliderStyle (Slider::Rotary);
    delayFBRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayFBRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayFBRightSlider->addListener (this);

    addAndMakeVisible (delayMixLeftSlider = new Slider ("delayMixLeftSlider"));
    delayMixLeftSlider->setRange (0, 1, 0.01);
    delayMixLeftSlider->setSliderStyle (Slider::Rotary);
    delayMixLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayMixLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayMixLeftSlider->addListener (this);

    addAndMakeVisible (delayMixRightSlider = new Slider ("delayMixRightSlider"));
    delayMixRightSlider->setRange (0, 1, 0.01);
    delayMixRightSlider->setSliderStyle (Slider::Rotary);
    delayMixRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayMixRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayMixRightSlider->addListener (this);

    addAndMakeVisible (driveSlider = new Slider ("driveSlider"));
    driveSlider->setRange (0, 10, 0.1);
    driveSlider->setSliderStyle (Slider::Rotary);
    driveSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    driveSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    driveSlider->addListener (this);

    addAndMakeVisible (mixSlider = new Slider ("mixSlider"));
    mixSlider->setRange (0, 1, 0.01);
    mixSlider->setSliderStyle (Slider::Rotary);
    mixSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    mixSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    mixSlider->addListener (this);

    addAndMakeVisible (modeCombo = new ComboBox ("modeCombo"));
    modeCombo->setEditableText (false);
    modeCombo->setJustificationType (Justification::centredLeft);
    modeCombo->setTextWhenNothingSelected (String());
    modeCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modeCombo->addListener (this);

    addAndMakeVisible (enableDistButton = new ToggleButton ("enableDistButton"));
    enableDistButton->setButtonText (TRANS("ON"));
    enableDistButton->addListener (this);
    enableDistButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (enableSeqButton = new ToggleButton ("enableSeqButton"));
    enableSeqButton->setButtonText (TRANS("ON"));
    enableSeqButton->addListener (this);
    enableSeqButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton1 = new ToggleButton ("stepButton1"));
    stepButton1->setButtonText (String());
    stepButton1->addListener (this);
    stepButton1->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton2 = new ToggleButton ("stepButton1"));
    stepButton2->setButtonText (String());
    stepButton2->addListener (this);
    stepButton2->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton3 = new ToggleButton ("stepButton1"));
    stepButton3->setButtonText (String());
    stepButton3->addListener (this);
    stepButton3->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton4 = new ToggleButton ("stepButton1"));
    stepButton4->setButtonText (String());
    stepButton4->addListener (this);
    stepButton4->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton5 = new ToggleButton ("stepButton1"));
    stepButton5->setButtonText (String());
    stepButton5->addListener (this);
    stepButton5->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton6 = new ToggleButton ("stepButton1"));
    stepButton6->setButtonText (String());
    stepButton6->addListener (this);
    stepButton6->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton7 = new ToggleButton ("stepButton1"));
    stepButton7->setButtonText (String());
    stepButton7->addListener (this);
    stepButton7->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton8 = new ToggleButton ("stepButton1"));
    stepButton8->setButtonText (String());
    stepButton8->addListener (this);
    stepButton8->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton9 = new ToggleButton ("stepButton1"));
    stepButton9->setButtonText (String());
    stepButton9->addListener (this);
    stepButton9->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton10 = new ToggleButton ("stepButton1"));
    stepButton10->setButtonText (String());
    stepButton10->addListener (this);
    stepButton10->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton11 = new ToggleButton ("stepButton1"));
    stepButton11->setButtonText (String());
    stepButton11->addListener (this);
    stepButton11->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton12 = new ToggleButton ("stepButton1"));
    stepButton12->setButtonText (String());
    stepButton12->addListener (this);
    stepButton12->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton13 = new ToggleButton ("stepButton1"));
    stepButton13->setButtonText (String());
    stepButton13->addListener (this);
    stepButton13->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton14 = new ToggleButton ("stepButton1"));
    stepButton14->setButtonText (String());
    stepButton14->addListener (this);
    stepButton14->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton15 = new ToggleButton ("stepButton1"));
    stepButton15->setButtonText (String());
    stepButton15->addListener (this);
    stepButton15->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (stepButton16 = new ToggleButton ("stepButton1"));
    stepButton16->setButtonText (String());
    stepButton16->addListener (this);
    stepButton16->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Note")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredRight);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Vel")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredRight);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (note1 = new TextEditor ("note1"));
    note1->setMultiLine (false);
    note1->setReturnKeyStartsNewLine (false);
    note1->setReadOnly (false);
    note1->setScrollbarsShown (true);
    note1->setCaretVisible (false);
    note1->setPopupMenuEnabled (true);
    note1->setText (String());

    addAndMakeVisible (note2 = new TextEditor ("note1"));
    note2->setMultiLine (false);
    note2->setReturnKeyStartsNewLine (false);
    note2->setReadOnly (false);
    note2->setScrollbarsShown (true);
    note2->setCaretVisible (false);
    note2->setPopupMenuEnabled (true);
    note2->setText (String());

    addAndMakeVisible (note3 = new TextEditor ("note1"));
    note3->setMultiLine (false);
    note3->setReturnKeyStartsNewLine (false);
    note3->setReadOnly (false);
    note3->setScrollbarsShown (true);
    note3->setCaretVisible (false);
    note3->setPopupMenuEnabled (true);
    note3->setText (String());

    addAndMakeVisible (note4 = new TextEditor ("note1"));
    note4->setMultiLine (false);
    note4->setReturnKeyStartsNewLine (false);
    note4->setReadOnly (false);
    note4->setScrollbarsShown (true);
    note4->setCaretVisible (false);
    note4->setPopupMenuEnabled (true);
    note4->setText (String());

    addAndMakeVisible (note5 = new TextEditor ("note1"));
    note5->setMultiLine (false);
    note5->setReturnKeyStartsNewLine (false);
    note5->setReadOnly (false);
    note5->setScrollbarsShown (true);
    note5->setCaretVisible (false);
    note5->setPopupMenuEnabled (true);
    note5->setText (String());

    addAndMakeVisible (note6 = new TextEditor ("note1"));
    note6->setMultiLine (false);
    note6->setReturnKeyStartsNewLine (false);
    note6->setReadOnly (false);
    note6->setScrollbarsShown (true);
    note6->setCaretVisible (false);
    note6->setPopupMenuEnabled (true);
    note6->setText (String());

    addAndMakeVisible (note7 = new TextEditor ("note1"));
    note7->setMultiLine (false);
    note7->setReturnKeyStartsNewLine (false);
    note7->setReadOnly (false);
    note7->setScrollbarsShown (true);
    note7->setCaretVisible (false);
    note7->setPopupMenuEnabled (true);
    note7->setText (String());

    addAndMakeVisible (note8 = new TextEditor ("note1"));
    note8->setMultiLine (false);
    note8->setReturnKeyStartsNewLine (false);
    note8->setReadOnly (false);
    note8->setScrollbarsShown (true);
    note8->setCaretVisible (false);
    note8->setPopupMenuEnabled (true);
    note8->setText (String());

    addAndMakeVisible (note9 = new TextEditor ("note1"));
    note9->setMultiLine (false);
    note9->setReturnKeyStartsNewLine (false);
    note9->setReadOnly (false);
    note9->setScrollbarsShown (true);
    note9->setCaretVisible (false);
    note9->setPopupMenuEnabled (true);
    note9->setText (String());

    addAndMakeVisible (note10 = new TextEditor ("note1"));
    note10->setMultiLine (false);
    note10->setReturnKeyStartsNewLine (false);
    note10->setReadOnly (false);
    note10->setScrollbarsShown (true);
    note10->setCaretVisible (false);
    note10->setPopupMenuEnabled (true);
    note10->setText (String());

    addAndMakeVisible (note11 = new TextEditor ("note1"));
    note11->setMultiLine (false);
    note11->setReturnKeyStartsNewLine (false);
    note11->setReadOnly (false);
    note11->setScrollbarsShown (true);
    note11->setCaretVisible (false);
    note11->setPopupMenuEnabled (true);
    note11->setText (String());

    addAndMakeVisible (note12 = new TextEditor ("note1"));
    note12->setMultiLine (false);
    note12->setReturnKeyStartsNewLine (false);
    note12->setReadOnly (false);
    note12->setScrollbarsShown (true);
    note12->setCaretVisible (false);
    note12->setPopupMenuEnabled (true);
    note12->setText (String());

    addAndMakeVisible (note13 = new TextEditor ("note1"));
    note13->setMultiLine (false);
    note13->setReturnKeyStartsNewLine (false);
    note13->setReadOnly (false);
    note13->setScrollbarsShown (true);
    note13->setCaretVisible (false);
    note13->setPopupMenuEnabled (true);
    note13->setText (String());

    addAndMakeVisible (note14 = new TextEditor ("note1"));
    note14->setMultiLine (false);
    note14->setReturnKeyStartsNewLine (false);
    note14->setReadOnly (false);
    note14->setScrollbarsShown (true);
    note14->setCaretVisible (false);
    note14->setPopupMenuEnabled (true);
    note14->setText (String());

    addAndMakeVisible (note15 = new TextEditor ("note1"));
    note15->setMultiLine (false);
    note15->setReturnKeyStartsNewLine (false);
    note15->setReadOnly (false);
    note15->setScrollbarsShown (true);
    note15->setCaretVisible (false);
    note15->setPopupMenuEnabled (true);
    note15->setText (String());

    addAndMakeVisible (note16 = new TextEditor ("note1"));
    note16->setMultiLine (false);
    note16->setReturnKeyStartsNewLine (false);
    note16->setReadOnly (false);
    note16->setScrollbarsShown (true);
    note16->setCaretVisible (false);
    note16->setPopupMenuEnabled (true);
    note16->setText (String());

    addAndMakeVisible (vel1 = new TextEditor ("vel1"));
    vel1->setMultiLine (false);
    vel1->setReturnKeyStartsNewLine (false);
    vel1->setReadOnly (true);
    vel1->setScrollbarsShown (true);
    vel1->setCaretVisible (false);
    vel1->setPopupMenuEnabled (true);
    vel1->setText (String());

    addAndMakeVisible (vel2 = new TextEditor ("vel1"));
    vel2->setMultiLine (false);
    vel2->setReturnKeyStartsNewLine (false);
    vel2->setReadOnly (true);
    vel2->setScrollbarsShown (true);
    vel2->setCaretVisible (false);
    vel2->setPopupMenuEnabled (true);
    vel2->setText (String());

    addAndMakeVisible (vel3 = new TextEditor ("vel1"));
    vel3->setMultiLine (false);
    vel3->setReturnKeyStartsNewLine (false);
    vel3->setReadOnly (true);
    vel3->setScrollbarsShown (true);
    vel3->setCaretVisible (false);
    vel3->setPopupMenuEnabled (true);
    vel3->setText (String());

    addAndMakeVisible (vel4 = new TextEditor ("vel1"));
    vel4->setMultiLine (false);
    vel4->setReturnKeyStartsNewLine (false);
    vel4->setReadOnly (true);
    vel4->setScrollbarsShown (true);
    vel4->setCaretVisible (false);
    vel4->setPopupMenuEnabled (true);
    vel4->setText (String());

    addAndMakeVisible (vel5 = new TextEditor ("vel1"));
    vel5->setMultiLine (false);
    vel5->setReturnKeyStartsNewLine (false);
    vel5->setReadOnly (true);
    vel5->setScrollbarsShown (true);
    vel5->setCaretVisible (false);
    vel5->setPopupMenuEnabled (true);
    vel5->setText (String());

    addAndMakeVisible (vel6 = new TextEditor ("vel1"));
    vel6->setMultiLine (false);
    vel6->setReturnKeyStartsNewLine (false);
    vel6->setReadOnly (true);
    vel6->setScrollbarsShown (true);
    vel6->setCaretVisible (false);
    vel6->setPopupMenuEnabled (true);
    vel6->setText (String());

    addAndMakeVisible (vel7 = new TextEditor ("vel1"));
    vel7->setMultiLine (false);
    vel7->setReturnKeyStartsNewLine (false);
    vel7->setReadOnly (false);
    vel7->setScrollbarsShown (true);
    vel7->setCaretVisible (false);
    vel7->setPopupMenuEnabled (true);
    vel7->setText (String());

    addAndMakeVisible (vel8 = new TextEditor ("vel1"));
    vel8->setMultiLine (false);
    vel8->setReturnKeyStartsNewLine (false);
    vel8->setReadOnly (true);
    vel8->setScrollbarsShown (true);
    vel8->setCaretVisible (false);
    vel8->setPopupMenuEnabled (true);
    vel8->setText (String());

    addAndMakeVisible (vel9 = new TextEditor ("vel1"));
    vel9->setMultiLine (false);
    vel9->setReturnKeyStartsNewLine (false);
    vel9->setReadOnly (true);
    vel9->setScrollbarsShown (true);
    vel9->setCaretVisible (false);
    vel9->setPopupMenuEnabled (true);
    vel9->setText (String());

    addAndMakeVisible (vel10 = new TextEditor ("vel1"));
    vel10->setMultiLine (false);
    vel10->setReturnKeyStartsNewLine (false);
    vel10->setReadOnly (true);
    vel10->setScrollbarsShown (true);
    vel10->setCaretVisible (false);
    vel10->setPopupMenuEnabled (true);
    vel10->setText (String());

    addAndMakeVisible (vel11 = new TextEditor ("vel1"));
    vel11->setMultiLine (false);
    vel11->setReturnKeyStartsNewLine (false);
    vel11->setReadOnly (true);
    vel11->setScrollbarsShown (true);
    vel11->setCaretVisible (false);
    vel11->setPopupMenuEnabled (true);
    vel11->setText (String());

    addAndMakeVisible (vel12 = new TextEditor ("vel1"));
    vel12->setMultiLine (false);
    vel12->setReturnKeyStartsNewLine (false);
    vel12->setReadOnly (true);
    vel12->setScrollbarsShown (true);
    vel12->setCaretVisible (false);
    vel12->setPopupMenuEnabled (true);
    vel12->setText (String());

    addAndMakeVisible (vel13 = new TextEditor ("vel1"));
    vel13->setMultiLine (false);
    vel13->setReturnKeyStartsNewLine (false);
    vel13->setReadOnly (true);
    vel13->setScrollbarsShown (true);
    vel13->setCaretVisible (false);
    vel13->setPopupMenuEnabled (true);
    vel13->setText (String());

    addAndMakeVisible (vel14 = new TextEditor ("vel1"));
    vel14->setMultiLine (false);
    vel14->setReturnKeyStartsNewLine (false);
    vel14->setReadOnly (true);
    vel14->setScrollbarsShown (true);
    vel14->setCaretVisible (false);
    vel14->setPopupMenuEnabled (true);
    vel14->setText (String());

    addAndMakeVisible (vel15 = new TextEditor ("vel1"));
    vel15->setMultiLine (false);
    vel15->setReturnKeyStartsNewLine (false);
    vel15->setReadOnly (true);
    vel15->setScrollbarsShown (true);
    vel15->setCaretVisible (false);
    vel15->setPopupMenuEnabled (true);
    vel15->setText (String());

    addAndMakeVisible (vel16 = new TextEditor ("vel1"));
    vel16->setMultiLine (false);
    vel16->setReturnKeyStartsNewLine (false);
    vel16->setReadOnly (true);
    vel16->setScrollbarsShown (true);
    vel16->setCaretVisible (false);
    vel16->setPopupMenuEnabled (true);
    vel16->setText (String());

    addAndMakeVisible (octavesCombo = new ComboBox ("octavesCombo"));
    octavesCombo->setEditableText (false);
    octavesCombo->setJustificationType (Justification::centredLeft);
    octavesCombo->setTextWhenNothingSelected (String());
    octavesCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    octavesCombo->addItem (TRANS("1"), 1);
    octavesCombo->addItem (TRANS("2"), 2);
    octavesCombo->addItem (TRANS("3"), 3);
    octavesCombo->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Octaves")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (notesCombo = new ComboBox ("notesCombo"));
    notesCombo->setEditableText (false);
    notesCombo->setJustificationType (Justification::centredLeft);
    notesCombo->setTextWhenNothingSelected (String());
    notesCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    notesCombo->addItem (TRANS("4"), 1);
    notesCombo->addItem (TRANS("8"), 2);
    notesCombo->addItem (TRANS("16"), 3);
    notesCombo->addListener (this);

    addAndMakeVisible (notesLabel = new Label ("new label",
                                               TRANS("Notes")));
    notesLabel->setFont (Font (15.00f, Font::plain));
    notesLabel->setJustificationType (Justification::centredLeft);
    notesLabel->setEditable (false, false, false);
    notesLabel->setColour (Label::textColourId, Colours::white);
    notesLabel->setColour (TextEditor::textColourId, Colours::black);
    notesLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    cachedImage_fx_panel_png_1 = ImageCache::getFromMemory (fx_panel_png, fx_panel_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (910, 600);


    //[Constructor] You can add your own custom stuff here..

    this->fxreverb_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxreverb_enabled", *this->enableReverbButton);
    this->fxreverb_size_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_size", *this->sizeSlider);
    this->fxreverb_width_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_width", *this->widthSlider);
    this->fxreverb_freeze_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_freeze", *this->freezeSlider);
    this->fxreverb_damping_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_damping", *this->dampSlider);
    this->fxreverb_drylevel_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_drylevel", *this->drySlider);
    this->fxreverb_wetlevel_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_wetlevel", *this->wetSlider);

    this->fxdelay_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxdelay_enabled", *this->enableDelayButton);
    this->fxdelay_mixleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_mixleft", *this->delayMixLeftSlider);
    this->fxdelay_mixright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_mixright", *this->delayMixRightSlider);
    this->fxdelay_fbleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_fbleft", *this->delayFBLeftSlider);
    this->fxdelay_fbright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_fbright", *this->delayFBRightSlider);
    this->fxdelay_timeleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_timeleft", *this->delayTimeLeftSlider);
    this->fxdelay_timeright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_timeright", *this->delayTimeRightSlider);

    this->fxdist_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxdist_enabled", *this->enableDistButton);
    this->fxdist_mode_att = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"fxdist_mode", *this->modeCombo);
    this->fxdist_mix_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdist_mix", *this->mixSlider);
    this->fxdist_drive_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdist_drive", *this->mixSlider);

    delayMixRightSlider->setValue(0.5);
    delayMixLeftSlider->setValue(0.5);
    delayFBRightSlider->setValue(0.5);
    delayFBLeftSlider->setValue(0.5);
    delayTimeRightSlider->setValue(0.375);
    delayTimeLeftSlider->setValue(0.5);

    modeCombo->addItem("Soft clip", 1);
    modeCombo->addItem("Hard clip", 2);
    modeCombo->addItem("Cubic shaper", 3);

    modeCombo->setSelectedId(1);
    
    stepButtons.push_back(stepButton1);
    stepButtons.push_back(stepButton2);
    stepButtons.push_back(stepButton3);
    stepButtons.push_back(stepButton4);
    stepButtons.push_back(stepButton5);
    stepButtons.push_back(stepButton6);
    stepButtons.push_back(stepButton7);
    stepButtons.push_back(stepButton8);
    stepButtons.push_back(stepButton9);
    stepButtons.push_back(stepButton10);
    stepButtons.push_back(stepButton11);
    stepButtons.push_back(stepButton12);
    stepButtons.push_back(stepButton13);
    stepButtons.push_back(stepButton14);
    stepButtons.push_back(stepButton15);
    stepButtons.push_back(stepButton16);
    
    velocityFields.push_back(vel1);
    velocityFields.push_back(vel2);
    velocityFields.push_back(vel3);
    velocityFields.push_back(vel4);
    velocityFields.push_back(vel5);
    velocityFields.push_back(vel6);
    velocityFields.push_back(vel7);
    velocityFields.push_back(vel8);
    velocityFields.push_back(vel9);
    velocityFields.push_back(vel10);
    velocityFields.push_back(vel11);
    velocityFields.push_back(vel12);
    velocityFields.push_back(vel13);
    velocityFields.push_back(vel14);
    velocityFields.push_back(vel15);
    velocityFields.push_back(vel16);
    
    offsetFields.push_back(note1);
    offsetFields.push_back(note2);
    offsetFields.push_back(note3);
    offsetFields.push_back(note4);
    offsetFields.push_back(note5);
    offsetFields.push_back(note6);
    offsetFields.push_back(note7);
    offsetFields.push_back(note8);
    offsetFields.push_back(note9);
    offsetFields.push_back(note10);
    offsetFields.push_back(note11);
    offsetFields.push_back(note12);
    offsetFields.push_back(note13);
    offsetFields.push_back(note14);
    offsetFields.push_back(note15);
    offsetFields.push_back(note16);
    
    
    note1->addMouseListener(this, false);
    note2->addMouseListener(this, false);
    note3->addMouseListener(this, false);
    note4->addMouseListener(this, false);
    note5->addMouseListener(this, false);
    note6->addMouseListener(this, false);
    note7->addMouseListener(this, false);
    note8->addMouseListener(this, false);
    note9->addMouseListener(this, false);
    note10->addMouseListener(this, false);
    note11->addMouseListener(this, false);
    note12->addMouseListener(this, false);
    note13->addMouseListener(this, false);
    note14->addMouseListener(this, false);
    note15->addMouseListener(this, false);
    note16->addMouseListener(this, false);

    note1->setText("0");
    note2->setText("0");
    note3->setText("0");
    note4->setText("0");
    note5->setText("0");
    note6->setText("0");
    note7->setText("0");
    note8->setText("0");
    note9->setText("0");
    note10->setText("0");
    note11->setText("0");
    note12->setText("0");
    note13->setText("0");
    note14->setText("0");
    note15->setText("0");
    note16->setText("0");

    vel1->addMouseListener(this, false);
    vel2->addMouseListener(this, false);
    vel3->addMouseListener(this, false);
    vel4->addMouseListener(this, false);
    vel5->addMouseListener(this, false);
    vel6->addMouseListener(this, false);
    vel7->addMouseListener(this, false);
    vel8->addMouseListener(this, false);
    vel9->addMouseListener(this, false);
    vel10->addMouseListener(this, false);
    vel11->addMouseListener(this, false);
    vel12->addMouseListener(this, false);
    vel13->addMouseListener(this, false);
    vel14->addMouseListener(this, false);
    vel15->addMouseListener(this, false);
    vel16->addMouseListener(this, false);

    vel1->setText("100");
    vel2->setText("100");
    vel3->setText("100");
    vel4->setText("100");
    vel5->setText("100");
    vel6->setText("100");
    vel7->setText("100");
    vel8->setText("100");
    vel9->setText("100");
    vel10->setText("100");
    vel11->setText("100");
    vel12->setText("100");
    vel13->setText("100");
    vel14->setText("100");
    vel15->setText("100");
    vel16->setText("100");

    note1->setComponentID("0");
    note2->setComponentID("1");
    note3->setComponentID("2");
    note4->setComponentID("3");
    note5->setComponentID("4");
    note6->setComponentID("5");
    note7->setComponentID("6");
    note8->setComponentID("7");
    note9->setComponentID("8");
    note10->setComponentID("9");
    note11->setComponentID("10");
    note12->setComponentID("11");
    note13->setComponentID("12");
    note14->setComponentID("13");
    note15->setComponentID("14");
    
    //[/Constructor]
}

FXPanel::~FXPanel()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    stepButtons.clear();
    offsetFields.clear();
    velocityFields.clear();
    //[/Destructor_pre]

    dampSlider = nullptr;
    freezeSlider = nullptr;
    sizeSlider = nullptr;
    widthSlider = nullptr;
    wetSlider = nullptr;
    drySlider = nullptr;
    enableReverbButton = nullptr;
    delayTimeLeftSlider = nullptr;
    enableDelayButton = nullptr;
    delayTimeRightSlider = nullptr;
    delayFBLeftSlider = nullptr;
    delayFBRightSlider = nullptr;
    delayMixLeftSlider = nullptr;
    delayMixRightSlider = nullptr;
    driveSlider = nullptr;
    mixSlider = nullptr;
    modeCombo = nullptr;
    enableDistButton = nullptr;
    enableSeqButton = nullptr;
    stepButton1 = nullptr;
    stepButton2 = nullptr;
    stepButton3 = nullptr;
    stepButton4 = nullptr;
    stepButton5 = nullptr;
    stepButton6 = nullptr;
    stepButton7 = nullptr;
    stepButton8 = nullptr;
    stepButton9 = nullptr;
    stepButton10 = nullptr;
    stepButton11 = nullptr;
    stepButton12 = nullptr;
    stepButton13 = nullptr;
    stepButton14 = nullptr;
    stepButton15 = nullptr;
    stepButton16 = nullptr;
    label = nullptr;
    label2 = nullptr;
    note1 = nullptr;
    note2 = nullptr;
    note3 = nullptr;
    note4 = nullptr;
    note5 = nullptr;
    note6 = nullptr;
    note7 = nullptr;
    note8 = nullptr;
    note9 = nullptr;
    note10 = nullptr;
    note11 = nullptr;
    note12 = nullptr;
    note13 = nullptr;
    note14 = nullptr;
    note15 = nullptr;
    note16 = nullptr;
    vel1 = nullptr;
    vel2 = nullptr;
    vel3 = nullptr;
    vel4 = nullptr;
    vel5 = nullptr;
    vel6 = nullptr;
    vel7 = nullptr;
    vel8 = nullptr;
    vel9 = nullptr;
    vel10 = nullptr;
    vel11 = nullptr;
    vel12 = nullptr;
    vel13 = nullptr;
    vel14 = nullptr;
    vel15 = nullptr;
    vel16 = nullptr;
    octavesCombo = nullptr;
    label3 = nullptr;
    notesCombo = nullptr;
    notesLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    popup = nullptr;
    //[/Destructor]
}

//==============================================================================
void FXPanel::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.drawImage (cachedImage_fx_panel_png_1,
                 0, 0, 910, 600,
                 0, 0, cachedImage_fx_panel_png_1.getWidth(), cachedImage_fx_panel_png_1.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void FXPanel::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    dampSlider->setBounds (25, 96, 67, 64);
    freezeSlider->setBounds (92, 96, 67, 64);
    sizeSlider->setBounds (159, 96, 67, 64);
    widthSlider->setBounds (225, 96, 67, 64);
    wetSlider->setBounds (291, 96, 67, 64);
    drySlider->setBounds (358, 96, 67, 64);
    enableReverbButton->setBounds (376, 64, 47, 24);
    delayTimeLeftSlider->setBounds (475, 96, 67, 64);
    enableDelayButton->setBounds (832, 64, 47, 24);
    delayTimeRightSlider->setBounds (542, 96, 67, 64);
    delayFBLeftSlider->setBounds (608, 96, 67, 64);
    delayFBRightSlider->setBounds (675, 96, 67, 64);
    delayMixLeftSlider->setBounds (738, 96, 67, 64);
    delayMixRightSlider->setBounds (808, 96, 67, 64);
    driveSlider->setBounds (25, 256, 67, 64);
    mixSlider->setBounds (92, 256, 67, 64);
    modeCombo->setBounds (168, 272, 80, 24);
    enableDistButton->setBounds (204, 227, 47, 24);
    enableSeqButton->setBounds (832, 392, 47, 24);
    stepButton1->setBounds (200, 400, 32, 32);
    stepButton2->setBounds (232, 400, 32, 32);
    stepButton3->setBounds (264, 400, 32, 32);
    stepButton4->setBounds (296, 400, 32, 32);
    stepButton5->setBounds (328, 400, 32, 32);
    stepButton6->setBounds (360, 400, 32, 32);
    stepButton7->setBounds (392, 400, 32, 32);
    stepButton8->setBounds (424, 400, 32, 32);
    stepButton9->setBounds (456, 400, 32, 32);
    stepButton10->setBounds (488, 400, 32, 32);
    stepButton11->setBounds (520, 400, 32, 32);
    stepButton12->setBounds (552, 400, 32, 32);
    stepButton13->setBounds (584, 400, 32, 32);
    stepButton14->setBounds (616, 400, 32, 32);
    stepButton15->setBounds (648, 400, 32, 32);
    stepButton16->setBounds (680, 400, 32, 32);
    label->setBounds (144, 440, 40, 24);
    label2->setBounds (144, 472, 40, 24);
    note1->setBounds (200, 440, 32, 24);
    note2->setBounds (232, 440, 32, 24);
    note3->setBounds (264, 440, 32, 24);
    note4->setBounds (296, 440, 32, 24);
    note5->setBounds (328, 440, 32, 24);
    note6->setBounds (360, 440, 32, 24);
    note7->setBounds (392, 440, 32, 24);
    note8->setBounds (424, 440, 32, 24);
    note9->setBounds (456, 440, 32, 24);
    note10->setBounds (488, 440, 32, 24);
    note11->setBounds (520, 440, 32, 24);
    note12->setBounds (552, 440, 32, 24);
    note13->setBounds (584, 440, 32, 24);
    note14->setBounds (616, 440, 32, 24);
    note15->setBounds (648, 440, 32, 24);
    note16->setBounds (680, 440, 32, 24);
    vel1->setBounds (200, 472, 32, 24);
    vel2->setBounds (232, 472, 32, 24);
    vel3->setBounds (264, 472, 32, 24);
    vel4->setBounds (296, 472, 32, 24);
    vel5->setBounds (328, 472, 32, 24);
    vel6->setBounds (360, 472, 32, 24);
    vel7->setBounds (392, 472, 32, 24);
    vel8->setBounds (424, 472, 32, 24);
    vel9->setBounds (456, 472, 32, 24);
    vel10->setBounds (488, 472, 32, 24);
    vel11->setBounds (520, 472, 32, 24);
    vel12->setBounds (552, 472, 32, 24);
    vel13->setBounds (584, 472, 32, 24);
    vel14->setBounds (616, 472, 32, 24);
    vel15->setBounds (648, 472, 32, 24);
    vel16->setBounds (680, 472, 32, 24);
    octavesCombo->setBounds (728, 472, 72, 24);
    label3->setBounds (728, 440, 72, 24);
    notesCombo->setBounds (56, 472, 72, 24);
    notesLabel->setBounds (56, 440, 72, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void FXPanel::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    Reverb::Parameters params = processor->getReverb()->getParameters();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == dampSlider)
    {
        //[UserSliderCode_dampSlider] -- add your slider handling code here..
        params.damping = dampSlider->getValue();
        //[/UserSliderCode_dampSlider]
    }
    else if (sliderThatWasMoved == freezeSlider)
    {
        //[UserSliderCode_freezeSlider] -- add your slider handling code here..
        params.freezeMode = freezeSlider->getValue();
        //[/UserSliderCode_freezeSlider]
    }
    else if (sliderThatWasMoved == sizeSlider)
    {
        //[UserSliderCode_sizeSlider] -- add your slider handling code here..
        params.roomSize = sizeSlider->getValue();
        //[/UserSliderCode_sizeSlider]
    }
    else if (sliderThatWasMoved == widthSlider)
    {
        //[UserSliderCode_widthSlider] -- add your slider handling code here..
        params.width = widthSlider->getValue();
        //[/UserSliderCode_widthSlider]
    }
    else if (sliderThatWasMoved == wetSlider)
    {
        //[UserSliderCode_wetSlider] -- add your slider handling code here..
        params.wetLevel = wetSlider->getValue();
        //[/UserSliderCode_wetSlider]
    }
    else if (sliderThatWasMoved == drySlider)
    {
        //[UserSliderCode_drySlider] -- add your slider handling code here..
        params.dryLevel = drySlider->getValue();
        //[/UserSliderCode_drySlider]
    }
    else if (sliderThatWasMoved == delayTimeLeftSlider)
    {
        //[UserSliderCode_delayTimeLeftSlider] -- add your slider handling code here..
        processor->getLeftDelay()->setDelay(delayTimeLeftSlider->getValue() * 1000);
        // processor->getLeftDelay()->resetDelay();
        //[/UserSliderCode_delayTimeLeftSlider]
    }
    else if (sliderThatWasMoved == delayTimeRightSlider)
    {
        //[UserSliderCode_delayTimeRightSlider] -- add your slider handling code here..
        processor->getRightDelay()->setDelay(delayTimeRightSlider->getValue() * 1000);
        Logger::getCurrentLogger()->writeToLog(String(processor->getRightDelay()->getDelayTimeMS()));
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayTimeRightSlider]
    }
    else if (sliderThatWasMoved == delayFBLeftSlider)
    {
        //[UserSliderCode_delayFBLeftSlider] -- add your slider handling code here..
        processor->getLeftDelay()->setFeedback(delayFBLeftSlider->getValue());
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayFBLeftSlider]
    }
    else if (sliderThatWasMoved == delayFBRightSlider)
    {
        //[UserSliderCode_delayFBRightSlider] -- add your slider handling code here..
        processor->getRightDelay()->setFeedback(delayFBRightSlider->getValue());
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayFBRightSlider]
    }
    else if (sliderThatWasMoved == delayMixLeftSlider)
    {
        //[UserSliderCode_delayMixLeftSlider] -- add your slider handling code here..
        processor->getLeftDelay()->setMix(delayMixLeftSlider->getValue());;
        //[/UserSliderCode_delayMixLeftSlider]
    }
    else if (sliderThatWasMoved == delayMixRightSlider)
    {
        //[UserSliderCode_delayMixRightSlider] -- add your slider handling code here..
        processor->getRightDelay()->setMix(delayMixRightSlider->getValue());
        //[/UserSliderCode_delayMixRightSlider]
    }
    else if (sliderThatWasMoved == driveSlider)
    {
        //[UserSliderCode_driveSlider] -- add your slider handling code here..
        processor->getDistortion()->controls.drive = driveSlider->getValue();
        //[/UserSliderCode_driveSlider]
    }
    else if (sliderThatWasMoved == mixSlider)
    {
        //[UserSliderCode_mixSlider] -- add your slider handling code here..
        processor->getDistortion()->controls.mix = driveSlider->getValue();
        //[/UserSliderCode_mixSlider]
    }

    //[UsersliderValueChanged_Post]
    processor->getReverb()->setParameters(params);
    //[/UsersliderValueChanged_Post]
}

void FXPanel::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == enableReverbButton)
    {
        //[UserButtonCode_enableReverbButton] -- add your button handler code here..
        processor->setFxReverbEnabled(enableReverbButton->getToggleState());
        //[/UserButtonCode_enableReverbButton]
    }
    else if (buttonThatWasClicked == enableDelayButton)
    {
        //[UserButtonCode_enableDelayButton] -- add your button handler code here..
        processor->setFxDelayEnabled(enableDelayButton->getToggleState());
        //[/UserButtonCode_enableDelayButton]
    }
    else if (buttonThatWasClicked == enableDistButton)
    {
        //[UserButtonCode_enableDistButton] -- add your button handler code here..
        processor->setFxDistEnabled(enableDistButton->getToggleState());
        //[/UserButtonCode_enableDistButton]
    }
    else if (buttonThatWasClicked == enableSeqButton)
    {
        //[UserButtonCode_enableSeqButton] -- add your button handler code here..
        processor->getSequencer()->setEnabled(enableSeqButton->getToggleState());
        //[/UserButtonCode_enableSeqButton]
    }
    else if (buttonThatWasClicked == stepButton1)
    {
        //[UserButtonCode_stepButton1] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(0, stepButton1->getToggleState());
        //[/UserButtonCode_stepButton1]
    }
    else if (buttonThatWasClicked == stepButton2)
    {
        //[UserButtonCode_stepButton2] -- add your button handler code here..
       processor->getSequencer()->setStepEnabled(1, stepButton2->getToggleState());
        //[/UserButtonCode_stepButton2]
    }
    else if (buttonThatWasClicked == stepButton3)
    {
        //[UserButtonCode_stepButton3] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(2, stepButton3->getToggleState());
        //[/UserButtonCode_stepButton3]
    }
    else if (buttonThatWasClicked == stepButton4)
    {
        //[UserButtonCode_stepButton4] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(3, stepButton4->getToggleState());

        //[/UserButtonCode_stepButton4]
    }
    else if (buttonThatWasClicked == stepButton5)
    {
        //[UserButtonCode_stepButton5] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(4, stepButton5->getToggleState());

        //[/UserButtonCode_stepButton5]
    }
    else if (buttonThatWasClicked == stepButton6)
    {
        //[UserButtonCode_stepButton6] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(5, stepButton6->getToggleState());
        //[/UserButtonCode_stepButton6]
    }
    else if (buttonThatWasClicked == stepButton7)
    {
        //[UserButtonCode_stepButton7] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(6, stepButton7->getToggleState());

        //[/UserButtonCode_stepButton7]
    }
    else if (buttonThatWasClicked == stepButton8)
    {
        //[UserButtonCode_stepButton8] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(7, stepButton8->getToggleState());

        //[/UserButtonCode_stepButton8]
    }
    else if (buttonThatWasClicked == stepButton9)
    {
        //[UserButtonCode_stepButton9] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(8, stepButton9->getToggleState());

        //[/UserButtonCode_stepButton9]
    }
    else if (buttonThatWasClicked == stepButton10)
    {
        //[UserButtonCode_stepButton10] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(9, stepButton10->getToggleState());
        //[/UserButtonCode_stepButton10]
    }
    else if (buttonThatWasClicked == stepButton11)
    {
        //[UserButtonCode_stepButton11] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(10, stepButton11->getToggleState());
        //[/UserButtonCode_stepButton11]
    }
    else if (buttonThatWasClicked == stepButton12)
    {
        //[UserButtonCode_stepButton12] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(11, stepButton12->getToggleState());
        //[/UserButtonCode_stepButton12]
    }
    else if (buttonThatWasClicked == stepButton13)
    {
        //[UserButtonCode_stepButton13] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(12, stepButton13->getToggleState());
        //[/UserButtonCode_stepButton13]
    }
    else if (buttonThatWasClicked == stepButton14)
    {
        //[UserButtonCode_stepButton14] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(13, stepButton14->getToggleState());
        //[/UserButtonCode_stepButton14]
    }
    else if (buttonThatWasClicked == stepButton15)
    {
        //[UserButtonCode_stepButton15] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(14, stepButton15->getToggleState());
        //[/UserButtonCode_stepButton15]
    }
    else if (buttonThatWasClicked == stepButton16)
    {
        //[UserButtonCode_stepButton16] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(15, stepButton16->getToggleState());
        //[/UserButtonCode_stepButton16]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void FXPanel::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == modeCombo)
    {
        //[UserComboBoxCode_modeCombo] -- add your combo box handling code here..
        processor->getDistortion()->controls.mode = modeCombo->getSelectedId();
        //[/UserComboBoxCode_modeCombo]
    }
    else if (comboBoxThatHasChanged == octavesCombo)
    {
        //[UserComboBoxCode_octavesCombo] -- add your combo box handling code here..
        processor->getSequencer()->setNumOctaves(octavesCombo->getText().getIntValue());
        //[/UserComboBoxCode_octavesCombo]
    }
    else if (comboBoxThatHasChanged == notesCombo)
    {
        //[UserComboBoxCode_notesCombo] -- add your combo box handling code here..
        processor->getSequencer()->setRaster(notesCombo->getText().getIntValue());
        //[/UserComboBoxCode_notesCombo]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void FXPanel::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    /*
    if (e.mods.isLeftButtonDown()) {
        TextEditor* t = static_cast<TextEditor*>(e.eventComponent);
        if (t->getName() == "note1") {
            int item = popup->show();
            t->setText(items.at(item-1));
        }
    }
     */

    //[/UserCode_mouseDown]
}

void FXPanel::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    TextEditor* t = static_cast<TextEditor*>(e.eventComponent);

    int oldval = (int)t->getTextValue().toString().getFloatValue();
    int value = - e.getDistanceFromDragStartY() / 10;

    if (value + oldval >= 0 && value + oldval <= 127) {
        t->setText(String(value + oldval));
    }

    if (t->getName() == "note1") {
        int step = t->getComponentID().getIntValue();
        int offset = t->getTextValue().toString().getIntValue();
        processor->getSequencer()->setOffset(step,offset);
    }
    /*
    else if (t->getName() == "vel1") {

    }
     */

    //[/UserCode_mouseDrag]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void FXPanel::changeListenerCallback(juce::ChangeBroadcaster *source) {
    
    
    for (int i = 0; i < this->processor->getSequencer()->getSteps().size();i++) {
        stepButtons.at(i)->setToggleState(this->processor->getSequencer()->getSteps().at(i), juce::NotificationType::dontSendNotification);
    }
    for (int i = 0; i < 16;i++) {
        int offset = this->processor->getSequencer()->getOffsetAt(i);
        offsetFields.at(i)->setText(String(offset), false);
    }
    for (int i = 0; i < 16;i++) {
        int velocity = this->processor->getSequencer()->getVelocityAt(i);
        velocityFields.at(i)->setText(String(velocity),false);
    }
    octavesCombo->setText(String(this->processor->getSequencer()->getNumOctaves()));
    notesCombo->setText(String(this->processor->getSequencer()->getRaster()));
    enableSeqButton->setToggleState(this->processor->getSequencer()->isEnabled(), juce::NotificationType::dontSendNotification);
    
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="FXPanel" componentName=""
                 parentClasses="public Component" constructorParams="TrioAudioProcessor* p"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="910" initialHeight="600">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 910 600" resource="fx_panel_png" opacity="1" mode="0"/>
  </BACKGROUND>
  <SLIDER name="dampSlider" id="b826c2541264d4fa" memberName="dampSlider"
          virtualName="" explicitFocusOrder="0" pos="25 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="freezeSlider" id="b69b0c1377d40574" memberName="freezeSlider"
          virtualName="" explicitFocusOrder="0" pos="92 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="sizeSlider" id="ced39f993ceb1166" memberName="sizeSlider"
          virtualName="" explicitFocusOrder="0" pos="159 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="widthSlider" id="9e84967676e4d764" memberName="widthSlider"
          virtualName="" explicitFocusOrder="0" pos="225 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="wetSlider" id="2ae1bcfd0e9e165" memberName="wetSlider"
          virtualName="" explicitFocusOrder="0" pos="291 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="drySlider" id="e1599158ba8f8e4a" memberName="drySlider"
          virtualName="" explicitFocusOrder="0" pos="358 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="enableReverbButton" id="e0c503b73b90520" memberName="enableReverbButton"
                virtualName="" explicitFocusOrder="0" pos="376 64 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <SLIDER name="delayTimeLeftSlider" id="8fe21bc37d6a94a9" memberName="delayTimeLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="475 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="enableDelayButton" id="e3d5c417258854cd" memberName="enableDelayButton"
                virtualName="" explicitFocusOrder="0" pos="832 64 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <SLIDER name="delayTimeRightSlider" id="4c083077d0bd49f6" memberName="delayTimeRightSlider"
          virtualName="" explicitFocusOrder="0" pos="542 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="delayFBLeftSlider" id="554d21dada798c8b" memberName="delayFBLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="608 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="delayFBRightSlider" id="40b6d0bb8595d8da" memberName="delayFBRightSlider"
          virtualName="" explicitFocusOrder="0" pos="675 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="delayMixLeftSlider" id="43d0918259355f3d" memberName="delayMixLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="738 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="delayMixRightSlider" id="43e2b34db49ee5ea" memberName="delayMixRightSlider"
          virtualName="" explicitFocusOrder="0" pos="808 96 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="driveSlider" id="b589cc15d635a996" memberName="driveSlider"
          virtualName="" explicitFocusOrder="0" pos="25 256 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="10" int="0.10000000000000000555" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="mixSlider" id="2f4d0926f2bbe1f0" memberName="mixSlider"
          virtualName="" explicitFocusOrder="0" pos="92 256 67 64" rotaryslideroutline="66fff8f8"
          min="0" max="1" int="0.010000000000000000208" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <COMBOBOX name="modeCombo" id="17f14059e267c560" memberName="modeCombo"
            virtualName="" explicitFocusOrder="0" pos="168 272 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="enableDistButton" id="7d07680e3e57306d" memberName="enableDistButton"
                virtualName="" explicitFocusOrder="0" pos="204 227 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="enableSeqButton" id="28fd42c0b4cac340" memberName="enableSeqButton"
                virtualName="" explicitFocusOrder="0" pos="832 392 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="399279df3c25523f" memberName="stepButton1"
                virtualName="" explicitFocusOrder="0" pos="200 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="6105a10df70880de" memberName="stepButton2"
                virtualName="" explicitFocusOrder="0" pos="232 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="7ca4ceb6cc6b7e3b" memberName="stepButton3"
                virtualName="" explicitFocusOrder="0" pos="264 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="346e2cfc71824461" memberName="stepButton4"
                virtualName="" explicitFocusOrder="0" pos="296 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="f63cbf2c845214ae" memberName="stepButton5"
                virtualName="" explicitFocusOrder="0" pos="328 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="bfa14419d441abd4" memberName="stepButton6"
                virtualName="" explicitFocusOrder="0" pos="360 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="c8b024292b4f536a" memberName="stepButton7"
                virtualName="" explicitFocusOrder="0" pos="392 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="2752843d91af060f" memberName="stepButton8"
                virtualName="" explicitFocusOrder="0" pos="424 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="14fed1c176a3251b" memberName="stepButton9"
                virtualName="" explicitFocusOrder="0" pos="456 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="93c4f88acc4a7ae2" memberName="stepButton10"
                virtualName="" explicitFocusOrder="0" pos="488 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="d93469fc40057961" memberName="stepButton11"
                virtualName="" explicitFocusOrder="0" pos="520 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="fb0bbbbefa8ef72f" memberName="stepButton12"
                virtualName="" explicitFocusOrder="0" pos="552 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="c4a99188b3a7c345" memberName="stepButton13"
                virtualName="" explicitFocusOrder="0" pos="584 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="20566a08a658f095" memberName="stepButton14"
                virtualName="" explicitFocusOrder="0" pos="616 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="3616bb59e3b4aeaa" memberName="stepButton15"
                virtualName="" explicitFocusOrder="0" pos="648 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="4b61324c906154f6" memberName="stepButton16"
                virtualName="" explicitFocusOrder="0" pos="680 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="new label" id="e8a10015ecd8f052" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="144 440 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Note" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="daf2bf1690d35bf3" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="144 472 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Vel" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTEDITOR name="note1" id="90ce893ec11d1321" memberName="note1" virtualName=""
              explicitFocusOrder="0" pos="200 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="eb547dad73dcac93" memberName="note2" virtualName=""
              explicitFocusOrder="0" pos="232 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="107f2b54ed369549" memberName="note3" virtualName=""
              explicitFocusOrder="0" pos="264 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="bf8d1bc40a59acca" memberName="note4" virtualName=""
              explicitFocusOrder="0" pos="296 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="119aacc149b1175" memberName="note5" virtualName=""
              explicitFocusOrder="0" pos="328 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="efbb02422d9c6af9" memberName="note6" virtualName=""
              explicitFocusOrder="0" pos="360 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="c9d8e036b67e80a" memberName="note7" virtualName=""
              explicitFocusOrder="0" pos="392 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="3e0bfaa4513716ec" memberName="note8" virtualName=""
              explicitFocusOrder="0" pos="424 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="5a942c376061e351" memberName="note9" virtualName=""
              explicitFocusOrder="0" pos="456 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="f79d9377c4ad17da" memberName="note10" virtualName=""
              explicitFocusOrder="0" pos="488 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="13c49dd9947b63a3" memberName="note11" virtualName=""
              explicitFocusOrder="0" pos="520 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="e6da41e9763a554d" memberName="note12" virtualName=""
              explicitFocusOrder="0" pos="552 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="b9e021c747bb5d93" memberName="note13" virtualName=""
              explicitFocusOrder="0" pos="584 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="4daf3234708c4b8f" memberName="note14" virtualName=""
              explicitFocusOrder="0" pos="616 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="39c973d1846d1f9a" memberName="note15" virtualName=""
              explicitFocusOrder="0" pos="648 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="c6a7cd1506a36d00" memberName="note16" virtualName=""
              explicitFocusOrder="0" pos="680 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ef1d8e7d20b14651" memberName="vel1" virtualName=""
              explicitFocusOrder="0" pos="200 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="1ca19df1b93b6ffd" memberName="vel2" virtualName=""
              explicitFocusOrder="0" pos="232 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="37c84e212c820c1f" memberName="vel3" virtualName=""
              explicitFocusOrder="0" pos="264 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="fa0abf27d80af56d" memberName="vel4" virtualName=""
              explicitFocusOrder="0" pos="296 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ea77e842a37ddd1a" memberName="vel5" virtualName=""
              explicitFocusOrder="0" pos="328 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="44a9e111d73c6964" memberName="vel6" virtualName=""
              explicitFocusOrder="0" pos="360 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ee609a9c5bbba1c5" memberName="vel7" virtualName=""
              explicitFocusOrder="0" pos="392 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="3ff1177c88b6f941" memberName="vel8" virtualName=""
              explicitFocusOrder="0" pos="424 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="4e4b1842f297113f" memberName="vel9" virtualName=""
              explicitFocusOrder="0" pos="456 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="bc458777e38b376d" memberName="vel10" virtualName=""
              explicitFocusOrder="0" pos="488 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="55febf15e7fbca59" memberName="vel11" virtualName=""
              explicitFocusOrder="0" pos="520 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="a64c22ee92c4002" memberName="vel12" virtualName=""
              explicitFocusOrder="0" pos="552 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="344faea266ade142" memberName="vel13" virtualName=""
              explicitFocusOrder="0" pos="584 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="427cd6bd629a8321" memberName="vel14" virtualName=""
              explicitFocusOrder="0" pos="616 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="c06857524da62db3" memberName="vel15" virtualName=""
              explicitFocusOrder="0" pos="648 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="701fff4c62bf4d14" memberName="vel16" virtualName=""
              explicitFocusOrder="0" pos="680 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <COMBOBOX name="octavesCombo" id="1f63ea09d37ce9fd" memberName="octavesCombo"
            virtualName="" explicitFocusOrder="0" pos="728 472 72 24" editable="0"
            layout="33" items="1&#10;2&#10;3" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="6ba6d979d890192a" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="728 440 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Octaves" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="notesCombo" id="4c2ae1bbe6e30e48" memberName="notesCombo"
            virtualName="" explicitFocusOrder="0" pos="56 472 72 24" editable="0"
            layout="33" items="4&#10;8&#10;16" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="a419e5a0d88a9703" memberName="notesLabel"
         virtualName="" explicitFocusOrder="0" pos="56 440 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Notes" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: fx_panel_png, 79951, "../fx_panel.jpg"
static const unsigned char resource_FXPanel_fx_panel_png[] = { 255,216,255,225,13,157,69,120,105,102,0,0,77,77,0,42,0,0,0,8,0,7,1,18,0,3,0,0,0,1,0,1,0,0,1,26,0,5,0,0,0,1,0,0,0,98,1,27,0,5,0,0,0,1,0,0,
0,106,1,40,0,3,0,0,0,1,0,2,0,0,1,49,0,2,0,0,0,38,0,0,0,114,1,50,0,2,0,0,0,20,0,0,0,152,135,105,0,4,0,0,0,1,0,0,0,172,0,0,0,216,0,10,252,128,0,0,39,16,0,10,252,128,0,0,39,16,65,100,111,98,101,32,80,104,
111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,0,50,48,49,54,58,49,49,58,50,55,32,50,48,58,50,53,58,52,49,0,0,3,160,1,0,3,0,0,0,1,0,1,0,0,160,2,0,4,
0,0,0,1,0,0,3,142,160,3,0,4,0,0,0,1,0,0,2,88,0,0,0,0,0,0,0,6,1,3,0,3,0,0,0,1,0,6,0,0,1,26,0,5,0,0,0,1,0,0,1,38,1,27,0,5,0,0,0,1,0,0,1,46,1,40,0,3,0,0,0,1,0,2,0,0,2,1,0,4,0,0,0,1,0,0,1,54,2,2,0,4,0,0,0,
1,0,0,12,95,0,0,0,0,0,0,0,72,0,0,0,1,0,0,0,72,0,0,0,1,255,216,255,237,0,12,65,100,111,98,101,95,67,77,0,1,255,238,0,14,65,100,111,98,101,0,100,128,0,0,0,1,255,219,0,132,0,12,8,8,8,9,8,12,9,9,12,17,11,
10,11,17,21,15,12,12,15,21,24,19,19,21,19,19,24,17,12,12,12,12,12,12,17,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,13,11,11,13,14,13,16,14,14,16,20,14,14,14,
20,20,14,14,14,14,20,17,12,12,12,12,12,17,17,12,12,12,12,12,12,17,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,105,0,159,3,1,34,0,2,17,1,3,17,1,
255,221,0,4,0,10,255,196,1,63,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,3,0,1,2,4,5,6,7,8,9,10,11,1,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,2,3,4,5,6,7,8,9,10,11,16,0,1,4,1,3,2,4,2,5,7,6,8,5,3,12,51,1,0,2,17,3,4,
33,18,49,5,65,81,97,19,34,113,129,50,6,20,145,161,177,66,35,36,21,82,193,98,51,52,114,130,209,67,7,37,146,83,240,225,241,99,115,53,22,162,178,131,38,68,147,84,100,69,194,163,116,54,23,210,85,226,101,242,
179,132,195,211,117,227,243,70,39,148,164,133,180,149,196,212,228,244,165,181,197,213,229,245,86,102,118,134,150,166,182,198,214,230,246,55,71,87,103,119,135,151,167,183,199,215,231,247,17,0,2,2,1,2,4,
4,3,4,5,6,7,7,6,5,53,1,0,2,17,3,33,49,18,4,65,81,97,113,34,19,5,50,129,145,20,161,177,66,35,193,82,209,240,51,36,98,225,114,130,146,67,83,21,99,115,52,241,37,6,22,162,178,131,7,38,53,194,210,68,147,84,
163,23,100,69,85,54,116,101,226,242,179,132,195,211,117,227,243,70,148,164,133,180,149,196,212,228,244,165,181,197,213,229,245,86,102,118,134,150,166,182,198,214,230,246,39,55,71,87,103,119,135,151,167,
183,199,255,218,0,12,3,1,0,2,17,3,17,0,63,0,231,250,57,250,174,105,172,117,150,185,175,22,216,45,125,110,126,227,86,198,250,27,88,211,233,238,245,221,103,246,43,255,0,62,89,76,250,170,220,43,189,27,103,
45,180,215,233,122,110,177,192,221,178,143,83,111,171,85,109,117,126,191,219,253,127,83,210,217,83,48,126,203,252,229,233,116,76,12,108,154,92,109,190,156,87,108,47,107,175,30,215,187,121,172,85,191,243,
61,158,229,162,58,54,30,225,187,168,224,134,238,13,37,164,184,128,78,205,225,142,166,191,163,244,254,159,208,77,214,205,119,61,127,244,20,233,90,246,236,226,213,139,208,95,143,83,172,234,14,170,247,176,
27,88,107,220,24,242,29,236,221,185,187,154,215,53,158,255,0,248,95,248,197,47,177,116,0,67,15,83,221,45,113,54,138,220,3,76,214,218,217,233,159,125,158,195,117,143,254,195,21,187,49,234,101,143,103,232,
236,216,226,221,236,0,177,208,99,125,110,45,110,230,59,243,20,125,42,191,116,125,195,251,146,245,120,127,140,127,239,85,233,254,67,255,0,66,106,140,30,130,118,131,213,160,196,184,250,46,34,103,232,143,
114,141,152,125,17,181,189,204,234,102,215,181,164,215,95,162,91,185,209,237,102,226,243,183,220,174,122,85,126,232,251,135,247,37,233,85,251,163,238,31,220,151,171,195,252,99,255,0,122,175,79,242,31,
250,19,131,184,120,132,242,60,66,221,244,170,253,209,247,15,238,75,210,171,247,71,220,63,185,58,229,216,127,141,255,0,160,34,135,115,246,127,232,78,20,143,16,148,131,194,221,244,170,253,209,247,15,238,
85,122,157,53,12,97,107,90,3,219,99,91,184,0,61,174,109,132,181,219,126,151,243,105,113,30,160,125,15,127,240,85,67,161,252,28,201,3,146,148,143,16,183,186,86,6,53,213,109,178,234,177,162,161,96,125,192,
67,156,118,123,55,125,63,240,155,253,190,167,232,217,250,58,85,219,186,62,61,117,89,107,51,112,175,244,90,92,230,86,233,121,218,90,207,209,55,211,247,238,115,217,233,238,244,247,255,0,214,210,226,39,80,
6,190,63,250,10,184,71,115,246,60,164,143,16,148,143,16,183,125,42,191,117,191,112,254,228,189,42,191,116,125,195,251,146,185,118,31,227,127,232,10,161,220,253,159,250,19,133,35,196,37,35,196,45,223,74,
175,221,31,112,254,228,189,42,191,116,125,195,251,146,185,118,31,227,127,232,10,161,220,253,159,250,19,133,35,196,37,35,196,45,223,74,175,221,31,112,254,228,189,42,191,116,125,195,251,146,185,118,31,227,
127,232,10,161,220,253,159,250,19,133,35,196,37,35,149,187,233,85,251,163,238,31,220,170,230,211,83,110,197,123,90,3,158,242,215,192,0,16,223,72,182,71,209,221,250,68,184,141,128,64,215,177,191,251,149,
80,173,15,224,255,0,255,208,231,122,127,244,74,254,7,254,174,197,101,3,165,183,126,61,76,46,12,221,62,231,104,7,186,206,85,219,49,93,91,11,253,106,44,13,32,22,215,102,231,123,184,134,199,187,249,72,14,
190,114,255,0,164,147,211,200,126,72,82,70,175,17,246,48,57,182,210,36,73,107,172,13,112,231,219,181,223,247,213,7,212,89,119,164,92,194,100,55,123,93,185,154,198,187,219,249,190,228,80,193,36,91,241,
221,76,23,62,183,135,18,7,166,240,254,59,187,111,209,83,175,9,214,49,175,23,208,208,230,151,67,236,135,54,14,221,175,102,221,205,122,74,107,164,165,93,101,246,182,173,205,97,115,182,239,121,134,15,229,
57,255,0,185,252,180,247,82,105,112,105,123,31,34,102,183,111,111,49,244,130,74,96,170,245,79,232,95,245,214,127,212,220,175,12,119,26,125,96,250,224,2,75,11,161,240,14,223,161,249,202,143,84,254,133,
255,0,93,103,253,77,200,29,190,177,255,0,165,21,127,3,255,0,69,46,55,244,122,255,0,168,207,250,134,34,168,224,214,44,170,182,151,182,191,209,180,131,97,134,206,218,253,187,191,55,148,107,105,53,9,245,
43,179,143,230,223,187,157,223,213,253,207,122,81,249,71,144,73,220,249,163,73,27,236,142,45,222,46,164,182,1,35,120,14,215,104,254,109,195,119,183,119,185,64,85,55,26,77,140,108,18,61,66,125,154,126,
112,112,31,69,255,0,152,138,24,36,167,109,70,167,109,46,107,185,135,48,238,7,107,156,207,251,234,159,217,191,70,44,245,170,50,210,237,155,189,195,104,107,189,61,177,252,227,189,79,111,246,210,82,20,145,
40,160,222,92,5,149,214,90,1,30,171,182,110,159,205,97,253,229,7,176,176,128,96,200,145,180,200,73,75,42,185,223,206,97,255,0,198,191,255,0,68,45,27,49,13,115,250,122,30,3,92,224,89,102,233,219,183,216,
221,3,183,251,253,159,191,250,69,157,157,252,230,31,252,107,255,0,244,66,29,99,231,255,0,114,174,133,255,209,229,48,190,218,42,253,21,173,174,183,18,90,215,180,63,95,162,75,119,53,219,55,109,254,218,177,
254,82,255,0,79,86,159,240,45,255,0,200,43,29,15,50,204,60,125,245,178,187,13,140,44,34,214,239,0,122,142,124,134,203,127,113,104,191,172,216,224,0,194,194,105,111,208,112,160,75,79,59,198,231,59,222,
231,251,253,233,188,32,217,241,61,35,223,251,169,186,175,33,214,78,52,117,35,254,26,163,255,0,89,111,254,65,62,222,167,254,154,175,251,101,191,249,5,171,145,213,29,145,93,140,118,38,35,13,156,218,202,
162,193,199,208,179,113,219,183,106,166,151,0,239,248,67,254,245,92,95,202,229,255,0,124,214,219,212,255,0,211,85,255,0,108,183,255,0,32,161,105,234,117,214,235,61,74,158,24,55,56,10,152,12,15,164,225,
186,191,118,213,113,66,255,0,232,215,255,0,197,89,255,0,82,228,12,64,4,246,240,143,253,234,111,249,92,156,207,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,5,85,36,254,
24,246,11,56,143,114,218,253,167,155,251,204,255,0,182,171,255,0,200,33,223,149,145,144,26,45,124,181,178,90,208,208,209,39,243,182,176,55,220,130,146,60,35,176,85,158,229,177,86,118,93,85,138,216,241,
177,191,68,57,141,116,15,221,14,123,92,237,170,95,180,243,127,125,159,246,213,127,249,5,85,36,184,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,
5,85,36,56,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,5,85,36,184,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,
127,121,159,246,213,127,249,5,85,36,184,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,21,153,89,22,218,203,108,126,231,215,27,61,160,52,65,221,165,109,27,62,151,210,66,73,17,16,54,1,
86,123,191,255,210,231,122,127,244,74,254,7,254,174,197,101,82,233,217,216,180,85,88,181,237,107,170,116,236,176,56,181,195,115,159,249,141,127,239,109,123,85,203,122,183,78,181,155,65,197,168,204,239,
173,150,181,221,253,154,181,205,219,175,238,160,52,189,14,231,167,138,123,106,54,29,87,73,53,29,95,167,210,199,176,187,26,240,242,12,218,203,11,132,127,163,123,88,199,49,3,237,184,49,31,105,103,17,48,
249,255,0,207,73,95,129,251,10,43,196,125,173,133,11,255,0,163,95,255,0,21,103,253,75,145,95,214,250,115,216,230,150,225,180,185,187,125,70,215,107,92,60,30,216,110,223,81,82,200,207,195,251,61,173,101,
205,177,239,99,152,214,180,59,151,13,187,156,94,198,55,107,82,58,130,40,234,59,20,141,247,31,107,148,146,82,60,66,82,60,66,125,44,82,73,72,241,9,72,241,9,82,148,146,82,60,66,82,60,66,84,165,36,148,143,
16,148,143,16,149,41,73,37,35,196,37,35,196,37,74,82,73,72,241,9,72,241,9,82,148,146,82,60,66,82,57,73,79,255,211,231,250,38,30,37,236,253,98,246,98,135,49,238,245,108,110,240,94,215,57,181,212,118,135,
88,221,219,127,49,191,245,181,168,122,63,78,1,167,246,166,22,215,18,1,217,103,230,152,250,62,150,255,0,243,150,79,78,254,136,207,237,127,213,216,172,166,136,131,118,1,214,91,143,235,38,200,170,39,97,249,
54,143,75,233,192,56,254,209,197,59,68,128,43,124,187,249,12,111,167,244,255,0,175,236,255,0,193,125,42,66,170,227,232,1,242,31,220,166,146,60,49,253,209,246,43,136,247,63,107,15,74,175,221,31,112,254,
228,189,42,191,116,125,195,251,148,210,75,134,63,186,62,197,113,30,231,237,97,233,85,251,163,238,31,220,151,165,87,238,143,184,127,114,154,73,112,199,247,71,216,174,35,220,253,172,61,42,191,116,125,195,
251,146,244,170,253,209,247,15,238,83,73,46,24,254,232,251,21,196,123,159,181,135,165,87,238,143,184,127,114,94,149,95,186,62,225,253,202,105,37,195,31,221,31,98,184,143,115,246,176,244,170,253,209,247,
15,238,75,210,171,247,71,220,63,185,77,36,184,99,251,163,236,87,17,238,126,214,30,149,95,186,62,225,253,201,122,85,126,232,251,135,247,41,164,151,12,127,116,125,138,226,61,207,218,195,210,171,247,71,220,
63,185,47,74,175,221,31,112,254,229,52,146,225,143,238,143,177,92,71,185,251,88,122,85,126,232,251,135,247,42,185,180,212,219,177,94,214,128,231,188,181,240,0,4,55,210,45,145,244,119,126,145,93,85,115,
191,156,195,255,0,141,127,254,136,66,128,34,128,26,244,30,10,36,144,108,219,255,212,231,122,119,244,70,127,107,254,174,197,101,98,211,153,147,67,75,42,120,12,38,118,185,173,112,159,22,250,141,118,212,
79,218,121,191,190,207,251,106,191,252,130,21,33,123,110,78,253,213,99,77,246,14,178,75,39,246,158,111,239,179,254,218,175,255,0,32,151,237,60,223,223,103,253,181,95,254,65,31,87,97,246,170,199,139,172,
146,201,253,167,155,251,236,255,0,182,171,255,0,200,37,251,79,55,247,217,255,0,109,87,255,0,144,75,213,216,125,170,177,226,235,36,178,127,105,230,254,251,63,237,170,255,0,242,9,126,211,205,253,246,127,
219,85,255,0,228,18,245,118,31,106,172,120,186,201,44,159,218,121,191,190,207,251,106,191,252,130,95,180,243,127,125,159,246,213,127,249,4,189,93,135,218,171,30,46,178,75,39,246,158,111,239,179,254,218,
175,255,0,32,151,237,60,223,223,103,253,181,95,254,65,47,87,97,246,170,199,139,172,146,201,253,167,155,251,236,255,0,182,171,255,0,200,37,251,79,55,247,217,255,0,109,87,255,0,144,75,213,216,125,170,177,
226,235,36,178,127,105,230,254,251,63,237,170,255,0,242,9,126,211,205,253,246,127,219,85,255,0,228,18,245,118,31,106,172,120,186,201,44,159,218,121,191,190,207,251,106,191,252,130,95,180,243,127,125,159,
246,213,127,249,4,189,93,135,218,171,30,46,178,171,157,244,240,255,0,227,95,255,0,162,21,63,218,121,191,190,207,251,106,191,252,130,21,153,89,22,218,203,108,126,231,215,27,61,160,52,65,221,165,109,27,
62,151,210,66,141,141,180,85,138,47,255,213,225,146,73,36,229,170,73,36,146,82,146,73,36,148,164,146,73,37,41,36,146,73,74,73,36,146,82,146,73,36,148,164,146,73,37,41,36,146,73,74,73,36,146,83,255,217,
255,237,23,254,80,104,111,116,111,115,104,111,112,32,51,46,48,0,56,66,73,77,4,4,0,0,0,0,0,47,28,1,90,0,3,27,37,71,28,1,90,0,3,27,37,71,28,1,90,0,3,27,37,71,28,1,90,0,3,27,37,71,28,1,90,0,3,27,37,71,28,
2,0,0,2,0,0,0,56,66,73,77,4,37,0,0,0,0,0,16,110,179,114,222,249,255,118,195,208,220,34,72,191,43,125,211,56,66,73,77,4,58,0,0,0,0,1,43,0,0,0,16,0,0,0,1,0,0,0,0,0,11,112,114,105,110,116,79,117,116,112,
117,116,0,0,0,5,0,0,0,0,80,115,116,83,98,111,111,108,1,0,0,0,0,73,110,116,101,101,110,117,109,0,0,0,0,73,110,116,101,0,0,0,0,67,108,114,109,0,0,0,15,112,114,105,110,116,83,105,120,116,101,101,110,66,105,
116,98,111,111,108,0,0,0,0,11,112,114,105,110,116,101,114,78,97,109,101,84,69,88,84,0,0,0,30,0,69,0,80,0,83,0,79,0,78,0,32,0,69,0,112,0,115,0,111,0,110,0,32,0,83,0,116,0,121,0,108,0,117,0,115,0,32,0,80,
0,104,0,111,0,116,0,111,0,32,0,49,0,53,0,48,0,48,0,0,0,0,0,15,112,114,105,110,116,80,114,111,111,102,83,101,116,117,112,79,98,106,99,0,0,0,18,0,80,0,114,0,111,0,111,0,102,0,45,0,69,0,105,0,110,0,115,0,
116,0,101,0,108,0,108,0,117,0,110,0,103,0,0,0,0,0,10,112,114,111,111,102,83,101,116,117,112,0,0,0,1,0,0,0,0,66,108,116,110,101,110,117,109,0,0,0,12,98,117,105,108,116,105,110,80,114,111,111,102,0,0,0,
9,112,114,111,111,102,67,77,89,75,0,56,66,73,77,4,59,0,0,0,0,2,45,0,0,0,16,0,0,0,1,0,0,0,0,0,18,112,114,105,110,116,79,117,116,112,117,116,79,112,116,105,111,110,115,0,0,0,23,0,0,0,0,67,112,116,110,98,
111,111,108,0,0,0,0,0,67,108,98,114,98,111,111,108,0,0,0,0,0,82,103,115,77,98,111,111,108,0,0,0,0,0,67,114,110,67,98,111,111,108,0,0,0,0,0,67,110,116,67,98,111,111,108,0,0,0,0,0,76,98,108,115,98,111,111,
108,0,0,0,0,0,78,103,116,118,98,111,111,108,0,0,0,0,0,69,109,108,68,98,111,111,108,0,0,0,0,0,73,110,116,114,98,111,111,108,0,0,0,0,0,66,99,107,103,79,98,106,99,0,0,0,1,0,0,0,0,0,0,82,71,66,67,0,0,0,3,
0,0,0,0,82,100,32,32,100,111,117,98,64,111,224,0,0,0,0,0,0,0,0,0,71,114,110,32,100,111,117,98,64,111,224,0,0,0,0,0,0,0,0,0,66,108,32,32,100,111,117,98,64,111,224,0,0,0,0,0,0,0,0,0,66,114,100,84,85,110,
116,70,35,82,108,116,0,0,0,0,0,0,0,0,0,0,0,0,66,108,100,32,85,110,116,70,35,82,108,116,0,0,0,0,0,0,0,0,0,0,0,0,82,115,108,116,85,110,116,70,35,80,120,108,64,82,0,0,0,0,0,0,0,0,0,10,118,101,99,116,111,
114,68,97,116,97,98,111,111,108,1,0,0,0,0,80,103,80,115,101,110,117,109,0,0,0,0,80,103,80,115,0,0,0,0,80,103,80,67,0,0,0,0,76,101,102,116,85,110,116,70,35,82,108,116,0,0,0,0,0,0,0,0,0,0,0,0,84,111,112,
32,85,110,116,70,35,82,108,116,0,0,0,0,0,0,0,0,0,0,0,0,83,99,108,32,85,110,116,70,35,80,114,99,64,89,0,0,0,0,0,0,0,0,0,16,99,114,111,112,87,104,101,110,80,114,105,110,116,105,110,103,98,111,111,108,0,
0,0,0,14,99,114,111,112,82,101,99,116,66,111,116,116,111,109,108,111,110,103,0,0,0,0,0,0,0,12,99,114,111,112,82,101,99,116,76,101,102,116,108,111,110,103,0,0,0,0,0,0,0,13,99,114,111,112,82,101,99,116,
82,105,103,104,116,108,111,110,103,0,0,0,0,0,0,0,11,99,114,111,112,82,101,99,116,84,111,112,108,111,110,103,0,0,0,0,0,56,66,73,77,3,237,0,0,0,0,0,16,0,72,0,0,0,1,0,2,0,72,0,0,0,1,0,2,56,66,73,77,4,38,
0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,63,128,0,0,56,66,73,77,3,242,0,0,0,0,0,10,0,0,255,255,255,255,255,255,0,0,56,66,73,77,4,13,0,0,0,0,0,4,0,0,0,121,56,66,73,77,4,25,0,0,0,0,0,4,0,0,0,30,56,66,73,77,3,243,
0,0,0,0,0,9,0,0,0,0,0,0,0,0,1,0,56,66,73,77,39,16,0,0,0,0,0,10,0,1,0,0,0,0,0,0,0,2,56,66,73,77,3,245,0,0,0,0,0,72,0,47,102,102,0,1,0,108,102,102,0,6,0,0,0,0,0,1,0,47,102,102,0,1,0,161,153,154,0,6,0,0,
0,0,0,1,0,50,0,0,0,1,0,90,0,0,0,6,0,0,0,0,0,1,0,53,0,0,0,1,0,45,0,0,0,6,0,0,0,0,0,1,56,66,73,77,3,248,0,0,0,0,0,112,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,3,232,0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,3,232,0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,3,232,0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,3,232,0,0,56,66,73,77,4,0,0,0,0,0,0,2,0,144,56,66,73,77,4,2,0,0,0,0,1,38,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,66,73,77,4,48,0,0,0,0,0,
147,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,56,66,73,77,4,45,0,0,0,0,0,6,0,1,0,0,1,174,56,66,73,77,4,8,0,0,0,0,0,51,0,0,0,1,0,0,2,64,0,0,2,64,0,
0,0,7,0,0,1,225,1,0,0,19,225,1,0,0,36,59,0,0,0,1,160,0,0,0,73,159,1,0,0,112,32,0,0,0,51,37,0,0,56,66,73,77,4,30,0,0,0,0,0,4,0,0,0,0,56,66,73,77,4,26,0,0,0,0,3,59,0,0,0,6,0,0,0,0,0,0,0,0,0,0,2,88,0,0,3,
142,0,0,0,3,0,103,0,117,0,105,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,142,0,0,2,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,1,0,0,
0,0,0,0,110,117,108,108,0,0,0,2,0,0,0,6,98,111,117,110,100,115,79,98,106,99,0,0,0,1,0,0,0,0,0,0,82,99,116,49,0,0,0,4,0,0,0,0,84,111,112,32,108,111,110,103,0,0,0,0,0,0,0,0,76,101,102,116,108,111,110,103,
0,0,0,0,0,0,0,0,66,116,111,109,108,111,110,103,0,0,2,88,0,0,0,0,82,103,104,116,108,111,110,103,0,0,3,142,0,0,0,6,115,108,105,99,101,115,86,108,76,115,0,0,0,1,79,98,106,99,0,0,0,1,0,0,0,0,0,5,115,108,105,
99,101,0,0,0,18,0,0,0,7,115,108,105,99,101,73,68,108,111,110,103,0,0,0,0,0,0,0,7,103,114,111,117,112,73,68,108,111,110,103,0,0,0,0,0,0,0,6,111,114,105,103,105,110,101,110,117,109,0,0,0,12,69,83,108,105,
99,101,79,114,105,103,105,110,0,0,0,13,97,117,116,111,71,101,110,101,114,97,116,101,100,0,0,0,0,84,121,112,101,101,110,117,109,0,0,0,10,69,83,108,105,99,101,84,121,112,101,0,0,0,0,73,109,103,32,0,0,0,
6,98,111,117,110,100,115,79,98,106,99,0,0,0,1,0,0,0,0,0,0,82,99,116,49,0,0,0,4,0,0,0,0,84,111,112,32,108,111,110,103,0,0,0,0,0,0,0,0,76,101,102,116,108,111,110,103,0,0,0,0,0,0,0,0,66,116,111,109,108,111,
110,103,0,0,2,88,0,0,0,0,82,103,104,116,108,111,110,103,0,0,3,142,0,0,0,3,117,114,108,84,69,88,84,0,0,0,1,0,0,0,0,0,0,110,117,108,108,84,69,88,84,0,0,0,1,0,0,0,0,0,0,77,115,103,101,84,69,88,84,0,0,0,1,
0,0,0,0,0,6,97,108,116,84,97,103,84,69,88,84,0,0,0,1,0,0,0,0,0,14,99,101,108,108,84,101,120,116,73,115,72,84,77,76,98,111,111,108,1,0,0,0,8,99,101,108,108,84,101,120,116,84,69,88,84,0,0,0,1,0,0,0,0,0,
9,104,111,114,122,65,108,105,103,110,101,110,117,109,0,0,0,15,69,83,108,105,99,101,72,111,114,122,65,108,105,103,110,0,0,0,7,100,101,102,97,117,108,116,0,0,0,9,118,101,114,116,65,108,105,103,110,101,110,
117,109,0,0,0,15,69,83,108,105,99,101,86,101,114,116,65,108,105,103,110,0,0,0,7,100,101,102,97,117,108,116,0,0,0,11,98,103,67,111,108,111,114,84,121,112,101,101,110,117,109,0,0,0,17,69,83,108,105,99,101,
66,71,67,111,108,111,114,84,121,112,101,0,0,0,0,78,111,110,101,0,0,0,9,116,111,112,79,117,116,115,101,116,108,111,110,103,0,0,0,0,0,0,0,10,108,101,102,116,79,117,116,115,101,116,108,111,110,103,0,0,0,
0,0,0,0,12,98,111,116,116,111,109,79,117,116,115,101,116,108,111,110,103,0,0,0,0,0,0,0,11,114,105,103,104,116,79,117,116,115,101,116,108,111,110,103,0,0,0,0,0,56,66,73,77,4,40,0,0,0,0,0,12,0,0,0,2,63,
240,0,0,0,0,0,0,56,66,73,77,4,20,0,0,0,0,0,4,0,0,1,174,56,66,73,77,4,12,0,0,0,0,12,123,0,0,0,1,0,0,0,159,0,0,0,105,0,0,1,224,0,0,196,224,0,0,12,95,0,24,0,1,255,216,255,237,0,12,65,100,111,98,101,95,67,
77,0,1,255,238,0,14,65,100,111,98,101,0,100,128,0,0,0,1,255,219,0,132,0,12,8,8,8,9,8,12,9,9,12,17,11,10,11,17,21,15,12,12,15,21,24,19,19,21,19,19,24,17,12,12,12,12,12,12,17,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,13,11,11,13,14,13,16,14,14,16,20,14,14,14,20,20,14,14,14,14,20,17,12,12,12,12,12,17,17,12,12,12,12,12,12,17,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,105,0,159,3,1,34,0,2,17,1,3,17,1,255,221,0,4,0,10,255,196,1,63,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,3,0,1,2,4,5,6,7,8,9,10,11,1,0,1,5,1,
1,1,1,1,1,0,0,0,0,0,0,0,1,0,2,3,4,5,6,7,8,9,10,11,16,0,1,4,1,3,2,4,2,5,7,6,8,5,3,12,51,1,0,2,17,3,4,33,18,49,5,65,81,97,19,34,113,129,50,6,20,145,161,177,66,35,36,21,82,193,98,51,52,114,130,209,67,7,37,
146,83,240,225,241,99,115,53,22,162,178,131,38,68,147,84,100,69,194,163,116,54,23,210,85,226,101,242,179,132,195,211,117,227,243,70,39,148,164,133,180,149,196,212,228,244,165,181,197,213,229,245,86,102,
118,134,150,166,182,198,214,230,246,55,71,87,103,119,135,151,167,183,199,215,231,247,17,0,2,2,1,2,4,4,3,4,5,6,7,7,6,5,53,1,0,2,17,3,33,49,18,4,65,81,97,113,34,19,5,50,129,145,20,161,177,66,35,193,82,209,
240,51,36,98,225,114,130,146,67,83,21,99,115,52,241,37,6,22,162,178,131,7,38,53,194,210,68,147,84,163,23,100,69,85,54,116,101,226,242,179,132,195,211,117,227,243,70,148,164,133,180,149,196,212,228,244,
165,181,197,213,229,245,86,102,118,134,150,166,182,198,214,230,246,39,55,71,87,103,119,135,151,167,183,199,255,218,0,12,3,1,0,2,17,3,17,0,63,0,231,250,57,250,174,105,172,117,150,185,175,22,216,45,125,
110,126,227,86,198,250,27,88,211,233,238,245,221,103,246,43,255,0,62,89,76,250,170,220,43,189,27,103,45,180,215,233,122,110,177,192,221,178,143,83,111,171,85,109,117,126,191,219,253,127,83,210,217,83,
48,126,203,252,229,233,116,76,12,108,154,92,109,190,156,87,108,47,107,175,30,215,187,121,172,85,191,243,61,158,229,162,58,54,30,225,187,168,224,134,238,13,37,164,184,128,78,205,225,142,166,191,163,244,
254,159,208,77,214,205,119,61,127,244,20,233,90,246,236,226,213,139,208,95,143,83,172,234,14,170,247,176,27,88,107,220,24,242,29,236,221,185,187,154,215,53,158,255,0,248,95,248,197,47,177,116,0,67,15,
83,221,45,113,54,138,220,3,76,214,218,217,233,159,125,158,195,117,143,254,195,21,187,49,234,101,143,103,232,236,216,226,221,236,0,177,208,99,125,110,45,110,230,59,243,20,125,42,191,116,125,195,251,146,
245,120,127,140,127,239,85,233,254,67,255,0,66,106,140,30,130,118,131,213,160,196,184,250,46,34,103,232,143,114,141,152,125,17,181,189,204,234,102,215,181,164,215,95,162,91,185,209,237,102,226,243,183,
220,174,122,85,126,232,251,135,247,37,233,85,251,163,238,31,220,151,171,195,252,99,255,0,122,175,79,242,31,250,19,131,184,120,132,242,60,66,221,244,170,253,209,247,15,238,75,210,171,247,71,220,63,185,
58,229,216,127,141,255,0,160,34,135,115,246,127,232,78,20,143,16,148,131,194,221,244,170,253,209,247,15,238,85,122,157,53,12,97,107,90,3,219,99,91,184,0,61,174,109,132,181,219,126,151,243,105,113,30,160,
125,15,127,240,85,67,161,252,28,201,3,146,148,143,16,183,186,86,6,53,213,109,178,234,177,162,161,96,125,192,67,156,118,123,55,125,63,240,155,253,190,167,232,217,250,58,85,219,186,62,61,117,89,107,51,112,
175,244,90,92,230,86,233,121,218,90,207,209,55,211,247,238,115,217,233,238,244,247,255,0,214,210,226,39,80,6,190,63,250,10,184,71,115,246,60,164,143,16,148,143,16,183,125,42,191,117,191,112,254,228,189,
42,191,116,125,195,251,146,185,118,31,227,127,232,10,161,220,253,159,250,19,133,35,196,37,35,196,45,223,74,175,221,31,112,254,228,189,42,191,116,125,195,251,146,185,118,31,227,127,232,10,161,220,253,159,
250,19,133,35,196,37,35,196,45,223,74,175,221,31,112,254,228,189,42,191,116,125,195,251,146,185,118,31,227,127,232,10,161,220,253,159,250,19,133,35,196,37,35,149,187,233,85,251,163,238,31,220,170,230,
211,83,110,197,123,90,3,158,242,215,192,0,16,223,72,182,71,209,221,250,68,184,141,128,64,215,177,191,251,149,80,173,15,224,255,0,255,208,231,122,127,244,74,254,7,254,174,197,101,3,165,183,126,61,76,46,
12,221,62,231,104,7,186,206,85,219,49,93,91,11,253,106,44,13,32,22,215,102,231,123,184,134,199,187,249,72,14,190,114,255,0,164,147,211,200,126,72,82,70,175,17,246,48,57,182,210,36,73,107,172,13,112,231,
219,181,223,247,213,7,212,89,119,164,92,194,100,55,123,93,185,154,198,187,219,249,190,228,80,193,36,91,241,221,76,23,62,183,135,18,7,166,240,254,59,187,111,209,83,175,9,214,49,175,23,208,208,230,151,67,
236,135,54,14,221,175,102,221,205,122,74,107,164,165,93,101,246,182,173,205,97,115,182,239,121,134,15,229,57,255,0,185,252,180,247,82,105,112,105,123,31,34,102,183,111,111,49,244,130,74,96,170,245,79,
232,95,245,214,127,212,220,175,12,119,26,125,96,250,224,2,75,11,161,240,14,223,161,249,202,143,84,254,133,255,0,93,103,253,77,200,29,190,177,255,0,165,21,127,3,255,0,69,46,55,244,122,255,0,168,207,250,
134,34,168,224,214,44,170,182,151,182,191,209,180,131,97,134,206,218,253,187,191,55,148,107,105,53,9,245,43,179,143,230,223,187,157,223,213,253,207,122,81,249,71,144,73,220,249,163,73,27,236,142,45,222,
46,164,182,1,35,120,14,215,104,254,109,195,119,183,119,185,64,85,55,26,77,140,108,18,61,66,125,154,126,112,112,31,69,255,0,152,138,24,36,167,109,70,167,109,46,107,185,135,48,238,7,107,156,207,251,234,
159,217,191,70,44,245,170,50,210,237,155,189,195,104,107,189,61,177,252,227,189,79,111,246,210,82,20,145,40,160,222,92,5,149,214,90,1,30,171,182,110,159,205,97,253,229,7,176,176,128,96,200,145,180,200,
73,75,42,185,223,206,97,255,0,198,191,255,0,68,45,27,49,13,115,250,122,30,3,92,224,89,102,233,219,183,216,221,3,183,251,253,159,191,250,69,157,157,252,230,31,252,107,255,0,244,66,29,99,231,255,0,114,174,
133,255,209,229,48,190,218,42,253,21,173,174,183,18,90,215,180,63,95,162,75,119,53,219,55,109,254,218,177,254,82,255,0,79,86,159,240,45,255,0,200,43,29,15,50,204,60,125,245,178,187,13,140,44,34,214,239,
0,122,142,124,134,203,127,113,104,191,172,216,224,0,194,194,105,111,208,112,160,75,79,59,198,231,59,222,231,251,253,233,188,32,217,241,61,35,223,251,169,186,175,33,214,78,52,117,35,254,26,163,255,0,89,
111,254,65,62,222,167,254,154,175,251,101,191,249,5,171,145,213,29,145,93,140,118,38,35,13,156,218,202,162,193,199,208,179,113,219,183,106,166,151,0,239,248,67,254,245,92,95,202,229,255,0,124,214,219,
212,255,0,211,85,255,0,108,183,255,0,32,161,105,234,117,214,235,61,74,158,24,55,56,10,152,12,15,164,225,186,191,118,213,113,66,255,0,232,215,255,0,197,89,255,0,82,228,12,64,4,246,240,143,253,234,111,249,
92,156,207,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,5,85,36,254,24,246,11,56,143,114,218,253,167,155,251,204,255,0,182,171,255,0,200,33,223,149,145,144,26,45,124,
181,178,90,208,208,209,39,243,182,176,55,220,130,146,60,35,176,85,158,229,177,86,118,93,85,138,216,241,177,191,68,57,141,116,15,221,14,123,92,237,170,95,180,243,127,125,159,246,213,127,249,5,85,36,184,
99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,5,85,36,56,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,
246,213,127,249,5,85,36,184,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,252,130,95,180,243,127,121,159,246,213,127,249,5,85,36,184,99,216,43,136,247,45,175,218,121,191,188,207,251,106,191,
252,130,21,153,89,22,218,203,108,126,231,215,27,61,160,52,65,221,165,109,27,62,151,210,66,73,17,16,54,1,86,123,191,255,210,231,122,127,244,74,254,7,254,174,197,101,82,233,217,216,180,85,88,181,237,107,
170,116,236,176,56,181,195,115,159,249,141,127,239,109,123,85,203,122,183,78,181,155,65,197,168,204,239,173,150,181,221,253,154,181,205,219,175,238,160,52,189,14,231,167,138,123,106,54,29,87,73,53,29,
95,167,210,199,176,187,26,240,242,12,218,203,11,132,127,163,123,88,199,49,3,237,184,49,31,105,103,17,48,249,255,0,207,73,95,129,251,10,43,196,125,173,133,11,255,0,163,95,255,0,21,103,253,75,145,95,214,
250,115,216,230,150,225,180,185,187,125,70,215,107,92,60,30,216,110,223,81,82,200,207,195,251,61,173,101,205,177,239,99,152,214,180,59,151,13,187,156,94,198,55,107,82,58,130,40,234,59,20,141,247,31,107,
148,146,82,60,66,82,60,66,125,44,82,73,72,241,9,72,241,9,82,148,146,82,60,66,82,60,66,84,165,36,148,143,16,148,143,16,149,41,73,37,35,196,37,35,196,37,74,82,73,72,241,9,72,241,9,82,148,146,82,60,66,82,
57,73,79,255,211,231,250,38,30,37,236,253,98,246,98,135,49,238,245,108,110,240,94,215,57,181,212,118,135,88,221,219,127,49,191,245,181,168,122,63,78,1,167,246,166,22,215,18,1,217,103,230,152,250,62,150,
255,0,243,150,79,78,254,136,207,237,127,213,216,172,166,136,131,118,1,214,91,143,235,38,200,170,39,97,249,54,143,75,233,192,56,254,209,197,59,68,128,43,124,187,249,12,111,167,244,255,0,175,236,255,0,193,
125,42,66,170,227,232,1,242,31,220,166,146,60,49,253,209,246,43,136,247,63,107,15,74,175,221,31,112,254,228,189,42,191,116,125,195,251,148,210,75,134,63,186,62,197,113,30,231,237,97,233,85,251,163,238,
31,220,151,165,87,238,143,184,127,114,154,73,112,199,247,71,216,174,35,220,253,172,61,42,191,116,125,195,251,146,244,170,253,209,247,15,238,83,73,46,24,254,232,251,21,196,123,159,181,135,165,87,238,143,
184,127,114,94,149,95,186,62,225,253,202,105,37,195,31,221,31,98,184,143,115,246,176,244,170,253,209,247,15,238,75,210,171,247,71,220,63,185,77,36,184,99,251,163,236,87,17,238,126,214,30,149,95,186,62,
225,253,201,122,85,126,232,251,135,247,41,164,151,12,127,116,125,138,226,61,207,218,195,210,171,247,71,220,63,185,47,74,175,221,31,112,254,229,52,146,225,143,238,143,177,92,71,185,251,88,122,85,126,232,
251,135,247,42,185,180,212,219,177,94,214,128,231,188,181,240,0,4,55,210,45,145,244,119,126,145,93,85,115,191,156,195,255,0,141,127,254,136,66,128,34,128,26,244,30,10,36,144,108,219,255,212,231,122,119,
244,70,127,107,254,174,197,101,98,211,153,147,67,75,42,120,12,38,118,185,173,112,159,22,250,141,118,212,79,218,121,191,190,207,251,106,191,252,130,21,33,123,110,78,253,213,99,77,246,14,178,75,39,246,158,
111,239,179,254,218,175,255,0,32,151,237,60,223,223,103,253,181,95,254,65,31,87,97,246,170,199,139,172,146,201,253,167,155,251,236,255,0,182,171,255,0,200,37,251,79,55,247,217,255,0,109,87,255,0,144,75,
213,216,125,170,177,226,235,36,178,127,105,230,254,251,63,237,170,255,0,242,9,126,211,205,253,246,127,219,85,255,0,228,18,245,118,31,106,172,120,186,201,44,159,218,121,191,190,207,251,106,191,252,130,
95,180,243,127,125,159,246,213,127,249,4,189,93,135,218,171,30,46,178,75,39,246,158,111,239,179,254,218,175,255,0,32,151,237,60,223,223,103,253,181,95,254,65,47,87,97,246,170,199,139,172,146,201,253,167,
155,251,236,255,0,182,171,255,0,200,37,251,79,55,247,217,255,0,109,87,255,0,144,75,213,216,125,170,177,226,235,36,178,127,105,230,254,251,63,237,170,255,0,242,9,126,211,205,253,246,127,219,85,255,0,228,
18,245,118,31,106,172,120,186,201,44,159,218,121,191,190,207,251,106,191,252,130,95,180,243,127,125,159,246,213,127,249,4,189,93,135,218,171,30,46,178,171,157,244,240,255,0,227,95,255,0,162,21,63,218,
121,191,190,207,251,106,191,252,130,21,153,89,22,218,203,108,126,231,215,27,61,160,52,65,221,165,109,27,62,151,210,66,141,141,180,85,138,47,255,213,225,146,73,36,229,170,73,36,146,82,146,73,36,148,164,
146,73,37,41,36,146,73,74,73,36,146,82,146,73,36,148,164,146,73,37,41,36,146,73,74,73,36,146,83,255,217,0,56,66,73,77,4,33,0,0,0,0,0,97,0,0,0,1,1,0,0,0,15,0,65,0,100,0,111,0,98,0,101,0,32,0,80,0,104,0,
111,0,116,0,111,0,115,0,104,0,111,0,112,0,0,0,25,0,65,0,100,0,111,0,98,0,101,0,32,0,80,0,104,0,111,0,116,0,111,0,115,0,104,0,111,0,112,0,32,0,67,0,67,0,32,0,50,0,48,0,49,0,53,0,46,0,53,0,0,0,1,0,56,66,
73,77,4,6,0,0,0,0,0,7,0,5,0,0,0,1,1,0,255,225,33,196,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,
110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,
120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,50,32,55,57,46,49,53,57,50,56,
52,44,32,50,48,49,54,47,48,52,47,49,57,45,49,51,58,49,51,58,52,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,
119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,
58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,108,110,115,58,
100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,
47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,
99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,
46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,
104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,47,49,46,48,47,34,32,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,
98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,120,109,112,58,67,114,101,97,116,101,68,97,116,101,61,34,50,48,49,54,45,48,54,
45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,34,32,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,61,34,50,48,49,54,45,49,49,45,50,55,84,50,48,58,50,53,58,52,49,43,48,49,58,48,48,34,
32,120,109,112,58,77,111,100,105,102,121,68,97,116,101,61,34,50,48,49,54,45,49,49,45,50,55,84,50,48,58,50,53,58,52,49,43,48,49,58,48,48,34,32,100,99,58,102,111,114,109,97,116,61,34,105,109,97,103,101,
47,106,112,101,103,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,100,53,55,51,48,51,45,53,49,101,54,45,52,49,101,49,45,57,97,55,55,45,53,51,99,
57,52,101,102,53,97,51,101,50,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,97,102,48,54,102,100,
101,50,45,102,53,54,53,45,49,49,55,57,45,97,54,50,55,45,56,98,49,101,51,48,50,97,101,48,97,56,34,32,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,
112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,
111,100,101,61,34,51,34,32,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,61,34,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,34,62,32,60,120,109,112,77,77,58,72,105,
115,116,111,114,121,62,32,60,114,100,102,58,83,101,113,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,99,114,101,97,116,101,100,34,32,115,116,69,118,116,58,105,110,
115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,115,116,69,118,116,
58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,
32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,
118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,50,54,51,51,48,49,97,56,45,100,101,53,49,45,52,99,56,98,45,98,101,54,48,45,101,53,51,54,
101,97,56,98,56,52,55,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,51,49,58,49,49,43,48,50,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,
114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,
101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,
109,112,46,105,105,100,58,48,50,100,98,99,54,48,48,45,57,51,54,101,45,52,48,55,100,45,97,97,53,49,45,101,51,102,51,55,49,99,98,99,50,102,98,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,
45,49,49,45,50,55,84,50,48,58,50,53,58,52,49,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,
99,116,105,111,110,61,34,99,111,110,118,101,114,116,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,61,34,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,
100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,106,112,101,103,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,
61,34,100,101,114,105,118,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,61,34,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,
110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,106,112,101,103,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,
116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,100,53,55,51,48,51,45,53,49,101,54,45,52,49,101,49,45,
57,97,55,55,45,53,51,99,57,52,101,102,53,97,51,101,50,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,49,49,45,50,55,84,50,48,58,50,53,58,52,49,43,48,49,58,48,48,34,32,115,116,69,118,
116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,
116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,47,114,100,102,58,83,101,113,62,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,32,60,120,109,112,77,77,58,68,101,114,105,
118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,50,100,98,99,54,48,48,45,57,51,54,101,45,52,48,55,100,45,97,97,53,49,45,101,
51,102,51,55,49,99,98,99,50,102,98,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,102,99,100,
51,101,99,52,45,54,57,55,101,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,34,32,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,
120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,47,62,32,60,112,104,111,116,111,115,104,111,112,58,84,101,
120,116,76,97,121,101,114,115,62,32,60,114,100,102,58,66,97,103,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,77,111,100,117,108,97,116,
105,111,110,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,111,100,117,108,97,116,105,111,110,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,78,97,109,101,61,34,76,70,79,32,49,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,76,70,79,32,49,34,47,62,32,60,114,100,102,58,108,105,
32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,76,70,79,32,50,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,76,70,79,32,50,34,47,
62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,82,97,116,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,
116,61,34,82,97,116,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,83,104,97,112,101,34,32,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,84,101,120,116,61,34,83,104,97,112,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,65,109,111,117,110,116,
34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,65,109,111,117,110,116,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,78,97,109,101,61,34,76,70,79,49,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,76,70,79,32,50,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,82,97,116,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,82,97,116,101,34,47,62,32,60,114,100,102,58,108,105,
32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,83,104,97,112,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,83,104,97,112,101,
34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,65,109,111,117,110,116,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,61,34,65,109,111,117,110,116,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,76,70,79,49,34,32,112,104,111,116,
111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,76,70,79,32,49,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,86,111,
108,117,109,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,86,111,108,117,109,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,
58,76,97,121,101,114,78,97,109,101,61,34,65,109,112,108,105,102,105,101,114,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,65,109,112,108,105,102,105,101,114,32,34,
47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,65,116,116,97,99,107,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,
101,120,116,61,34,65,116,116,97,99,107,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,68,101,99,97,121,34,32,112,104,111,116,111,
115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,101,99,97,121,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,83,117,
115,116,97,105,110,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,83,117,115,116,97,105,110,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,78,97,109,101,61,34,82,101,108,101,97,115,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,82,101,108,101,97,115,101,34,47,62,32,60,114,
100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,34,32,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,84,101,120,116,61,34,65,109,112,108,105,102,105,101,114,32,69,110,118,101,108,111,112,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,78,97,109,101,61,34,65,116,116,97,99,107,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,65,116,116,97,99,107,34,47,62,32,60,114,100,102,58,108,105,32,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,68,101,99,97,121,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,101,99,97,121,34,47,
62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,83,117,115,116,97,105,110,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,61,34,83,117,115,116,97,105,110,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,82,101,108,101,97,115,101,34,32,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,82,101,108,101,97,115,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,
97,109,101,61,34,70,105,108,116,101,114,32,69,110,118,101,108,111,112,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,105,108,116,101,114,32,69,110,118,101,108,
111,112,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,82,101,115,111,110,97,110,99,101,34,32,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,61,34,82,101,115,111,110,97,110,99,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,77,
111,100,46,65,109,111,117,110,116,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,111,100,46,65,109,111,117,110,116,34,47,62,32,60,114,100,102,58,108,105,32,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,67,117,116,111,102,102,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,67,117,116,111,102,102,
34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,105,108,116,101,114,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,61,34,70,105,108,116,101,114,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,79,115,99,32,50,34,32,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,79,115,99,32,51,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,
80,105,116,99,104,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,80,105,116,99,104,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,61,34,70,105,110,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,105,110,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,86,111,108,117,109,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,86,111,108,117,109,101,34,
47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,79,115,99,32,50,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,
120,116,61,34,79,115,99,32,50,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,80,105,116,99,104,34,32,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,84,101,120,116,61,34,80,105,116,99,104,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,105,110,101,
34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,105,110,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,
97,109,101,61,34,86,111,108,117,109,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,86,111,108,117,109,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,
116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,79,115,99,32,49,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,79,115,99,32,49,34,47,62,32,60,114,
100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,80,105,116,99,104,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,
80,105,116,99,104,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,105,110,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,
121,101,114,84,101,120,116,61,34,70,105,110,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,86,111,108,117,109,101,34,32,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,86,111,108,117,109,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,61,34,68,101,108,97,121,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,82,101,118,101,114,98,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,78,97,109,101,61,34,68,97,109,112,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,97,109,112,34,47,62,32,60,114,100,102,58,108,105,32,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,114,101,101,122,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,114,101,101,122,
101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,83,105,122,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,
84,101,120,116,61,34,83,105,122,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,87,105,100,116,104,34,32,112,104,111,116,111,115,
104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,87,105,100,116,104,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,87,101,116,
34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,87,101,116,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,
101,61,34,68,114,121,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,114,121,32,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,
97,121,101,114,78,97,109,101,61,34,68,101,108,97,121,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,101,108,97,121,34,47,62,32,60,114,100,102,58,108,105,32,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,84,105,109,101,32,76,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,84,105,109,101,32,76,34,
47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,84,105,109,101,32,82,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,
101,120,116,61,34,84,105,109,101,32,82,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,66,32,76,34,32,112,104,111,116,111,115,104,
111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,66,32,76,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,70,66,32,82,34,32,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,70,66,32,82,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,
34,77,105,120,32,76,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,105,120,32,76,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,61,34,68,114,121,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,105,120,32,82,32,34,47,62,32,60,114,100,102,58,108,105,32,112,104,
111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,68,105,115,116,111,114,116,105,111,110,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,68,105,115,
116,111,114,116,105,111,110,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,68,114,105,118,101,34,32,112,104,111,116,111,115,104,111,
112,58,76,97,121,101,114,84,101,120,116,61,34,68,114,105,118,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,77,105,120,34,32,
112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,105,120,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,
61,34,77,111,100,101,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,77,111,100,101,34,47,62,32,60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,
76,97,121,101,114,78,97,109,101,61,34,83,101,113,117,101,110,99,101,114,34,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,83,101,113,117,101,110,99,101,114,34,47,62,32,
60,114,100,102,58,108,105,32,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,61,34,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,34,32,112,
104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,61,34,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,34,47,62,32,60,47,114,100,102,58,66,97,103,
62,32,60,47,112,104,111,116,111,115,104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,
47,120,58,120,109,112,109,101,116,97,62,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,63,120,112,97,99,107,101,116,32,101,110,100,
61,34,119,34,63,62,255,226,12,88,73,67,67,95,80,82,79,70,73,76,69,0,1,1,0,0,12,72,76,105,110,111,2,16,0,0,109,110,116,114,82,71,66,32,88,89,90,32,7,206,0,2,0,9,0,6,0,49,0,0,97,99,115,112,77,83,70,84,0,
0,0,0,73,69,67,32,115,82,71,66,0,0,0,0,0,0,0,0,0,0,0,1,0,0,246,214,0,1,0,0,0,0,211,45,72,80,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,99,112,
114,116,0,0,1,80,0,0,0,51,100,101,115,99,0,0,1,132,0,0,0,108,119,116,112,116,0,0,1,240,0,0,0,20,98,107,112,116,0,0,2,4,0,0,0,20,114,88,89,90,0,0,2,24,0,0,0,20,103,88,89,90,0,0,2,44,0,0,0,20,98,88,89,90,
0,0,2,64,0,0,0,20,100,109,110,100,0,0,2,84,0,0,0,112,100,109,100,100,0,0,2,196,0,0,0,136,118,117,101,100,0,0,3,76,0,0,0,134,118,105,101,119,0,0,3,212,0,0,0,36,108,117,109,105,0,0,3,248,0,0,0,20,109,101,
97,115,0,0,4,12,0,0,0,36,116,101,99,104,0,0,4,48,0,0,0,12,114,84,82,67,0,0,4,60,0,0,8,12,103,84,82,67,0,0,4,60,0,0,8,12,98,84,82,67,0,0,4,60,0,0,8,12,116,101,120,116,0,0,0,0,67,111,112,121,114,105,103,
104,116,32,40,99,41,32,49,57,57,56,32,72,101,119,108,101,116,116,45,80,97,99,107,97,114,100,32,67,111,109,112,97,110,121,0,0,100,101,115,99,0,0,0,0,0,0,0,18,115,82,71,66,32,73,69,67,54,49,57,54,54,45,
50,46,49,0,0,0,0,0,0,0,0,0,0,0,18,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,89,90,32,0,
0,0,0,0,0,243,81,0,1,0,0,0,1,22,204,88,89,90,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,89,90,32,0,0,0,0,0,0,111,162,0,0,56,245,0,0,3,144,88,89,90,32,0,0,0,0,0,0,98,153,0,0,183,133,0,0,24,218,88,89,90,32,0,
0,0,0,0,0,36,160,0,0,15,132,0,0,182,207,100,101,115,99,0,0,0,0,0,0,0,22,73,69,67,32,104,116,116,112,58,47,47,119,119,119,46,105,101,99,46,99,104,0,0,0,0,0,0,0,0,0,0,0,22,73,69,67,32,104,116,116,112,58,
47,47,119,119,119,46,105,101,99,46,99,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,101,115,99,0,0,0,0,0,0,0,46,73,69,67,32,54,49,57,54,54,45,50,46,
49,32,68,101,102,97,117,108,116,32,82,71,66,32,99,111,108,111,117,114,32,115,112,97,99,101,32,45,32,115,82,71,66,0,0,0,0,0,0,0,0,0,0,0,46,73,69,67,32,54,49,57,54,54,45,50,46,49,32,68,101,102,97,117,108,
116,32,82,71,66,32,99,111,108,111,117,114,32,115,112,97,99,101,32,45,32,115,82,71,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,101,115,99,0,0,0,0,0,0,0,44,82,101,102,101,114,101,110,99,101,32,86,
105,101,119,105,110,103,32,67,111,110,100,105,116,105,111,110,32,105,110,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,0,0,0,0,0,0,0,0,0,44,82,101,102,101,114,101,110,99,101,32,86,105,101,119,105,110,103,
32,67,111,110,100,105,116,105,111,110,32,105,110,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,118,105,101,119,0,0,0,0,0,19,164,254,0,20,95,46,0,16,207,20,
0,3,237,204,0,4,19,11,0,3,92,158,0,0,0,1,88,89,90,32,0,0,0,0,0,76,9,86,0,80,0,0,0,87,31,231,109,101,97,115,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,143,0,0,0,2,115,105,103,32,0,0,0,0,67,82,
84,32,99,117,114,118,0,0,0,0,0,0,4,0,0,0,0,5,0,10,0,15,0,20,0,25,0,30,0,35,0,40,0,45,0,50,0,55,0,59,0,64,0,69,0,74,0,79,0,84,0,89,0,94,0,99,0,104,0,109,0,114,0,119,0,124,0,129,0,134,0,139,0,144,0,149,
0,154,0,159,0,164,0,169,0,174,0,178,0,183,0,188,0,193,0,198,0,203,0,208,0,213,0,219,0,224,0,229,0,235,0,240,0,246,0,251,1,1,1,7,1,13,1,19,1,25,1,31,1,37,1,43,1,50,1,56,1,62,1,69,1,76,1,82,1,89,1,96,1,
103,1,110,1,117,1,124,1,131,1,139,1,146,1,154,1,161,1,169,1,177,1,185,1,193,1,201,1,209,1,217,1,225,1,233,1,242,1,250,2,3,2,12,2,20,2,29,2,38,2,47,2,56,2,65,2,75,2,84,2,93,2,103,2,113,2,122,2,132,2,142,
2,152,2,162,2,172,2,182,2,193,2,203,2,213,2,224,2,235,2,245,3,0,3,11,3,22,3,33,3,45,3,56,3,67,3,79,3,90,3,102,3,114,3,126,3,138,3,150,3,162,3,174,3,186,3,199,3,211,3,224,3,236,3,249,4,6,4,19,4,32,4,45,
4,59,4,72,4,85,4,99,4,113,4,126,4,140,4,154,4,168,4,182,4,196,4,211,4,225,4,240,4,254,5,13,5,28,5,43,5,58,5,73,5,88,5,103,5,119,5,134,5,150,5,166,5,181,5,197,5,213,5,229,5,246,6,6,6,22,6,39,6,55,6,72,
6,89,6,106,6,123,6,140,6,157,6,175,6,192,6,209,6,227,6,245,7,7,7,25,7,43,7,61,7,79,7,97,7,116,7,134,7,153,7,172,7,191,7,210,7,229,7,248,8,11,8,31,8,50,8,70,8,90,8,110,8,130,8,150,8,170,8,190,8,210,8,231,
8,251,9,16,9,37,9,58,9,79,9,100,9,121,9,143,9,164,9,186,9,207,9,229,9,251,10,17,10,39,10,61,10,84,10,106,10,129,10,152,10,174,10,197,10,220,10,243,11,11,11,34,11,57,11,81,11,105,11,128,11,152,11,176,11,
200,11,225,11,249,12,18,12,42,12,67,12,92,12,117,12,142,12,167,12,192,12,217,12,243,13,13,13,38,13,64,13,90,13,116,13,142,13,169,13,195,13,222,13,248,14,19,14,46,14,73,14,100,14,127,14,155,14,182,14,210,
14,238,15,9,15,37,15,65,15,94,15,122,15,150,15,179,15,207,15,236,16,9,16,38,16,67,16,97,16,126,16,155,16,185,16,215,16,245,17,19,17,49,17,79,17,109,17,140,17,170,17,201,17,232,18,7,18,38,18,69,18,100,
18,132,18,163,18,195,18,227,19,3,19,35,19,67,19,99,19,131,19,164,19,197,19,229,20,6,20,39,20,73,20,106,20,139,20,173,20,206,20,240,21,18,21,52,21,86,21,120,21,155,21,189,21,224,22,3,22,38,22,73,22,108,
22,143,22,178,22,214,22,250,23,29,23,65,23,101,23,137,23,174,23,210,23,247,24,27,24,64,24,101,24,138,24,175,24,213,24,250,25,32,25,69,25,107,25,145,25,183,25,221,26,4,26,42,26,81,26,119,26,158,26,197,
26,236,27,20,27,59,27,99,27,138,27,178,27,218,28,2,28,42,28,82,28,123,28,163,28,204,28,245,29,30,29,71,29,112,29,153,29,195,29,236,30,22,30,64,30,106,30,148,30,190,30,233,31,19,31,62,31,105,31,148,31,
191,31,234,32,21,32,65,32,108,32,152,32,196,32,240,33,28,33,72,33,117,33,161,33,206,33,251,34,39,34,85,34,130,34,175,34,221,35,10,35,56,35,102,35,148,35,194,35,240,36,31,36,77,36,124,36,171,36,218,37,
9,37,56,37,104,37,151,37,199,37,247,38,39,38,87,38,135,38,183,38,232,39,24,39,73,39,122,39,171,39,220,40,13,40,63,40,113,40,162,40,212,41,6,41,56,41,107,41,157,41,208,42,2,42,53,42,104,42,155,42,207,43,
2,43,54,43,105,43,157,43,209,44,5,44,57,44,110,44,162,44,215,45,12,45,65,45,118,45,171,45,225,46,22,46,76,46,130,46,183,46,238,47,36,47,90,47,145,47,199,47,254,48,53,48,108,48,164,48,219,49,18,49,74,49,
130,49,186,49,242,50,42,50,99,50,155,50,212,51,13,51,70,51,127,51,184,51,241,52,43,52,101,52,158,52,216,53,19,53,77,53,135,53,194,53,253,54,55,54,114,54,174,54,233,55,36,55,96,55,156,55,215,56,20,56,80,
56,140,56,200,57,5,57,66,57,127,57,188,57,249,58,54,58,116,58,178,58,239,59,45,59,107,59,170,59,232,60,39,60,101,60,164,60,227,61,34,61,97,61,161,61,224,62,32,62,96,62,160,62,224,63,33,63,97,63,162,63,
226,64,35,64,100,64,166,64,231,65,41,65,106,65,172,65,238,66,48,66,114,66,181,66,247,67,58,67,125,67,192,68,3,68,71,68,138,68,206,69,18,69,85,69,154,69,222,70,34,70,103,70,171,70,240,71,53,71,123,71,192,
72,5,72,75,72,145,72,215,73,29,73,99,73,169,73,240,74,55,74,125,74,196,75,12,75,83,75,154,75,226,76,42,76,114,76,186,77,2,77,74,77,147,77,220,78,37,78,110,78,183,79,0,79,73,79,147,79,221,80,39,80,113,
80,187,81,6,81,80,81,155,81,230,82,49,82,124,82,199,83,19,83,95,83,170,83,246,84,66,84,143,84,219,85,40,85,117,85,194,86,15,86,92,86,169,86,247,87,68,87,146,87,224,88,47,88,125,88,203,89,26,89,105,89,
184,90,7,90,86,90,166,90,245,91,69,91,149,91,229,92,53,92,134,92,214,93,39,93,120,93,201,94,26,94,108,94,189,95,15,95,97,95,179,96,5,96,87,96,170,96,252,97,79,97,162,97,245,98,73,98,156,98,240,99,67,99,
151,99,235,100,64,100,148,100,233,101,61,101,146,101,231,102,61,102,146,102,232,103,61,103,147,103,233,104,63,104,150,104,236,105,67,105,154,105,241,106,72,106,159,106,247,107,79,107,167,107,255,108,87,
108,175,109,8,109,96,109,185,110,18,110,107,110,196,111,30,111,120,111,209,112,43,112,134,112,224,113,58,113,149,113,240,114,75,114,166,115,1,115,93,115,184,116,20,116,112,116,204,117,40,117,133,117,225,
118,62,118,155,118,248,119,86,119,179,120,17,120,110,120,204,121,42,121,137,121,231,122,70,122,165,123,4,123,99,123,194,124,33,124,129,124,225,125,65,125,161,126,1,126,98,126,194,127,35,127,132,127,229,
128,71,128,168,129,10,129,107,129,205,130,48,130,146,130,244,131,87,131,186,132,29,132,128,132,227,133,71,133,171,134,14,134,114,134,215,135,59,135,159,136,4,136,105,136,206,137,51,137,153,137,254,138,
100,138,202,139,48,139,150,139,252,140,99,140,202,141,49,141,152,141,255,142,102,142,206,143,54,143,158,144,6,144,110,144,214,145,63,145,168,146,17,146,122,146,227,147,77,147,182,148,32,148,138,148,244,
149,95,149,201,150,52,150,159,151,10,151,117,151,224,152,76,152,184,153,36,153,144,153,252,154,104,154,213,155,66,155,175,156,28,156,137,156,247,157,100,157,210,158,64,158,174,159,29,159,139,159,250,160,
105,160,216,161,71,161,182,162,38,162,150,163,6,163,118,163,230,164,86,164,199,165,56,165,169,166,26,166,139,166,253,167,110,167,224,168,82,168,196,169,55,169,169,170,28,170,143,171,2,171,117,171,233,
172,92,172,208,173,68,173,184,174,45,174,161,175,22,175,139,176,0,176,117,176,234,177,96,177,214,178,75,178,194,179,56,179,174,180,37,180,156,181,19,181,138,182,1,182,121,182,240,183,104,183,224,184,89,
184,209,185,74,185,194,186,59,186,181,187,46,187,167,188,33,188,155,189,21,189,143,190,10,190,132,190,255,191,122,191,245,192,112,192,236,193,103,193,227,194,95,194,219,195,88,195,212,196,81,196,206,197,
75,197,200,198,70,198,195,199,65,199,191,200,61,200,188,201,58,201,185,202,56,202,183,203,54,203,182,204,53,204,181,205,53,205,181,206,54,206,182,207,55,207,184,208,57,208,186,209,60,209,190,210,63,210,
193,211,68,211,198,212,73,212,203,213,78,213,209,214,85,214,216,215,92,215,224,216,100,216,232,217,108,217,241,218,118,218,251,219,128,220,5,220,138,221,16,221,150,222,28,222,162,223,41,223,175,224,54,
224,189,225,68,225,204,226,83,226,219,227,99,227,235,228,115,228,252,229,132,230,13,230,150,231,31,231,169,232,50,232,188,233,70,233,208,234,91,234,229,235,112,235,251,236,134,237,17,237,156,238,40,238,
180,239,64,239,204,240,88,240,229,241,114,241,255,242,140,243,25,243,167,244,52,244,194,245,80,245,222,246,109,246,251,247,138,248,25,248,168,249,56,249,199,250,87,250,231,251,119,252,7,252,152,253,41,
253,186,254,75,254,220,255,109,255,255,255,238,0,14,65,100,111,98,101,0,100,64,0,0,0,1,255,219,0,132,0,4,3,3,3,3,3,4,3,3,4,6,4,3,4,6,7,5,4,4,5,7,8,6,6,7,6,6,8,10,8,9,9,9,9,8,10,10,12,12,12,12,12,10,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,4,5,5,8,7,8,15,10,10,15,20,14,14,14,20,20,14,14,14,14,20,17,12,12,12,12,12,17,17,12,12,12,12,12,12,17,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,2,88,3,142,3,1,17,0,2,17,1,3,17,1,255,221,0,4,0,114,255,196,1,162,0,0,0,7,1,1,1,1,1,0,0,0,0,0,0,0,0,4,5,3,2,6,1,0,7,8,9,10,11,1,0,2,2,3,1,
1,1,1,1,0,0,0,0,0,0,0,1,0,2,3,4,5,6,7,8,9,10,11,16,0,2,1,3,3,2,4,2,6,7,3,4,2,6,2,115,1,2,3,17,4,0,5,33,18,49,65,81,6,19,97,34,113,129,20,50,145,161,7,21,177,66,35,193,82,209,225,51,22,98,240,36,114,130,
241,37,67,52,83,146,162,178,99,115,194,53,68,39,147,163,179,54,23,84,100,116,195,210,226,8,38,131,9,10,24,25,132,148,69,70,164,180,86,211,85,40,26,242,227,243,196,212,228,244,101,117,133,149,165,181,197,
213,229,245,102,118,134,150,166,182,198,214,230,246,55,71,87,103,119,135,151,167,183,199,215,231,247,56,72,88,104,120,136,152,168,184,200,216,232,248,41,57,73,89,105,121,137,153,169,185,201,217,233,249,
42,58,74,90,106,122,138,154,170,186,202,218,234,250,17,0,2,2,1,2,3,5,5,4,5,6,4,8,3,3,109,1,0,2,17,3,4,33,18,49,65,5,81,19,97,34,6,113,129,145,50,161,177,240,20,193,209,225,35,66,21,82,98,114,241,51,36,
52,67,130,22,146,83,37,162,99,178,194,7,115,210,53,226,68,131,23,84,147,8,9,10,24,25,38,54,69,26,39,100,116,85,55,242,163,179,195,40,41,211,227,243,132,148,164,180,196,212,228,244,101,117,133,149,165,
181,197,213,229,245,70,86,102,118,134,150,166,182,198,214,230,246,71,87,103,119,135,151,167,183,199,215,231,247,56,72,88,104,120,136,152,168,184,200,216,232,248,57,73,89,105,121,137,153,169,185,201,217,
233,249,42,58,74,90,106,122,138,154,170,186,202,218,234,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,242,166,92,208,236,85,186,31,12,82,234,31,12,85,212,62,24,171,168,113,67,168,113,87,80,226,174,197,93,138,
181,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,95,255,208,242,168,235,151,52,39,218,54,135,62,165,44,86,246,182,211,222,222,92,48,142,218,206,206,25,46,
174,102,114,9,227,28,48,171,187,181,1,52,85,39,48,114,229,55,81,230,228,66,2,172,178,175,249,86,62,119,255,0,169,15,205,127,248,78,107,31,246,73,148,222,110,230,117,4,38,165,228,111,48,104,182,143,168,
235,190,86,215,244,125,50,54,68,150,255,0,83,209,117,27,27,84,105,92,70,129,230,184,183,142,53,228,204,170,188,155,118,32,96,51,204,5,144,145,24,148,68,31,151,30,112,185,134,59,155,95,36,249,162,226,214,
101,89,32,184,135,203,250,180,145,73,27,138,171,163,173,169,86,82,13,67,3,66,48,222,110,229,225,130,95,170,249,59,83,209,76,67,95,209,117,77,9,174,27,141,184,214,52,235,189,51,213,106,19,72,254,183,20,
92,206,199,236,215,1,203,146,28,194,240,68,242,68,105,190,67,243,14,173,108,47,116,95,43,235,218,197,129,102,140,94,233,154,54,163,127,108,94,54,42,234,38,182,130,68,37,72,163,14,91,28,68,242,200,88,11,
195,16,165,170,249,35,91,210,18,39,215,52,13,99,67,142,225,204,86,242,234,250,93,246,155,28,178,5,44,81,30,234,24,213,155,136,39,138,154,211,19,151,36,55,144,71,4,79,36,38,155,229,123,157,74,236,216,105,
54,55,154,190,162,7,35,99,165,218,79,127,114,23,125,253,43,100,145,233,183,94,56,140,243,159,210,23,195,3,154,182,177,228,253,83,69,17,13,123,70,212,244,39,184,110,22,195,89,211,238,244,207,85,200,36,
44,127,91,138,46,68,208,236,190,7,195,15,139,146,31,80,94,8,158,76,94,246,202,75,87,42,195,108,205,199,148,76,52,74,52,131,203,218,215,136,221,186,10,224,176,154,108,67,33,219,137,193,196,22,151,27,89,
128,169,83,76,28,97,60,37,76,169,6,148,201,90,26,32,142,163,10,181,138,27,197,85,18,222,87,21,85,174,64,204,6,84,90,48,200,13,41,190,30,32,138,113,134,80,43,196,227,196,22,150,16,71,92,146,181,138,27,
0,158,131,20,184,130,58,226,134,177,87,98,174,197,93,138,187,21,118,42,216,4,244,197,46,32,142,163,21,107,20,59,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,95,255,209,242,168,235,151,52,50,239,40,249,139,81,208,181,43,45,87,69,188,109,59,90,211,165,23,26,125,244,105,20,173,12,193,74,134,9,58,73,27,108,196,81,209,134,107,
115,70,81,151,16,114,160,65,20,95,115,255,0,206,39,126,100,121,255,0,207,255,0,227,24,124,245,175,73,174,157,45,180,227,97,36,214,214,86,173,16,185,23,62,160,255,0,66,183,183,12,15,166,191,104,54,89,131,
33,156,108,172,227,69,242,223,230,55,230,223,230,167,157,108,188,193,229,159,51,249,174,123,255,0,44,53,244,213,210,126,167,166,67,29,44,47,12,176,15,82,27,68,154,136,209,33,254,246,173,79,139,150,249,
137,151,60,172,199,163,108,96,42,223,91,126,100,235,159,152,254,94,255,0,156,123,242,141,255,0,229,104,212,63,196,166,223,69,138,70,210,52,229,213,238,197,163,218,15,80,139,118,183,186,4,84,45,91,210,
60,125,179,97,51,32,61,60,218,5,94,232,45,91,84,243,6,169,255,0,56,157,174,234,31,158,214,162,47,48,203,166,95,8,227,188,130,43,91,185,46,185,186,233,110,96,80,137,21,211,201,232,148,69,88,248,201,199,
224,143,117,2,253,62,175,138,122,236,242,207,249,195,255,0,57,249,186,47,62,199,249,122,250,179,191,146,255,0,69,106,90,154,104,230,11,110,9,123,245,171,102,50,172,194,17,57,169,153,254,22,148,166,255,
0,103,49,116,185,9,20,122,54,100,141,110,195,255,0,231,38,124,233,231,77,127,243,59,204,190,82,189,212,218,247,65,242,238,163,8,242,230,142,208,218,197,20,55,19,233,208,110,102,72,150,102,228,211,184,
62,164,174,163,151,106,100,117,18,50,144,135,66,176,20,45,238,255,0,153,122,146,127,206,46,254,82,104,62,90,252,184,183,130,47,49,235,23,43,103,113,172,207,18,203,44,147,37,187,75,115,125,40,32,9,37,98,
170,168,31,224,78,99,225,244,227,244,243,39,36,188,56,108,194,35,136,165,127,243,143,31,154,186,191,231,3,235,255,0,149,95,155,127,86,243,56,147,79,109,66,222,230,230,218,8,100,184,181,89,146,27,136,230,
142,222,56,225,253,219,77,15,166,233,28,108,57,126,211,14,121,28,25,78,64,109,51,143,11,228,239,204,255,0,41,167,147,188,221,230,63,40,137,90,225,52,43,249,109,45,231,147,121,30,217,130,205,7,51,221,189,
41,16,57,238,213,57,76,7,6,82,7,36,203,120,219,206,81,107,32,95,124,217,147,179,136,30,159,249,103,249,103,175,254,101,235,235,229,79,42,254,142,93,95,234,51,234,108,218,181,196,246,176,24,45,165,130,
22,10,214,246,215,44,94,179,169,0,170,142,33,190,44,214,122,178,72,139,170,114,192,17,8,143,203,223,203,159,49,254,101,221,95,218,249,114,218,194,201,244,123,31,210,90,221,222,177,115,37,173,149,148,117,
42,18,73,97,130,224,243,98,178,113,162,113,227,12,141,200,83,43,134,57,204,145,124,153,18,7,70,54,215,158,75,125,6,222,254,47,54,91,92,249,140,221,75,6,165,229,116,210,239,33,91,59,36,51,4,188,125,78,
225,162,133,150,64,145,149,136,67,234,254,249,85,194,50,73,196,203,31,12,108,18,74,131,102,169,47,181,135,70,191,189,181,179,211,238,34,188,190,191,146,56,44,109,33,150,35,36,210,207,32,138,53,74,176,
31,19,176,90,147,74,226,50,228,59,82,12,35,205,49,243,111,149,46,124,149,172,92,121,115,206,150,203,229,253,126,210,56,167,185,176,185,186,179,153,227,138,113,88,217,158,214,105,163,28,134,244,231,95,
28,153,158,72,26,59,163,134,37,34,123,109,21,18,41,95,80,182,88,167,254,225,218,84,11,38,244,248,77,104,126,140,63,153,159,113,71,132,59,221,36,90,13,188,255,0,87,159,82,182,142,224,16,12,47,50,43,212,
246,226,72,56,63,49,50,44,2,190,24,239,122,111,229,151,229,116,191,152,119,218,213,173,174,175,6,135,166,121,123,73,155,89,212,181,25,237,26,254,171,27,40,72,150,49,113,108,23,146,137,91,155,73,240,250,
127,101,185,85,97,136,28,182,73,103,42,143,38,13,21,188,114,217,197,123,44,65,102,104,213,222,49,203,138,177,80,79,69,102,160,62,10,91,193,73,219,41,25,77,213,178,224,28,217,159,155,63,44,181,63,38,121,
107,64,243,86,185,171,249,114,77,35,205,54,159,164,60,191,21,141,198,175,45,221,229,160,72,164,50,36,115,105,16,172,96,44,209,146,110,100,129,71,32,11,114,219,50,37,138,80,23,196,192,16,122,60,233,215,
64,187,146,53,181,212,109,153,230,37,97,69,153,24,185,29,150,135,127,163,24,231,156,70,224,160,227,7,147,87,22,26,109,128,86,212,47,96,182,87,52,67,52,139,29,126,92,136,201,13,84,143,32,143,8,14,108,135,
202,62,76,212,60,241,171,71,229,255,0,36,216,159,48,235,146,193,37,218,88,218,92,90,196,198,218,18,161,228,231,115,52,49,133,5,212,110,251,215,225,174,68,79,36,205,13,147,195,16,145,93,69,161,199,35,69,
61,237,189,188,233,43,219,188,79,52,68,137,162,98,142,128,171,21,98,24,83,225,36,30,216,140,217,34,104,133,224,137,80,49,232,32,41,58,157,168,14,197,16,153,147,118,6,132,13,247,57,47,204,79,184,163,194,
29,234,141,101,164,44,237,106,215,208,11,148,5,222,19,34,137,2,141,201,43,90,128,48,126,102,85,116,87,194,29,234,113,199,160,204,209,164,90,157,172,143,41,164,74,179,35,23,35,111,132,3,191,209,135,243,
19,29,10,248,67,189,124,86,26,101,212,207,111,107,123,4,179,199,253,228,81,200,172,235,243,80,73,24,254,106,67,114,23,194,11,90,211,72,142,224,89,201,168,91,173,225,52,16,52,170,36,175,250,181,174,63,
153,149,93,26,95,8,55,53,174,141,107,43,65,115,168,91,197,58,47,55,142,73,81,24,47,90,144,72,32,98,53,50,60,129,95,8,119,166,90,78,134,154,173,222,159,97,163,70,117,93,67,86,184,134,207,75,181,181,120,
203,92,92,92,72,34,69,70,118,84,31,17,221,153,149,17,106,206,202,170,78,67,198,156,207,8,230,159,12,1,107,188,197,229,171,189,7,90,212,252,175,173,90,254,140,243,62,142,200,154,150,149,36,214,211,203,
17,150,36,153,9,107,89,102,140,130,178,46,234,230,135,225,63,18,176,203,6,73,194,85,36,24,130,54,98,114,39,7,43,225,155,32,108,56,165,102,20,59,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,175,255,210,242,166,92,208,139,211,201,23,43,191,124,167,47,210,206,28,223,113,255,0,206,15,255,0,123,231,243,227,250,31,254,35,123,152,154,
95,164,251,220,156,156,223,42,107,159,239,102,187,255,0,49,186,135,253,68,75,154,252,191,222,31,123,116,121,62,219,252,215,243,207,155,127,47,127,231,30,188,151,175,121,46,253,116,253,101,151,67,182,51,
60,49,92,35,194,246,156,158,54,73,145,199,23,224,3,21,226,244,251,14,167,124,219,228,159,12,73,113,162,44,210,93,231,157,42,203,254,114,175,242,99,76,243,95,149,201,131,206,126,93,150,75,148,209,140,132,
198,186,146,68,22,230,198,64,212,21,117,32,219,205,64,119,141,170,35,146,69,104,72,12,176,219,170,65,225,47,59,255,0,156,65,242,95,156,95,207,233,249,131,54,139,53,183,147,134,151,169,233,99,82,158,75,
120,219,235,194,234,217,90,19,110,101,250,194,178,152,100,13,206,21,95,135,237,101,58,108,82,141,146,203,36,129,97,223,243,147,62,75,243,166,129,249,157,230,95,54,222,233,141,101,160,249,139,81,132,249,
115,88,105,173,101,138,107,136,52,232,54,48,164,173,50,241,104,28,159,82,36,83,199,189,114,26,136,152,200,79,160,76,13,138,123,191,230,94,154,159,243,148,95,148,154,15,153,127,46,46,32,151,204,122,61,
202,222,92,104,211,202,177,75,28,207,110,209,92,216,202,73,34,57,84,178,178,23,248,31,128,248,189,57,61,76,201,201,31,18,27,48,137,225,41,95,252,227,199,229,86,175,249,62,250,255,0,230,175,230,223,213,
188,176,35,211,219,79,183,182,185,185,130,105,45,237,90,100,154,226,73,164,183,146,72,127,120,208,195,233,162,73,35,30,63,178,199,134,71,6,35,140,27,76,229,196,249,59,243,63,205,137,231,31,55,121,143,
205,194,38,183,77,118,254,91,187,120,36,218,68,182,80,176,193,204,118,111,74,52,46,59,53,70,83,3,199,148,145,201,50,218,52,243,148,52,144,31,124,217,145,179,136,31,70,255,0,206,42,234,201,167,126,117,
249,89,92,211,244,173,190,163,165,131,218,173,104,247,98,191,51,107,79,158,107,112,237,144,135,46,95,72,101,95,157,237,99,249,43,228,93,75,242,147,203,114,125,103,204,254,115,190,188,243,31,155,174,45,
193,102,26,116,179,191,213,44,212,110,202,100,84,72,248,40,163,44,115,255,0,191,247,179,44,184,71,8,231,36,68,94,253,204,214,247,203,65,191,60,127,34,191,41,45,207,169,107,249,117,229,241,171,234,232,
219,167,170,145,5,73,41,184,50,11,139,72,91,127,179,234,242,83,151,31,168,6,61,24,167,146,191,49,252,253,249,149,255,0,57,27,167,105,107,174,189,183,147,151,204,154,142,165,14,155,99,29,173,156,79,107,
165,219,221,197,3,73,61,188,81,220,92,122,177,42,43,164,211,72,141,234,87,135,20,94,20,199,41,150,67,30,129,145,136,17,180,127,229,87,153,53,31,204,159,249,202,255,0,48,234,90,150,171,121,121,163,121,
74,93,122,246,195,72,158,242,105,173,172,218,201,211,71,143,210,179,105,10,68,239,28,206,237,194,53,110,71,226,248,178,113,50,51,55,200,32,213,6,55,228,157,70,234,111,200,111,206,95,205,137,160,148,106,
191,153,218,151,232,93,36,203,32,82,240,234,147,149,60,92,158,33,99,125,70,116,98,13,41,111,199,236,162,225,141,209,61,231,246,32,179,175,33,121,59,87,242,23,231,31,148,63,41,238,124,203,230,77,122,109,
63,75,125,71,87,178,177,154,13,51,202,48,105,247,49,221,169,23,22,70,27,135,187,47,42,44,97,228,104,157,157,253,95,84,181,99,89,196,86,200,59,238,195,116,244,209,252,187,249,53,249,241,230,173,15,76,143,
77,210,188,213,230,41,60,163,160,218,91,145,233,126,139,250,201,136,24,198,225,35,225,121,59,122,98,138,56,250,107,240,4,202,205,70,50,33,151,50,3,192,167,134,75,231,181,208,236,229,72,245,93,98,104,244,
237,53,93,168,90,234,237,196,49,128,58,159,137,197,105,154,172,80,50,144,14,68,141,7,209,223,158,154,109,175,155,63,231,33,255,0,47,255,0,41,44,150,49,163,232,214,186,78,154,96,52,106,91,205,51,92,221,
161,81,176,6,210,217,2,138,124,254,26,102,207,32,185,196,124,90,35,176,44,215,74,243,19,249,231,254,114,23,243,94,13,118,101,188,252,172,242,214,133,46,159,171,104,211,16,246,51,189,177,130,173,52,102,
170,93,37,138,244,9,41,205,2,113,4,124,89,104,55,34,58,49,173,158,65,249,53,230,63,40,92,249,51,79,252,172,213,103,243,7,229,207,230,23,155,245,40,103,211,60,219,162,67,52,115,234,112,76,84,67,111,29,
194,17,117,232,70,120,171,149,62,151,193,234,180,223,20,217,12,117,84,5,38,92,217,231,229,212,222,111,252,185,212,255,0,231,32,60,193,230,31,49,55,152,175,252,149,163,67,104,186,148,0,91,71,123,118,182,
247,23,81,202,240,198,72,89,34,248,99,121,100,50,72,174,211,114,149,190,51,147,141,139,179,104,44,103,242,207,204,190,97,242,207,252,227,239,230,79,230,157,214,165,115,172,249,143,204,23,122,127,150,116,
141,91,87,156,235,18,77,110,190,156,38,64,111,141,194,201,28,109,123,112,222,155,134,141,189,38,82,133,114,152,78,67,25,148,185,178,32,113,80,85,242,215,155,188,195,255,0,66,255,0,249,203,249,157,230,
157,74,93,75,204,58,212,150,62,77,77,71,133,189,188,145,218,152,160,182,143,138,90,71,12,113,44,127,164,156,142,40,140,120,242,221,153,73,150,57,202,88,248,186,160,128,13,39,205,229,85,182,209,255,0,231,
26,191,38,110,237,230,182,189,212,181,39,243,166,185,111,222,57,109,35,125,70,88,102,6,191,104,220,77,23,249,34,62,35,246,114,193,26,0,34,249,148,218,47,60,106,26,197,247,252,228,183,156,117,9,63,75,249,
43,69,181,253,7,163,232,215,116,125,62,75,235,40,167,182,101,48,176,40,107,44,113,147,33,82,206,146,175,218,85,80,173,243,238,90,98,23,208,141,67,242,7,242,99,203,254,118,188,55,119,62,109,243,124,95,
238,70,234,70,245,108,180,89,238,167,141,253,25,54,49,131,11,196,160,41,84,143,212,248,126,4,92,133,113,68,9,117,79,35,178,55,207,95,152,210,254,89,254,112,107,158,69,210,60,135,168,235,62,92,180,210,
163,211,237,124,136,154,168,79,47,221,105,82,65,28,141,122,154,85,190,135,114,230,140,29,100,185,107,137,62,37,145,93,194,252,11,41,79,132,213,20,1,125,82,93,98,243,88,242,79,252,227,71,144,116,31,39,
203,250,31,205,95,152,250,244,186,173,171,89,204,235,60,48,72,236,182,158,148,223,12,156,148,53,132,70,74,242,166,213,223,34,77,68,87,82,158,101,233,146,232,214,15,255,0,57,173,164,91,104,92,108,38,211,
60,190,250,151,153,174,45,9,129,181,27,169,35,150,39,23,9,25,85,36,250,214,146,182,223,31,5,47,202,139,198,85,235,248,35,163,229,63,61,121,215,86,243,198,191,174,121,131,84,214,47,117,72,78,163,169,29,
50,210,242,234,121,161,176,183,184,185,44,176,67,111,35,148,131,140,105,18,58,34,35,124,3,159,196,51,10,114,148,178,112,158,77,160,1,27,121,140,205,202,66,115,109,17,65,194,42,121,36,59,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,175,255,211,242,166,92,208,169,12,134,55,12,59,100,100,44,36,26,101,250,55,156,181,157,20,74,250,
46,185,171,104,146,92,4,91,147,164,106,119,186,96,152,69,203,135,168,45,38,136,63,30,77,196,181,120,242,57,174,240,178,68,250,75,147,198,15,52,11,235,138,92,134,172,138,228,153,12,132,187,57,99,86,44,
204,73,98,196,212,147,185,200,254,84,157,207,52,248,169,157,215,157,117,139,235,24,52,221,75,95,214,53,29,46,219,129,182,211,47,181,91,235,187,40,140,75,197,56,91,207,51,196,188,1,162,81,62,1,246,112,
156,121,100,40,157,148,78,33,173,47,206,122,174,140,211,190,131,174,106,218,19,93,113,55,67,71,212,239,116,209,49,142,161,12,162,210,104,131,149,4,133,45,90,96,24,178,67,104,148,241,196,243,70,193,249,
137,230,203,85,117,180,243,159,153,109,150,71,121,165,88,53,253,86,32,242,202,197,158,71,225,114,57,59,19,86,115,241,49,234,113,172,221,235,197,4,38,171,231,125,111,87,72,147,92,215,245,141,114,59,119,
50,219,197,171,234,151,218,148,113,72,84,169,116,75,169,164,85,110,36,142,74,43,76,78,44,147,218,69,28,113,28,144,186,111,154,110,180,203,163,125,164,223,222,104,250,131,0,173,123,165,221,220,105,247,
5,69,64,6,91,103,141,233,185,219,151,124,70,9,195,233,43,226,3,205,87,88,243,134,169,173,8,142,189,173,106,154,235,91,176,146,223,244,206,163,119,169,136,156,2,3,39,214,229,151,137,1,154,133,127,153,188,
78,31,11,36,254,162,188,113,28,152,189,237,236,151,78,89,142,217,155,143,16,128,104,148,173,8,13,13,114,246,180,255,0,70,215,174,116,201,161,186,180,186,184,177,190,182,99,37,173,237,148,242,218,93,66,
229,74,22,142,104,25,29,9,86,43,85,97,177,204,12,152,77,220,121,185,17,152,170,40,251,175,49,189,245,220,218,134,163,123,121,168,106,119,12,175,62,163,123,119,61,221,227,188,106,168,140,215,19,59,202,
74,42,168,67,207,225,226,56,244,202,14,28,132,217,59,182,120,145,27,35,7,157,117,161,170,29,125,124,199,174,15,48,180,38,213,245,145,171,234,3,81,107,98,85,140,45,116,39,245,154,58,170,159,76,191,10,168,
248,112,240,101,187,181,226,138,93,101,174,199,166,189,171,233,114,207,167,207,99,196,217,93,89,79,45,173,196,5,23,136,49,77,19,43,161,10,105,201,88,26,96,26,121,131,96,238,190,32,59,38,47,231,93,106,
77,82,61,122,95,50,107,146,121,130,40,190,175,14,178,250,198,160,218,140,112,85,143,164,151,70,115,50,198,75,177,49,171,132,53,59,97,225,205,119,107,197,5,186,143,156,53,77,98,220,217,107,90,246,175,170,
216,52,134,119,178,212,117,59,219,219,102,156,130,190,171,67,113,51,163,73,70,35,212,43,207,252,172,7,30,82,40,149,19,136,69,175,230,39,154,144,194,201,231,15,50,35,91,175,167,108,203,174,234,128,195,
25,0,20,136,139,154,162,144,0,226,156,69,6,75,135,55,122,241,65,41,255,0,17,77,6,153,14,139,22,161,124,116,59,121,61,120,52,118,189,185,109,57,38,161,30,168,181,50,122,62,167,196,127,121,195,158,231,124,
30,22,66,40,157,151,142,35,112,191,76,243,101,254,153,117,245,237,39,83,191,209,239,253,54,132,222,105,55,183,58,116,230,23,42,205,27,73,107,36,108,80,148,82,84,158,53,81,225,136,195,56,125,37,30,32,60,
209,119,62,117,214,239,53,11,61,94,247,204,186,237,214,179,166,250,159,163,117,73,245,141,70,91,235,95,89,10,72,45,238,30,115,44,65,212,149,113,27,175,33,179,99,195,154,238,211,197,4,36,126,97,154,4,212,
210,13,87,83,133,53,197,120,245,209,22,163,121,31,233,21,149,165,119,23,188,37,31,89,228,211,202,91,215,245,57,122,146,87,237,182,34,25,69,239,205,120,162,141,181,243,222,191,167,218,27,13,55,204,186,
230,159,166,145,196,216,89,107,26,133,173,161,90,113,226,96,134,116,142,156,71,26,113,251,63,15,76,68,50,129,86,166,81,67,105,158,107,189,209,38,146,227,64,213,181,45,14,230,97,194,226,125,34,254,235,
77,150,85,228,94,146,61,164,145,51,142,68,181,24,159,136,215,4,113,101,142,224,169,156,75,174,60,217,127,113,107,245,43,189,103,84,189,176,55,15,122,214,55,122,149,229,205,171,94,74,204,207,112,208,203,
43,70,211,51,59,51,74,87,212,102,102,60,183,194,113,229,144,162,118,94,56,133,218,111,156,181,77,41,110,19,70,214,181,93,30,43,186,125,114,29,47,81,188,211,226,184,42,56,143,89,45,165,141,100,160,248,
126,48,223,15,195,211,17,139,36,5,2,188,113,60,213,79,157,181,179,127,14,172,124,201,174,29,94,218,47,171,218,234,95,165,245,15,174,65,6,255,0,185,134,127,95,212,142,63,136,254,237,25,83,252,156,120,51,
93,218,241,65,10,190,99,153,44,238,180,212,212,245,20,210,239,231,91,205,71,78,91,251,165,179,186,185,82,140,38,184,183,18,136,230,146,177,161,231,34,179,85,20,215,225,193,225,229,170,190,107,199,21,183,
62,97,107,203,107,59,29,66,254,251,80,211,244,232,77,174,155,99,125,123,113,119,107,105,110,193,3,71,111,12,242,60,112,161,17,160,43,26,168,162,168,253,156,101,139,36,133,18,162,113,9,131,249,251,204,
115,89,54,153,55,154,117,249,52,150,79,73,180,201,53,157,69,236,140,71,253,214,109,204,230,34,159,228,112,227,237,146,225,205,85,107,197,14,228,4,158,97,154,100,211,18,125,87,83,153,52,53,72,244,33,46,
163,121,32,211,150,38,137,208,89,115,148,253,91,139,65,17,95,67,211,227,233,199,79,176,185,19,12,166,183,228,188,81,85,95,53,223,38,168,250,242,235,58,168,243,20,175,234,73,174,126,146,188,253,38,206,
35,88,65,55,158,175,174,127,118,170,159,222,125,133,11,246,70,62,30,91,226,189,215,142,53,72,13,119,204,183,218,204,175,117,169,234,23,186,173,252,129,81,239,117,59,185,239,238,89,18,188,84,205,114,242,
57,85,169,226,188,168,59,101,208,197,35,43,145,97,41,138,160,198,88,212,147,155,0,227,181,138,29,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,255,212,242,166,92,208,236,85,188,85,216,171,171,138,186,167,21,117,79,142,41,117,78,40,118,42,234,156,85,172,85,216,171,177,86,234,113,87,84,226,174,197,93,83,138,93,83,138,186,167,
199,21,117,113,67,171,138,186,167,20,186,167,20,58,167,21,117,78,42,234,156,85,213,56,171,170,113,75,170,113,67,170,113,87,84,226,151,84,226,135,84,226,174,197,90,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,175,255,213,242,166,92,208,236,85,149,121,71,200,183,254,105,75,141,66,75,168,52,159,47,89,50,173,246,177,124,
222,156,10,88,138,164,125,57,201,196,242,225,85,31,103,147,167,52,229,207,118,183,109,226,208,152,227,17,150,92,211,190,12,88,247,153,254,148,191,153,14,47,79,22,253,120,99,46,25,86,223,65,217,147,213,
3,43,16,199,31,171,36,254,159,112,254,116,188,190,100,88,100,13,165,126,78,91,176,182,250,215,152,245,57,35,85,89,111,172,163,180,138,222,87,0,114,104,210,112,29,86,189,3,87,253,102,235,154,168,103,237,
252,131,136,67,79,140,30,80,153,201,41,196,116,226,150,63,65,62,239,144,228,231,203,23,101,195,99,44,179,63,206,143,0,137,247,9,122,157,250,51,242,127,253,245,230,191,251,151,100,248,187,127,254,129,127,
233,115,30,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,
0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,
118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,
151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,
154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,
0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,
252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,
74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,
119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,
217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,
151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,
0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,
187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,
177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,
127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,
0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,
79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,
110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,
254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,
236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,
75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,
0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,
93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,
229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,
230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,
255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,104,136,252,133,228,111,51,68,176,249,63,91,186,211,53,128,120,173,143,152,214,52,73,249,50,129,194,107,117,
226,164,14,95,13,36,103,52,248,87,237,102,60,251,99,180,244,39,139,89,130,57,49,255,0,63,75,196,120,57,253,80,201,188,191,135,127,68,99,223,46,77,145,236,237,22,164,86,159,33,132,255,0,155,158,189,94,
233,67,151,251,35,47,39,156,234,186,86,161,162,106,23,26,86,171,110,246,186,133,171,250,115,193,39,85,61,70,226,160,130,8,42,192,241,101,248,151,108,236,180,186,172,90,156,81,203,138,66,80,144,184,200,
126,62,99,156,78,199,119,157,205,134,120,102,97,49,195,40,243,8,60,201,105,118,42,236,85,82,8,39,186,158,43,107,104,158,107,153,157,99,134,24,212,187,187,185,162,170,168,169,36,147,64,6,66,115,140,34,
101,34,0,2,201,59,0,7,82,202,49,50,32,1,100,189,28,126,95,249,87,202,241,22,252,194,214,220,234,172,163,143,151,244,47,78,123,200,217,130,48,245,165,144,24,212,138,176,41,74,29,153,37,110,153,195,255,
0,47,107,53,210,174,207,194,56,47,251,253,69,195,28,185,253,16,143,174,87,233,169,115,254,25,99,139,211,127,37,233,244,194,245,121,61,95,234,88,170,83,28,190,169,31,72,235,233,255,0,75,50,180,105,191,
147,196,84,69,230,191,251,151,102,71,23,111,255,0,208,47,253,46,107,225,236,175,246,239,250,86,223,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,
110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,
254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,
236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,
75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,
0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,
93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,
229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,
230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,
255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,
163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,
183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,
221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,
246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,
165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,
232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,
46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,
114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,
243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,
0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,
159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,
91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,
110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,
123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,
0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,
0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,84,135,73,252,156,150,84,142,79,241,68,8,196,6,
154,65,98,81,1,238,66,43,53,7,178,147,144,158,79,104,35,18,64,211,31,33,226,239,254,152,129,243,41,140,59,40,154,39,48,255,0,149,105,55,154,191,46,174,180,29,56,121,131,72,212,32,215,188,178,206,177,182,
161,106,10,73,3,50,173,5,196,38,166,46,76,74,175,196,221,185,240,103,85,204,238,205,237,248,234,114,254,95,54,57,96,207,87,225,207,148,249,255,0,117,63,242,148,55,59,15,232,241,70,50,147,139,173,236,163,
135,31,139,142,99,46,63,231,71,248,127,175,31,225,252,93,18,3,10,206,161,210,59,21,118,42,255,0,255,214,242,166,92,208,200,252,141,229,121,124,225,230,107,45,21,121,37,163,183,171,168,78,181,30,149,164,
95,20,175,203,139,133,36,124,40,88,113,245,25,20,245,205,39,109,246,156,123,63,73,60,223,197,203,28,127,157,146,95,64,171,143,23,243,165,195,234,224,140,136,118,93,155,162,58,188,241,199,211,156,143,243,
96,62,174,255,0,116,111,110,42,101,94,96,213,255,0,197,23,81,232,250,60,75,101,228,173,37,154,29,34,198,26,132,100,86,35,214,122,238,206,255,0,104,150,248,190,45,254,46,68,235,187,19,178,78,158,39,62,
99,199,168,203,234,203,57,115,254,164,123,163,31,167,211,182,223,205,167,59,180,117,195,41,240,241,142,28,80,218,17,31,238,143,156,185,171,91,105,182,240,32,80,131,58,103,76,175,245,104,63,144,98,174,
250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,
90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,
7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,
6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,
119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,
234,208,127,32,197,93,245,104,63,144,98,173,27,88,79,236,208,246,35,1,22,169,230,173,165,15,204,47,44,222,91,207,23,173,231,29,6,219,215,210,110,215,145,158,234,214,54,172,150,238,21,88,200,64,63,186,
31,107,212,97,186,134,147,151,5,154,63,200,154,200,100,129,173,46,162,92,57,97,252,24,178,203,232,201,27,49,224,7,252,167,78,8,245,253,223,15,81,3,252,165,167,148,36,47,54,40,241,66,95,197,56,15,170,7,
249,223,209,254,145,254,181,240,172,244,71,144,118,42,236,85,234,186,4,3,242,255,0,202,22,158,105,91,117,111,59,121,137,165,143,68,105,131,19,103,167,133,226,247,10,140,160,7,114,126,22,171,114,137,211,
129,226,100,86,243,253,105,61,177,175,150,144,75,252,27,5,28,220,63,229,115,116,198,100,15,209,14,177,218,178,70,92,91,136,24,245,154,96,59,63,74,51,215,239,178,223,135,127,193,143,249,245,252,233,119,
255,0,48,138,254,36,175,79,210,12,142,247,151,204,211,93,76,198,73,101,144,242,118,102,220,146,79,82,115,183,199,142,48,136,140,69,1,200,60,228,164,100,73,38,201,78,5,172,0,83,128,201,177,111,234,208,
127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,
144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,
49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,
190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,
131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,
131,21,119,213,160,254,65,138,181,245,104,63,144,98,169,158,135,169,205,160,220,201,36,17,164,246,87,40,97,191,176,148,6,134,226,22,20,100,117,32,131,80,78,105,123,91,178,113,235,241,128,79,12,227,234,
199,146,63,94,57,244,148,75,177,208,235,167,165,157,141,226,118,156,15,211,56,176,143,204,223,40,219,121,91,94,73,52,133,111,240,214,173,10,222,233,18,49,119,2,55,3,156,69,217,69,89,27,246,106,204,177,
180,124,219,147,101,30,206,246,158,77,102,3,28,223,223,225,145,199,152,109,245,71,148,248,65,229,49,215,211,19,56,207,128,112,134,125,175,162,142,159,40,56,255,0,186,200,56,241,251,191,155,254,111,196,
240,240,241,110,194,179,167,116,142,197,95,255,215,242,166,92,208,244,47,202,138,250,190,112,161,161,255,0,11,234,84,35,175,88,179,141,246,160,88,210,255,0,208,214,47,247,207,69,216,156,243,255,0,194,
103,254,245,25,163,219,164,54,169,196,118,206,177,210,50,93,27,203,94,99,243,17,152,121,127,71,189,213,141,191,19,112,44,45,165,186,244,249,215,143,63,73,91,141,120,154,87,173,49,85,109,91,201,254,109,
208,109,197,222,185,160,106,58,101,171,30,43,61,237,156,246,209,150,240,13,34,40,174,42,146,226,174,197,93,138,187,21,118,42,152,104,122,38,169,230,77,90,211,67,209,96,250,206,169,124,254,149,172,28,210,
62,111,66,105,202,70,85,27,14,231,21,111,94,208,181,95,44,234,247,90,22,185,111,245,93,86,201,132,119,54,252,210,78,12,84,48,28,163,102,83,177,29,14,42,151,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,89,63,229,231,252,166,26,119,252,247,175,252,136,147,56,255,0,108,71,250,211,151,252,207,250,105,7,127,236,255,0,248,246,63,243,191,220,73,243,206,118,207,50,236,85,216,
171,216,124,211,2,205,55,147,11,110,23,202,250,93,7,106,145,38,113,94,205,141,245,127,244,53,151,253,235,211,118,199,44,31,240,156,127,165,96,0,10,14,153,215,186,5,107,123,123,139,203,136,173,45,34,121,
238,167,117,138,8,34,82,242,73,35,144,170,170,170,9,44,73,160,3,21,100,51,126,92,254,97,91,196,243,207,229,45,102,40,99,28,158,71,211,174,149,84,14,228,152,232,49,86,50,65,4,130,40,70,196,28,85,216,171,
33,185,242,63,154,45,60,165,103,231,155,139,14,30,86,191,152,219,90,95,250,208,158,114,171,72,133,125,48,230,65,188,78,42,200,6,223,44,85,143,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,15,249,171,255,0,40,127,145,171,255,0,107,111,249,63,22,114,93,144,63,215,109,119,252,144,255,0,166,101,222,118,135,248,142,155,254,74,255,0,187,15,40,206,
205,231,29,138,191,255,208,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,
29,35,234,15,249,196,245,145,236,188,254,176,206,182,210,181,165,152,142,229,220,198,177,49,91,186,57,113,186,133,59,242,237,138,178,29,82,77,111,200,63,145,158,96,95,63,107,255,0,227,41,124,200,30,219,
69,186,182,150,125,78,218,63,172,197,198,55,250,212,192,124,32,143,81,107,183,37,248,57,28,85,34,242,87,228,126,147,31,229,246,143,230,155,143,41,207,231,173,123,91,85,157,180,229,212,215,72,183,181,181,
151,226,70,14,94,50,205,198,149,31,22,237,251,52,229,138,162,53,63,202,15,203,127,42,254,109,249,123,69,213,244,233,38,242,183,155,173,38,142,215,79,184,185,153,90,207,81,136,169,80,37,134,85,102,13,81,
24,12,207,241,63,83,183,21,82,77,55,242,147,202,190,83,211,191,51,53,255,0,60,233,230,251,78,242,221,195,88,249,126,7,154,123,112,242,186,137,33,36,197,34,19,204,77,110,55,228,62,38,197,89,7,151,191,34,
52,125,47,201,254,94,213,46,60,155,113,231,189,107,90,142,59,173,72,46,170,186,76,54,16,76,139,32,8,61,88,140,140,3,82,155,242,96,255,0,26,14,3,21,81,79,200,191,38,105,127,158,54,190,84,187,182,146,255,
0,202,90,150,149,54,165,111,105,52,242,163,197,44,108,80,167,169,11,163,144,10,242,21,61,26,135,151,26,226,172,95,202,23,94,70,131,243,131,203,222,94,242,183,150,165,211,47,52,205,114,120,167,213,167,
212,37,187,123,136,163,18,160,79,68,162,164,96,17,85,32,179,80,124,76,221,113,86,125,113,229,207,202,255,0,204,15,206,47,54,249,43,89,242,253,223,233,246,70,186,255,0,16,45,244,130,142,145,194,10,199,
110,129,17,66,134,20,47,234,242,61,113,87,203,58,238,152,218,38,183,169,104,206,254,163,233,215,83,217,180,128,83,145,183,145,163,38,155,245,227,138,165,248,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,39,252,189,255,0,148,195,77,255,0,158,255,0,242,98,76,228,61,177,255,0,140,156,223,230,127,211,72,59,255,0,103,255,0,199,177,255,0,157,254,226,79,158,115,181,121,151,98,174,
197,94,207,230,63,239,60,157,255,0,128,190,151,250,164,206,43,217,191,249,23,255,0,67,89,127,222,189,47,107,242,193,255,0,9,199,250,80,249,215,186,22,75,249,119,255,0,147,3,202,159,246,217,211,255,0,234,
42,60,85,238,63,158,127,152,222,118,242,103,231,12,95,225,253,90,238,59,56,109,172,228,253,18,37,118,179,148,181,121,43,64,73,66,95,165,66,242,240,223,21,100,63,153,31,148,58,15,156,191,59,180,107,53,
63,163,237,245,109,58,93,83,94,142,223,138,202,230,218,78,28,215,98,3,202,89,85,154,159,178,207,187,87,21,93,119,249,1,229,173,99,77,243,5,138,121,42,231,202,87,58,124,108,218,22,186,218,178,234,6,245,
163,13,67,45,184,153,196,97,184,130,203,78,141,179,41,24,171,9,243,24,39,254,113,55,201,224,10,147,171,202,0,31,243,19,168,98,172,175,201,223,148,190,83,243,20,246,214,119,223,148,250,150,153,162,77,13,
27,204,151,186,187,195,116,178,24,249,134,107,19,48,32,19,183,194,31,143,237,39,218,162,172,103,202,31,148,222,72,213,181,143,204,111,203,121,173,218,231,205,186,55,173,47,150,117,73,102,150,57,12,97,
120,170,188,104,235,19,112,115,31,34,83,226,245,27,236,237,138,177,191,50,249,31,203,30,77,252,149,209,53,125,99,78,39,243,7,204,183,6,75,89,164,150,116,123,123,53,110,117,244,67,170,31,128,32,60,144,
154,205,236,49,87,141,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,161,255,0,53,127,229,15,242,55,253,189,191,228,252,89,201,246,79,252,107,107,191,228,135,253,
51,46,243,180,63,196,116,223,242,87,253,216,121,70,118,79,56,236,85,255,209,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,
255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,35,212,191,43,191,53,127,229,90,217,121,146,211,244,71,233,63,241,5,188,118,220,254,179,245,111,71,211,89,151,149,61,41,57,215,213,233,240,253,156,85,
29,228,143,206,153,60,187,228,205,75,200,30,102,209,71,153,124,177,122,25,109,237,222,231,234,175,108,36,169,112,143,233,77,183,42,58,108,190,155,252,67,174,202,183,163,126,113,105,227,202,118,254,71,
243,175,149,97,243,79,151,52,249,25,244,133,150,242,75,59,203,117,44,74,169,184,133,9,96,160,149,248,85,42,54,251,35,142,42,198,124,207,231,29,31,81,212,180,171,239,39,249,114,15,42,71,164,16,246,233,
111,51,221,204,242,171,43,172,146,205,34,171,59,41,93,171,138,179,47,205,95,207,203,207,204,207,47,91,121,125,52,97,163,66,151,11,119,127,36,119,62,191,214,94,56,202,40,43,232,199,64,43,93,203,116,95,
229,197,80,182,31,156,186,109,239,149,116,207,41,254,97,249,70,15,54,90,104,171,233,105,55,95,92,155,78,185,138,16,21,66,25,34,87,36,0,161,118,227,85,84,229,94,53,197,90,242,255,0,230,254,139,229,111,
62,89,249,191,64,242,116,26,118,155,101,167,62,153,30,141,111,118,192,191,55,102,245,165,184,120,157,158,74,48,82,204,181,96,171,190,42,197,180,31,59,254,132,252,196,139,207,223,81,245,253,43,249,181,
31,209,254,183,10,250,204,237,195,213,224,221,57,125,174,31,70,42,244,191,250,24,173,30,199,86,214,60,213,229,239,33,193,167,249,211,88,140,197,46,181,54,163,53,216,81,240,129,251,150,137,87,246,86,161,
12,124,184,142,88,171,194,238,174,174,47,110,102,189,187,144,203,117,113,35,77,60,173,246,158,73,9,102,99,238,73,174,42,165,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,178,
127,203,223,249,76,52,223,249,239,255,0,38,36,206,67,219,31,248,201,205,254,103,253,52,131,191,246,127,252,123,31,249,223,238,36,249,231,59,87,153,118,42,236,85,236,254,99,254,243,201,223,248,11,233,127,
170,76,226,189,155,255,0,145,127,244,53,151,253,235,210,246,191,44,31,240,156,127,165,15,157,123,161,76,188,187,171,126,128,243,6,147,174,250,63,88,253,23,121,111,123,245,126,94,159,169,245,105,86,94,
28,168,220,121,113,165,104,105,225,138,189,151,87,252,253,242,110,179,230,36,243,133,231,229,172,55,30,104,129,99,91,107,235,157,86,105,163,67,14,241,147,7,160,177,146,167,112,105,203,223,21,97,73,249,
207,231,79,249,88,113,254,100,205,52,82,107,40,61,31,170,240,43,105,245,82,10,155,112,156,170,18,134,191,107,151,47,143,151,45,241,84,231,82,252,211,252,187,191,158,243,85,95,202,251,36,243,21,242,177,
154,241,245,25,229,181,19,74,62,57,22,208,196,34,4,159,136,120,31,30,234,165,146,254,109,76,127,44,188,191,249,121,111,165,136,174,52,13,67,244,156,90,177,159,152,145,196,243,204,170,96,244,133,40,102,
165,125,67,246,127,202,217,86,115,63,252,228,166,149,123,230,13,39,205,218,135,145,34,184,243,70,151,27,65,29,240,213,46,22,53,142,68,117,113,20,30,145,141,11,23,251,76,36,110,63,15,129,85,82,239,202,
223,50,235,30,112,255,0,156,133,183,243,62,145,105,245,51,170,92,92,92,95,90,25,61,84,142,205,161,34,80,207,197,57,80,1,199,225,31,31,28,85,46,255,0,156,144,243,136,243,71,230,53,206,159,106,225,180,191,
47,39,232,219,112,167,225,51,33,229,59,124,249,159,79,229,24,197,94,65,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,135,252,213,255,0,148,63,200,223,246,246,255,
0,147,241,103,39,217,63,241,173,174,255,0,146,31,244,204,187,206,208,255,0,17,211,127,201,95,247,97,229,25,217,60,227,177,87,255,210,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,
206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,
57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,
254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,211,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,
98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,
158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,
236,60,163,59,39,156,118,42,255,0,255,212,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,
84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,
127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,
252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,213,242,
166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,
63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,
255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,
249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,214,242,166,92,208,244,47,202,127,239,188,225,255,0,128,
198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,
255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,
53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,215,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,
67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,
175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,
58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,208,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,
245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,
202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,
82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,
255,0,255,209,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,
0,198,78,111,243,63,233,164,29,255,0,179,255,0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,
94,151,181,249,96,255,0,132,227,253,40,124,235,221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,
0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,210,242,166,92,208,244,47,202,127,239,
188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,147,254,94,255,0,202,97,166,255,0,207,127,249,49,38,114,30,216,255,0,198,78,111,243,63,233,164,29,255,0,179,255,
0,227,216,255,0,206,255,0,113,39,207,57,218,188,203,177,87,98,175,103,243,31,247,158,78,255,0,192,95,75,253,82,103,21,236,223,252,139,255,0,161,172,191,239,94,151,181,249,96,255,0,132,227,253,40,124,235,
221,11,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,
44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,211,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,
127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,76,116,29,15,80,243,38,175,105,161,233,72,175,168,94,185,142,5,145,214,53,36,41,99,86,98,0,216,
119,197,83,77,71,200,186,246,159,167,205,170,196,108,245,45,54,215,143,214,238,116,187,219,107,241,7,51,197,76,203,4,140,232,164,236,29,148,37,118,229,92,85,141,98,174,197,93,138,187,21,118,42,236,85,
94,202,206,235,81,188,183,211,236,97,107,139,219,185,82,11,104,35,28,158,73,101,96,168,170,59,146,72,3,21,78,117,127,35,121,191,65,179,109,67,89,209,174,108,172,145,130,52,243,39,21,12,198,128,87,223,
21,99,248,171,177,87,98,174,197,93,138,187,21,118,42,236,85,54,208,252,179,175,121,150,73,162,208,236,37,188,54,234,30,225,208,1,28,74,219,41,119,98,21,106,71,195,200,252,93,177,85,75,239,40,249,155,76,
188,185,176,191,210,174,109,238,236,237,205,245,196,79,25,5,109,1,11,235,87,161,142,166,156,199,195,138,164,184,171,177,87,98,174,197,93,138,162,116,253,58,251,86,188,139,79,211,109,222,234,250,106,136,
173,226,82,210,57,85,44,104,7,93,129,56,170,244,210,181,41,52,217,117,152,237,37,109,42,9,82,218,107,192,132,194,147,72,165,149,11,116,4,133,39,21,86,151,203,250,220,16,203,113,53,132,201,12,22,208,95,
204,236,132,4,181,187,100,88,101,62,11,33,145,56,158,252,134,42,165,167,105,58,134,172,215,43,167,192,103,54,118,242,222,220,128,84,112,183,183,28,164,127,136,138,241,29,134,248,170,181,159,151,117,203,
253,78,195,70,182,176,155,244,158,169,233,29,58,222,69,244,76,235,63,247,108,134,78,32,171,126,203,87,137,197,82,204,85,216,171,177,87,98,174,197,83,67,229,173,125,111,175,180,195,166,220,126,144,211,
33,146,231,80,182,244,219,212,130,8,20,52,146,56,236,170,13,75,120,98,168,73,52,235,232,172,32,212,229,183,116,211,238,100,146,27,123,150,82,35,146,72,2,25,21,79,114,161,215,149,63,155,21,91,105,101,121,
127,63,213,172,109,229,186,185,42,242,8,96,70,145,248,68,134,71,110,42,9,162,162,179,49,253,149,5,177,85,12,85,216,171,177,87,98,174,197,83,109,15,203,30,96,243,43,207,30,129,167,79,168,61,178,171,220,
11,116,47,193,92,208,22,240,169,197,84,117,125,11,90,242,253,215,212,181,205,62,227,78,187,35,154,195,117,19,194,204,132,208,50,135,2,170,123,48,216,226,169,126,42,236,85,216,171,177,87,98,172,159,242,
247,254,83,13,55,254,123,255,0,201,137,51,144,246,199,254,50,115,127,153,255,0,77,32,239,253,159,255,0,30,199,254,119,251,137,62,121,206,213,230,93,138,187,21,123,63,152,255,0,188,242,119,254,2,250,95,
234,147,56,175,102,255,0,228,95,253,13,101,255,0,122,244,189,175,203,7,252,39,31,233,67,231,94,232,81,58,125,147,234,55,144,217,71,44,48,60,205,196,75,115,42,65,10,237,90,188,142,66,168,247,39,21,101,
55,223,150,186,214,157,167,69,170,92,234,58,56,178,184,142,89,109,100,93,82,209,189,117,128,149,113,16,18,124,100,48,227,69,253,173,177,86,45,168,89,73,167,94,75,101,44,176,204,240,144,26,91,89,82,226,
22,168,7,225,146,50,202,221,123,28,85,13,138,187,21,70,105,58,101,230,183,170,216,232,218,122,135,191,212,110,34,179,181,70,96,161,166,184,113,26,2,199,97,86,97,185,197,80,243,195,37,188,210,91,202,41,
44,76,209,184,235,70,83,67,138,169,226,174,197,89,108,63,150,31,152,51,194,183,16,249,114,245,224,101,86,18,44,68,175,23,21,83,95,124,85,35,213,52,45,103,68,49,141,90,202,91,63,89,165,72,189,101,43,201,
160,127,78,64,60,120,176,226,113,84,187,21,118,42,236,85,145,201,228,31,58,199,165,174,180,218,13,239,232,166,129,111,5,218,194,237,31,213,157,67,172,164,168,52,66,164,55,46,148,197,88,230,42,236,85,216,
170,189,149,157,214,163,121,111,167,216,194,215,23,183,114,164,22,208,70,57,60,146,202,193,81,84,119,36,144,6,42,200,46,191,46,188,243,101,232,253,111,65,188,136,220,77,29,172,1,163,53,121,231,96,145,
160,255,0,41,152,208,12,85,15,172,121,35,205,254,95,181,250,246,179,162,94,89,89,114,17,155,153,97,97,18,185,232,172,224,16,9,236,9,223,21,74,108,180,251,221,69,229,138,198,7,184,146,24,101,185,149,99,
28,138,193,110,134,73,28,211,246,85,84,179,31,12,85,13,138,187,21,118,42,236,85,94,202,206,235,81,188,183,211,236,97,107,139,219,185,82,11,104,35,28,158,73,101,96,168,170,59,146,72,3,21,79,175,127,47,
124,239,167,44,111,125,161,93,192,179,75,29,180,69,227,35,148,211,48,68,65,238,204,104,49,85,45,95,200,190,113,208,45,26,255,0,88,208,239,44,236,99,96,146,92,203,11,8,145,152,209,67,176,4,41,39,97,94,
184,170,93,164,104,186,182,191,122,186,110,139,103,45,245,251,171,58,219,192,165,220,172,106,89,141,7,96,5,78,42,171,173,249,111,204,30,91,146,40,181,237,54,231,78,121,212,188,31,89,137,163,18,42,154,
18,140,69,26,135,99,67,182,42,149,226,174,197,93,138,170,65,4,215,51,199,109,110,134,75,137,157,99,138,53,21,102,119,52,80,7,137,39,21,76,100,242,215,152,34,215,71,150,36,211,46,23,204,38,69,128,105,134,
54,250,199,168,224,50,175,10,87,112,65,249,98,170,55,58,46,173,103,4,247,55,118,114,195,111,107,116,116,251,137,29,72,88,238,212,18,98,99,217,192,83,183,182,42,128,197,81,48,105,247,215,54,183,87,214,
246,239,37,157,136,70,188,157,65,41,16,149,184,33,99,219,147,26,12,85,13,138,187,21,118,42,236,85,48,191,208,245,141,46,210,198,255,0,81,178,154,218,203,83,140,205,167,207,42,21,73,227,82,1,104,201,216,
129,81,138,162,46,60,171,230,75,73,190,175,117,165,220,195,113,245,47,210,134,41,35,101,113,99,66,222,185,7,112,148,29,113,84,159,21,69,105,186,109,254,177,125,6,153,165,219,73,119,168,92,183,8,45,161,
94,82,59,82,180,0,117,216,98,168,253,111,202,126,102,242,218,69,46,187,164,221,105,240,206,74,195,52,241,50,70,236,58,170,189,56,146,59,138,215,21,73,177,87,98,174,197,80,255,0,154,191,242,135,249,27,
254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,255,0,255,212,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,
250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,103,63,147,138,207,249,153,229,228,64,89,154,119,10,163,114,73,134,77,134,
42,153,249,75,203,190,96,242,67,234,190,97,243,125,132,250,46,143,250,43,81,178,54,154,146,27,73,111,230,189,181,146,8,96,142,25,66,200,255,0,188,101,145,153,80,170,44,101,142,42,244,79,46,217,106,86,
214,48,249,118,120,181,189,107,203,119,30,89,184,184,151,81,154,228,39,151,19,212,211,37,185,68,130,216,66,85,228,142,74,71,234,25,132,222,162,51,113,85,67,138,165,126,86,214,245,75,95,50,126,82,121,118,
222,228,197,161,234,186,100,9,170,216,40,81,13,218,92,106,55,208,186,92,45,63,122,165,5,2,201,201,87,237,45,24,215,21,74,188,173,174,106,222,104,208,180,107,191,48,93,62,161,61,151,157,180,72,44,154,122,
17,4,23,49,92,25,34,137,64,2,56,152,195,31,238,208,4,28,118,92,85,83,205,207,230,191,208,30,125,139,207,17,221,67,166,165,236,9,229,72,117,8,154,20,75,161,123,184,178,71,85,10,159,85,18,122,158,144,227,
78,5,190,210,226,175,20,197,93,138,178,159,203,63,252,153,30,78,255,0,182,222,153,255,0,81,113,98,169,204,82,249,75,86,243,230,145,167,216,232,82,218,180,186,237,188,87,173,115,120,47,34,154,23,185,8,
232,98,48,71,64,213,254,99,182,216,171,43,211,100,242,230,169,169,121,194,123,141,35,76,210,162,242,132,115,157,50,59,77,52,95,252,19,94,199,110,243,207,4,178,255,0,164,122,42,62,31,80,152,227,50,179,
148,226,161,113,86,180,171,95,34,121,131,204,15,171,91,66,172,250,103,150,238,117,11,134,253,17,28,22,119,55,246,247,66,17,60,122,114,74,35,117,72,88,179,162,176,137,164,133,155,133,57,38,42,150,205,54,
155,174,235,94,94,95,38,89,89,94,235,51,195,115,109,172,95,95,104,214,214,26,83,71,19,44,191,89,54,192,201,10,24,99,229,235,72,138,191,10,253,154,157,213,76,236,174,124,149,230,29,95,204,250,213,149,157,
165,181,135,149,244,184,83,78,150,61,42,25,214,225,141,202,67,62,161,45,128,104,209,233,204,241,71,170,68,140,141,34,183,12,85,129,126,96,221,249,110,254,235,74,188,242,252,124,101,146,202,154,148,241,
216,166,151,109,113,112,147,72,130,104,109,227,103,68,5,2,171,240,162,122,136,212,85,223,21,97,248,171,177,87,98,172,223,203,26,206,155,111,229,75,253,19,205,58,61,245,223,149,174,175,161,186,77,79,76,
144,91,205,5,244,17,58,5,45,36,114,68,225,146,79,176,212,35,237,41,197,89,42,121,71,65,181,143,82,189,179,150,125,71,71,189,242,133,222,175,163,67,171,68,137,123,102,82,244,64,42,170,204,163,226,87,120,
228,78,33,213,234,6,42,130,189,213,32,209,252,128,131,91,210,52,166,215,181,248,22,61,22,20,211,237,162,185,182,211,211,225,107,233,100,84,14,100,148,175,24,55,220,115,152,215,247,120,171,35,243,180,30,
66,208,37,243,15,147,196,75,50,217,216,148,209,225,183,209,98,142,233,39,142,53,146,43,182,212,150,83,52,137,32,248,164,229,88,248,63,194,137,65,138,188,55,21,118,42,236,85,54,242,182,183,39,150,188,201,
164,121,130,46,69,244,203,200,46,248,175,86,88,100,12,203,219,237,0,70,42,247,123,239,43,71,107,37,247,228,230,156,200,135,204,81,234,122,230,154,20,86,172,183,209,61,137,31,59,75,25,8,95,9,143,142,42,
194,252,196,250,94,189,125,249,171,168,165,188,114,195,165,91,217,90,232,178,176,12,209,65,103,169,89,216,70,209,159,217,45,10,241,52,236,196,98,169,251,58,233,30,101,243,239,147,52,205,54,206,223,67,
209,252,187,169,69,109,60,118,112,11,185,17,109,147,140,242,93,240,245,155,214,229,206,141,39,167,241,0,171,246,113,84,93,158,185,61,207,230,63,229,86,156,214,118,81,197,37,150,133,113,245,136,173,33,
142,226,188,8,226,37,85,12,19,252,138,241,197,94,121,169,221,91,235,255,0,150,215,90,212,218,101,133,149,254,159,174,218,89,90,73,167,218,69,104,69,173,221,165,204,141,19,180,96,52,160,52,8,85,165,103,
147,237,124,102,184,171,207,241,87,98,174,197,93,138,190,140,211,181,91,93,54,29,23,243,26,228,6,135,206,112,232,158,95,212,165,109,139,36,13,45,174,169,80,122,124,54,112,49,241,245,65,197,80,73,229,189,
55,73,213,45,60,155,174,112,150,95,37,121,106,243,87,146,39,182,23,170,117,59,219,165,149,153,237,139,160,148,71,111,36,111,193,141,63,117,241,242,90,174,42,133,242,206,179,229,201,188,227,161,94,249,
122,222,27,157,73,180,141,126,223,84,187,58,76,26,109,165,195,195,167,207,44,45,29,180,101,226,15,79,221,202,99,11,205,62,18,191,27,85,87,138,234,154,132,154,173,244,183,242,193,111,108,242,241,172,54,
112,165,180,11,197,66,252,49,198,2,173,105,83,65,185,223,21,66,98,174,197,93,138,187,21,103,30,84,255,0,201,125,249,129,255,0,24,116,175,250,143,92,85,146,121,66,210,121,124,167,160,233,222,106,129,164,
177,189,243,86,150,190,92,182,187,83,87,183,126,107,168,20,89,58,192,220,160,86,227,240,52,158,252,177,86,173,239,52,63,51,121,199,83,242,28,186,14,147,165,219,221,157,67,74,208,238,45,32,244,165,138,
252,202,173,102,210,76,236,206,213,146,21,139,175,217,153,197,56,252,56,171,21,252,194,178,211,244,59,221,59,202,150,112,68,151,186,29,156,112,235,55,81,129,234,77,169,205,89,174,3,184,220,136,75,136,
20,31,179,233,156,85,135,98,174,197,93,138,178,127,203,223,249,76,52,223,249,239,255,0,38,36,206,67,219,31,248,201,205,254,103,253,52,131,191,246,127,252,123,31,249,223,238,36,249,231,59,87,153,118,42,
236,85,236,254,99,254,243,201,223,248,11,233,127,170,76,226,189,155,255,0,145,127,244,53,151,253,235,210,246,191,44,31,240,156,127,165,15,157,123,161,118,42,206,60,215,255,0,146,251,242,255,0,254,48,234,
191,245,30,216,171,208,188,207,168,222,232,87,127,154,247,250,60,166,202,250,43,173,17,32,185,132,5,150,33,32,112,198,55,165,81,136,253,164,42,222,248,170,42,31,48,235,90,135,157,60,179,162,222,94,60,
154,86,189,229,132,184,215,44,254,21,138,250,226,109,46,98,243,92,170,129,234,201,84,82,36,147,147,175,31,133,177,85,109,6,239,244,102,135,229,47,208,26,38,185,174,121,122,125,52,29,86,199,74,150,47,209,
23,55,110,92,94,37,250,125,93,254,53,63,181,43,254,238,62,13,31,5,197,94,61,249,103,255,0,147,35,201,223,246,219,211,63,234,46,44,85,175,52,249,55,205,250,69,205,254,167,171,121,127,82,176,211,126,179,
32,250,229,213,156,240,65,87,144,241,253,227,160,93,251,111,190,42,197,241,87,98,172,227,203,95,249,45,124,245,255,0,25,180,95,249,61,62,42,202,188,159,161,232,115,201,249,108,247,122,101,181,202,223,
219,107,210,234,17,205,24,101,184,107,83,112,98,245,105,66,220,120,138,111,183,108,85,0,222,99,85,252,190,182,243,74,232,90,32,215,19,90,155,76,142,227,244,93,161,140,89,253,90,41,253,54,128,198,97,114,
24,208,75,36,111,55,31,247,103,124,85,149,106,218,7,148,60,175,39,155,181,152,210,222,197,162,215,97,177,135,213,210,161,214,224,180,183,150,216,92,132,75,123,135,17,160,149,217,149,93,131,149,88,248,
39,30,184,171,201,60,243,38,133,55,154,111,167,242,213,187,218,232,211,8,37,130,9,34,54,244,105,32,141,165,43,17,103,224,134,66,205,26,242,63,187,43,138,189,126,214,13,46,47,52,104,90,166,155,121,113,
113,231,123,79,41,105,79,166,104,18,69,29,189,173,228,173,164,197,24,141,46,189,103,103,110,12,95,209,48,167,171,79,73,100,169,221,87,207,236,172,140,81,193,87,82,67,41,20,32,142,160,140,85,172,85,216,
171,41,252,179,255,0,201,145,228,239,251,109,233,159,245,23,22,42,201,244,27,239,45,92,254,105,249,98,45,31,71,159,79,188,79,51,88,153,174,38,189,250,210,186,139,213,4,4,244,35,227,83,189,121,28,85,31,
107,113,160,234,250,55,230,14,145,162,105,55,90,51,125,85,175,111,181,73,174,254,187,4,130,194,233,38,91,118,67,12,66,51,43,129,193,131,22,228,56,124,74,205,138,177,111,203,31,248,234,107,191,248,13,235,
255,0,247,77,159,21,97,56,171,177,87,98,174,197,89,79,229,159,254,76,143,39,127,219,111,76,255,0,168,184,177,84,250,198,251,203,87,63,152,154,20,90,62,143,62,159,120,158,96,181,51,92,77,123,245,165,117,
23,106,8,9,232,71,198,167,122,242,56,171,34,91,157,11,83,155,243,35,72,209,116,139,173,42,237,237,47,231,190,214,36,187,250,228,5,44,110,62,180,97,104,140,49,172,126,187,196,21,31,145,101,126,42,181,228,
216,171,17,252,167,91,103,215,117,117,188,145,225,179,111,47,107,130,226,88,80,77,34,70,116,233,185,50,70,207,24,102,3,112,165,211,151,78,75,215,21,70,121,178,11,91,63,203,173,6,211,203,115,203,171,121,
98,75,251,155,203,141,86,225,22,25,160,212,36,141,35,54,143,110,143,40,130,145,198,36,31,189,144,77,203,146,183,193,64,171,206,49,87,98,174,197,83,143,42,127,202,83,161,255,0,219,66,211,254,79,38,42,247,
11,239,59,104,95,227,25,181,137,25,143,230,69,174,177,63,150,45,254,19,199,244,124,151,197,86,243,149,0,18,71,110,100,180,27,242,163,35,254,206,42,196,188,205,111,111,109,111,230,45,114,13,58,222,243,
88,135,207,115,65,16,158,5,184,245,98,43,59,250,12,164,85,145,216,10,167,124,85,191,205,79,46,232,222,87,210,33,95,47,233,113,164,122,189,227,75,171,220,179,71,115,38,151,123,28,97,155,72,71,21,225,233,
23,46,205,179,202,56,175,251,169,241,86,55,229,79,252,151,223,152,31,241,135,74,255,0,168,245,197,88,62,42,236,85,216,171,177,87,189,220,249,131,202,163,67,242,183,151,252,242,25,244,139,29,7,79,215,180,
148,85,44,100,188,183,150,117,150,204,208,26,37,220,97,81,137,217,90,52,56,170,142,191,48,243,110,168,154,198,191,20,119,151,179,249,2,231,82,45,34,130,169,117,206,225,213,208,26,241,226,79,193,79,179,
138,160,32,209,116,183,252,188,95,59,29,10,223,252,95,14,155,37,186,105,92,35,244,36,176,18,122,31,166,205,183,118,64,76,70,171,193,164,255,0,73,253,150,197,88,151,228,231,19,249,153,229,224,228,133,245,
223,145,2,164,15,70,78,130,163,21,76,117,43,125,58,211,242,182,116,242,149,213,198,179,164,221,234,176,77,173,207,121,18,90,79,167,205,109,28,177,219,169,181,73,110,2,172,226,86,255,0,72,18,149,110,11,
23,194,194,152,171,205,113,87,98,174,197,80,255,0,154,191,242,135,249,27,254,222,223,242,126,44,228,251,39,254,53,181,223,242,67,254,153,151,121,218,31,226,58,111,249,43,254,236,60,163,59,39,156,118,42,
255,0,255,213,242,166,92,208,244,95,201,193,29,214,189,172,232,158,168,142,247,91,209,47,244,235,0,193,138,181,196,129,36,0,149,6,128,42,51,84,248,120,211,56,191,107,73,199,167,195,158,174,56,115,227,
203,63,234,70,227,254,234,81,31,30,231,164,236,16,39,151,38,59,223,38,57,194,63,214,52,126,224,83,43,56,164,130,35,4,200,99,154,34,82,72,216,81,149,151,98,8,241,7,58,184,78,51,136,148,77,130,44,23,73,
40,152,146,14,196,34,50,108,93,138,187,21,94,101,149,163,88,89,216,194,132,148,140,146,84,22,234,64,232,43,138,172,197,81,122,86,163,113,163,234,150,90,189,160,83,117,97,113,21,212,2,64,74,25,32,113,34,
242,0,138,138,141,247,197,91,212,245,59,189,90,242,107,219,199,45,44,242,73,49,64,79,4,50,177,118,8,9,52,21,61,49,84,30,42,236,85,86,214,234,230,202,230,27,203,57,158,222,242,221,214,107,123,136,88,199,
36,114,70,67,43,163,41,5,89,72,168,35,166,42,220,87,119,80,221,37,244,51,201,29,236,114,9,163,185,71,101,149,101,86,228,28,56,53,12,14,245,173,107,138,162,108,117,189,99,76,212,191,76,105,218,133,197,
174,173,201,156,222,195,43,164,229,164,175,50,92,26,158,85,60,171,246,187,226,168,171,159,54,249,162,239,87,131,95,185,214,111,100,214,237,128,75,93,64,207,39,175,18,173,104,177,184,53,64,57,29,150,131,
115,227,138,162,36,243,239,157,228,212,19,86,62,98,212,151,82,142,35,111,29,212,119,115,71,34,66,196,22,141,74,48,226,164,128,74,141,137,223,174,42,167,39,157,124,227,54,167,111,173,79,230,13,74,109,94,
213,76,118,215,210,221,207,36,241,198,213,170,43,179,150,10,106,106,181,161,197,80,90,198,187,172,249,134,236,95,107,151,243,234,55,138,130,36,154,230,70,149,150,53,36,132,94,68,209,65,38,138,54,223,21,
75,241,87,98,174,197,83,125,19,205,94,101,242,223,170,52,29,90,239,78,73,233,235,199,109,51,199,28,148,233,205,1,226,212,237,81,138,169,92,249,131,94,188,187,187,191,186,212,238,230,189,191,140,193,123,
112,243,200,210,77,11,82,177,200,197,170,201,240,143,132,252,59,12,85,29,47,158,188,239,54,158,218,76,222,101,213,100,210,154,47,171,181,139,223,92,181,185,131,143,31,76,198,95,143,10,109,198,148,166,
42,166,222,114,243,107,232,227,203,237,173,223,29,16,32,136,88,27,137,61,31,72,116,143,141,126,192,254,79,177,237,138,164,120,171,177,87,98,174,197,83,37,243,23,152,23,80,183,213,215,86,188,26,173,162,
44,86,151,194,226,81,113,12,113,175,5,72,228,229,201,85,84,241,0,29,151,108,85,9,21,237,236,16,220,219,193,113,44,86,247,138,169,121,18,59,42,76,136,226,69,89,20,26,48,14,170,192,55,237,0,221,113,84,218,
79,58,249,194,93,53,52,121,53,235,243,165,71,17,183,91,63,172,202,34,244,10,240,244,202,134,161,78,39,136,83,240,133,248,122,98,171,97,243,143,154,237,172,45,52,203,125,106,246,27,11,9,69,197,140,17,220,
72,130,9,84,146,26,62,36,21,32,177,35,143,115,92,85,43,23,183,139,102,250,122,220,74,44,36,149,110,36,181,14,194,22,154,53,100,89,10,87,137,101,87,96,26,149,1,155,199,21,80,197,93,138,187,21,118,42,137,
151,81,212,38,178,131,77,154,238,105,52,235,86,121,45,172,222,71,104,34,121,105,205,145,9,226,165,168,57,16,55,197,81,63,226,29,124,235,3,204,39,85,187,58,248,96,227,84,55,18,155,190,74,188,1,245,139,
115,168,81,199,175,217,219,21,68,221,249,199,205,119,250,157,174,179,121,173,94,205,170,88,144,108,174,218,121,61,72,41,191,238,141,126,15,246,52,197,80,26,166,171,168,235,87,210,234,122,181,204,151,154,
132,252,125,91,137,155,147,183,5,8,181,39,193,84,1,237,138,160,241,87,98,174,197,93,138,166,90,63,152,188,193,229,233,37,151,64,213,175,52,169,103,1,102,123,27,137,109,153,213,77,64,99,19,41,32,31,28,
85,109,222,189,174,95,234,49,235,23,250,157,221,214,173,19,43,197,127,60,242,73,114,173,27,114,82,178,51,22,5,78,227,125,142,42,137,242,238,188,52,95,51,88,249,146,250,219,244,164,182,119,2,245,160,158,
66,190,172,232,75,163,72,244,98,126,58,51,127,55,78,245,197,82,203,203,187,157,66,238,226,254,242,67,53,221,212,143,61,196,173,246,158,73,24,179,49,167,114,77,113,85,28,85,216,171,177,86,81,228,48,182,
218,203,235,151,45,233,105,154,53,189,197,229,252,229,89,130,68,33,117,59,40,36,157,201,160,21,248,78,113,94,216,100,7,67,249,120,239,147,60,161,143,28,118,222,92,113,151,94,155,85,255,0,72,61,31,96,66,
181,62,41,218,24,163,41,204,249,112,145,248,247,62,120,206,237,229,93,138,187,21,123,102,181,15,215,116,111,37,249,134,209,189,93,53,244,91,109,44,200,21,151,141,213,129,117,149,79,32,63,104,176,95,230,
224,196,109,156,47,179,249,6,61,86,179,77,61,166,51,75,53,109,190,60,213,192,126,85,125,220,81,189,222,167,181,33,199,131,79,154,59,199,195,142,63,243,241,223,23,227,250,40,44,237,30,117,216,171,177,87,
98,174,197,85,18,121,163,142,72,163,145,146,41,105,234,162,177,10,220,122,114,3,173,49,85,60,85,216,171,177,87,98,170,241,94,222,67,109,61,148,55,18,199,103,116,80,221,91,163,178,197,41,136,146,133,212,
26,55,18,79,26,244,197,85,225,214,181,139,111,170,253,95,81,185,135,234,43,42,89,122,115,72,158,130,207,95,84,69,70,28,3,242,60,248,253,170,239,138,168,125,118,240,217,141,56,220,75,250,60,74,110,5,167,
54,244,68,197,66,25,56,87,143,34,160,14,84,173,49,84,206,199,205,254,106,211,117,11,141,86,199,90,189,135,82,187,1,110,238,150,226,67,36,192,10,1,41,36,243,3,183,42,211,21,75,175,245,11,253,86,242,109,
71,84,186,150,246,254,225,185,207,117,112,237,44,174,212,165,89,220,146,118,29,241,86,228,212,245,25,110,32,187,150,242,119,187,181,88,163,181,157,165,115,36,73,108,2,196,168,196,213,68,97,64,64,62,205,
62,28,85,78,238,238,238,254,230,91,219,233,228,186,188,184,99,36,247,19,187,73,44,142,198,165,153,152,146,73,241,56,170,142,42,236,85,86,214,234,230,202,230,27,203,57,158,222,242,221,214,107,123,136,88,
199,36,114,70,67,43,163,41,5,89,72,168,35,166,42,186,11,219,203,107,200,245,11,107,137,97,191,134,85,184,138,234,55,100,153,38,70,230,178,43,130,24,48,97,80,192,214,184,170,103,171,121,199,205,218,245,
184,179,215,53,253,75,83,180,86,14,32,189,188,158,230,48,195,161,227,35,176,174,42,129,211,53,109,87,68,188,93,67,70,190,184,211,175,208,50,165,213,156,175,111,50,134,20,96,30,50,172,42,54,59,226,168,
173,99,205,62,103,243,18,69,31,152,53,171,253,86,56,9,104,22,254,234,107,161,25,106,2,84,74,205,74,211,122,98,169,78,42,236,85,216,170,173,173,213,205,149,204,55,150,115,61,189,229,187,172,214,247,16,
177,142,72,228,140,134,87,70,82,10,178,145,80,71,76,85,184,174,238,161,186,75,232,103,146,59,216,228,19,71,114,142,203,42,202,173,200,56,112,106,24,29,235,90,215,21,77,181,95,57,249,195,92,181,54,90,223,
152,117,45,74,204,144,198,222,242,242,123,136,170,13,65,227,35,176,168,197,82,171,91,219,203,23,146,75,43,137,109,158,88,164,183,149,161,118,140,180,51,41,73,35,98,164,85,93,73,86,94,140,187,28,85,116,
26,142,161,107,107,117,97,109,119,52,54,55,188,62,187,109,28,140,145,77,233,18,201,234,32,32,63,18,106,188,135,195,138,161,177,87,98,174,197,87,197,44,182,242,164,240,59,69,60,76,30,41,80,149,117,117,
53,12,164,110,8,61,14,42,168,215,183,143,120,117,23,184,149,181,6,148,220,53,217,118,51,25,139,115,50,23,175,46,92,183,229,90,215,21,69,71,230,13,122,41,61,104,181,75,196,155,235,95,164,61,69,184,149,
91,235,187,255,0,164,84,53,125,93,207,239,62,223,190,42,162,117,93,80,219,220,218,27,219,131,105,123,34,207,121,1,149,253,57,166,74,149,146,69,173,25,135,35,70,109,247,56,170,190,143,230,47,48,121,122,
73,101,208,53,107,205,42,89,192,89,158,198,226,91,102,117,83,80,24,196,202,72,7,199,21,89,171,235,186,223,152,46,82,243,94,212,174,181,75,196,65,10,92,95,79,37,204,139,26,146,193,3,74,204,66,130,196,211,
220,226,168,12,85,216,171,177,85,123,155,219,203,193,8,188,184,150,224,91,68,182,246,226,87,103,244,225,66,74,198,156,137,226,160,147,69,27,111,138,171,141,107,88,20,166,163,114,56,219,29,61,127,125,38,
214,109,90,192,62,47,238,141,79,238,254,199,182,42,168,60,193,175,139,180,191,26,173,224,190,142,15,169,199,114,46,37,245,86,219,129,143,210,15,202,161,56,18,188,43,199,143,195,211,21,66,89,222,222,105,
215,49,222,233,247,18,218,94,66,107,21,196,14,209,74,132,138,85,89,72,35,99,219,21,93,105,168,234,22,9,112,150,55,115,90,165,228,70,222,237,96,145,227,19,64,196,19,28,129,72,228,132,129,85,109,177,84,
54,42,236,85,216,170,135,231,8,91,29,27,201,186,28,237,77,78,218,222,242,242,226,14,44,10,69,123,50,52,85,36,82,167,131,130,43,81,199,126,217,198,251,63,144,106,53,218,205,68,63,187,148,177,227,140,182,
245,75,12,56,103,240,222,36,30,188,94,247,127,218,208,240,180,218,124,82,250,227,25,76,142,225,146,87,31,211,242,121,62,119,15,50,236,85,255,214,242,166,92,208,136,177,189,186,211,47,173,181,27,41,61,
43,219,57,99,184,183,150,129,184,203,19,7,70,163,2,13,8,232,69,50,156,248,97,155,28,177,204,92,102,12,100,63,163,33,69,179,22,73,99,152,156,118,49,54,61,225,238,122,85,213,143,230,109,164,154,166,139,
20,118,190,111,132,115,214,116,96,193,86,106,154,27,155,114,231,117,98,126,37,38,168,199,139,117,71,147,128,197,170,201,216,51,24,53,36,203,76,118,195,154,175,195,255,0,105,203,195,221,252,39,248,134,
227,248,163,143,171,158,24,246,164,78,92,32,12,195,251,204,127,206,255,0,108,133,253,189,223,35,34,139,155,107,139,57,154,222,238,39,130,116,217,226,145,74,48,249,131,157,206,28,248,243,64,79,28,132,162,
127,138,39,136,60,222,76,115,199,46,25,131,18,58,21,44,185,173,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,54,209,124,183,
172,107,210,132,211,237,153,226,6,146,92,55,195,18,248,213,142,213,30,3,124,210,118,159,109,105,59,62,55,154,96,30,144,231,57,127,155,254,248,250,93,142,143,179,179,234,141,99,142,223,206,254,17,241,252,
22,55,249,131,231,93,50,13,58,111,34,249,73,210,227,77,103,67,173,106,244,13,245,201,161,96,202,144,157,233,18,48,175,49,246,207,216,253,223,197,46,179,178,187,63,81,169,206,53,250,203,140,128,62,6,31,
245,24,79,99,41,255,0,182,78,63,195,252,63,197,235,219,30,102,187,87,139,14,35,165,211,239,31,242,185,63,213,37,30,145,254,132,79,95,226,233,233,250,249,118,118,143,54,236,85,216,171,62,252,190,243,181,
142,143,12,222,87,243,52,94,175,149,53,9,132,237,52,107,89,236,238,138,132,23,9,65,86,90,0,29,55,60,119,79,218,73,57,78,217,236,172,217,50,71,87,165,53,168,198,56,120,79,209,155,29,241,120,82,254,111,
244,101,223,245,127,12,161,189,236,237,118,56,64,233,243,139,197,51,119,252,88,231,203,140,127,190,31,233,127,155,41,230,177,229,125,75,73,65,118,170,47,52,121,64,146,215,82,183,34,72,36,137,192,40,220,
144,144,1,4,82,189,127,102,185,46,203,237,253,54,183,209,124,25,70,211,197,63,76,227,33,245,71,213,245,87,151,47,226,164,235,123,47,54,155,213,92,88,207,211,146,59,196,199,167,185,36,206,141,212,59,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,174,142,57,38,145,98,137,26,73,92,133,68,80,89,137,61,0,3,174,66,115,140,34,101,34,0,
28,201,101,24,153,26,2,201,79,231,181,211,252,141,167,15,49,249,202,34,101,106,141,39,67,228,4,247,115,0,15,196,55,225,26,212,115,102,31,15,129,98,136,252,70,171,181,167,218,121,14,147,179,229,255,0,14,
212,127,6,40,127,67,249,243,151,240,112,243,239,174,41,199,163,195,161,142,138,30,62,172,127,194,241,127,22,73,127,75,249,177,31,197,253,145,151,19,243,22,191,168,121,163,90,188,215,181,86,67,125,122,
225,164,17,175,4,80,170,17,21,70,251,42,168,81,82,91,111,137,153,183,206,199,179,244,56,180,90,120,224,197,124,48,29,119,63,206,145,63,214,145,39,187,249,160,7,158,213,234,167,169,203,44,179,250,165,248,
251,2,87,153,238,35,177,87,255,215,242,166,92,208,236,85,82,9,231,181,158,43,155,105,94,27,152,93,100,134,104,216,163,163,161,170,178,176,161,4,17,80,70,66,112,140,226,99,32,8,34,136,59,130,15,66,202,
50,49,32,131,68,51,120,63,57,127,50,173,160,138,222,61,117,204,113,34,198,166,75,123,105,92,133,20,28,158,72,153,152,237,187,49,44,123,231,41,63,100,59,38,114,50,56,69,147,123,74,113,31,8,198,66,49,247,
71,96,239,99,237,6,190,32,1,147,151,148,79,218,99,101,83,254,87,95,230,111,253,95,63,233,210,207,254,168,228,63,208,111,100,127,168,255,0,179,201,255,0,22,203,253,17,107,255,0,213,63,216,195,254,37,223,
242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,
55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,
169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,
244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,
181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,
153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,
63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,
248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,
255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,
255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,
250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,
121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,
117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,
111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,
253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,
210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,
254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,
127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,
127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,
31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,
255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,
90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,
124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,
127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,
202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,
255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,
127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,
211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,
215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,
102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,
127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,
253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,
254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,
181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,39,243,7,230,39,157,60,211,
106,44,181,205,94,91,139,33,94,86,232,177,219,196,251,171,15,81,32,84,15,66,160,175,62,92,79,217,166,108,180,30,207,232,52,51,227,195,136,70,95,206,222,114,28,254,147,51,46,15,171,126,26,226,234,225,234,
187,87,85,169,143,14,73,146,59,182,136,248,240,215,23,199,147,24,205,251,170,118,42,236,85,216,171,177,86,65,229,207,59,249,175,202,94,160,242,254,169,45,156,82,212,201,5,22,88,11,55,26,191,165,42,186,
115,162,40,231,199,149,62,26,211,52,253,161,216,186,61,125,126,99,24,153,31,197,188,103,215,110,56,112,203,135,212,125,55,195,123,187,29,39,104,234,52,183,225,76,196,30,156,227,254,150,87,27,219,159,52,
255,0,254,87,95,230,111,253,95,63,233,210,207,254,168,230,155,253,6,246,71,250,143,251,60,159,241,110,195,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,
31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,
255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,
0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,
163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,
119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,
250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,
127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,
58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,
103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,
87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,
71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,
195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,
0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,
191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,
243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,
71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,
0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,
31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,
255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,
0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,
163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,
119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,
250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,
127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,
58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,
103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,
87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,
71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,
195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,
0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,
191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,
243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,
71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,
0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,
31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,8,189,190,190,212,238,164,189,212,110,101,188,189,150,158,173,197,196,141,44,173,196,5,28,157,201,38,128,0,61,179,171,
195,131,30,24,8,99,136,132,71,40,196,8,199,228,29,22,76,179,201,46,41,147,34,122,157,202,31,46,107,118,42,236,85,255,208,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,209,242,166,92,208,236,85,149,121,71,200,183,254,105,75,141,66,75,168,52,159,47,89,50,173,246,177,124,222,
156,10,88,138,164,125,57,201,196,242,225,85,31,103,147,167,52,229,207,118,183,109,226,208,152,227,17,150,92,211,190,12,88,247,153,254,148,191,153,14,47,79,22,253,120,99,46,25,86,223,65,217,147,213,3,43,
16,199,31,171,36,254,159,112,254,116,188,190,100,88,100,13,165,126,78,91,176,182,250,215,152,245,57,35,85,89,111,172,163,180,138,222,87,0,114,104,210,112,29,86,189,3,87,253,102,235,154,168,103,237,252,
131,136,67,79,140,30,80,153,201,41,196,116,226,150,63,65,62,239,144,228,231,203,23,101,195,99,44,179,63,206,143,0,137,247,9,122,157,250,51,242,127,253,245,230,191,251,151,100,248,187,127,254,129,127,233,
115,30,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,
64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,
118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,
151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,
154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,
0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,
252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,
74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,
119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,
217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,
151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,
0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,
187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,
177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,170,67,161,254,80,94,177,182,75,
159,49,233,210,200,172,177,94,222,71,105,45,188,114,16,120,180,137,0,46,203,94,161,105,254,178,245,200,79,63,111,227,28,70,26,124,128,115,132,14,72,206,67,175,12,178,122,1,247,252,143,38,81,197,217,115,
216,75,44,15,243,165,192,98,61,226,62,166,59,231,15,33,106,94,82,88,47,133,196,26,166,129,122,204,182,90,189,147,115,133,138,147,68,147,249,36,42,57,112,171,14,188,93,248,63,29,175,100,246,222,45,113,
150,51,25,98,205,10,227,197,147,105,143,233,71,249,240,226,244,241,109,211,138,49,226,141,224,107,251,50,122,80,37,98,120,229,244,228,135,211,238,63,205,151,151,200,154,44,79,58,23,80,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,255,0,255,210,242,166,92,208,200,252,141,229,121,124,225,230,107,45,21,121,37,163,
183,171,168,78,181,30,149,164,95,20,175,203,139,133,36,124,40,88,113,245,25,20,245,205,39,109,246,156,123,63,73,60,223,197,203,28,127,157,146,95,64,171,143,23,243,165,195,234,224,140,136,118,93,155,162,
58,188,241,199,211,156,143,243,96,62,174,255,0,116,111,110,42,101,94,96,213,255,0,197,23,81,232,250,60,75,101,228,173,37,154,29,34,198,26,132,100,86,35,214,122,238,206,255,0,104,150,248,190,45,254,46,
68,235,187,19,178,78,158,39,62,99,199,168,203,234,203,57,115,254,164,123,163,31,167,211,182,223,205,167,59,180,117,195,41,240,241,142,28,80,218,17,31,238,143,156,185,171,91,105,182,240,32,80,131,58,103,
76,175,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,
174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,
125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,95,86,
131,249,6,42,157,104,26,133,181,151,171,163,234,177,45,223,149,245,50,34,212,172,165,169,64,164,143,222,165,55,87,79,180,10,252,85,27,124,84,57,204,246,223,100,157,68,70,124,39,131,81,139,213,138,113,
231,253,73,119,198,95,79,171,109,255,0,155,110,231,179,181,195,17,240,178,14,44,83,218,113,63,238,135,156,121,188,191,207,94,86,155,201,222,103,190,209,27,147,90,163,122,182,19,181,79,171,105,47,197,19,
114,226,129,136,31,11,149,28,125,69,117,29,51,99,216,157,167,30,208,210,67,55,241,114,201,31,230,228,143,214,42,229,195,252,232,241,122,184,37,18,92,30,210,209,29,38,121,99,233,206,39,249,208,63,79,119,
186,85,183,21,177,204,221,186,215,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,255,211,242,166,92,208,244,47,202,138,
250,190,112,161,161,255,0,11,234,84,35,175,88,179,141,246,160,88,210,255,0,208,214,47,247,207,69,216,156,243,255,0,194,103,254,245,25,163,219,164,54,169,196,118,206,177,210,38,56,171,177,84,203,77,242,
247,152,53,155,123,171,173,31,74,188,212,45,108,87,157,236,246,150,242,207,28,10,65,106,200,209,171,4,20,82,126,47,3,138,165,184,171,177,87,98,174,197,93,138,187,21,76,135,151,181,243,164,31,48,13,42,
240,232,1,184,29,87,234,242,253,76,55,46,20,245,184,240,175,47,134,156,186,237,138,165,184,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,82,191,206,138,157,87,203,36,238,127,195,182,59,255,0,179,155,57,63,101,197,13,87,253,13,101,255,0,122,238,251,111,158,15,248,76,63,223,60,211,59,39,157,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,212,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,
9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,35,232,47,249,196,207,252,153,119,223,246,198,184,255,0,168,139,108,85,148,121,19,243,67,91,243,223,230,77,239,
229,167,159,225,181,243,15,150,245,41,239,237,173,163,184,181,133,94,220,219,44,178,33,86,137,83,246,99,35,145,248,195,113,101,113,76,85,40,242,199,229,170,88,220,254,112,105,86,158,97,214,52,219,79,42,
196,94,210,13,50,243,234,209,93,70,208,221,200,137,118,188,15,168,2,162,169,251,63,105,255,0,155,21,66,121,51,242,43,203,247,223,151,118,126,124,215,219,91,214,159,80,44,208,233,94,85,75,121,110,34,141,
89,212,150,23,0,243,35,129,228,22,132,49,11,70,197,89,207,228,6,143,228,157,7,243,35,204,154,103,151,164,214,30,254,45,61,74,197,171,64,182,173,12,13,44,70,72,167,141,145,31,214,87,225,66,23,211,43,203,
21,121,183,149,191,43,124,145,249,157,231,43,216,60,165,125,171,105,222,84,210,109,141,206,187,115,171,173,179,93,122,237,43,128,144,125,95,224,8,85,107,201,247,28,91,99,182,42,190,111,202,127,203,255,
0,54,249,35,94,243,111,229,126,167,170,180,222,91,50,61,245,150,182,144,19,52,49,33,144,180,70,221,87,141,80,22,78,85,39,143,22,84,197,93,117,249,99,249,101,229,255,0,203,191,41,249,239,205,23,250,224,
253,56,0,187,180,211,133,164,204,206,200,205,72,189,101,140,70,7,26,150,102,147,195,143,112,171,209,109,255,0,229,89,255,0,208,183,199,245,191,211,191,224,207,174,15,87,210,250,159,233,79,172,125,107,
126,60,191,117,195,159,143,197,199,223,21,121,173,207,149,173,79,228,29,239,154,244,237,119,91,26,114,234,141,111,105,161,79,118,191,163,140,31,90,1,26,75,100,94,62,173,8,102,33,169,207,124,85,55,188,
252,152,252,182,242,91,121,107,67,252,195,214,53,127,241,95,153,56,170,46,148,182,235,103,106,242,50,160,245,125,100,119,42,29,184,242,93,218,132,240,92,85,222,95,255,0,156,121,211,27,243,107,83,252,189,
243,38,163,117,38,151,6,146,218,198,159,123,98,99,130,105,16,220,69,10,135,18,199,42,138,114,112,212,29,84,26,254,206,42,150,218,254,84,126,94,121,147,242,247,204,254,100,242,134,173,171,62,183,229,69,
145,239,127,72,199,111,21,172,226,4,105,24,197,20,92,221,85,213,79,2,210,242,228,62,37,197,94,31,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,165,127,157,31,241,213,242,207,254,3,182,31,241,57,179,147,246,99,254,69,255,0,208,214,95,247,174,239,182,249,224,255,0,132,227,255,0,124,243,76,236,158,117,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,255,0,255,213,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,
0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,35,213,191,35,255,0,48,244,95,203,79,55,220,235,250,236,23,87,22,115,88,75,102,169,100,145,201,47,169,36,176,184,36,
75,36,99,141,35,63,181,138,178,221,39,243,71,242,139,200,218,174,163,230,223,37,232,122,214,167,231,11,195,49,183,147,93,123,88,173,109,205,203,85,202,11,86,99,77,250,17,203,143,195,234,47,42,226,169,
47,229,255,0,230,237,134,131,166,254,99,15,52,37,229,230,179,231,91,114,144,220,91,36,110,130,225,227,187,86,105,121,200,133,87,148,235,78,33,182,174,221,49,84,207,242,251,243,63,242,243,202,90,102,150,
26,227,205,186,94,167,103,197,181,11,77,34,230,222,77,46,246,80,85,153,164,134,234,66,23,149,56,158,1,79,31,218,240,85,31,166,127,206,69,88,197,249,185,119,231,235,221,26,88,244,91,189,56,105,13,107,110,
232,247,75,18,72,178,172,196,183,5,103,170,211,143,37,28,79,218,60,119,85,44,242,175,230,199,145,127,46,188,225,121,125,228,237,59,85,189,242,134,183,109,233,107,86,90,179,91,173,210,205,234,59,41,128,
194,74,148,85,110,60,100,60,141,91,226,197,87,205,249,177,249,127,229,47,36,107,222,82,252,175,211,53,85,155,204,134,68,190,189,214,222,0,97,134,84,49,149,136,91,179,114,162,18,169,202,132,114,228,204,
248,170,69,231,79,204,173,11,204,127,149,158,81,242,61,141,189,220,122,182,128,193,175,38,153,35,91,119,2,55,79,221,178,200,204,119,111,218,69,197,83,63,39,254,104,121,24,126,86,207,249,97,231,203,29,
84,217,27,163,115,5,238,138,109,204,180,50,9,128,63,88,101,0,134,7,179,213,79,236,226,168,59,159,204,175,43,47,228,221,239,229,166,159,111,168,125,121,245,39,187,179,184,157,33,244,190,171,245,129,34,
9,25,100,175,169,192,124,92,99,227,203,219,21,101,23,159,156,255,0,150,222,116,111,45,107,159,152,122,62,175,254,43,242,223,22,70,210,154,221,172,238,158,54,87,30,175,172,232,225,75,175,46,43,186,212,
142,109,138,187,203,255,0,243,144,218,98,254,109,106,127,152,94,100,211,174,163,210,231,210,91,71,211,236,172,68,115,205,26,11,136,166,82,230,89,34,83,94,46,90,135,171,1,79,218,197,88,175,144,191,51,180,
15,43,121,39,207,190,91,212,45,175,36,190,243,76,18,197,167,201,2,68,209,35,73,12,177,143,84,180,170,64,171,143,178,175,138,188,159,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,74,255,0,58,63,227,171,229,159,252,7,108,63,226,115,103,39,236,199,252,139,255,0,161,172,191,239,93,223,109,243,193,255,0,9,199,254,249,230,153,217,60,235,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,214,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,
206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,
53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,
255,215,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,
252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,208,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,
115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,
60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,209,242,166,92,208,244,47,202,127,239,188,225,
255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,
152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,191,255,210,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,
235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,211,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,
67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,
120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,212,242,166,92,208,
244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,
128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,213,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,
254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,191,255,214,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,
250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,169,95,231,71,252,117,124,179,255,0,128,237,135,252,78,108,228,253,152,255,0,145,127,
244,53,151,253,235,187,237,190,120,63,225,56,255,0,223,60,211,59,39,157,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
191,255,215,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,
42,200,36,242,39,157,225,176,253,41,47,150,181,88,244,193,24,156,222,189,141,202,193,233,48,168,127,80,199,199,137,6,188,171,76,85,143,226,168,155,189,62,254,192,91,181,245,172,214,171,119,10,221,90,25,
163,104,196,176,57,42,178,71,200,14,72,74,144,24,124,59,28,85,13,138,187,21,118,42,236,85,216,171,177,84,109,238,145,171,105,176,90,92,234,54,23,22,150,215,241,250,214,51,92,66,241,36,241,109,241,196,
206,0,117,220,124,75,81,138,162,110,188,173,230,107,25,174,45,239,116,91,251,107,139,72,5,229,212,83,90,205,27,197,106,72,81,51,171,40,43,29,77,57,159,135,21,74,113,87,98,174,197,93,138,187,21,118,42,
236,85,26,250,70,173,30,153,30,181,37,133,194,104,211,74,109,225,212,90,23,22,207,48,4,152,214,82,56,22,0,31,132,26,237,138,186,243,71,213,244,235,107,59,221,67,79,185,180,179,212,16,201,97,113,60,50,
69,21,194,45,42,209,51,128,28,14,67,117,175,92,85,5,138,166,81,232,58,180,186,20,222,101,75,122,232,150,247,41,99,53,215,52,28,110,101,70,145,83,129,110,102,170,164,212,47,31,124,85,45,197,93,138,187,
21,118,42,236,85,216,170,87,249,209,255,0,29,95,44,255,0,224,59,97,255,0,19,155,57,63,102,63,228,95,253,13,101,255,0,122,238,251,111,158,15,248,78,63,247,207,52,206,201,231,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,175,255,208,242,166,92,208,244,47,202,127,239,188,225,255,0,128,198,165,250,226,206,55,218,127,249,9,
255,0,67,88,191,223,61,23,98,115,207,255,0,9,201,254,245,50,211,191,222,84,249,12,235,29,34,47,21,118,42,247,15,55,159,52,15,205,111,42,15,39,155,129,174,29,35,67,17,125,87,157,74,250,17,150,245,56,127,
186,255,0,223,156,190,14,63,107,108,85,17,231,123,175,46,232,186,71,155,245,223,42,233,154,85,203,55,156,62,165,101,125,113,101,111,124,177,66,214,109,44,171,10,206,143,25,67,34,181,1,86,142,135,146,15,
178,193,85,209,232,254,94,212,245,79,44,249,90,125,50,198,11,159,56,249,42,31,171,93,199,107,4,77,30,182,110,46,101,134,112,81,87,139,59,68,34,98,180,228,172,19,236,226,170,250,87,150,124,175,105,175,
255,0,133,46,180,232,102,213,252,157,229,121,111,238,214,43,24,239,238,46,117,187,134,138,105,131,194,239,8,186,250,178,75,198,56,93,248,252,13,224,87,21,121,151,158,101,242,213,229,142,141,169,104,86,
119,137,121,114,110,151,81,212,231,211,161,210,44,174,204,109,24,140,219,219,219,79,60,42,209,130,203,47,167,193,126,193,225,201,155,21,97,120,171,177,87,98,174,197,95,69,234,62,109,242,173,142,145,229,
13,47,206,145,180,177,104,190,94,210,188,195,229,196,68,103,245,117,8,210,68,123,71,101,175,24,231,43,19,49,217,71,165,215,226,197,85,252,230,144,249,134,251,93,213,181,168,33,189,212,63,229,93,233,250,
130,79,52,104,237,29,220,146,66,90,88,249,3,193,190,54,248,151,125,241,84,158,125,23,78,111,203,97,231,152,124,189,98,60,244,52,168,227,184,210,132,86,254,130,105,143,35,68,53,175,169,112,167,55,81,195,
151,30,10,127,210,56,226,175,5,197,93,138,187,21,118,42,236,85,216,171,221,180,13,111,203,246,191,149,190,83,242,207,156,102,123,127,40,249,130,109,118,59,235,168,145,164,146,218,230,210,91,73,109,174,
17,80,22,37,91,146,16,63,98,86,197,89,77,205,206,151,249,135,31,229,198,161,168,88,164,182,98,219,205,51,104,186,27,255,0,119,40,211,89,86,198,209,128,63,16,9,18,6,21,248,248,255,0,149,138,177,207,40,
104,26,55,157,236,60,165,169,249,179,70,180,180,212,39,243,13,222,156,177,89,90,197,165,166,161,105,5,147,92,136,222,43,116,141,15,25,213,96,230,170,15,199,193,190,49,138,183,161,72,222,109,242,28,22,
126,105,177,181,210,116,187,191,59,233,150,115,165,149,140,58,92,107,3,199,42,73,31,238,18,58,148,169,94,111,202,69,253,183,219,21,72,127,48,83,202,98,31,52,233,171,164,222,166,183,163,79,28,86,6,223,
66,182,210,45,116,244,250,194,163,45,204,214,247,114,180,201,34,109,20,147,198,100,103,226,85,192,118,24,171,200,49,87,98,174,197,93,138,187,21,74,255,0,58,63,227,171,229,159,252,7,108,63,226,115,103,
39,236,199,252,139,255,0,161,172,191,239,93,223,109,243,193,255,0,9,199,254,249,230,153,217,60,235,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,255,209,242,166,92,208,244,95,201,193,29,214,189,172,232,158,168,142,247,91,209,47,244,235,0,193,138,181,196,129,36,0,149,6,128,42,51,84,248,120,211,56,191,107,73,199,167,195,
158,174,56,115,227,203,63,234,70,227,254,234,81,31,30,231,164,236,16,39,151,38,59,223,38,57,194,63,214,52,126,224,83,43,56,164,130,35,4,200,99,154,34,82,72,216,81,149,151,98,8,241,7,58,184,78,51,136,148,
77,130,44,23,73,40,152,146,14,196,34,50,108,93,138,178,9,60,247,231,121,172,63,69,203,230,93,86,77,48,198,32,54,79,125,114,208,122,74,40,19,211,50,113,226,0,167,26,83,21,73,254,191,124,44,78,152,46,101,
253,26,101,23,38,207,212,111,64,206,20,160,147,211,175,30,97,73,94,84,173,54,197,85,91,88,213,222,123,27,151,212,46,90,231,76,72,227,211,102,51,72,94,217,33,98,241,172,45,90,198,17,137,101,11,78,45,184,
197,92,154,198,175,30,166,117,180,191,185,93,101,164,105,219,81,89,164,23,70,103,36,179,153,65,231,200,212,213,171,92,85,87,87,243,14,191,230,25,99,155,95,213,111,53,89,162,5,98,146,250,226,91,150,69,
61,66,153,89,136,6,157,177,84,183,21,118,42,236,85,216,170,34,238,254,250,255,0,208,250,245,204,183,63,86,137,45,173,189,105,26,79,74,8,235,194,52,228,79,20,90,154,40,216,98,168,167,243,23,152,37,245,
4,154,181,227,137,109,87,79,151,149,196,167,149,148,116,43,110,213,109,226,90,10,71,246,7,134,42,184,121,151,204,99,80,125,88,107,23,163,84,150,47,171,73,125,245,153,126,176,208,112,17,250,102,78,92,138,
113,1,120,214,156,118,197,82,188,85,216,171,177,87,98,174,197,93,138,162,37,191,190,158,210,222,194,107,153,100,177,180,105,30,214,213,228,102,138,38,155,137,144,198,132,209,75,241,94,84,31,23,17,92,85,
84,107,58,186,197,99,8,212,46,68,58,91,60,154,100,98,105,56,218,188,140,29,218,17,90,70,89,128,98,82,149,109,241,85,125,75,204,222,100,214,46,224,191,213,245,139,235,251,235,82,13,173,205,221,204,211,
203,17,4,48,40,242,49,43,66,43,177,197,85,117,95,55,121,175,93,128,218,235,122,238,161,169,91,23,89,12,55,151,115,220,70,93,1,10,220,100,118,21,1,136,7,223,21,117,255,0,155,188,217,170,216,46,151,170,
107,186,141,238,152,188,120,217,92,221,207,52,3,135,217,164,110,229,118,237,182,42,147,98,174,197,93,138,187,21,93,28,114,77,34,69,18,151,150,70,10,136,162,164,179,26,0,7,190,66,115,140,34,101,35,64,11,
37,148,98,100,64,27,146,148,126,118,188,49,249,159,76,210,150,65,37,214,145,163,217,88,223,5,12,2,206,188,228,160,36,10,213,36,70,168,241,241,174,114,158,201,19,147,79,155,61,84,115,103,201,150,31,212,
149,71,253,212,100,62,29,206,239,183,128,134,92,120,238,206,60,112,132,191,172,44,253,196,60,215,59,71,155,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,191,255,210,242,166,92,208,136,177,189,186,211,47,173,181,27,41,61,43,219,57,99,184,183,150,129,184,203,19,7,70,163,2,13,8,232,69,50,156,248,97,155,28,177,204,92,102,
12,100,63,163,33,69,179,22,73,99,152,156,118,49,54,61,225,238,122,85,213,143,230,109,164,154,166,139,20,118,190,111,132,115,214,116,96,193,86,106,154,27,155,114,231,117,98,126,37,38,168,199,139,117,71,
147,128,197,170,201,216,51,24,53,36,203,76,118,195,154,175,195,255,0,105,203,195,221,252,39,248,134,227,248,163,143,171,158,24,246,164,78,92,32,12,195,251,204,127,206,255,0,108,133,253,189,223,35,34,139,
155,107,139,57,154,222,238,39,130,116,217,226,145,74,48,249,131,157,206,28,248,243,64,79,28,132,162,127,138,39,136,60,222,76,115,199,46,25,131,18,58,21,44,185,173,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,85,91,107,107,139,201,150,222,210,39,158,119,217,34,141,75,177,
249,1,148,230,207,143,12,12,242,72,70,35,248,164,120,67,102,60,115,201,46,24,3,34,122,4,231,84,189,177,252,176,179,77,79,88,141,46,188,223,58,243,209,244,114,193,150,42,26,11,139,130,135,101,4,124,32,
26,187,14,43,209,222,62,27,46,171,39,111,76,224,211,19,29,48,219,54,106,175,19,253,167,23,23,127,241,31,225,27,159,225,142,78,146,24,99,217,113,25,115,0,115,31,238,241,255,0,55,253,178,117,246,119,252,
204,120,85,245,237,214,167,125,115,168,222,201,234,222,222,75,37,197,196,180,11,202,89,88,187,181,20,0,42,79,64,41,157,254,12,48,195,142,56,224,42,48,2,49,31,209,136,160,242,153,114,75,36,204,229,185,
145,179,239,40,124,185,173,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,255,0,255,211,242,166,92,208,236,85,82,9,231,
181,158,43,155,105,94,27,152,93,100,134,104,216,163,163,161,170,178,176,161,4,17,80,70,66,112,140,226,99,32,8,34,136,59,130,15,66,202,50,49,32,131,68,51,120,63,57,127,50,173,160,138,222,61,117,204,113,
34,198,166,75,123,105,92,133,20,28,158,72,153,152,237,187,49,44,123,231,41,63,100,59,38,114,50,56,69,147,123,74,113,31,8,198,66,49,247,71,96,239,99,237,6,190,32,1,147,151,148,79,218,99,101,83,254,87,95,
230,111,253,95,63,233,210,207,254,168,228,63,208,111,100,127,168,255,0,179,201,255,0,22,203,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,
31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,
99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,
179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,
90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,
223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,
246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,
229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,
208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,
22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,
63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,
241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,
255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,
63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,
198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,
103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,
0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,
245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,
242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,149,
57,255,0,57,127,50,174,96,150,222,77,117,196,114,163,70,198,59,123,104,156,6,20,60,94,56,149,148,239,179,41,12,59,100,225,236,135,100,194,66,67,8,176,111,121,78,67,227,25,72,198,94,233,108,88,203,218,
13,124,129,7,39,63,40,143,180,70,195,8,158,121,238,167,150,230,230,87,154,230,103,105,38,154,70,46,238,238,106,204,204,106,73,36,212,147,157,92,33,24,68,70,32,0,5,0,54,0,14,129,209,74,70,68,146,108,149,
60,155,23,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,255,212,242,166,92,208,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,213,242,166,92,208,236,85,63,242,175,147,245,127,55,221,79,6,156,98,
183,181,180,140,205,125,168,222,57,134,210,221,40,104,101,146,141,78,68,81,64,4,245,63,101,93,151,79,218,157,175,131,179,224,37,146,229,41,30,24,99,128,226,201,144,255,0,66,63,209,235,242,250,165,16,118,
58,45,6,93,92,136,133,1,17,114,148,182,132,127,173,47,199,200,22,89,46,133,249,67,166,176,177,184,213,53,205,114,242,62,66,123,237,38,43,88,109,11,114,52,8,183,21,109,133,55,14,234,221,67,118,206,127,
30,175,183,117,3,142,24,176,225,137,250,97,152,228,150,78,93,124,61,191,216,198,67,149,117,118,211,211,246,102,47,76,167,147,33,235,44,98,34,31,236,255,0,92,154,253,25,249,63,254,250,243,95,253,203,178,
222,46,223,255,0,160,95,250,92,195,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,
255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,
223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,
159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,
221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,
119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,
217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,
151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,
0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,
187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,
177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,
127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,
0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,
79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,
110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,
254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,
236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,
75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,
0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,
93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,
229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,
230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,
255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,
163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,
183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,
221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,
246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,
165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,
232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,
46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,
114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,
243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,
0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,
159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,
91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,
110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,
123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,
0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,
0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,
143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,
0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,
121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,
127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,
232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,
244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,
183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,
188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,215,255,0,114,236,120,187,127,254,129,
127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,254,250,243,95,253,203,177,226,237,255,
0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,228,255,0,251,235,205,127,247,46,199,
139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,86,239,209,159,147,255,0,239,175,53,255,
0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,219,191,233,91,191,70,126,79,255,0,190,188,
215,255,0,114,236,120,187,127,254,129,127,233,114,240,246,87,251,119,253,43,119,232,207,201,255,0,247,215,154,255,0,238,93,143,23,111,255,0,208,47,253,46,94,30,202,255,0,110,255,0,165,110,253,25,249,63,
254,250,243,95,253,203,177,226,237,255,0,250,5,255,0,165,203,195,217,95,237,223,244,173,223,163,63,39,255,0,223,94,107,255,0,185,118,60,93,191,255,0,64,191,244,185,120,123,43,253,187,254,149,187,244,103,
228,255,0,251,235,205,127,247,46,199,139,183,255,0,232,23,254,151,47,15,101,127,183,127,210,183,126,140,252,159,255,0,125,121,175,254,229,216,241,118,255,0,253,2,255,0,210,229,225,236,175,246,239,250,
86,239,209,159,147,255,0,239,175,53,255,0,220,187,30,46,223,255,0,160,95,250,92,188,61,149,254,221,255,0,74,221,250,51,242,127,253,245,230,191,251,151,99,197,219,255,0,244,11,255,0,75,151,135,178,191,
219,191,233,90,164,58,79,228,228,178,164,114,127,138,32,70,32,52,210,11,18,136,15,114,17,89,168,61,148,156,132,242,123,65,24,146,6,152,249,15,23,127,244,196,15,153,76,97,217,68,209,57,135,252,171,73,188,
213,249,117,117,160,233,195,204,26,70,161,6,189,229,150,117,141,181,11,80,82,72,25,149,104,46,33,53,49,114,98,85,126,38,237,207,131,58,174,103,118,111,111,199,83,151,242,249,177,203,6,122,191,14,124,167,
207,251,169,255,0,148,161,185,216,127,71,138,49,148,156,93,111,101,28,56,252,92,115,25,113,255,0,58,63,195,253,120,255,0,15,226,232,144,24,86,117,14,145,216,171,177,87,255,214,242,166,92,208,152,104,122,
53,247,152,117,123,45,19,78,78,119,183,210,172,49,84,49,85,228,119,119,224,24,132,65,86,115,79,133,65,108,195,214,235,49,233,48,79,54,67,233,128,226,60,191,210,139,175,84,190,152,142,178,217,201,211,105,
231,159,44,113,195,156,141,126,223,112,230,124,158,145,230,203,187,120,229,127,203,207,42,47,213,252,169,164,203,194,234,69,53,150,250,241,64,18,203,59,128,57,81,135,31,229,248,126,31,128,34,175,35,216,
58,25,231,174,208,213,122,179,101,30,145,252,56,113,127,4,49,143,225,244,239,252,237,253,94,174,34,122,14,211,212,199,23,248,46,13,177,192,250,187,242,79,248,165,63,199,217,72,107,61,42,222,218,48,56,
138,231,104,243,168,175,171,65,252,131,21,111,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,
160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,
127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,
144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,
49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,
190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,
131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,
131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,
138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,
93,245,104,63,144,98,174,250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,
250,180,31,200,49,87,125,90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,187,234,208,127,32,197,93,245,104,63,144,98,174,250,180,31,200,49,87,125,
90,15,228,24,171,190,173,7,242,12,85,223,86,131,249,6,42,239,171,65,252,131,21,119,213,160,254,65,138,181,245,104,63,144,98,169,158,135,169,205,160,220,201,36,17,164,246,87,40,97,191,176,148,6,134,226,
22,20,100,117,32,131,80,78,105,123,91,178,113,235,241,128,79,12,227,234,199,146,63,94,57,244,148,75,177,208,235,167,165,157,141,226,118,156,15,211,56,176,143,204,223,40,219,121,91,94,73,52,133,111,240,
214,173,10,222,233,18,49,119,2,55,3,156,69,217,69,89,27,246,106,204,177,180,124,219,147,101,30,206,246,158,77,102,3,28,223,223,225,145,199,152,109,245,71,148,248,65,229,49,215,211,19,56,207,128,112,134,
125,175,162,142,159,40,56,255,0,186,200,56,241,251,191,155,254,111,196,240,240,241,110,194,179,167,116,142,197,95,255,215,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,
151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,43,121,126,221,82,216,73,213,155,114,79,82,78,117,64,83,165,103,94,73,242,110,177,231,223,49,218,121,103,67,84,250,237,215,
38,105,102,37,98,138,40,199,39,145,200,4,208,15,1,82,118,24,85,233,35,242,87,200,242,107,114,249,74,15,204,235,35,230,232,36,250,188,186,124,218,124,240,91,253,101,88,43,196,183,77,47,166,204,9,226,21,
126,34,223,15,26,214,138,188,167,78,242,238,189,172,221,203,99,162,105,151,90,165,212,4,137,34,177,130,91,150,0,18,43,72,213,141,54,240,197,80,250,150,149,170,104,215,77,99,172,89,92,105,247,200,1,123,
107,184,158,9,64,61,9,73,0,35,238,197,83,184,255,0,46,127,48,166,72,228,135,202,122,204,145,202,188,226,116,211,174,153,89,78,245,82,35,220,98,169,108,94,90,243,20,246,23,122,164,58,69,236,154,101,131,
180,87,247,169,109,43,65,4,137,78,75,44,129,120,163,10,138,134,35,174,42,178,111,47,235,214,250,76,58,245,198,151,121,22,135,114,222,157,190,167,37,188,171,105,35,213,135,20,152,175,6,53,86,216,31,217,
62,24,170,38,195,201,222,110,213,108,91,84,210,244,13,74,247,76,94,69,175,109,172,231,154,0,19,118,172,136,133,118,239,190,42,134,211,244,13,119,86,130,242,231,74,210,238,239,173,180,228,245,53,9,173,
109,229,153,45,208,134,60,165,100,82,16,81,24,213,169,246,91,195,21,84,213,60,177,230,93,18,218,11,205,103,70,190,211,172,238,191,222,107,139,203,105,173,227,150,163,151,192,210,42,134,219,125,177,85,
77,39,202,62,107,215,225,123,141,11,66,212,53,75,116,60,94,91,43,73,238,81,73,174,197,162,70,3,166,42,135,180,242,254,189,127,168,182,145,99,165,221,220,234,201,82,246,16,219,203,37,192,165,43,88,213,
75,14,163,182,42,222,163,229,237,127,72,189,143,77,213,180,171,203,13,70,110,34,27,75,171,121,96,153,203,154,47,20,117,12,106,78,212,24,170,42,231,201,158,112,178,250,209,188,242,246,165,111,245,24,196,
247,190,181,157,196,126,132,45,90,60,156,144,112,83,67,241,54,216,170,71,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,84,63,230,175,252,161,254,70,175,253,173,191,228,252,89,201,118,64,255,0,93,181,223,242,67,254,153,151,
121,218,31,226,58,111,249,43,254,236,60,163,59,55,156,118,42,255,0,255,208,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,
255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,245,47,201,179,231,72,188,237,13,231,144,82,9,252,195,103,111,61,194,89,221,30,49,92,194,171,73,33,59,168,37,129,218,172,155,254,208,56,171,
233,77,17,44,63,53,46,181,75,15,204,223,202,163,229,217,109,173,222,91,143,49,220,39,162,29,208,149,110,55,13,20,47,181,89,199,25,37,77,185,55,108,85,43,252,188,182,242,252,63,146,151,150,222,89,155,91,
157,225,213,46,151,83,159,202,38,1,173,200,35,185,113,11,85,232,72,104,4,71,224,248,169,246,118,229,138,170,106,90,166,141,230,31,55,254,85,54,191,229,253,110,193,108,175,46,45,33,212,124,211,5,181,189,
205,212,145,218,159,71,212,84,144,187,63,174,177,61,90,52,82,198,171,246,177,86,71,229,97,249,144,255,0,159,30,102,147,92,253,34,60,147,29,147,166,148,28,202,186,89,37,224,244,204,99,251,179,37,3,242,
35,227,251,92,177,87,159,121,26,206,239,88,252,155,252,215,209,244,168,94,243,85,147,87,190,104,236,224,82,243,56,43,9,28,80,110,196,240,106,1,185,166,216,170,143,156,52,185,116,111,249,199,15,35,233,
190,104,181,154,203,209,214,32,253,35,107,50,52,115,36,47,45,219,176,101,217,148,240,106,211,237,98,175,81,243,110,167,6,137,230,47,46,234,250,85,159,156,117,13,30,218,214,51,167,217,121,74,43,107,141,
2,88,141,64,89,226,82,24,252,37,105,200,132,11,196,196,107,203,21,98,126,82,191,48,107,159,158,186,182,151,99,113,161,92,11,27,43,216,173,46,68,41,115,5,203,105,247,82,179,48,129,229,64,198,66,100,217,
143,95,139,226,168,197,88,115,235,58,175,153,63,231,21,117,155,239,48,94,77,169,223,219,106,113,164,87,119,146,53,196,224,11,187,122,126,242,66,204,104,36,101,27,253,159,135,21,100,95,154,255,0,227,181,
242,127,144,199,228,207,233,15,240,176,181,28,191,195,254,161,147,152,72,253,47,91,234,255,0,23,26,115,229,203,224,245,57,122,191,31,28,85,25,249,94,183,242,121,43,207,139,230,3,169,255,0,202,201,107,
224,60,195,250,8,218,166,188,34,49,67,233,122,4,145,24,248,125,78,159,21,125,78,31,189,227,138,164,159,152,26,212,26,159,148,124,159,99,115,160,249,166,9,244,175,48,89,65,107,175,121,182,8,33,186,148,
202,93,218,54,97,39,168,245,81,246,132,92,127,118,188,223,159,85,88,239,252,229,15,154,60,201,103,231,201,52,27,61,94,242,219,68,159,77,128,207,167,67,113,36,86,210,153,26,64,222,164,104,193,94,160,0,
121,3,138,190,123,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,170,31,243,87,254,80,255,0,35,127,219,219,254,79,197,156,159,100,255,0,198,182,187,254,72,127,211,50,239,59,67,252,71,77,255,0,37,127,221,135,148,103,100,243,
142,197,95,255,209,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,
183,74,156,218,221,221,88,206,151,86,83,201,109,117,29,125,57,225,118,142,69,168,32,209,148,130,42,13,49,84,223,83,243,183,156,245,171,83,99,172,249,139,83,212,108,152,213,173,174,239,110,39,136,145,220,
164,142,195,240,197,80,90,78,187,174,104,19,181,206,133,169,221,233,151,44,40,211,89,79,37,179,145,190,197,163,101,61,241,85,77,83,204,158,98,215,38,142,227,91,213,239,117,41,225,222,25,111,46,101,184,
116,35,249,76,140,196,125,24,171,210,255,0,41,127,58,46,124,165,230,199,214,252,245,168,106,250,222,158,186,124,182,86,176,250,198,241,227,146,73,97,112,85,110,102,69,85,164,100,108,113,87,159,15,53,235,
90,110,181,169,106,190,90,213,47,116,147,127,52,178,51,218,79,37,172,173,27,200,93,85,204,46,43,74,244,169,197,80,183,158,102,243,38,161,167,174,145,127,172,95,93,105,73,33,157,44,103,185,154,91,117,153,
139,49,113,27,49,80,196,187,18,212,175,196,222,56,170,35,75,243,175,156,180,75,81,101,162,249,135,83,211,172,129,36,91,89,222,220,91,196,9,234,120,70,234,49,85,24,60,211,230,107,95,175,253,87,90,191,131,
244,162,136,245,63,78,234,100,250,210,42,178,5,155,139,15,80,5,102,20,122,236,199,21,82,77,127,93,143,72,147,64,143,84,187,77,10,103,245,37,210,214,121,5,163,184,33,185,52,33,184,19,85,6,165,123,12,85,
17,164,249,187,205,154,4,45,109,161,107,218,142,151,110,231,147,195,101,119,61,178,51,120,149,137,212,19,190,42,135,181,243,6,189,101,168,182,177,101,170,93,219,106,207,94,119,240,220,75,29,203,86,132,
214,69,96,199,160,239,138,162,53,47,55,121,175,89,120,31,88,215,117,13,65,237,157,101,182,107,187,185,231,49,200,149,42,200,100,118,226,69,118,35,21,66,106,186,206,177,174,221,125,123,92,212,46,117,59,
222,34,63,172,222,205,37,196,188,22,180,94,114,51,26,10,236,43,138,160,113,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,135,252,213,255,0,148,63,200,223,246,246,255,0,147,241,103,39,217,63,241,173,174,255,0,146,31,244,204,
187,206,208,255,0,17,211,127,201,95,247,97,229,25,217,60,227,177,87,255,210,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,
255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,
255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,211,242,166,92,208,207,255,0,37,63,242,
102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,
191,228,175,251,176,242,140,236,158,113,216,171,255,212,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,
119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,
111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,213,242,166,92,208,207,255,0,37,63,242,102,232,127,244,
119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,
176,242,140,236,158,113,216,171,255,214,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,
63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,
248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,215,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,
29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,
113,216,171,255,208,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,
58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,
159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,209,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,
100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,
210,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,
201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,211,242,166,92,208,207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,
154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,212,242,166,92,208,
207,255,0,37,63,242,102,232,127,244,119,255,0,80,115,103,29,237,151,252,100,102,255,0,51,254,154,65,232,125,157,255,0,31,199,254,119,251,137,35,116,63,247,141,62,67,58,183,74,153,226,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,67,254,106,255,0,202,31,228,111,251,123,127,201,248,179,147,236,159,248,214,215,127,201,15,250,102,
93,231,104,127,136,233,191,228,175,251,176,242,140,236,158,113,216,171,255,213,242,166,92,208,205,255,0,40,47,109,116,255,0,204,125,6,123,185,61,56,158,89,109,213,168,90,178,220,193,36,17,173,20,19,241,
59,170,215,160,239,182,114,158,214,97,158,94,202,205,24,11,52,37,254,110,57,198,115,249,70,36,187,222,193,201,28,122,236,102,92,172,143,140,162,99,31,246,69,145,71,165,221,104,151,23,58,77,234,241,186,
179,145,161,146,149,161,42,118,97,94,196,110,61,179,117,163,213,195,85,134,25,177,253,51,28,67,245,123,199,34,224,234,48,75,6,73,99,151,56,154,86,204,183,29,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,170,31,156,33,108,116,111,38,232,115,181,53,59,107,123,203,203,136,56,176,41,21,236,200,209,84,145,74,158,14,8,173,71,29,251,103,
27,236,254,65,168,215,107,53,16,254,238,82,199,142,50,219,213,44,48,225,159,195,120,144,122,241,123,221,255,0,107,67,194,211,105,241,75,235,140,101,50,59,134,73,92,127,79,201,228,249,220,60,203,177,87,
255,214,242,166,92,208,236,85,238,126,94,215,237,127,51,224,22,247,70,59,95,204,43,120,232,126,204,113,106,113,68,191,105,122,5,153,84,124,75,210,159,26,124,28,150,47,58,148,103,236,252,236,92,180,82,
63,214,150,150,82,251,101,138,71,145,255,0,54,94,186,57,58,248,202,61,171,30,145,212,196,123,163,158,35,238,152,253,163,211,244,4,190,211,175,180,201,205,174,161,110,246,243,143,216,144,82,163,196,30,
132,123,140,237,52,154,204,58,168,120,152,102,39,30,248,254,158,227,228,94,127,62,159,38,9,112,228,137,137,243,67,102,91,142,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,186,56,228,154,69,138,36,105,37,114,21,17,65,102,36,244,0,14,185,9,206,48,137,148,136,0,115,37,148,98,100,104,11,37,63,158,215,79,242,54,156,60,199,231,40,137,149,170,52,157,15,144,
19,221,204,0,63,16,223,132,107,81,205,152,124,62,5,138,35,241,26,174,214,159,105,228,58,78,207,151,252,59,81,252,24,161,253,15,231,206,95,193,195,207,190,184,167,30,143,14,134,58,40,120,250,177,255,0,
11,197,252,89,37,253,47,230,196,127,23,246,70,92,79,204,90,254,161,230,141,106,243,94,213,89,13,245,235,134,144,70,188,17,66,168,68,85,27,236,170,161,69,73,109,190,38,102,223,59,30,207,208,226,209,105,
227,131,21,240,192,117,220,255,0,58,68,255,0,90,68,158,239,230,128,30,123,87,170,158,167,44,178,207,234,151,227,236,9,94,103,184,142,197,95,255,215,242,166,92,208,236,85,216,171,55,178,252,223,252,199,
211,237,99,180,131,94,149,226,142,188,90,226,40,46,101,60,137,99,202,73,227,119,109,206,220,155,97,183,76,229,51,123,39,217,89,102,103,44,34,207,243,76,241,199,253,36,37,24,143,128,119,184,251,123,93,
142,60,35,33,175,49,25,31,244,210,6,72,143,249,93,127,153,191,245,124,255,0,167,75,63,250,163,148,255,0,160,222,200,255,0,81,255,0,103,147,254,45,179,253,17,107,255,0,213,63,216,195,254,37,223,242,186,
255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,
63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,
198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,
103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,
0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,
245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,
242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,
127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,
56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,
45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,
127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,
226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,
254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,
100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,
83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,
207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,
136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,
234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,
217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,
46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,
84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,
0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,
0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,
175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,
252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,
222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,
251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,
253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,
107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,
243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,
0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,
226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,
254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,
234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,
0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,
0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,
149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,
0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,
246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,
63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,
34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,
255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,
255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,
127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,
199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,
0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,
157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,
255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,
0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,
123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,
236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,
127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,
244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,
155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,
145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,
0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,
143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,
0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,
231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,
255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,
187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,
6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,
216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,
255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,
22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,
175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,
253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,
255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,
71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,127,177,135,252,75,191,229,117,254,102,255,0,213,243,254,157,44,255,0,234,142,63,232,55,178,63,212,127,217,228,255,0,139,95,244,69,175,
255,0,84,255,0,99,15,248,151,127,202,235,252,205,255,0,171,231,253,58,89,255,0,213,28,127,208,111,100,127,168,255,0,179,201,255,0,22,191,232,139,95,254,169,254,198,31,241,46,255,0,149,215,249,155,255,
0,87,207,250,116,179,255,0,170,56,255,0,160,222,200,255,0,81,255,0,103,147,254,45,127,209,22,191,253,83,253,140,63,226,93,255,0,43,175,243,55,254,175,159,244,233,103,255,0,84,113,255,0,65,189,145,254,
163,254,207,39,252,90,255,0,162,45,127,250,167,251,24,127,196,187,254,87,95,230,111,253,95,63,233,210,207,254,168,227,254,131,123,35,253,71,253,158,79,248,181,255,0,68,90,255,0,245,79,246,48,255,0,137,
119,252,174,191,204,223,250,190,127,211,165,159,253,81,199,253,6,246,71,250,143,251,60,159,241,107,254,136,181,255,0,234,159,236,97,255,0,18,239,249,93,127,153,191,245,124,255,0,167,75,63,250,163,143,
250,13,236,143,245,31,246,121,63,226,215,253,17,107,255,0,213,63,216,195,254,37,223,242,186,255,0,51,127,234,249,255,0,78,150,127,245,71,31,244,27,217,31,234,63,236,242,127,197,175,250,34,215,255,0,170,
127,177,135,252,75,8,189,190,190,212,238,164,189,212,110,101,188,189,150,158,173,197,196,141,44,173,196,5,28,157,201,38,128,0,61,179,171,195,131,30,24,8,99,136,132,71,40,196,8,199,228,29,22,76,179,201,
46,41,147,34,122,157,202,31,46,107,118,42,236,85,255,208,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,
98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,255,209,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,255,210,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,
138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,211,242,166,
92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,212,242,166,92,208,236,85,216,171,
177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,213,242,166,92,208,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,214,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,
236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,215,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,
85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,
21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,
197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,208,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,
187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,
174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,
171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,
42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,255,209,242,166,92,208,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,
216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,
118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,
93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,87,98,174,197,93,138,187,21,118,42,236,85,216,171,177,
87,98,174,197,93,138,187,21,118,42,236,85,255,217,0,0};

const char* FXPanel::fx_panel_png = (const char*) resource_FXPanel_fx_panel_png;
const int FXPanel::fx_panel_pngSize = 79951;


//[EndFile] You can add extra defines here...
//[/EndFile]
