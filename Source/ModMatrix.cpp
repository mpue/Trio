/*
  ==============================================================================

    ModMatrix.cpp
    Created: 10 Dec 2016 10:18:41am
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "ModMatrix.h"

ModMatrix::ModMatrix() {
}

ModMatrix::~ModMatrix() {
    for(std::vector<Modulation*>::iterator it = modulations.begin(); it != modulations.end(); ++it) {
        delete *it;
    }
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


