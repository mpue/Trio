/*
  ==============================================================================

    ControllerConfig.cpp
    Created: 12 Dec 2016 10:41:08am
    Author:  pueskma

  ==============================================================================
*/

#include "ControllerConfig.h"

ControllerConfig::ControllerConfig(int index, String name, int controller) {
	this->index = index;
	this->name = name;
	this->controller = controller;
}

ControllerConfig::ControllerConfig() {

}

ControllerConfig::~ControllerConfig() {

}
