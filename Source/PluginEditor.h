/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "MainWindow.h"
#include "TrioLookAndFeel.h"
#include "Model.h"


//==============================================================================
/**
*/
class TrioAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    TrioAudioProcessorEditor (TrioAudioProcessor&);
    ~TrioAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TrioAudioProcessor& processor;

    MainWindow* window;
    TrioLookAndFeel lookAndFeel;
    Model* model;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TrioAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
