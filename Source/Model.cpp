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

Model::Model(vector<Voice*> voices, Filter* leftFilter, Filter* rightFilter, ADSR* filterEnv, int sampleRate) {
    this->voices = voices;
    this->leftFilter = leftFilter;
    this->rightFilter = rightFilter;
    this->filterEnv = filterEnv;
    this->sampleRate = sampleRate;
    this->volume = 1.0f;
    this->filterResonance = 0.1f;
}

Model::~Model() {
    cout << "Model destroyed." << endl;
}



int Model::getOsc1Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc1Pitch(int pitch) {
    cout << "Pitch : " << pitch << endl;
    this->osc1Pitch = pitch;
    
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(0)->setPitch(pitch);
        if (!voices.at(i)->isPlaying()) continue;
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
        voices.at(i)->getOszillators().at(1)->setPitch(pitch);
        if (!voices.at(i)->isPlaying()) continue;
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
        voices.at(i)->getOszillators().at(2)->setPitch(pitch);
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->updateOscillator(2);
    }
}

int Model::getOsc1Fine() {
    return this->osc1Fine;
}

void Model::setOsc1Fine(float fine) {
    this->osc1Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(0)->setFine(fine);
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->updateOscillator(0);
    }
}

int Model::getOsc2Fine() {
    return this->osc2Fine;
}

void Model::setOsc2Fine(float fine) {
    this->osc2Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(1)->setFine(fine);
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->updateOscillator(1);
    }
}

int Model::getOsc3Fine() {
    return this->osc3Fine;
}

void Model::setOsc3Fine(float fine) {
    this->osc3Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(2)->setFine(fine);
        if (!voices.at(i)->isPlaying()) continue;
        voices.at(i)->updateOscillator(2);
    }
        
}

int Model::getOsc1Volume() {
    return this->osc1Volume;
}

void Model::setOsc1Volume(float volume) {
    this->osc1Volume = volume;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(0)->setVolume(volume);
    }
}

int Model::getOsc2Volume() {
    return this->osc2Volume;
}

void Model::setOsc2Volume(float Volume) {
    this->osc2Volume = Volume;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(1)->setVolume(Volume);
    }
}

int Model::getOsc3Volume() {
    return this->osc3Volume;
}

void Model::setOsc3Volume(float Volume) {
    this->osc3Volume = Volume;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getOszillators().at(2)->setVolume(Volume);
    }
    
}


float Model::getAmpEnvAttack() {
    return this->ampEnvAttack;
}

void Model::setAmpEnvAttack(float attack) {
    this->ampEnvAttack = attack;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getAmpEnvelope()->setAttackRate(attack * voices.at(i)->getSampleRate());
    }
    
}

float Model::getAmpEnvDecay() {
    return this->ampEnvDecay;
}

void Model::setAmpEnvDecay(float decay) {
    this->ampEnvDecay = decay;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getAmpEnvelope()->setDecayRate(decay * voices.at(i)->getSampleRate());
    }
    
}

float Model::getAmpEnvSustain() {
    return this->ampEnvSustain;
}

void Model::setAmpEnvSustain(float sustain) {
    this->ampEnvSustain = sustain;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getAmpEnvelope()->setSustainLevel(sustain);
    }
    
}

float Model::getAmpEnvRelease() {
    return this->ampEnvRelease;
}

void Model::setAmpEnvRelease(float release) {
    this->ampEnvRelease = release;
    for (int i = 0; i < voices.size();i++) {
        voices.at(i)->getAmpEnvelope()->setReleaseRate(release * voices.at(i)->getSampleRate());
    }
    
}

float Model::getFilterCutoff() {
    return this->filterCutoff;
}

void Model::setFilterCutoff(float cutoff) {
    this->filterCutoff = cutoff;
    leftFilter->coefficients(filterCutoff * 1000, filterResonance);
    rightFilter->coefficients(filterCutoff * 1000, filterResonance);
}

float Model::getFilterResonance() {
    return this->filterResonance;
}

void Model::setFilterResonance(float resonance) {
    this->filterResonance = resonance;
    leftFilter->coefficients(filterCutoff * 1000, filterResonance);
    rightFilter->coefficients(filterCutoff * 1000, filterResonance);
}


float Model::getVolume() {
    return this->volume;
}

void Model::setVolume(float volume) {
    this->volume = volume;
}

float Model::getFilterEnvAttack() {
    return this->filterEnvAttack;
}

void Model::setFilterEnvAttack(float attack) {
    this->filterEnvAttack = attack;
    filterEnv->setAttackRate(this->sampleRate * attack);
}

float Model::getFilterEnvDecay() {
    return this->filterEnvDecay;
}

void Model::setFilterEnvDecay(float decay) {
    this->filterEnvDecay = decay;
    filterEnv->setDecayRate(this->sampleRate * decay);
}

float Model::getFilterEnvSustain() {
    return this->filterEnvSustain;
}

void Model::setFilterEnvSustain(float sustain) {
    this->filterEnvSustain = sustain;
    this->filterEnv->setSustainLevel(this->sampleRate * sustain);

}

float Model::getFilterEnvRelease() {
    return this->filterEnvRelease;
}

void Model::setFilterEnvRelease(float release) {
    this->filterEnvRelease = release;
    this->filterEnv->setReleaseRate(this->sampleRate * release);

}

float Model::getFilterModAmount() {
    return this->filterModAmount;
}

void Model::setFilterModAmount(float amount) {
    this->filterModAmount = amount;
    this->leftFilter->setModAmount(amount);
    this->rightFilter->setModAmount(amount);
}




