/*
  ==============================================================================

    Modulation.cpp
    Created: 10 Dec 2016 9:55:40am
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Modulation.h"

Modulation::Modulation() {
}

Modulation::~Modulation() {

    for (int i = 0; i < targets.size();i++) {
        targets.at(i)->setModulator(NULL);
    }
    
    this->targets.clear();
}

Modulation::Modulation(Modulator* modulator, ModTarget* target) {
    this->modulator = modulator;
    target->setModulator(modulator);
    this->targets.push_back(target);
}

void Modulation::process() {
    this->modulator->process();
}

void Modulation::setModulator(Modulator *modulator) {
    this->modulator = modulator;
}

void Modulation::addTarget(ModTarget* target) {
    target->setModulator(this->modulator);
    this->targets.push_back(target);
}

vector<ModTarget*> Modulation::getTargets() {
    return targets;
}
