/*
  ==============================================================================

    ModMatrix.cpp
    Created: 10 Dec 2016 10:18:41am
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "ModMatrix.h"

ModMatrix::ModMatrix() {
    this->modSources = new std::map<int,String>();
    this->modTargets = new std::map<int,String>();
}

ModMatrix::~ModMatrix() {
    for(std::vector<Modulation*>::iterator it = modulations.begin(); it != modulations.end(); ++it) {
        delete *it;
    }
    modSources->clear();
    modTargets->clear();
    delete modSources;
    delete modTargets;
}

void ModMatrix::process() {
    for (int i = 0; i < modulations.size();i++) {
        this->modulations.at(i)->process();
    }
}

void ModMatrix::addModulation(Modulation *mod) {
    this->modulations.push_back(mod);
}

vector<Modulation*> ModMatrix::getModulations() {
    return modulations;
}

void ModMatrix::registerSource(String source, int id) {
    this->modSources->insert(std::make_pair(id,source));
}

void ModMatrix::registerTarget(String target, int id) {
    this->modTargets->insert(std::make_pair(id,target));
}

map<int,String>* ModMatrix::getSources() {
    return this->modSources;
}

map<int,String>* ModMatrix::getTargets() {
    return this->modTargets;
}