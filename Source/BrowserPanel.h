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

#ifndef __JUCE_HEADER_A5FFD3B0FCEDE408__
#define __JUCE_HEADER_A5FFD3B0FCEDE408__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "PatchBrowserComponent.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class BrowserPanel  : public Component,
                      public ChangeListener
{
public:
    //==============================================================================
    BrowserPanel (TrioAudioProcessor* p);
    ~BrowserPanel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void changeListenerCallback (ChangeBroadcaster* source) override;
	void addProgram(String name);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* browser_panel_jpg;
    static const int browser_panel_jpgSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    TrioAudioProcessor* processor;
    ScopedPointer<PatchBrowserComponent> patchBrowser;

    //[/UserVariables]

    //==============================================================================
    Image cachedImage_browser_panel_jpg_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BrowserPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_A5FFD3B0FCEDE408__
