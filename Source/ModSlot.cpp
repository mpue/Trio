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
#include "Modulator.h"
#include "ADSR.h"
//[/Headers]

#include "ModSlot.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ModSlot::ModSlot (ModMatrix*  m, int index)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->matrix = m;
    this->index = index;
    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Source")));
    label->setFont (Font ("Verdana", 15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sourceCombo = new ComboBox ("sourceCombo"));
    sourceCombo->setEditableText (false);
    sourceCombo->setJustificationType (Justification::centredLeft);
    sourceCombo->setTextWhenNothingSelected (String());
    sourceCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    sourceCombo->addListener (this);

    addAndMakeVisible (targetLabel1 = new Label ("target1",
                                                 TRANS("Target 1")));
    targetLabel1->setFont (Font ("Verdana", 15.00f, Font::plain));
    targetLabel1->setJustificationType (Justification::centredLeft);
    targetLabel1->setEditable (false, false, false);
    targetLabel1->setColour (Label::textColourId, Colours::white);
    targetLabel1->setColour (TextEditor::textColourId, Colours::black);
    targetLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (targetCombo1 = new ComboBox ("targetCombo1"));
    targetCombo1->setEditableText (false);
    targetCombo1->setJustificationType (Justification::centredLeft);
    targetCombo1->setTextWhenNothingSelected (String());
    targetCombo1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    targetCombo1->addListener (this);

    addAndMakeVisible (modAmountSlider1 = new Slider ("modAmountSlider1"));
    modAmountSlider1->setRange (0, 10, 0.1);
    modAmountSlider1->setSliderStyle (Slider::RotaryVerticalDrag);
    modAmountSlider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    modAmountSlider1->addListener (this);

    addAndMakeVisible (targetLabel2 = new Label ("target2",
                                                 TRANS("Target 2\n")));
    targetLabel2->setFont (Font ("Verdana", 15.00f, Font::plain));
    targetLabel2->setJustificationType (Justification::centredLeft);
    targetLabel2->setEditable (false, false, false);
    targetLabel2->setColour (Label::textColourId, Colours::white);
    targetLabel2->setColour (TextEditor::textColourId, Colours::black);
    targetLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (targetCombo2 = new ComboBox ("targetCombo2"));
    targetCombo2->setEditableText (false);
    targetCombo2->setJustificationType (Justification::centredLeft);
    targetCombo2->setTextWhenNothingSelected (String());
    targetCombo2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    targetCombo2->addListener (this);

    addAndMakeVisible (modAmountSlider2 = new Slider ("modAmountSlider2"));
    modAmountSlider2->setRange (0, 10, 0.1);
    modAmountSlider2->setSliderStyle (Slider::RotaryVerticalDrag);
    modAmountSlider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    modAmountSlider2->addListener (this);

    addAndMakeVisible (titleLabel = new Label ("titleLabel",
                                               TRANS("Slot 1")));
    titleLabel->setFont (Font ("Verdana", 20.00f, Font::bold));
    titleLabel->setJustificationType (Justification::centredLeft);
    titleLabel->setEditable (false, false, false);
    titleLabel->setColour (Label::textColourId, Colours::white);
    titleLabel->setColour (TextEditor::textColourId, Colours::black);
    titleLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (enableButton = new ToggleButton ("enableButton"));
    enableButton->setButtonText (String());
    enableButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    sourceCombo->setEnabled(false);
    targetCombo1->setEnabled(false);
    targetCombo2->setEnabled(false);
    //[/Constructor]
}

ModSlot::~ModSlot()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    sourceCombo = nullptr;
    targetLabel1 = nullptr;
    targetCombo1 = nullptr;
    modAmountSlider1 = nullptr;
    targetLabel2 = nullptr;
    targetCombo2 = nullptr;
    modAmountSlider2 = nullptr;
    titleLabel = nullptr;
    enableButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ModSlot::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff5a5a5a));

    g.setColour (Colour (0xffff9c00));
    g.drawRoundedRectangle (6.0f, 6.0f, 215.0f, 215.0f, 10.000f, 2.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ModSlot::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label->setBounds (16, 44, 150, 24);
    sourceCombo->setBounds (16, 68, 150, 24);
    targetLabel1->setBounds (16, 100, 150, 24);
    targetCombo1->setBounds (16, 124, 150, 24);
    modAmountSlider1->setBounds (176, 120, 32, 32);
    targetLabel2->setBounds (16, 156, 150, 24);
    targetCombo2->setBounds (16, 180, 150, 24);
    modAmountSlider2->setBounds (176, 176, 32, 32);
    titleLabel->setBounds (72, 16, 64, 24);
    enableButton->setBounds (184, 16, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ModSlot::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]

    if (!slotEnabled) {
        return;
    }

    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == sourceCombo)
    {
        //[UserComboBoxCode_sourceCombo] -- add your combo box handling code here..

        if (sourceCombo->getSelectedId() == 1) {
            matrix->getModulations().at(index)->setModulator(NULL);
        }
        // LFO 1
        else if (sourceCombo->getSelectedId() == 2) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo1());
        }
        // LFO 2
        else if (sourceCombo->getSelectedId() == 3) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo2());
        }
        else if (sourceCombo->getSelectedId() == 4) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(0));
        }
        else if (sourceCombo->getSelectedId() == 5) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(1));
        }
        else if (sourceCombo->getSelectedId() == 6) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(2));
        }
        else if (sourceCombo->getSelectedId() == 7) {
            matrix->getModulations().at(index)->setModulator(matrix->getModel()->getSequencer());
        }

			if (sourceCombo->getSelectedId() == 1) {
				matrix->getModulations().at(index)->setModulator(NULL);
			}
			// LFO 1
			else if (sourceCombo->getSelectedId() == 2) {
				matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo1());
			}
			// LFO 2
			else if (sourceCombo->getSelectedId() == 3) {
				matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo2());
			}
			else if (sourceCombo->getSelectedId() == 4) {
				matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(0));
			}
			else if (sourceCombo->getSelectedId() == 5) {
				matrix->getModulations().at(index)->setModulator(matrix->getModel()->getSequencer());
			}

		}


        //[/UserComboBoxCode_sourceCombo]
    }
    else if (comboBoxThatHasChanged == targetCombo1)
    {
        //[UserComboBoxCode_targetCombo1] -- add your combo box handling code here..

        // Filter envelope
        if (targetCombo1->getSelectedId() == 2) {

            ModTarget* target = matrix->getModel()->getFilter();

            if (matrix->getModulations().at(index)->getTargets().size() >= 1) {
                matrix->getModulations().at(index)->getTargets()[0] = target;
            }
            else {
                matrix->getModulations().at(index)->addTarget(target);
            }

            target->setModAmount(modAmountSlider1->getValue());
            target->setModulator(matrix->getModulations().at(index)->getModulator());
        }
        // Osc 1 Pitch
        if (targetCombo1->getSelectedId() == 3) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(0));
                m->setModAmount(modAmountSlider1->getValue());
                m->setModulator(matrix->getModulations().at(index)->getModulator());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }
        // Osc 2 Pitch
        if (targetCombo1->getSelectedId() == 4) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(1));
                m->setModAmount(modAmountSlider1->getValue());
                m->setModulator(matrix->getModulations().at(index)->getModulator());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }
        // Osc 3 Pitch
        if (targetCombo1->getSelectedId() == 5) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(2));
                m->setModAmount(modAmountSlider1->getValue());
                m->setModulator(matrix->getModulations().at(index)->getModulator());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }


        //[/UserComboBoxCode_targetCombo1]
    }
    else if (comboBoxThatHasChanged == targetCombo2)
    {
        //[UserComboBoxCode_targetCombo2] -- add your combo box handling code here..
        //[/UserComboBoxCode_targetCombo2]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void ModSlot::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == modAmountSlider1)
    {
        //[UserSliderCode_modAmountSlider1] -- add your slider handling code here..

        for (int i = 0; i <  matrix->getModulations().at(index)->getTargets().size(); i++) {
            matrix->getModulations().at(index)->getTargets()[i]->setModAmount(modAmountSlider1->getValue());
        }


        //[/UserSliderCode_modAmountSlider1]
    }
    else if (sliderThatWasMoved == modAmountSlider2)
    {
        //[UserSliderCode_modAmountSlider2] -- add your slider handling code here..
        //[/UserSliderCode_modAmountSlider2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void ModSlot::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == enableButton)
    {
        //[UserButtonCode_enableButton] -- add your button handler code here..
        sourceCombo->setEnabled(enableButton->getToggleState());
        targetCombo1->setEnabled(enableButton->getToggleState());
        targetCombo2->setEnabled(enableButton->getToggleState());
        this->slotEnabled = enableButton->getToggleState();

        // Modulation index does not exist
        if (matrix->getModulations().size() <= index) {
            Modulation* mod = new Modulation();
            mod->setEnabled(true);
            matrix->addModulation(mod);
        }

        //[/UserButtonCode_enableButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ModSlot::setTitle(String title) {
    this->titleLabel->setText(title, juce::NotificationType::dontSendNotification);
}

void ModSlot::addSource(int id, juce::String source) {
    this->sourceCombo->addItem(source, id);
}

void ModSlot::addTarget(int id, juce::String target) {
    this->targetCombo1->addItem(target, id);
    this->targetCombo2->addItem(target, id);
}

int ModSlot::getSelectedSource() {
    return this->sourceCombo->getSelectedId();
}

int ModSlot::getSelectedTarget1() {
    return this->targetCombo1->getSelectedId();
}

int ModSlot::getSelectedTarget2() {
    return this->targetCombo2->getSelectedId();
}

void ModSlot::setSelectedSource(int id) {
    this->sourceCombo->setSelectedId(id);
}

void ModSlot::setSelectedTarget1(int id) {
    this->targetCombo1->setSelectedId(id);
}

void ModSlot::setSelectedTarget2(int id) {
    this->targetCombo2->setSelectedId(id);
}

bool ModSlot::isSlotEnabled() {
    return this->slotEnabled;
}

int ModSlot::getIndex() {
    return index;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ModSlot" componentName=""
                 parentClasses="public Component" constructorParams="ModMatrix*  m, int index"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff5a5a5a">
    <ROUNDRECT pos="6 6 215 215" cornerSize="10" fill="solid: ffffff" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: ffff9c00"/>
  </BACKGROUND>
  <LABEL name="new label" id="bebef9922d183d79" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 44 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Source" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="sourceCombo" id="41f7906efd83d1fd" memberName="sourceCombo"
            virtualName="" explicitFocusOrder="0" pos="16 68 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="target1" id="e41147e40eec10c8" memberName="targetLabel1"
         virtualName="" explicitFocusOrder="0" pos="16 100 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Target 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="targetCombo1" id="96eb30fcf7656b47" memberName="targetCombo1"
            virtualName="" explicitFocusOrder="0" pos="16 124 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="modAmountSlider1" id="5e4f6014b1e0bf95" memberName="modAmountSlider1"
          virtualName="" explicitFocusOrder="0" pos="176 120 32 32" min="0"
          max="10" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="target2" id="19b619769e34b882" memberName="targetLabel2"
         virtualName="" explicitFocusOrder="0" pos="16 156 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Target 2&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="targetCombo2" id="667ed1e4630df9bd" memberName="targetCombo2"
            virtualName="" explicitFocusOrder="0" pos="16 180 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="modAmountSlider2" id="2a781a059068936a" memberName="modAmountSlider2"
          virtualName="" explicitFocusOrder="0" pos="176 176 32 32" min="0"
          max="10" int="0.10000000000000000555" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="titleLabel" id="9b37c8458eed3a16" memberName="titleLabel"
         virtualName="" explicitFocusOrder="0" pos="72 16 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Slot 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="20" bold="1" italic="0" justification="33"/>
  <TOGGLEBUTTON name="enableButton" id="941d3267e40c3272" memberName="enableButton"
                virtualName="" explicitFocusOrder="0" pos="184 16 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
