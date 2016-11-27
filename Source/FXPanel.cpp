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

    delayMixRightSlider->setValue(0.5);
    delayMixLeftSlider->setValue(0.5);
    delayFBRightSlider->setValue(0.5);
    delayFBLeftSlider->setValue(0.5);
    delayTimeRightSlider->setValue(0.375);
    delayTimeLeftSlider->setValue(0.5);
    
    //[/Constructor]
}

FXPanel::~FXPanel()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
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


    //[Destructor]. You can add your own custom destruction code here..
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

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
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
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: fx_panel_png, 50040, "../fx_panel.png"
static const unsigned char resource_FXPanel_fx_panel_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,142,0,0,2,88,8,2,0,0,0,162,133,47,69,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,
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
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,110,65,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,
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
116,97,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,48,56,58,52,54,58,48,56,43,48,49,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,
109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,48,56,58,52,54,58,48,56,43,48,49,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,
32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,
110,99,101,73,68,62,120,109,112,46,105,105,100,58,48,55,55,50,97,49,101,55,45,56,53,51,49,45,52,57,48,56,45,98,54,49,48,45,48,52,98,55,54,49,99,48,100,101,100,53,60,47,120,109,112,77,77,58,73,110,115,
116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,
101,99,52,97,57,98,50,101,45,102,53,48,51,45,49,49,55,57,45,56,53,54,100,45,99,97,55,102,98,50,101,57,49,49,99,97,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,
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
116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,100,48,57,53,48,56,
54,102,45,55,101,99,100,45,52,48,54,53,45,98,100,54,56,45,97,98,97,52,49,48,50,55,98,50,56,56,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,55,84,48,56,58,52,54,58,48,56,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,48,55,55,50,97,49,101,55,45,56,53,51,49,45,52,57,48,56,45,98,54,49,
48,45,48,52,98,55,54,49,99,48,100,101,100,53,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,
101,110,62,50,48,49,54,45,49,49,45,50,55,84,48,56,58,52,54,58,48,56,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,
115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,
69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,
32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,100,48,57,53,48,56,54,102,45,55,101,99,100,45,52,48,54,53,45,98,100,54,56,45,97,98,97,52,49,48,50,55,98,50,56,56,60,47,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,
110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,78,97,109,101,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,76,97,121,101,
114,84,101,120,116,62,84,82,73,79,32,32,86,105,114,116,117,97,108,32,73,110,115,116,114,117,109,101,110,116,60,47,112,104,111,116,111,115,104,111,112,58,76,97,121,101,114,84,101,120,116,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,66,97,103,62,10,32,32,32,32,32,32,32,32,32,60,47,112,104,111,116,111,115,
104,111,112,58,84,101,120,116,76,97,121,101,114,115,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,110,116,
97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,111,108,
117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,111,108,
117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,
110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,49,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,
32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,57,49,48,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,
32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,54,48,48,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,
32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,
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
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,63,62,122,73,
9,115,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,74,86,73,68,65,84,120,218,236,221,123,124,84,213,189,255,255,207,
218,51,147,100,18,204,149,123,2,72,184,106,0,165,133,162,88,126,222,104,241,139,40,124,31,28,90,49,125,216,95,15,189,200,41,122,196,22,173,182,232,41,244,104,69,143,248,83,172,180,194,175,231,120,10,136,
148,254,172,90,148,42,42,63,21,203,175,32,26,160,220,19,9,137,65,46,185,65,50,144,204,236,245,251,99,205,172,236,76,46,68,204,13,206,235,121,44,39,179,179,103,239,189,246,76,214,188,103,237,181,214,86,
195,71,93,41,0,0,0,64,247,227,112,10,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,128,110,192,127,206,53,148,138,253,208,248,225,57,105,125,238,245,205,58,34,162,189,123,108,
178,235,166,79,209,45,236,197,251,92,237,217,168,110,188,59,0,0,0,92,216,81,213,228,63,37,162,84,236,63,137,254,123,238,156,26,183,169,22,214,177,185,83,235,70,161,179,165,125,69,215,244,172,175,165,241,
179,98,79,244,6,89,215,179,50,153,21,0,0,224,130,143,170,13,97,81,137,207,17,199,17,71,137,19,203,172,205,6,208,184,150,206,166,169,55,62,170,154,28,233,138,22,113,61,79,113,148,40,17,199,105,230,137,
38,161,186,90,92,45,218,109,120,86,244,104,29,241,53,62,66,179,125,215,243,44,215,21,173,163,135,78,96,5,0,0,184,240,162,170,205,169,142,35,126,71,124,142,248,125,226,247,53,4,214,22,91,86,155,92,157,
183,77,179,241,217,86,139,110,156,35,109,171,170,9,196,142,18,199,17,229,125,150,22,45,18,113,197,117,37,226,74,196,109,104,91,117,156,88,164,86,226,115,26,210,170,217,190,93,63,226,74,68,121,158,168,
72,171,0,0,0,23,90,84,21,155,83,125,18,240,73,130,95,2,126,9,56,218,231,107,20,4,189,141,151,13,189,78,117,163,216,234,141,167,77,215,119,181,9,142,42,46,170,58,74,171,38,141,184,38,95,70,163,170,86,17,
87,194,145,232,179,124,142,248,28,241,249,196,167,180,201,211,166,175,106,44,218,170,176,43,225,136,212,135,37,28,145,176,43,145,136,68,92,17,210,42,0,0,192,5,23,85,77,147,170,79,69,115,106,82,64,39,38,
72,162,79,251,253,34,186,217,161,80,246,121,13,255,83,222,200,26,255,44,79,51,171,82,174,171,93,173,76,15,84,71,137,114,196,175,116,147,103,41,207,250,98,162,103,68,43,215,53,233,86,251,28,9,56,218,241,
137,99,118,232,217,126,196,213,245,17,85,23,150,122,159,170,11,75,93,88,234,69,68,218,63,173,54,219,53,162,149,126,17,237,174,81,27,118,227,3,32,145,3,0,128,139,37,170,42,113,148,248,124,226,247,73,162,
95,7,19,37,41,160,69,180,118,93,45,177,255,107,33,227,106,81,74,41,17,209,38,55,105,111,88,213,186,185,149,149,40,191,163,68,69,147,158,22,113,181,43,90,107,209,158,180,42,74,68,43,165,180,82,74,37,248,
157,196,128,114,181,54,125,12,28,209,134,104,237,70,143,78,139,40,45,162,148,114,68,37,250,85,130,95,213,133,197,95,39,62,71,153,102,87,9,71,211,170,254,226,1,180,197,152,216,184,189,57,58,156,75,119,
108,7,89,239,0,56,145,102,154,162,27,2,107,11,19,44,52,59,175,2,0,0,64,183,139,170,54,238,152,46,170,129,128,36,250,117,125,56,178,107,79,89,97,113,121,27,183,155,146,28,200,29,152,57,60,55,107,199,174,
178,194,226,138,86,214,204,238,123,73,118,223,212,1,253,211,68,59,38,221,86,86,133,10,139,79,22,181,252,172,193,3,51,114,7,101,101,164,37,59,34,162,76,159,87,87,68,151,87,214,150,30,173,46,58,82,89,95,
31,177,43,95,154,147,158,145,150,52,120,96,166,82,42,209,239,248,77,116,85,202,100,56,211,95,86,181,16,206,154,157,3,161,33,222,73,163,8,107,187,43,216,213,180,183,211,130,110,20,88,155,102,223,243,142,
137,222,1,112,222,174,186,42,26,250,163,227,207,188,3,215,226,38,88,136,155,87,225,60,82,117,151,55,39,183,111,226,151,38,165,32,187,3,0,208,37,90,188,5,128,178,105,213,17,199,145,194,79,79,60,248,208,
18,221,102,133,69,37,133,197,229,71,143,159,250,95,183,220,222,250,154,47,173,127,99,202,45,255,252,255,110,253,180,244,104,165,104,87,180,91,88,124,242,185,223,173,105,229,41,207,253,110,77,225,225,147,
166,17,213,213,90,187,145,207,79,156,250,219,71,197,125,6,78,184,239,193,199,42,42,170,188,43,47,95,241,226,119,254,121,193,198,119,15,236,59,116,92,180,235,243,233,148,4,157,24,208,137,1,241,251,196,
239,180,56,253,150,89,110,70,119,249,156,104,95,136,4,191,36,6,36,49,32,9,126,73,244,71,151,152,133,9,1,73,12,72,48,65,130,9,18,76,148,96,162,4,19,36,41,65,18,2,146,224,143,158,198,88,79,220,104,166,116,
76,255,90,95,116,23,142,39,116,126,225,180,170,196,239,72,192,47,1,191,36,37,68,119,29,76,144,164,128,36,4,162,203,3,62,9,248,36,224,45,69,236,176,77,137,2,254,134,193,115,170,109,115,232,218,88,220,190,
37,234,228,132,234,125,93,76,17,252,177,82,216,229,221,188,20,0,0,92,148,206,53,89,85,52,175,156,87,155,146,22,237,158,251,137,19,39,78,156,56,113,226,63,253,211,63,77,190,225,234,228,164,64,122,90,80,
183,177,9,75,155,21,245,190,67,199,235,116,250,75,235,223,152,56,113,98,211,181,166,76,153,50,101,202,148,239,124,231,59,139,22,45,218,240,202,170,177,163,251,59,142,47,24,48,35,171,148,153,28,64,171,
230,27,86,205,216,50,95,172,47,132,201,181,102,22,45,123,97,93,164,97,190,2,239,191,162,181,29,254,85,31,150,186,176,132,35,226,170,104,235,166,233,146,235,120,39,213,242,52,127,182,101,118,2,111,108,
242,197,102,105,136,230,81,191,248,148,233,3,161,204,24,178,112,36,218,178,171,60,41,217,137,101,47,29,155,198,203,172,22,142,205,177,160,61,93,35,226,154,144,189,199,96,115,222,57,75,212,248,213,107,
107,142,108,227,179,154,61,194,182,111,223,59,29,155,45,133,219,92,163,56,45,172,0,0,116,125,84,141,94,17,142,134,131,243,110,77,106,235,167,250,152,49,99,254,123,213,159,238,252,254,109,99,71,37,125,
161,141,23,21,159,236,157,61,106,205,154,53,189,123,247,110,101,213,222,189,123,47,91,182,236,201,220,220,101,79,45,254,202,232,236,128,207,73,74,136,206,33,16,205,112,141,123,172,218,75,228,62,37,126,
95,172,101,212,39,62,165,125,38,170,198,186,16,68,83,142,104,199,137,206,237,229,56,218,137,229,191,136,22,51,156,203,231,72,125,164,97,202,2,211,98,237,243,52,106,155,185,180,92,79,42,178,151,158,91,
105,204,83,141,231,106,72,12,72,130,95,39,4,196,239,104,37,226,106,93,31,81,245,17,9,71,148,217,117,116,101,165,157,88,242,54,187,48,187,174,119,149,153,39,193,206,174,224,122,230,17,107,20,79,155,116,
60,104,104,70,85,45,150,168,245,55,68,235,37,109,118,125,239,155,76,55,158,100,183,237,241,215,59,127,176,249,79,217,25,36,116,195,124,17,38,193,51,107,4,0,0,157,73,13,31,117,101,211,15,114,71,137,223,
39,137,1,73,74,144,228,68,221,35,81,135,35,241,125,85,111,184,225,134,77,155,54,217,135,79,62,249,228,79,126,242,19,251,48,37,57,48,120,64,70,106,143,132,177,87,77,95,182,108,153,93,62,111,222,188,103,
159,125,214,252,252,31,255,241,31,247,222,123,175,119,215,35,70,140,24,62,64,135,206,132,15,21,87,124,122,164,82,68,62,249,228,147,49,99,198,152,223,22,20,20,92,113,197,21,34,114,233,128,244,33,131,178,
210,83,147,92,215,125,103,75,209,246,29,187,115,115,115,237,70,182,108,217,178,112,225,194,183,223,126,91,68,86,172,88,49,103,206,28,239,46,102,207,158,93,180,239,189,156,126,25,174,56,167,66,170,246,
172,58,83,23,107,242,212,241,39,193,231,72,192,31,61,15,137,126,157,24,16,191,19,141,170,98,162,170,136,136,56,170,241,100,5,186,209,252,3,74,201,217,122,117,54,172,234,234,163,123,105,148,138,162,67,
192,148,9,118,225,72,180,69,211,109,115,163,163,19,235,85,156,224,151,196,128,78,10,104,165,162,135,19,155,0,65,213,133,165,62,162,180,54,59,213,1,159,4,124,241,119,251,10,107,85,31,150,250,136,170,15,
55,204,234,165,117,244,30,13,166,176,113,9,85,121,47,154,199,90,118,109,24,247,150,168,105,228,109,23,13,163,214,26,223,98,215,219,235,32,110,167,77,211,176,41,145,153,236,204,239,136,207,39,142,152,115,
40,174,68,179,123,93,88,234,35,209,204,234,221,29,0,0,232,80,254,230,63,254,85,180,165,45,28,145,250,122,57,235,83,193,4,223,216,209,217,99,71,245,115,181,171,35,238,233,154,144,219,228,137,99,70,246,
28,60,32,195,241,249,148,227,136,136,118,245,231,199,79,53,221,254,85,87,246,237,149,149,44,34,79,60,182,240,170,171,174,242,94,181,207,201,201,169,171,63,156,150,26,28,59,42,233,138,203,122,111,217,118,
36,238,185,189,50,131,19,199,13,240,249,252,74,41,45,186,232,72,249,194,135,255,221,155,83,215,173,91,119,207,93,223,27,156,147,49,253,155,195,195,245,145,95,253,219,189,111,189,245,214,154,53,107,236,
10,15,60,240,192,228,27,94,201,238,151,230,83,42,224,87,254,112,195,165,240,184,62,0,202,27,1,253,58,57,65,251,124,162,181,118,181,22,81,74,180,136,114,162,13,207,141,166,55,56,126,242,116,97,113,121,
73,89,181,136,12,25,148,53,118,116,182,233,23,27,240,197,90,112,69,124,142,246,251,162,237,175,34,226,138,68,34,18,137,72,189,171,226,238,110,224,77,96,205,230,45,27,85,19,253,58,193,175,181,214,187,246,
28,45,44,46,175,171,143,100,164,5,115,7,101,14,30,152,149,24,80,126,159,104,29,221,111,180,20,218,222,104,86,105,165,124,74,252,9,42,73,235,186,176,170,243,76,64,235,109,229,245,54,163,218,127,125,209,
230,100,237,247,137,207,23,95,162,176,86,222,132,215,52,104,122,31,182,82,204,166,207,138,187,43,111,252,141,121,149,52,154,46,205,126,121,104,156,98,237,250,126,71,252,190,104,142,247,57,218,12,74,11,
187,82,31,150,179,62,229,56,162,234,165,78,162,227,240,200,169,0,0,116,89,84,21,123,241,58,34,97,71,206,42,229,171,211,142,163,146,252,162,149,207,113,149,246,137,56,190,166,207,82,202,113,124,62,199,
241,69,35,156,227,170,102,179,134,82,74,41,173,117,114,48,80,90,90,218,236,111,149,40,113,116,115,29,15,148,227,56,42,54,13,214,167,71,170,102,204,152,97,127,87,83,83,243,139,95,252,34,111,120,239,30,
41,137,230,96,174,188,188,223,135,239,109,216,184,113,227,148,41,83,162,121,122,204,152,27,191,113,235,231,197,91,51,51,82,252,62,237,115,148,207,105,174,165,205,115,179,46,211,192,236,115,244,71,5,165,
182,93,57,119,96,230,216,209,253,181,40,17,93,90,86,85,88,92,126,236,68,141,136,228,14,204,56,91,23,121,105,253,235,38,130,207,158,61,251,88,201,182,204,244,100,159,35,193,4,17,17,87,139,99,90,61,163,
179,113,153,184,169,124,126,165,252,177,132,167,163,215,154,155,159,186,214,92,133,86,13,121,206,28,164,105,76,213,218,61,84,92,94,81,81,149,146,146,82,88,88,56,238,43,163,46,29,144,233,115,196,23,235,
128,169,181,254,104,103,73,225,225,248,201,28,114,7,101,125,101,116,182,82,42,49,160,19,252,18,142,72,125,196,220,163,65,197,69,85,239,13,26,108,95,94,71,162,69,50,57,206,91,34,219,78,236,77,120,13,215,
235,27,247,10,136,155,67,160,217,190,170,222,185,5,98,199,166,108,244,52,189,171,27,186,34,196,126,27,13,169,77,78,170,114,148,185,235,68,192,103,214,142,21,68,73,192,81,9,137,202,231,19,71,69,183,47,
90,234,181,153,5,141,192,10,0,64,87,69,85,211,127,81,139,153,244,73,153,9,158,68,18,3,34,142,35,174,86,202,105,62,131,58,142,82,142,82,74,183,242,73,174,181,214,186,234,212,217,170,234,179,35,70,140,240,
6,205,247,222,219,124,203,55,70,216,43,231,205,62,219,46,175,171,15,247,238,59,208,219,164,250,201,39,159,156,174,250,172,71,110,142,137,203,74,107,237,147,222,89,41,31,124,240,129,141,170,34,50,121,242,
228,165,75,54,101,166,39,251,85,67,247,74,165,226,251,81,154,81,101,78,244,138,185,62,91,23,246,39,245,212,250,164,61,140,43,243,250,154,203,196,133,135,203,223,124,123,139,233,168,176,114,229,202,185,
115,127,100,58,42,212,212,212,252,105,253,186,91,190,49,82,235,216,208,45,17,101,230,141,210,186,62,28,217,181,247,168,153,201,43,119,96,198,168,145,125,3,1,191,82,226,247,73,160,149,87,76,197,223,189,
182,33,191,106,209,174,174,168,12,205,156,57,43,37,37,69,68,182,111,223,222,43,43,69,68,75,236,21,211,90,62,63,126,234,127,77,155,237,237,149,97,60,249,228,147,171,254,243,63,114,7,102,153,211,111,110,
165,171,162,163,227,162,105,53,218,167,83,53,243,210,186,218,173,175,111,182,68,209,239,3,141,39,117,109,62,155,54,251,86,148,150,243,122,244,124,104,209,170,161,203,132,163,180,19,215,146,170,116,195,
147,116,211,83,167,37,214,103,66,107,119,247,222,207,15,21,151,215,215,71,2,1,223,144,129,153,121,35,251,38,249,77,1,149,107,7,156,145,83,1,0,232,20,45,78,86,165,99,67,194,235,195,114,182,94,66,117,18,
170,83,225,136,9,138,170,229,217,157,162,185,175,149,252,241,183,143,143,190,186,169,240,104,101,202,31,214,188,108,251,161,138,200,139,47,190,152,59,32,93,73,180,81,181,229,12,99,50,164,84,84,157,249,
198,55,190,225,253,197,158,61,123,210,83,147,148,114,68,57,78,44,55,247,238,153,178,118,237,90,239,106,57,57,57,53,181,245,34,162,28,81,162,85,203,243,16,121,47,118,39,4,156,162,162,67,53,53,53,230,87,
55,220,112,195,169,154,179,174,235,238,47,60,62,235,182,255,211,20,164,176,176,240,167,247,206,27,156,147,150,145,145,166,148,202,200,72,27,60,48,35,122,35,3,237,106,215,213,174,171,181,43,58,162,117,
228,208,167,39,30,124,232,113,51,163,214,131,15,61,126,232,240,73,209,174,118,35,218,117,93,55,182,106,227,255,180,189,114,175,99,15,92,87,187,209,53,181,235,138,184,167,107,207,14,27,54,204,28,100,117,
117,117,32,224,52,138,102,90,247,238,153,242,250,171,171,149,82,133,133,133,102,217,236,217,179,149,82,207,254,95,191,26,60,32,35,182,205,72,108,203,174,214,218,81,174,207,209,126,159,246,57,218,17,215,
141,30,71,195,65,105,215,21,173,15,125,122,178,185,18,153,173,69,26,255,208,240,95,147,146,122,127,231,125,122,195,115,27,206,144,57,66,209,74,187,62,165,205,127,74,107,87,55,222,190,171,181,125,82,147,
2,154,83,103,254,213,110,180,77,90,107,93,81,81,117,168,184,220,204,135,150,20,144,68,127,116,6,43,159,67,189,1,0,64,39,105,177,3,128,105,79,115,93,9,139,72,68,156,122,241,59,82,23,22,191,239,75,237,111,
217,178,101,77,219,243,68,164,160,160,224,129,251,238,190,234,171,3,68,57,209,142,160,173,209,158,127,27,84,85,85,5,2,190,104,238,52,157,12,68,37,36,248,247,239,223,235,93,237,146,75,46,49,247,8,80,141,
103,125,111,210,174,218,48,132,200,72,9,6,62,255,252,115,211,142,219,187,119,239,178,162,131,110,146,175,168,184,114,211,67,15,153,21,158,124,242,201,75,115,210,170,170,207,152,237,231,244,189,228,242,
97,61,119,236,250,172,168,184,82,68,210,83,147,114,7,166,23,22,87,86,86,159,25,60,32,189,232,72,229,101,151,93,102,158,248,214,91,111,237,222,119,172,54,84,151,145,22,44,44,174,168,172,58,35,166,143,193,
168,126,199,79,214,216,158,175,185,3,51,199,142,234,255,105,113,69,97,113,121,69,85,200,30,103,238,192,140,17,67,122,6,147,2,90,187,21,85,161,209,163,71,219,205,246,206,74,105,122,242,174,184,188,239,
145,178,170,62,125,250,136,72,77,77,205,250,245,47,205,152,50,66,41,103,199,174,207,76,155,104,118,223,212,132,4,95,81,180,125,52,115,236,168,126,182,85,178,166,182,110,127,225,9,123,91,135,132,128,47,
119,96,102,207,172,228,210,163,85,69,197,45,148,232,112,69,101,245,25,17,25,60,48,163,174,46,82,122,180,58,119,96,70,122,90,176,176,184,60,174,164,135,138,203,75,163,37,205,200,27,209,103,247,190,207,
205,142,6,15,76,175,169,169,63,118,50,218,197,98,120,110,207,202,234,80,225,225,10,187,100,196,144,94,201,193,104,99,244,177,19,53,133,197,229,165,71,171,205,195,193,3,50,114,7,101,164,167,6,69,164,213,
2,74,101,85,232,80,113,185,109,147,254,228,147,79,234,235,35,235,55,236,206,29,148,245,213,49,217,126,95,244,62,103,209,175,99,90,104,87,5,0,160,163,181,214,170,106,238,117,228,198,38,230,172,143,72,125,
68,34,110,251,31,196,202,149,43,39,95,127,213,224,129,233,9,1,191,82,221,104,158,117,207,69,94,45,162,83,146,3,71,143,30,53,143,135,13,27,86,83,123,246,96,209,201,69,191,250,181,153,39,107,227,198,141,
175,189,252,223,167,107,235,30,123,242,121,211,178,56,225,154,155,202,43,107,3,73,189,205,195,237,59,118,223,252,191,127,176,125,199,110,173,245,207,31,126,66,107,109,135,148,173,89,179,70,107,253,216,
19,191,43,60,92,177,253,163,221,102,253,175,77,252,102,121,101,205,161,195,39,215,254,241,117,179,196,159,212,243,116,205,153,180,94,35,182,125,180,203,123,155,131,95,63,241,219,15,183,31,41,42,46,119,
93,247,248,201,154,175,126,245,171,177,12,186,46,35,45,201,27,183,77,223,129,202,234,208,204,153,223,178,129,172,87,102,178,104,169,171,11,251,147,122,197,238,203,240,250,207,99,237,163,249,223,253,241,
71,187,74,79,215,158,209,58,178,107,239,231,117,206,0,219,116,170,181,46,175,168,250,233,3,143,94,49,126,218,224,161,95,105,177,68,59,162,37,154,122,203,237,47,173,127,221,28,112,225,225,242,166,37,125,
169,161,164,189,10,61,109,180,143,61,241,187,55,223,222,98,11,187,247,224,241,175,94,61,189,209,146,67,199,92,55,82,87,23,254,104,87,233,152,241,55,155,189,68,111,24,241,252,154,35,199,252,133,135,79,
158,57,83,215,90,1,107,206,28,58,92,190,252,249,23,237,32,188,137,19,39,70,15,38,49,171,174,46,34,210,204,29,203,0,0,64,215,68,85,137,141,89,113,237,127,177,105,50,219,221,234,213,171,179,251,246,232,
223,231,146,54,63,67,121,254,109,144,150,150,86,95,31,137,13,109,143,142,192,169,171,11,15,31,62,220,187,218,169,83,167,2,209,17,52,141,134,233,232,230,206,64,108,48,144,18,81,222,113,96,131,6,13,170,
169,173,47,42,169,250,206,119,190,99,150,44,89,178,228,210,156,212,19,229,181,158,164,248,82,109,109,221,183,191,253,109,179,66,110,110,238,162,69,139,114,115,115,107,106,106,230,206,253,225,236,217,179,
205,242,45,91,182,152,177,100,247,223,251,3,219,251,214,4,205,212,30,9,199,78,214,154,158,175,133,133,133,199,142,22,151,148,85,221,126,251,237,219,183,111,191,241,198,27,149,82,35,70,140,40,44,44,156,
53,107,214,246,29,187,139,142,84,212,215,69,122,247,29,100,182,240,201,39,159,244,206,74,246,78,51,106,39,212,58,118,162,102,242,228,201,230,103,211,107,66,139,62,118,178,198,30,106,143,30,61,86,175,94,
61,98,196,136,154,154,154,69,139,22,61,246,196,239,246,31,58,113,170,230,108,246,165,99,94,121,229,149,57,115,230,172,92,185,50,122,204,247,223,63,126,252,248,204,204,204,162,253,219,91,47,145,136,44,
91,182,204,100,217,63,253,233,79,231,42,233,225,138,234,144,109,163,61,114,228,200,228,235,175,90,183,110,157,136,204,154,53,107,249,138,23,69,100,242,245,87,111,220,184,209,44,153,122,75,254,231,199,
79,239,218,247,249,207,31,122,98,217,178,101,61,122,244,24,49,98,196,136,17,35,142,29,59,54,101,202,148,215,95,127,189,166,62,245,216,137,211,173,21,176,240,228,165,57,169,255,252,221,127,218,178,101,
139,89,199,244,139,80,74,133,207,158,76,72,240,219,191,8,26,83,1,0,232,22,81,213,27,88,117,236,206,61,95,242,115,122,222,188,121,74,169,39,159,124,210,187,240,249,231,159,47,58,82,93,91,91,31,27,127,29,
141,145,45,29,145,249,85,70,90,210,155,111,190,233,253,197,101,151,93,86,89,125,70,107,87,98,29,16,181,118,143,157,104,72,96,70,73,73,73,74,114,64,68,180,43,90,148,119,170,163,184,125,196,77,132,148,16,
240,85,87,71,47,43,167,166,166,214,213,135,159,126,102,185,105,82,93,185,114,101,225,254,237,201,193,4,111,82,236,149,153,92,83,91,63,104,208,32,243,20,27,239,50,50,82,47,205,73,27,63,126,188,13,139,151,
15,203,154,254,141,97,253,250,244,176,189,111,63,249,228,147,94,153,193,138,170,134,49,82,71,143,30,77,14,250,47,205,73,91,250,216,3,63,191,255,206,162,253,219,69,100,255,254,253,239,188,243,142,201,193,
119,253,235,125,199,78,158,182,91,136,245,220,109,220,15,87,107,45,186,178,234,140,77,129,135,15,31,78,9,6,68,164,178,250,140,237,57,240,199,63,254,177,234,248,238,179,53,71,223,127,255,253,104,22,188,
53,255,211,226,138,59,239,188,211,28,204,234,213,171,47,31,154,53,126,76,191,191,191,255,255,76,190,225,234,55,94,89,145,122,73,98,235,37,42,40,40,80,49,91,223,127,253,28,37,77,242,31,247,36,215,69,255,
246,96,207,204,160,61,249,37,37,37,239,108,124,177,87,102,176,164,164,196,44,201,204,204,172,169,61,59,239,158,133,102,26,221,249,243,231,239,223,191,127,255,254,253,175,190,250,170,57,57,247,221,119,
95,69,117,168,245,2,158,173,15,87,86,159,29,58,116,168,52,244,139,24,57,115,106,222,87,70,103,139,72,196,85,110,116,72,28,129,21,0,128,78,226,239,252,93,94,117,101,159,184,25,85,115,115,115,159,95,249,
223,247,223,251,131,43,71,245,119,28,215,204,3,212,210,237,85,181,214,38,122,37,4,252,199,142,22,22,22,22,218,70,187,43,174,184,162,71,90,255,211,53,103,123,164,36,70,111,38,21,113,143,157,172,185,230,
154,107,188,91,120,235,173,183,122,247,236,33,74,133,221,198,247,204,108,46,163,139,136,22,229,106,237,136,164,36,39,28,62,124,216,70,85,95,82,223,219,110,187,77,68,142,29,59,182,100,201,146,203,135,246,
172,9,213,127,229,43,95,51,43,148,150,150,38,39,249,43,171,27,66,225,146,37,75,166,94,55,36,144,224,19,145,127,236,63,62,96,192,0,179,124,199,142,29,233,169,73,34,82,89,125,118,236,216,177,13,65,243,146,
196,19,39,107,239,248,193,100,239,146,221,251,143,39,36,247,185,255,231,247,137,72,220,221,13,14,28,56,80,19,170,183,91,56,124,248,112,74,114,130,68,187,228,122,58,0,104,125,172,60,154,2,69,100,237,218,
181,67,179,147,69,196,246,28,48,11,115,251,5,15,126,90,105,71,104,189,249,230,155,245,225,72,106,106,170,253,118,241,206,59,239,28,62,124,248,215,191,254,247,193,57,233,253,123,247,216,125,224,28,37,250,
227,31,255,56,126,76,191,254,125,47,17,145,3,69,229,173,151,52,237,146,196,255,227,134,91,76,114,61,112,224,64,218,37,9,149,213,103,189,29,97,123,102,38,29,60,220,208,53,246,192,129,3,159,150,84,219,153,
203,188,55,167,176,103,227,248,201,80,235,5,204,237,151,152,51,96,176,249,238,113,232,208,161,244,75,146,148,138,118,158,112,181,132,61,183,51,0,0,0,157,163,43,6,51,43,103,240,128,244,239,125,239,123,
199,142,29,179,203,102,205,154,245,157,239,221,189,123,223,231,174,103,136,119,179,215,228,205,88,109,17,17,37,151,14,72,123,249,229,151,237,239,82,82,82,126,245,171,95,237,222,127,236,216,241,211,145,
72,184,238,76,221,199,255,40,187,122,210,84,239,76,85,5,5,5,155,222,124,37,35,61,168,68,133,35,13,243,237,55,151,137,99,189,117,181,104,87,68,84,74,114,224,192,129,3,230,183,253,250,245,187,239,190,251,
76,150,250,195,31,254,16,144,242,64,130,239,120,121,173,189,176,190,115,231,206,180,212,196,227,229,33,239,69,237,132,68,191,153,204,235,120,172,159,128,9,73,233,151,152,96,119,38,46,141,197,45,169,61,
83,127,215,252,135,246,237,219,55,103,206,156,203,46,187,236,201,39,159,180,3,249,107,106,106,214,255,241,37,111,158,91,187,118,109,239,158,41,34,222,169,240,181,104,183,174,46,60,120,240,16,115,228,230,
168,2,126,199,219,115,160,176,176,240,243,178,195,34,210,167,95,195,146,99,71,15,95,154,147,182,100,201,18,243,170,229,230,230,206,153,51,103,209,162,69,21,21,213,223,152,58,251,112,105,229,241,242,80,
235,37,90,187,118,109,175,172,100,211,170,122,206,146,138,104,123,38,75,74,74,82,130,129,218,80,184,111,223,190,182,164,105,151,36,30,63,25,178,147,130,173,255,227,75,246,104,55,110,220,168,154,248,239,
223,63,237,45,78,211,2,126,94,118,248,120,121,173,109,128,223,183,111,95,122,90,172,77,90,169,136,171,188,55,18,99,166,42,0,0,186,89,84,109,184,69,80,43,51,73,169,248,135,205,173,229,56,78,175,172,30,
1,41,143,155,10,224,254,251,239,207,25,124,101,105,89,85,69,85,237,142,93,101,127,254,235,254,227,229,161,184,231,30,47,15,253,249,175,251,63,218,245,89,101,245,25,37,106,240,128,204,197,191,252,185,157,
116,201,68,222,117,127,250,107,98,218,240,63,255,117,255,95,222,57,244,139,127,123,210,123,171,42,17,121,244,209,71,115,7,102,40,113,34,90,153,219,135,186,205,53,172,234,88,247,85,51,105,151,43,74,148,
164,36,39,124,244,209,71,102,133,33,67,134,152,70,205,130,130,130,95,255,251,194,97,131,179,148,82,113,73,49,37,232,159,249,79,223,178,23,181,83,130,9,74,57,142,163,194,97,215,155,11,143,29,61,28,72,240,
137,82,199,99,141,157,13,105,172,188,81,26,203,29,62,206,220,138,182,160,160,96,198,45,147,255,235,249,71,135,15,31,110,251,27,244,204,12,158,104,148,140,139,19,2,126,51,27,130,152,217,108,69,68,228,115,
79,143,136,237,219,183,247,202,76,54,187,110,180,48,43,88,27,10,127,229,43,95,49,75,142,30,61,154,28,12,164,93,146,244,121,201,206,220,75,115,230,205,155,183,114,229,74,115,218,83,82,82,238,189,247,222,
79,75,170,251,196,149,40,224,136,136,183,68,69,69,135,18,19,3,102,26,177,184,114,53,45,105,229,169,58,111,114,237,149,21,180,177,242,147,79,62,233,149,149,92,117,170,206,158,91,83,246,156,156,28,179,254,
37,151,92,210,191,79,143,233,223,24,58,253,155,195,103,76,25,49,99,202,136,233,223,28,222,43,51,216,122,1,83,146,3,85,167,206,218,30,2,59,119,238,76,79,77,178,253,124,195,17,105,246,46,98,0,0,160,123,
68,213,198,99,74,154,159,133,180,153,223,52,55,229,187,114,28,199,25,158,219,243,15,191,127,218,12,148,49,82,82,82,150,46,93,90,116,164,178,168,184,98,249,138,23,205,224,107,239,196,171,99,198,140,49,
11,151,63,255,162,185,107,148,227,56,185,3,211,127,240,131,31,120,27,104,39,78,156,184,105,211,38,179,102,220,37,242,39,159,124,114,235,7,111,228,244,75,87,74,213,133,85,56,162,76,4,113,91,188,89,65,180,
85,53,226,138,136,74,8,248,237,212,170,38,36,153,236,59,120,96,186,105,186,179,201,204,196,181,19,229,103,26,141,94,74,75,82,142,82,202,169,60,117,214,246,212,140,134,69,145,218,80,120,210,164,235,204,
102,15,29,58,148,158,154,120,162,50,228,77,99,189,50,131,55,223,124,179,121,86,89,89,89,114,48,16,142,104,27,191,246,236,217,147,158,154,104,215,223,190,125,123,239,158,41,209,59,127,121,202,163,69,123,
251,164,86,87,87,155,17,102,149,141,83,90,70,106,210,137,138,80,220,208,171,131,159,86,86,86,159,185,226,242,62,59,254,246,242,147,191,190,127,244,168,145,222,211,30,95,34,165,42,79,157,245,206,51,208,
59,43,89,41,199,81,78,109,40,60,105,210,181,173,151,180,81,27,234,250,151,106,67,225,184,146,134,206,132,237,181,251,61,123,246,100,164,38,149,148,148,152,151,198,244,3,57,81,126,70,41,117,240,211,138,
55,223,43,60,248,105,69,101,245,57,11,152,88,85,93,103,239,73,177,118,237,218,222,89,13,109,210,118,136,33,35,171,0,0,232,142,81,213,124,60,155,38,70,213,66,115,169,29,107,30,189,75,128,82,45,221,88,213,
113,124,202,113,134,15,233,249,139,95,252,194,27,119,198,140,25,243,232,146,167,219,124,240,74,68,13,30,152,117,172,116,215,164,73,147,236,192,237,102,29,59,118,108,222,188,121,203,158,90,60,118,116,127,
81,78,125,68,157,169,19,115,167,251,102,111,79,47,158,225,255,230,178,175,137,125,102,106,85,187,206,198,141,27,255,246,254,27,57,253,210,148,227,84,85,159,109,116,155,168,204,228,202,83,141,186,87,246,
233,121,137,153,167,53,33,224,63,121,50,122,215,171,17,35,70,28,248,180,98,195,59,135,14,151,86,217,65,66,125,251,246,61,94,30,58,121,234,146,187,238,186,203,155,116,109,251,241,176,97,195,62,59,118,122,
204,87,191,49,111,222,60,179,100,199,142,29,41,201,9,222,201,255,19,2,62,207,36,85,90,68,239,218,247,249,171,111,238,59,80,84,110,175,212,191,245,214,91,181,161,112,245,233,186,218,80,125,118,118,182,
77,105,189,178,82,42,171,27,181,107,42,165,230,223,255,232,75,235,223,24,123,213,244,45,219,75,255,113,240,228,247,254,249,135,166,91,231,127,254,231,127,94,154,147,222,180,68,101,159,159,110,156,212,
131,230,253,144,144,224,63,103,73,27,181,161,102,38,87,157,170,179,65,211,244,193,173,244,44,217,177,99,71,122,90,146,212,159,120,241,197,23,205,183,136,223,255,254,247,31,108,47,121,121,227,190,255,253,
173,31,21,22,149,204,191,239,209,218,80,184,245,2,246,202,74,9,4,124,167,79,159,182,201,251,47,111,31,216,177,171,172,62,236,74,108,214,54,17,66,42,0,0,221,51,170,154,91,173,186,18,113,205,32,157,102,
239,144,169,236,221,170,196,222,188,170,233,46,149,99,110,213,218,35,37,41,65,85,254,235,191,254,171,247,183,115,230,204,185,121,250,119,218,150,84,149,114,148,40,103,196,144,94,189,211,207,126,107,230,
77,230,194,180,189,161,148,77,147,43,87,174,204,189,52,103,243,91,235,190,50,186,191,82,142,235,170,80,189,170,11,171,186,112,107,195,170,76,169,77,145,35,17,137,68,68,68,165,36,39,216,169,85,107,106,
106,238,190,251,238,33,131,50,148,114,148,56,53,161,112,163,164,152,224,175,106,52,156,124,93,70,122,208,220,224,32,35,45,249,255,219,178,113,229,202,149,18,107,42,174,168,168,18,127,86,253,153,99,15,
61,244,144,136,244,238,221,91,107,253,244,211,79,159,58,117,202,102,169,222,89,61,54,188,178,202,60,43,55,55,183,162,162,122,242,228,201,7,15,30,52,43,188,249,230,155,222,60,103,135,142,153,17,85,90,164,
174,46,226,58,233,230,62,76,118,32,218,154,53,107,150,175,120,177,232,72,165,157,40,202,94,169,111,212,27,97,253,186,132,128,191,170,170,106,207,158,61,143,61,246,152,105,177,94,182,108,217,186,117,235,
102,207,158,253,135,255,124,102,240,192,140,173,31,188,17,95,162,64,79,123,81,254,173,183,222,234,19,61,30,39,33,224,15,159,57,222,74,73,83,146,19,189,109,168,25,105,65,111,71,216,181,107,215,246,233,
217,227,248,201,70,157,125,51,211,147,71,12,233,249,239,139,126,250,208,67,15,21,20,20,216,41,81,23,45,90,180,99,199,142,213,171,87,31,43,63,71,1,51,211,147,115,7,101,60,243,204,51,230,251,192,178,101,
203,180,214,15,62,180,164,240,112,185,157,175,77,55,116,131,161,234,0,0,160,51,168,225,163,174,60,119,158,85,226,247,73,130,95,146,18,36,57,65,247,72,210,62,159,222,177,179,212,92,133,55,114,7,102,140,
29,157,237,40,39,162,149,214,74,41,237,83,218,213,77,87,203,28,59,58,59,218,218,170,181,214,174,189,129,144,53,120,96,186,214,242,233,145,202,150,142,103,240,192,140,220,65,89,25,105,201,246,94,240,230,
158,162,71,143,159,62,126,178,166,232,72,165,185,89,148,113,105,78,122,74,114,32,119,80,86,66,192,39,202,137,68,84,109,189,58,91,175,66,103,165,46,44,245,158,190,170,77,146,176,248,28,9,248,37,209,47,
201,137,146,156,168,147,19,245,177,227,167,14,29,62,105,238,132,20,8,248,114,7,102,140,26,209,215,20,71,139,216,194,230,14,204,200,27,217,231,211,226,138,194,226,138,154,218,58,115,75,167,188,145,125,
109,193,235,234,35,187,246,150,197,221,243,41,111,68,111,239,217,184,116,64,186,72,244,60,228,14,204,184,50,175,95,125,216,181,55,112,10,4,124,185,3,50,78,215,214,153,131,49,247,112,178,247,145,50,231,
217,177,109,219,90,107,145,157,123,202,10,15,159,172,243,156,156,232,201,28,152,89,90,86,93,88,92,94,103,111,124,63,162,247,238,125,199,226,150,20,21,87,212,134,234,205,66,251,162,95,58,32,35,35,45,40,
34,245,225,200,174,189,159,219,131,55,39,167,174,46,82,116,164,34,254,117,23,173,93,189,99,215,103,246,141,209,180,164,31,239,46,139,21,36,35,111,100,31,115,120,222,91,91,125,122,196,220,178,171,97,137,
217,84,73,89,85,81,113,244,46,86,113,5,60,84,92,94,223,106,1,69,228,211,35,21,135,98,59,18,145,220,65,89,99,46,235,171,149,191,230,140,170,61,43,166,37,62,250,133,13,0,0,116,159,168,234,196,66,91,48,81,
130,9,58,152,160,125,202,12,212,137,69,60,229,40,165,234,35,209,97,245,142,146,128,95,39,248,162,183,172,143,173,22,77,78,13,145,69,139,214,110,195,32,166,70,173,176,102,28,80,67,134,52,77,181,42,186,
17,71,41,101,34,166,82,226,72,244,214,68,209,174,10,186,97,107,102,190,33,81,74,139,170,11,171,179,117,114,54,172,206,214,75,93,88,234,195,209,171,255,205,246,85,85,170,33,163,39,6,36,152,160,147,147,
116,162,223,123,192,177,226,216,35,142,29,115,51,27,83,177,166,230,88,201,180,109,203,109,52,76,205,30,188,120,203,237,253,189,247,255,137,247,119,202,187,59,81,162,194,90,69,34,74,139,248,29,241,251,
116,244,36,137,110,116,82,227,246,30,223,16,30,223,57,89,55,218,123,195,147,117,195,193,75,147,227,137,158,41,105,244,186,107,207,235,222,82,65,154,121,89,90,92,164,236,201,211,141,127,167,90,60,99,77,
22,53,148,34,250,222,81,174,86,161,58,9,157,85,161,58,57,91,47,245,17,137,68,152,175,10,0,128,78,210,166,121,85,109,47,213,112,68,234,234,69,41,165,181,36,37,136,223,105,136,105,225,176,212,69,84,125,
88,194,110,52,62,214,135,165,222,175,2,62,241,251,26,86,211,90,34,174,50,99,234,149,136,207,17,71,57,202,105,156,114,84,163,212,164,60,15,76,126,112,93,169,55,35,162,180,114,221,104,166,244,57,42,224,
104,159,79,28,209,90,53,74,183,17,87,234,195,170,62,44,230,162,191,9,169,173,244,82,181,135,170,99,19,106,170,176,56,142,146,51,226,38,72,130,207,113,156,104,191,92,45,226,106,21,203,173,226,40,229,168,
166,105,79,180,142,30,170,214,162,27,10,46,202,81,77,67,157,86,173,6,52,213,252,1,123,159,228,234,232,249,9,199,110,132,235,56,18,112,196,239,87,126,199,118,223,208,210,204,84,14,234,156,209,80,137,104,
79,56,20,37,90,43,45,226,40,45,186,153,131,55,11,34,90,185,17,123,182,85,92,241,207,17,69,207,253,133,75,69,3,170,249,210,162,84,115,219,108,117,195,246,205,165,117,195,75,160,165,62,162,234,194,114,182,
94,213,217,201,34,104,79,5,0,160,187,69,213,88,196,108,184,153,188,235,170,176,171,28,165,125,142,40,37,17,87,220,136,132,93,101,175,167,43,147,29,35,226,115,196,231,19,71,137,82,209,79,122,45,42,226,
154,160,164,28,39,26,239,124,78,252,16,172,166,35,178,76,51,156,185,185,107,68,171,136,43,225,72,172,85,85,41,159,35,62,159,242,41,237,56,202,236,206,4,163,136,43,90,171,250,136,152,232,102,194,116,196,
147,83,91,233,119,168,69,92,87,34,34,74,228,108,189,184,174,138,184,114,214,17,101,146,150,136,107,178,141,231,152,157,198,119,138,55,91,112,181,185,143,128,41,190,40,81,62,71,148,136,227,136,227,52,156,
213,104,115,94,115,5,143,5,68,109,242,113,203,235,196,186,20,107,21,137,52,92,170,118,28,241,59,202,23,142,182,19,59,141,51,170,125,174,106,238,12,196,61,244,54,81,106,87,180,138,158,1,165,148,210,90,
121,139,19,203,205,218,149,136,86,118,100,146,249,106,97,139,31,151,87,181,110,166,93,87,181,240,234,136,136,235,138,40,101,155,57,77,119,7,115,254,189,95,144,154,205,193,186,225,7,21,183,179,232,228,
15,17,169,119,205,151,28,9,187,18,209,205,156,19,0,0,208,197,81,213,180,87,105,45,17,45,18,22,173,37,236,74,125,88,76,40,148,216,61,87,195,145,232,188,78,58,26,85,165,62,44,62,71,217,56,98,114,155,29,
89,31,141,44,74,108,184,108,182,53,204,155,44,76,244,52,67,242,189,147,92,154,102,78,159,19,205,172,246,82,179,237,135,106,142,45,110,118,76,221,134,241,49,58,58,83,85,244,224,195,145,104,35,177,137,194,
226,185,169,149,217,163,227,68,3,146,178,147,28,53,153,234,40,86,112,229,196,2,235,185,207,191,201,112,177,240,213,236,204,10,118,53,83,64,239,100,245,177,134,103,113,156,216,249,137,203,106,250,28,123,
111,186,95,111,209,196,78,249,224,73,234,54,74,218,130,187,77,138,239,168,230,99,119,91,223,150,210,240,34,54,123,24,231,220,102,195,72,169,232,59,78,121,67,182,121,167,153,183,77,216,141,190,123,1,0,
64,247,138,170,246,67,221,117,69,43,113,181,248,92,9,123,114,134,157,127,84,71,91,16,69,137,132,85,180,205,204,187,90,52,175,72,180,249,74,73,244,183,74,181,152,192,226,142,33,110,95,54,66,69,91,233,84,
124,70,49,13,153,38,48,69,219,53,99,23,253,219,146,83,77,230,138,196,54,226,56,82,31,137,182,216,121,163,146,138,93,99,110,90,16,111,44,110,169,224,237,200,123,146,181,107,19,88,180,37,216,105,124,170,
191,100,240,106,52,213,110,227,116,104,207,143,120,166,253,242,22,95,169,230,115,234,249,29,67,163,47,56,95,124,179,205,198,241,232,59,39,22,88,219,254,245,6,0,0,116,118,84,181,13,171,74,71,211,170,114,
27,143,129,106,54,52,184,241,109,165,186,81,27,97,67,202,84,170,77,157,20,117,147,198,60,111,139,166,221,93,92,82,116,61,43,183,49,164,54,147,86,35,226,170,248,18,121,183,166,60,61,34,155,182,231,233,
38,237,175,77,15,181,209,169,243,108,223,110,167,45,9,172,233,238,226,94,11,213,236,48,173,47,24,227,188,59,138,59,102,239,246,237,249,105,229,117,23,105,104,130,61,143,156,26,87,10,213,220,161,182,177,
116,45,190,223,244,249,188,115,0,0,64,231,69,213,134,15,105,21,29,208,127,206,126,141,102,81,43,189,12,189,191,109,123,51,88,92,66,106,24,67,223,220,6,227,162,204,249,229,12,29,235,66,218,82,193,219,186,
157,150,79,139,247,104,219,120,65,92,169,115,172,163,91,126,45,206,249,220,47,169,165,43,239,186,185,226,119,220,193,52,237,171,250,101,94,53,66,42,0,0,221,58,170,198,125,96,183,241,131,91,183,57,189,
125,25,205,28,85,123,7,139,47,90,240,47,118,90,116,155,79,217,151,40,96,199,157,156,47,122,108,250,203,21,164,189,14,3,0,0,116,115,14,167,0,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,
0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,128,246,224,111,199,109,237,187,231,99,78,40,128,11,203,136,167,174,236,110,135,68,93,10,128,186,212,82,195,71,181,195,166,169,88,1,80,201,82,151,2,
160,46,237,118,81,213,91,177,110,47,9,46,218,212,239,80,121,208,113,28,21,195,203,6,160,123,26,154,117,230,193,235,142,140,237,87,211,29,2,43,117,41,0,234,210,246,143,170,182,110,53,21,107,97,69,178,47,
198,212,176,34,66,13,11,160,219,210,90,231,102,212,222,119,77,209,21,125,79,117,97,90,165,46,5,64,93,218,254,81,213,212,173,219,75,130,191,124,171,111,97,69,178,223,195,214,176,84,175,0,186,121,245,42,
34,174,235,14,188,164,250,222,9,7,198,244,169,238,252,180,74,93,10,128,186,180,253,163,170,173,91,77,3,64,192,195,212,176,142,227,80,189,2,184,80,170,87,215,117,115,82,42,239,254,234,158,209,189,171,58,
51,173,82,151,2,160,46,109,255,168,234,173,91,139,42,83,18,98,108,245,234,189,104,5,0,221,191,146,117,93,55,18,137,100,39,87,252,248,202,93,163,122,85,118,78,90,165,46,5,64,93,218,254,81,213,91,183,126,
90,213,35,16,8,36,38,38,38,38,38,154,234,213,91,183,50,20,0,192,5,81,183,26,182,134,157,59,166,32,175,103,69,71,167,85,234,82,0,212,165,237,31,85,227,234,214,132,132,4,91,183,154,234,213,113,28,159,207,
199,32,0,0,23,86,13,107,254,141,68,34,174,235,246,79,42,255,209,232,143,59,52,173,82,151,2,160,46,109,163,243,185,91,149,185,86,101,219,0,108,13,107,70,0,208,6,0,224,194,98,107,45,83,137,149,157,205,250,
237,174,43,59,97,191,212,165,0,168,75,219,51,170,70,155,1,74,131,133,21,201,182,13,192,94,174,138,155,87,5,0,46,184,74,214,180,101,250,124,190,178,51,89,123,202,179,164,99,230,228,167,46,5,64,93,218,33,
81,213,248,213,166,236,64,32,96,170,87,123,173,138,138,21,192,69,86,201,174,248,199,87,59,116,71,212,165,0,168,75,219,51,170,154,56,252,81,105,114,81,85,138,169,94,169,91,1,92,196,53,108,105,40,99,111,
69,79,105,239,134,85,234,82,0,212,165,29,18,85,141,197,111,247,247,251,253,222,153,255,204,156,127,212,173,0,46,190,26,118,197,158,142,106,88,165,46,5,64,93,218,33,81,181,168,50,197,86,175,118,110,106,
234,86,0,23,101,13,91,90,155,209,65,27,167,46,5,64,93,218,33,81,213,231,243,197,221,241,143,186,21,192,69,92,195,118,208,150,169,75,1,80,151,118,84,84,53,53,172,119,110,106,94,3,0,84,175,212,165,0,208,
245,81,213,12,230,226,90,21,0,124,169,154,151,186,20,0,58,34,170,154,238,177,220,235,15,0,190,12,234,82,0,104,35,255,151,169,106,47,142,83,48,123,246,236,105,211,166,137,200,214,173,91,159,126,250,105,
222,19,0,58,57,182,118,237,1,172,90,181,202,252,240,179,159,253,236,200,145,35,188,34,0,46,224,168,218,198,6,128,103,158,121,38,51,51,179,233,242,130,130,130,119,223,125,119,235,214,173,156,119,0,255,
195,227,233,121,55,166,54,91,193,150,150,150,238,216,177,99,195,134,13,85,85,85,156,94,0,23,19,167,51,119,54,102,204,152,187,239,190,251,198,27,111,228,188,3,64,59,202,206,206,158,54,109,218,111,126,243,
155,9,19,38,112,54,0,16,85,219,234,181,215,94,203,207,207,207,207,207,255,217,207,126,86,90,90,106,22,78,153,50,133,243,14,0,237,85,193,62,242,200,35,7,15,30,52,11,239,190,251,238,188,188,60,78,14,128,
139,134,191,115,118,115,228,200,145,29,59,118,100,103,103,155,111,255,222,95,229,229,229,93,125,245,213,215,95,127,189,121,88,94,94,190,101,203,150,53,107,214,136,72,90,90,218,111,126,243,27,179,252,233,
167,159,182,61,7,108,239,210,131,7,15,62,252,240,195,118,225,216,177,99,237,198,183,110,221,186,105,211,166,221,187,119,199,61,197,44,255,214,183,190,53,116,232,208,166,157,83,39,76,152,48,115,230,76,
179,145,130,130,130,213,171,87,211,115,11,64,55,183,123,247,238,135,31,126,248,254,251,239,31,51,102,140,136,220,121,231,157,119,221,117,87,91,234,216,150,220,120,227,141,227,198,141,51,91,107,246,89,
75,150,44,49,245,228,107,175,189,102,23,230,229,229,61,248,224,131,34,18,10,133,126,242,147,159,208,21,1,64,187,112,58,127,151,182,121,85,68,110,189,245,214,7,31,124,208,214,161,34,146,153,153,57,109,
218,180,251,239,191,95,68,170,170,170,10,10,10,204,242,209,163,71,219,117,198,142,29,107,126,216,190,125,187,73,180,75,150,44,153,54,109,154,55,4,79,152,48,225,193,7,31,108,218,186,48,108,216,176,7,31,
124,112,232,208,161,77,15,204,244,79,176,27,25,51,102,204,125,247,221,151,150,150,198,187,4,64,247,247,218,107,175,217,90,212,86,125,173,215,177,45,201,203,203,243,230,84,251,172,37,75,150,152,135,59,
118,236,48,63,76,156,56,209,174,115,245,213,87,155,31,254,246,183,191,145,83,1,92,96,81,117,194,132,9,182,139,170,173,227,6,12,24,240,237,111,127,219,124,5,127,250,233,167,77,63,129,242,242,114,19,19,
205,250,219,182,109,51,43,95,117,213,85,182,14,53,105,50,20,10,109,222,188,89,68,190,251,221,239,218,118,80,115,57,204,86,217,223,253,238,119,227,142,36,20,10,253,236,103,63,51,171,197,53,169,150,151,
151,155,95,217,229,153,153,153,83,167,78,229,93,2,160,251,219,189,123,119,40,20,178,223,180,219,88,199,182,228,157,119,222,177,85,165,173,81,179,179,179,205,179,54,108,216,208,52,22,95,113,197,21,230,
135,15,63,252,144,151,3,192,133,17,85,167,77,155,182,106,213,170,85,171,86,221,125,247,221,193,96,208,84,127,246,106,145,237,180,250,183,191,253,205,92,220,63,114,228,200,39,159,124,98,22,14,30,60,88,
68,54,109,218,100,42,223,96,48,104,134,11,216,239,250,5,5,5,85,85,85,105,105,105,118,24,193,242,229,203,205,15,182,26,205,206,206,142,107,22,45,41,41,105,233,154,190,253,213,214,173,91,109,107,238,192,
129,3,121,151,0,184,32,216,168,218,246,58,182,89,79,63,253,244,138,21,43,108,85,185,102,205,26,123,53,44,37,37,69,26,95,242,50,141,169,19,38,76,48,243,18,148,150,150,218,158,87,0,240,229,249,59,115,103,
239,188,243,206,138,21,43,236,195,172,172,44,243,195,245,215,95,239,189,62,101,12,24,48,192,86,178,230,183,163,71,143,222,186,117,171,189,250,191,105,211,38,17,201,201,201,177,79,177,29,91,189,70,142,
28,121,30,211,99,217,26,223,30,36,0,116,115,166,69,224,139,214,177,205,186,245,214,91,83,82,82,38,78,156,216,236,204,131,34,242,238,187,239,154,134,131,171,174,186,106,197,138,21,182,143,214,251,239,191,
207,11,1,160,29,117,198,12,0,246,203,247,245,215,95,239,189,228,148,156,156,220,150,141,108,220,184,209,252,112,213,85,87,13,24,48,192,92,235,183,95,220,123,244,232,193,171,8,0,121,121,121,54,170,154,
90,183,141,117,108,28,211,251,255,219,223,254,246,180,105,211,90,202,169,34,178,117,235,86,211,151,32,24,12,222,120,227,141,166,143,150,237,151,5,0,237,165,51,90,85,87,175,94,61,108,216,48,83,135,206,
158,61,123,255,254,253,230,186,210,145,35,71,204,240,166,184,214,214,56,71,142,28,57,120,240,224,208,161,67,131,193,224,237,183,223,110,22,218,14,175,123,247,238,181,107,254,203,191,252,75,123,245,229,
183,141,181,39,79,158,228,93,2,160,251,51,147,156,136,200,193,131,7,205,55,249,54,214,177,113,166,78,157,106,199,3,188,242,202,43,175,188,242,138,180,112,223,129,45,91,182,152,157,206,152,49,195,212,240,
166,95,22,175,5,128,118,212,25,195,170,142,28,57,98,251,167,6,131,65,59,139,138,109,46,189,254,250,235,103,207,158,109,215,159,48,97,194,221,119,223,237,93,98,70,250,139,167,163,170,237,141,90,85,85,101,
175,239,223,123,239,189,222,33,255,179,103,207,126,230,153,103,206,227,128,103,207,158,109,231,1,120,247,221,119,121,151,0,232,206,242,242,242,236,76,85,34,242,210,75,47,125,209,58,182,89,182,137,212,
219,94,235,101,175,245,219,20,203,205,8,1,180,187,78,234,171,186,105,211,166,193,131,7,155,206,82,217,217,217,223,255,254,247,77,159,253,181,107,215,154,1,170,211,166,77,179,77,2,134,29,115,42,34,155,
55,111,190,245,214,91,189,215,182,188,95,220,255,235,191,254,43,39,39,39,59,59,123,232,208,161,102,86,191,243,51,97,194,4,123,47,108,227,157,119,222,161,230,5,208,61,53,173,54,67,161,208,243,207,63,111,
71,53,181,189,142,245,42,40,40,48,107,102,102,102,54,59,0,192,219,12,97,46,121,153,135,229,229,229,84,152,0,218,93,231,205,171,186,98,197,10,59,134,244,250,235,175,191,245,214,91,69,228,149,87,94,121,
228,145,71,226,106,204,80,40,244,218,107,175,21,22,22,218,37,222,209,166,226,153,193,202,254,246,190,251,238,123,237,181,215,236,253,90,108,133,219,82,93,220,172,210,210,82,59,154,42,20,10,173,93,187,
182,237,151,204,0,160,11,149,150,150,190,246,218,107,223,255,254,247,227,194,98,27,235,88,175,221,187,119,63,253,244,211,222,9,176,215,174,93,107,186,165,54,101,47,121,137,200,150,45,91,120,33,0,180,59,
53,124,212,149,109,89,111,223,61,31,139,200,196,149,87,167,164,164,4,131,193,132,132,132,64,32,224,56,14,103,16,192,69,108,213,13,171,69,100,196,83,87,182,215,6,47,178,186,212,244,37,48,63,183,227,104,
1,0,212,165,22,89,19,0,112,158,174,187,238,58,243,3,3,170,0,116,16,162,42,0,224,124,12,24,48,192,142,229,98,4,42,0,162,42,0,160,27,249,250,215,191,110,126,96,64,21,128,142,227,231,20,0,0,206,195,154,53,
107,236,68,132,0,208,65,104,85,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,
0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,
42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,114,10,
0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,
85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,
0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,208,149,252,157,191,203,156,156,156,190,125,251,218,135,219,182,109,227,101,0,128,243,168,63,189,246,239,223,223,191,127,255,211,
167,79,151,148,148,116,196,174,199,141,27,183,127,255,254,234,234,106,94,5,0,23,121,84,189,225,134,27,174,189,246,218,207,62,251,76,68,130,193,224,252,249,243,119,239,222,253,194,11,47,116,80,245,218,
65,85,118,220,146,163,71,143,94,64,199,223,118,35,71,142,252,218,215,190,38,34,161,80,104,231,206,157,123,247,238,181,203,59,238,19,241,188,15,213,123,72,169,169,169,195,135,15,247,126,17,178,43,52,253,
149,53,117,234,212,129,3,7,46,95,190,188,217,237,231,231,231,47,92,184,176,171,222,114,222,148,144,147,147,211,163,71,15,251,114,92,88,49,130,47,171,95,198,152,49,99,174,190,250,106,243,115,255,254,253,
207,156,57,83,94,94,110,30,174,90,181,42,63,63,255,192,129,3,47,188,240,66,71,236,122,254,252,249,75,151,46,109,151,215,171,107,3,119,39,215,219,45,125,94,196,45,111,229,196,182,82,101,117,225,231,221,
200,145,35,123,244,232,225,125,225,90,170,127,204,241,183,101,205,142,171,112,154,190,214,227,198,141,59,125,250,180,169,69,155,214,168,109,217,236,23,125,74,247,44,197,5,81,27,251,187,100,175,159,125,
246,153,253,200,79,77,77,189,253,246,219,127,249,203,95,62,254,248,227,157,246,170,127,249,42,187,172,172,44,20,10,217,37,31,126,248,225,197,23,85,231,207,159,63,116,232,208,157,59,119,214,214,214,14,
27,54,236,166,155,110,58,116,232,208,35,143,60,34,34,29,250,137,120,126,174,187,238,186,236,236,108,251,190,154,50,101,202,140,25,51,188,159,172,11,23,46,252,221,239,126,87,82,82,50,124,248,240,249,243,
231,231,231,231,55,221,72,207,158,61,179,179,179,205,207,139,23,47,246,150,177,71,143,30,185,185,185,93,85,186,219,110,187,173,160,160,192,30,204,29,119,220,145,151,151,103,139,48,110,220,184,249,243,
231,207,157,59,183,149,45,172,90,181,170,189,114,6,95,86,187,208,134,13,27,54,108,216,208,236,91,212,188,201,9,220,109,175,189,251,247,239,255,217,103,159,61,254,248,227,29,154,156,90,250,188,240,46,15,
6,131,115,231,206,93,191,126,189,125,113,189,90,169,178,186,240,243,46,63,63,63,51,51,211,190,112,185,185,185,239,189,247,94,179,223,243,205,241,23,22,22,158,115,205,14,170,112,166,76,153,82,88,88,232,
253,235,152,58,117,106,126,126,190,93,120,195,13,55,12,27,54,236,11,253,249,156,199,83,186,103,41,188,181,113,43,111,194,255,137,81,213,171,186,186,122,249,242,229,193,96,208,54,89,77,157,58,245,230,155,
111,78,79,79,23,145,178,178,178,87,95,125,117,243,230,205,182,89,235,207,127,254,243,109,183,221,214,175,95,191,202,202,202,103,158,121,166,79,159,62,223,250,214,183,210,211,211,205,67,19,118,239,188,
243,206,147,39,79,230,228,228,140,26,53,42,41,41,169,35,254,42,94,124,241,197,139,187,53,232,218,107,175,29,53,106,212,252,249,243,109,37,158,154,154,250,245,175,127,189,219,126,34,238,217,179,103,210,
164,73,246,225,176,97,195,42,43,43,47,191,252,114,243,50,141,28,57,82,68,118,236,216,97,190,56,118,85,165,127,222,14,30,60,56,108,216,48,251,112,200,144,33,149,149,149,227,198,141,51,165,27,60,120,112,
89,89,217,5,116,101,246,66,255,178,218,109,221,121,231,157,197,197,197,230,147,198,84,131,89,89,89,227,199,143,55,213,224,234,213,171,231,204,153,99,26,201,188,181,162,169,90,205,55,49,179,90,71,191,151,
186,54,112,219,218,59,53,53,245,209,71,31,189,253,246,219,59,58,54,181,244,121,225,93,62,107,214,172,153,51,103,118,195,148,208,202,241,111,221,186,213,190,112,35,71,142,92,184,112,225,187,239,190,219,
210,95,177,125,89,205,154,123,246,236,49,159,236,157,160,178,178,50,55,55,215,86,152,34,114,243,205,55,87,86,86,218,21,186,85,179,75,39,151,194,91,27,207,154,53,43,63,63,255,253,247,223,239,110,159,38,
254,110,114,28,175,191,254,250,194,133,11,115,114,114,74,74,74,106,106,106,94,122,233,37,243,38,158,53,107,214,29,119,220,177,99,199,142,234,234,106,211,172,245,205,111,126,243,169,167,158,42,41,41,121,
240,193,7,23,44,88,112,232,208,161,71,31,125,212,60,180,97,55,59,59,123,244,232,209,127,249,203,95,150,46,93,154,147,147,243,192,3,15,220,113,199,29,157,240,94,52,159,19,53,53,53,215,92,115,77,48,24,92,
184,112,97,106,106,170,253,108,40,44,44,252,237,111,127,107,155,142,174,189,246,90,19,178,207,156,57,243,198,27,111,172,91,183,206,108,193,182,234,217,54,134,189,123,247,182,178,157,14,50,104,208,160,
207,62,251,204,251,126,173,174,174,182,213,168,253,68,52,31,114,222,39,150,150,150,154,122,191,217,2,118,28,19,67,237,159,241,144,33,67,54,111,222,108,227,221,232,209,163,109,152,139,187,148,111,143,179,
178,178,50,20,10,153,198,131,169,83,167,246,239,223,63,51,51,211,108,97,213,170,85,118,229,91,110,185,197,126,83,234,180,104,229,13,226,35,71,142,60,115,230,204,193,131,7,109,16,31,54,108,216,193,131,
7,91,127,95,137,200,109,183,221,54,125,250,244,238,246,77,163,233,151,213,184,191,163,63,255,249,207,211,167,79,247,30,179,9,97,29,253,142,186,16,101,103,103,215,214,214,218,159,199,143,31,191,126,253,
250,229,203,151,155,112,96,107,69,243,112,219,182,109,219,182,109,75,77,77,93,176,96,193,27,111,188,97,106,224,123,238,185,167,19,162,91,55,9,220,213,213,213,91,183,110,245,126,9,236,66,199,142,29,187,
160,223,123,166,101,174,45,246,238,221,91,88,88,56,104,208,160,78,59,182,242,242,242,131,7,15,78,159,62,221,84,152,83,167,78,53,57,219,190,244,182,235,151,109,17,179,95,102,22,44,88,240,225,135,31,118,
135,175,16,157,80,138,117,235,214,205,152,49,163,11,123,155,180,164,187,204,0,96,62,242,77,159,137,205,155,55,219,102,212,162,162,162,164,164,36,111,55,151,71,30,121,196,164,180,191,254,245,175,73,73,
73,222,135,222,235,179,91,183,110,53,175,74,73,73,201,187,239,190,59,102,204,152,246,61,224,193,131,7,143,139,49,45,118,230,179,97,230,204,153,183,220,114,75,73,73,137,185,44,178,96,193,2,17,153,59,119,
238,220,185,115,203,203,203,239,185,231,30,179,230,184,113,227,238,184,227,142,223,255,254,247,249,249,249,207,61,247,220,77,55,221,116,237,181,215,138,200,187,239,190,251,231,152,80,40,20,12,6,205,223,
127,75,219,233,56,135,15,31,206,205,205,53,127,12,205,126,34,246,236,217,211,84,79,246,128,223,122,235,173,220,220,220,226,226,226,86,10,216,161,137,167,172,172,236,242,203,47,183,97,238,237,183,223,182,
111,9,111,152,243,94,202,247,30,231,3,15,60,96,47,102,21,20,20,84,84,84,28,60,120,208,20,205,214,194,215,92,115,205,83,79,61,149,159,159,95,90,90,218,153,77,179,54,136,155,216,125,240,224,193,125,251,
246,217,26,106,200,144,33,123,246,236,105,253,125,101,254,40,76,113,186,225,231,220,235,175,191,158,155,155,155,147,147,211,244,239,200,116,94,180,111,197,156,156,156,73,147,38,21,21,21,17,76,207,105,
243,230,205,166,26,52,225,192,214,138,230,161,249,99,153,49,99,198,174,93,187,76,238,47,41,41,121,245,213,87,199,143,31,223,229,129,219,84,47,230,231,155,110,186,169,184,184,120,206,156,57,139,23,47,158,
52,105,210,163,143,62,186,111,223,190,252,252,124,243,208,252,81,152,15,227,130,130,130,252,252,252,251,239,191,127,232,208,161,183,223,126,123,91,246,149,149,149,101,255,234,59,78,179,159,23,222,229,
83,167,78,157,60,121,242,250,245,235,187,231,27,169,165,227,207,202,202,50,11,175,189,246,218,121,243,230,189,247,222,123,109,252,246,158,153,153,121,226,196,137,206,44,194,186,117,235,76,147,164,105,
140,252,203,95,254,226,253,173,237,250,181,119,239,222,210,210,210,185,115,231,166,166,166,138,200,188,121,243,130,193,96,247,105,234,238,232,82,152,26,248,232,209,163,221,237,29,232,239,134,127,21,246,
203,113,101,101,101,187,84,34,69,69,69,51,102,204,104,223,131,156,48,97,130,141,191,165,165,165,246,239,115,215,174,93,75,151,46,181,49,40,51,51,211,182,6,173,92,185,242,185,231,158,27,57,114,228,222,
189,123,167,79,159,190,126,253,122,243,197,101,219,182,109,127,255,251,223,175,185,230,154,205,155,55,219,237,140,27,55,110,200,144,33,166,19,85,43,219,233,208,15,185,203,46,187,44,63,63,63,63,63,191,
172,172,172,188,188,252,227,143,63,110,250,94,175,174,174,182,95,191,22,47,94,188,109,219,54,179,78,75,5,236,208,119,142,189,74,110,194,92,73,73,73,101,101,165,57,81,67,134,12,249,224,131,15,154,62,229,
155,223,252,230,223,255,254,119,115,156,213,213,213,37,37,37,102,11,37,37,37,161,80,232,228,201,147,113,95,46,77,87,93,243,213,104,254,252,249,157,217,244,104,130,248,182,109,219,134,13,27,246,241,199,
31,23,20,20,204,156,57,211,252,189,36,37,37,153,44,219,250,251,170,168,168,168,219,246,90,177,95,86,205,55,79,239,223,145,121,120,245,213,87,155,183,214,13,55,220,80,86,86,198,96,172,246,50,108,216,176,
204,204,204,197,139,23,155,135,193,96,48,41,41,169,59,7,238,3,7,14,196,5,238,109,219,182,53,13,220,119,220,113,199,57,219,134,167,78,157,58,106,212,168,199,31,127,188,163,139,208,210,231,133,119,121,110,
110,110,105,105,105,247,124,147,180,116,252,67,135,14,205,204,204,52,63,247,239,223,63,24,12,166,166,166,182,222,152,109,58,252,132,66,161,247,223,127,191,51,139,80,82,82,178,109,219,182,233,211,167,247,
238,221,91,68,54,108,216,112,199,29,119,52,187,230,242,229,203,135,14,29,58,111,222,188,15,62,248,96,200,144,33,15,63,252,112,247,121,33,58,180,20,57,57,57,63,250,209,143,182,109,219,214,13,135,13,116,
151,168,106,190,37,216,171,81,187,118,237,178,93,221,237,181,215,110,165,165,190,59,39,79,158,180,63,95,126,249,229,73,73,73,246,51,192,54,233,153,90,41,24,12,218,129,5,222,206,233,230,143,121,238,220,
185,111,188,241,134,169,17,90,217,78,135,90,190,124,249,107,175,189,54,102,204,152,158,61,123,14,27,54,44,63,63,255,234,171,175,110,233,218,241,29,119,220,145,153,153,105,43,253,214,11,216,65,236,85,242,
156,156,156,125,251,246,153,90,117,244,232,209,34,98,195,92,156,188,188,60,111,36,234,206,108,16,207,206,206,182,131,144,70,142,28,233,237,219,208,37,167,189,35,120,255,142,164,113,7,161,9,19,38,196,181,
37,224,203,191,181,222,123,239,189,255,57,129,219,126,201,44,43,43,123,248,225,135,59,225,131,185,45,125,85,77,199,217,206,233,171,214,94,199,239,237,171,42,34,166,87,94,75,159,17,246,163,124,219,182,
109,139,22,45,234,252,222,144,235,214,173,123,236,177,199,50,51,51,207,89,129,60,245,212,83,191,252,229,47,205,167,67,119,203,109,237,94,138,220,220,92,251,210,188,252,242,203,221,179,99,85,119,137,170,
211,167,79,55,117,229,240,225,195,147,146,146,218,55,61,152,65,39,93,82,174,138,138,138,184,235,173,251,247,239,183,127,228,222,139,152,167,79,159,182,63,155,62,184,222,119,76,43,219,233,232,239,112,246,
45,110,250,183,53,219,154,59,110,220,184,41,83,166,44,94,188,216,91,251,180,82,192,142,107,125,249,225,15,127,56,110,220,184,161,67,135,190,254,250,235,34,114,224,192,1,19,239,46,172,81,71,205,218,182,
109,219,164,73,147,114,114,114,146,146,146,204,139,114,232,208,161,209,163,71,123,251,54,116,201,105,111,223,47,171,205,254,214,180,159,77,155,54,109,207,158,61,73,73,73,157,220,30,115,113,43,47,47,15,
6,131,23,65,43,117,219,3,183,153,10,99,228,200,145,11,22,44,24,51,102,76,55,201,34,221,170,227,236,249,105,253,90,147,233,49,53,117,234,212,153,51,103,246,239,223,191,243,43,100,211,36,57,116,232,208,
115,94,10,175,174,174,174,168,168,232,215,175,95,55,172,63,219,189,20,118,2,129,249,243,231,79,152,48,97,227,198,141,221,240,179,178,139,163,106,106,106,234,216,177,99,111,185,229,22,17,89,189,122,181,
196,58,73,216,60,52,107,214,172,243,219,114,114,114,178,221,197,117,215,93,215,37,205,48,39,78,156,200,200,200,104,246,51,192,140,218,107,246,87,179,102,205,202,204,204,124,224,129,7,218,178,157,14,125,
105,226,222,175,230,21,105,218,154,155,154,154,250,189,239,125,239,229,151,95,246,70,216,86,10,216,161,10,11,11,39,77,154,148,148,148,100,14,102,231,206,157,55,221,116,83,40,20,242,134,185,184,23,194,
92,73,185,32,162,170,121,123,28,58,116,200,44,49,65,60,59,59,219,246,109,232,170,211,222,142,95,86,91,242,225,135,31,206,156,57,51,51,51,115,215,174,93,204,66,223,142,222,123,239,189,249,243,231,219,241,
136,102,162,143,238,57,14,189,125,3,247,222,189,123,95,120,225,133,31,254,240,135,53,53,53,157,54,20,253,156,31,91,222,57,161,46,56,41,41,41,103,206,156,105,125,157,13,27,54,12,28,56,112,193,130,5,157,
211,158,29,103,229,202,149,166,251,102,235,230,204,153,19,10,133,222,123,239,189,239,127,255,251,93,210,0,220,37,165,88,186,116,233,19,79,60,241,208,67,15,253,244,167,63,237,110,111,173,174,25,86,101,
26,156,87,173,90,245,220,115,207,77,158,60,121,235,214,173,63,253,233,79,205,121,44,41,41,217,184,113,227,130,5,11,22,47,94,252,236,179,207,102,101,101,157,223,46,198,143,31,255,236,179,207,46,94,188,
120,233,210,165,59,119,238,236,146,154,215,180,253,120,187,146,216,228,189,117,235,214,235,174,187,206,116,97,22,145,156,156,28,51,252,101,228,200,145,51,102,204,120,230,153,103,188,239,170,86,182,211,
113,102,204,152,113,231,157,119,218,35,52,7,80,89,89,217,244,195,96,222,188,121,165,165,165,113,87,13,90,42,96,71,59,112,224,192,184,113,227,108,152,51,129,117,212,168,81,102,212,81,179,45,49,246,114,
121,106,106,170,183,73,35,20,10,157,247,219,175,227,130,248,184,113,227,14,28,56,96,30,238,220,185,115,200,144,33,233,233,233,182,111,67,43,167,253,204,153,51,221,48,148,167,166,166,94,123,237,181,79,
60,241,68,48,24,52,95,86,91,249,132,19,145,188,188,60,6,254,183,251,87,160,85,171,86,205,157,59,247,137,39,158,88,188,120,241,115,207,61,55,112,224,192,150,86,158,63,127,254,42,143,150,250,201,117,73,
224,206,203,203,179,147,213,167,166,166,182,52,36,212,107,243,230,205,166,20,222,161,66,93,245,135,48,117,234,212,241,227,199,255,245,175,127,189,64,223,72,102,118,148,182,132,254,229,203,151,239,218,
181,235,158,123,238,105,75,222,106,95,102,64,66,235,235,152,30,204,191,253,237,111,77,141,52,103,206,156,238,118,170,59,174,20,139,22,45,18,79,15,153,238,163,11,90,85,95,120,225,133,214,251,226,188,240,
194,11,111,191,253,118,223,190,125,205,61,45,108,215,248,184,233,48,91,127,184,121,243,102,179,145,46,188,143,84,117,117,245,227,143,63,126,215,93,119,77,152,48,161,188,188,188,127,255,254,21,21,21,230,
131,246,133,23,94,72,78,78,126,236,177,199,10,11,11,131,193,96,70,70,134,25,251,105,138,224,237,235,99,174,85,181,180,157,142,243,143,127,252,227,182,219,110,123,236,177,199,204,228,207,166,215,227,163,
143,62,26,183,218,184,113,227,242,242,242,196,211,15,201,92,77,104,169,128,29,237,31,255,248,199,148,41,83,108,152,19,145,67,135,14,229,229,229,53,219,81,213,124,61,125,232,161,135,158,125,246,217,242,
242,242,204,204,204,210,210,210,96,48,104,126,245,167,63,253,105,193,130,5,79,60,241,132,136,188,248,226,139,221,225,207,245,192,129,3,185,185,185,59,119,238,244,6,113,111,223,134,86,78,251,250,245,235,
77,111,227,204,204,204,31,255,248,199,93,91,16,111,239,40,51,50,189,45,239,231,93,187,118,101,102,102,114,167,0,171,105,167,64,239,146,184,223,182,242,208,204,114,106,114,94,43,119,18,234,206,179,17,219,
192,93,81,81,17,10,133,204,36,243,109,121,162,109,228,235,146,105,125,189,153,160,176,176,240,185,231,158,107,165,97,56,110,216,70,119,184,163,199,148,41,83,166,76,153,98,126,46,43,43,107,227,31,178,183,
1,175,187,181,89,142,28,57,114,230,204,153,111,188,241,134,169,103,86,172,88,177,112,225,194,169,83,167,54,219,218,229,173,199,186,213,223,200,23,42,69,92,104,49,61,92,205,173,233,186,207,235,162,134,
143,186,178,45,235,237,187,231,99,17,153,184,242,234,148,148,148,96,48,152,144,144,16,8,4,28,199,233,158,213,86,211,57,165,187,252,125,211,163,71,143,166,161,217,222,110,174,141,53,78,75,219,233,208,239,
250,230,8,207,111,167,95,180,128,93,251,2,53,61,200,11,229,248,219,120,216,230,30,122,246,46,124,23,150,212,212,212,165,75,151,118,254,157,84,86,221,176,90,68,70,60,117,101,123,109,240,194,170,75,47,56,
231,12,220,0,186,196,151,169,75,253,23,229,25,41,45,45,237,228,57,219,90,215,82,50,240,206,244,244,101,182,211,113,190,232,17,182,239,211,47,184,23,168,155,104,233,176,189,131,228,46,56,230,78,105,23,
92,31,74,116,50,102,49,3,46,62,23,103,84,237,218,91,173,0,104,119,35,70,140,120,227,141,55,56,15,0,64,84,109,77,110,70,237,231,117,41,156,53,0,157,172,75,58,78,229,164,84,118,208,150,169,75,1,252,207,
241,37,235,210,47,214,65,106,193,53,133,156,113,0,255,67,252,243,136,191,119,208,150,169,75,1,80,151,182,115,84,53,61,97,175,232,115,106,80,234,41,173,53,231,29,192,69,223,12,48,34,253,184,180,235,152,
42,234,82,0,212,165,29,21,85,173,123,198,239,51,63,80,201,2,160,25,224,188,81,151,2,160,46,109,231,168,106,226,240,168,94,149,3,122,84,233,24,94,3,0,52,3,124,33,212,165,0,168,75,59,36,170,90,63,190,114,
87,78,74,37,117,43,128,139,181,110,237,232,38,85,234,82,0,212,165,29,18,85,77,40,206,235,89,241,163,81,31,155,26,150,74,22,192,197,87,183,118,92,147,42,117,41,0,234,210,14,140,170,118,127,151,103,149,
255,224,242,143,250,7,203,169,94,1,80,183,158,119,90,165,46,5,64,93,218,206,81,213,238,245,178,204,147,63,184,252,163,236,228,10,106,88,0,212,173,212,165,0,208,17,117,233,121,222,120,218,236,123,100,198,
137,239,95,182,157,26,22,0,117,43,117,41,0,116,68,93,170,134,143,58,255,13,237,187,231,99,243,195,222,202,158,191,223,247,181,146,154,116,94,36,0,23,110,197,218,201,57,149,186,20,0,117,105,199,70,85,111,
13,43,34,251,42,123,253,223,251,198,83,201,2,184,16,43,214,174,202,169,212,165,0,168,75,59,48,170,54,173,100,1,224,130,211,133,33,149,186,20,0,117,105,135,71,85,42,89,0,84,172,212,165,0,168,75,187,117,
84,5,0,0,0,218,145,195,41,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,
32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,
0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,
85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,
0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,
10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,
0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,
85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,
32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,
42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,
0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,
5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,
128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,
170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,
0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,
21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,
0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,
2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,57,5,0,0,0,32,170,2,
0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,
84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,
0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,
0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,
16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,
0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,0,162,
42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,
168,10,0,0,0,16,85,1,0,0,0,162,42,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,85,1,0,0,0,162,42,0,0,0,64,84,5,
0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,136,170,0,0,0,32,170,2,0,0,0,68,85,0,0,0,16,
85,1,0,0,0,162,42,0,0,0,64,84,5,0,0,0,81,21,0,0,0,32,170,2,0,0,128,168,10,0,0,0,16,85,1,0,0,64,84,5,0,0,0,136,170,0,0,0,0,81,21,0,0,0,68,85,0,0,0,128,168,10,0,0,0,162,42,0,0,0,64,84,5,0,0,0,98,254,255,
1,0,76,237,100,72,230,158,159,30,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* FXPanel::fx_panel_png = (const char*) resource_FXPanel_fx_panel_png;
const int FXPanel::fx_panel_pngSize = 50040;


//[EndFile] You can add extra defines here...
//[/EndFile]
