/*
  ==============================================================================

    ControllerConfig.h
    Created: 12 Dec 2016 10:41:08am
    Author:  pueskma

  ==============================================================================
*/

#ifndef CONTROLLERCONFIG_H_INCLUDED
#define CONTROLLERCONFIG_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class ControllerConfig  {

public:

	ControllerConfig(int index, String name, int controller);

	ControllerConfig();
	~ControllerConfig();

	int index;
	String name;
	int controller;

};



#endif  // CONTROLLERCONFIG_H_INCLUDED
