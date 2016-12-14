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
    for(std::vector<ModSlotConfig*>::iterator it = slotConfigs.begin(); it != slotConfigs.end(); ++it) {
        delete *it;
    }
    slotConfigs.clear();
    config->removeAllChildren(nullptr);
    delete config;
}

void ModMatrixConfig::addConfig(ModSlotConfig * config)
{
    this->slotConfigs.push_back(config);
}

ValueTree * ModMatrixConfig::getConfiguation()
{
    config->removeAllChildren(nullptr);
    
    for (int i = 0; i < slotConfigs.size(); i++) {
        this->config->addChild(*(slotConfigs.at(i)->getSlotConfig()),-1, nullptr);
    }
    
    return this->config;
}

ModSlotConfig * ModMatrixConfig::getSlotConfig(int i)
{
    return slotConfigs.at(i);
}

void ModMatrixConfig::clearSlots()
{
    for(std::vector<ModSlotConfig*>::iterator it = slotConfigs.begin(); it != slotConfigs.end(); ++it) {
        delete *it;
    }
    this->slotConfigs.clear();
}

int ModMatrixConfig::getNumConfigs()
{
    return slotConfigs.size();
}
