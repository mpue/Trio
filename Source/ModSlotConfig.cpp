/*
  ==============================================================================

    ModSlotConfig.cpp
    Created: 12 Dec 2016 6:45:21pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "ModSlotConfig.h"

ModSlotConfig::ModSlotConfig()
  {
  }

 ModSlotConfig::ModSlotConfig(int sourceId, int targetId1, int targetId2) {
	 this->sourceId = sourceId;
	 this->targetId1 = targetId1;
	 this->targetId2 = targetId1;
	 this->slotConfig = new ValueTree(Identifier("slotConfig"));
 }

 ModSlotConfig::~ModSlotConfig()
 {
	 slotConfig = nullptr;
 }

  void ModSlotConfig::setSourceId(int id)
  {
	  this->sourceId = id;
  }

  int ModSlotConfig::getSourceId()
  {
	  return this->sourceId;
  }

  void ModSlotConfig::setTargetId1(int id)
  {
	  this->targetId1 = id;
  }

  int ModSlotConfig::getTargetId1()
  {
	  return this->targetId1;
  }

  void ModSlotConfig::setTargetId2(int id)
  {
	  this->targetId2 = id;
  }

  int ModSlotConfig::getTargetId2()
  {
	  return targetId2;
  }

  ValueTree* ModSlotConfig::getSlotConfig()
  {
	  slotConfig->removeAllChildren(nullptr);

	  slotConfig->setProperty("sourceId", this->sourceId, nullptr);
	  slotConfig->setProperty("targetId1", this->targetId1, nullptr);
	  slotConfig->setProperty("targetId2", this->targetId2, nullptr);

	  return slotConfig;
  }
