/*
  ==============================================================================

    ModMatrixConfig.cpp
    Created: 12 Dec 2016 6:45:42pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "ModMatrixConfig.h"

ModMatrixConfig::ModMatrixConfig()
{
	this->config = new ValueTree(Identifier("modMatrix"));
}

  ModMatrixConfig::~ModMatrixConfig()
  {
  }

  void ModMatrixConfig::addConfig(ModSlotConfig * config)
  {
	  this->slotConfigs.push_back(config);
  }

  ValueTree * ModMatrixConfig::getConfiguation()
  {
	  config->removeAllChildren(nullptr);

	  for (int i = 0; i < slotConfigs.size(); i++) {
		  slotConfigs.at(i);
		  this->config->addChild(*(slotConfigs.at(i)->getSlotConfig()),-1, nullptr);
	  }

	  return this->config;
  }

  ModSlotConfig * ModMatrixConfig::getSlotConfig(int i)
  {
	  return slotConfigs.at(i);		  
  }
