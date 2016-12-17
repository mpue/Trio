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

ModSlotConfig::ModSlotConfig(int sourceId, int targetId1, int targetId2, float amount1, float amount2) {
    this->sourceId = sourceId;
    this->targetId1 = targetId1;
    this->targetId2 = targetId1;
    this->amount1 = amount1;
    this->amount2 = amount2;
}

ModSlotConfig::~ModSlotConfig()
{
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

void ModSlotConfig::setAmount1(float amount)
{
    this->amount1 = amount;
}

float ModSlotConfig::getAmount1()
{
    return amount1;
}

void ModSlotConfig::setAmount2(float amount)
{
    this->amount2 = amount;
}

float ModSlotConfig::getAmount2()
{
    return amount2;
}

bool ModSlotConfig::isSlotEnabled()
{
    return enabled;
}

void ModSlotConfig::setEnabled(bool enabled)
{
    this->enabled = enabled;
}

/*
ValueTree* ModSlotConfig::getSlotConfig()
{
    ScopedPointer<ValueTree> slotConfig = new ValueTree(Identifier("slotConfig"));
    
    slotConfig->setProperty("sourceId", this->sourceId, nullptr);
    slotConfig->setProperty("targetId1", this->targetId1, nullptr);
    slotConfig->setProperty("targetId2", this->targetId2, nullptr);
    slotConfig->setProperty("amount1", this->amount1, nullptr);
    slotConfig->setProperty("amount2", this->amount2, nullptr);
    slotConfig->setProperty("enabled", this->enabled, nullptr);
 
    return slotConfig.release();
    
}
*/