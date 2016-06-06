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
    LookAndFeel::setDefaultLookAndFeel(&lookAndFeel);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (910, 600);
    
    model = new Model(p.getVoices());
    
    window = new MainWindow();
    window->setModel(model);
    addAndMakeVisible(window);
}

TrioAudioProcessorEditor::~TrioAudioProcessorEditor()
{
    delete window;
    window = nullptr;
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
