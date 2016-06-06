/*
  ==============================================================================

    Model.cpp
    Created: 4 Jun 2016 8:56:23pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Voice.h"
#include "Model.h"
#include "Oszillator.h"

#include <vector>
#include <iostream>

using namespace std;

Model::Model(Voice* voice) {
    this->voice = voice;
}

int Model::getOsc1Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc1Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc1Pitch = pitch;
    voice->getOszillators().at(0)->setPitch(pitch);
    voice->updateOscillator(0);
}

int Model::getOsc2Pitch() {
    return this->osc2Pitch;
}

void Model::setOsc2Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc2Pitch = pitch;
    voice->getOszillators().at(1)->setPitch(pitch);
    voice->updateOscillator(1);
}

int Model::getOsc3Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc3Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc3Pitch = pitch;
    voice->getOszillators().at(2)->setPitch(pitch);
    voice->updateOscillator(2);
}

int Model::getOsc1Fine() {
    return this->osc1Fine;
}

void Model::setOsc1Fine(float fine) {
    this->osc1Fine = fine;
    voice->getOszillators().at(0)->setFine(fine);
    voice->updateOscillator(0);
}

int Model::getOsc2Fine() {
    return this->osc2Fine;
}

void Model::setOsc2Fine(float fine) {
    this->osc2Fine = fine;
    voice->getOszillators().at(1)->setFine(fine);
    voice->updateOscillator(1);
}

int Model::getOsc3Fine() {
    return this->osc3Fine;
}
void Model::setOsc3Fine(float fine) {
    this->osc3Fine = fine;
    voice->getOszillators().at(2)->setFine(fine);
    voice->updateOscillator(2);
}


