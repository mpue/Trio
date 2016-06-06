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

Model::Model(vector<Voice*> voices) {
    this->voices = voices;
}

int Model::getOsc1Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc1Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc1Pitch = pitch;
    
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(0)->setPitch(pitch);
        voices.at(i)->updateOscillator(0);
    }

}

int Model::getOsc2Pitch() {
    return this->osc2Pitch;
}

void Model::setOsc2Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc2Pitch = pitch;
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(1)->setPitch(pitch);
        voices.at(i)->updateOscillator(1);
    }
}

int Model::getOsc3Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc3Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc3Pitch = pitch;
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(2)->setPitch(pitch);
        voices.at(i)->updateOscillator(2);
    }
}

int Model::getOsc1Fine() {
    return this->osc1Fine;
}

void Model::setOsc1Fine(float fine) {
    this->osc1Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(0)->setFine(fine);
        voices.at(i)->updateOscillator(0);
    }
}

int Model::getOsc2Fine() {
    return this->osc2Fine;
}

void Model::setOsc2Fine(float fine) {
    this->osc2Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(1)->setFine(fine);
        voices.at(i)->updateOscillator(1);
    }
}

int Model::getOsc3Fine() {
    return this->osc3Fine;
}
void Model::setOsc3Fine(float fine) {
    this->osc3Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->getOszillators().at(2)->setFine(fine);
        voices.at(i)->updateOscillator(2);
    }
        
}


