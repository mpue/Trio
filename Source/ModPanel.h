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

#ifndef __JUCE_HEADER_F9C1CBED713F89D8__
#define __JUCE_HEADER_F9C1CBED713F89D8__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "ModSlot.h"
#include "ModTarget.h"
#include "Modulator.h"
#include "Modulation.h"
#include "ModMatrix.h"
#include "ModMatrixConfig.h"
#include <vector>

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ModPanel  : public Component,
                  public ChangeListener
{
public:
    //==============================================================================
    ModPanel (ModMatrix*  m);
    ~ModPanel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    std::vector<ModSlot*> getSlots();
	ModMatrixConfig getConfig();
	void setConfig(ModMatrixConfig config);
	virtual void changeListenerCallback(ChangeBroadcaster* source) override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* mod_panel_jpg;
    static const int mod_panel_jpgSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    std::vector<ModSlot*> slots;
    ModMatrix* matrix;
	ModMatrixConfig config;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ModSlot> modSlot1;
    ScopedPointer<ModSlot> modSlot2;
    ScopedPointer<ModSlot> modSlot3;
    ScopedPointer<ModSlot> modSlot4;
    ScopedPointer<ModSlot> modSlot5;
    ScopedPointer<ModSlot> modSlot6;
    Image cachedImage_mod_panel_jpg_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ModPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F9C1CBED713F89D8__
