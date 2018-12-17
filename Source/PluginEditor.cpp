/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "MainWindow.h"



//==============================================================================
TrioAudioProcessorEditor::TrioAudioProcessorEditor (TrioAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{

    this->setLookAndFeel(&lf);
    
    
    lf.setColour(Slider::rotarySliderFillColourId, Colours::darkorange);
    lf.setColour(Slider::trackColourId, Colours::transparentBlack);
    lf.setColour(Slider::thumbColourId, Colours::transparentBlack);
    
    lf.setColour(ComboBox::backgroundColourId, Colours::black);
    lf.setColour(PopupMenu::backgroundColourId, Colours::black);
    lf.setColour(PopupMenu::highlightedBackgroundColourId, Colours::darkorange);
    lf.setColour(PopupMenu::textColourId, Colours::darkorange);
    lf.setColour(ComboBox::textColourId, Colours::darkorange);
    lf.setColour(ComboBox::outlineColourId, Colours::darkorange);
    lf.setColour(ComboBox::arrowColourId, Colours::darkorange);
    lf.setColour(ComboBox::buttonColourId, Colours::darkorange);
    lf.setColour(TextButton::buttonColourId, Colours::black);
    lf.setColour(TextButton::buttonOnColourId, Colours::darkorange);
    lf.setColour(TextEditor::outlineColourId, Colours::darkorange);
    lf.setColour(TextEditor::backgroundColourId, Colours::black);
    lf.setColour(TextEditor::highlightColourId, Colours::darkorange);
    lf.setColour(TextEditor::highlightedTextColourId, Colours::black);
    lf.setColour(TextEditor::textColourId, Colours::darkorange);
    lf.setColour(TextButton::textColourOffId, Colours::darkorange);
    lf.setColour(TextButton::textColourOnId, Colours::black);
    lf.setColour(CaretComponent::caretColourId, Colours::darkorange);
    lf.setColour (ScrollBar::thumbColourId,Colours::darkorange);
    lf.setColour (ScrollBar::backgroundColourId,Colour::fromRGBA(0x5a,0x5a,0x5a,0xff));
    lf.setColour (Slider::thumbColourId,Colours::darkorange);
    lf.setColour (Slider::trackColourId,Colour::fromRGBA(0x5a,0x5a,0x5a,0xff));
    
    // LookAndFeel::setDefaultLookAndFeel(&lookAndFeel);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (910, 600);
    
    window = new MainWindow(&p);
    addAndMakeVisible(window);
}

TrioAudioProcessorEditor::~TrioAudioProcessorEditor()
{
    setLookAndFeel(nullptr);
    delete window;
}

//==============================================================================
void TrioAudioProcessorEditor::paint (Graphics& g)
{
}

void TrioAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}


