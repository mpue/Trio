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
#include "Sine.h"

#include <vector>
#include <iostream>

using namespace std;

Model::Model(vector<Voice*> voices, MultimodeFilter* leftFilter, MultimodeFilter* rightFilter, ADSR* filterEnv, Sine* lfo1, Sine* lfo2, int sampleRate) {
    this->voices = voices;
    this->leftFilter = leftFilter;
    this->rightFilter = rightFilter;
    this->filterEnv = filterEnv;
    this->sampleRate = sampleRate;
    this->lfo1 = lfo1;
    this->lfo2 = lfo2;
    this->volume = 1.0f;
    this->filterResonance = 0.1f;
    this->filtermode = 1;
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
    cout << "Osc 1 fine : " << fine << endl;
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
    cout << "Osc 2 fine : " << fine << endl;
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
    cout << "Osc 3 fine : " << fine << endl;
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

float Model::getFilterMode() {
    return this->filtermode;
}

void Model::setFilterMode(float mode) {
    this->filtermode = mode;
    
    if (mode == 0) {
        this->leftFilter->setMode(MultimodeFilter::LOWPASS);
        this->rightFilter->setMode(MultimodeFilter::LOWPASS);
    }
    else {
        this->leftFilter->setMode(MultimodeFilter::HIGHPASS);
        this->rightFilter->setMode(MultimodeFilter::HIGHPASS);
    }
}

void Model::setFilterModAmount(float amount) {
    this->filterModAmount = amount;
    this->leftFilter->setModAmount(amount);
    this->rightFilter->setModAmount(amount);
}

float Model::getLfo1Rate() {
    return lfo1Rate;
}

void Model::setLfo1Rate(float rate) {
    this->lfo1Rate = rate;
    lfo1->setFrequency(rate);
}

float Model::getLfo1Amount() {
    return this->lfo1Amount;
}

void Model::setLfo1Amount(float amount) {
    this->lfo1Amount = amount;
    lfo1->setVolume(amount);
}

float Model::getLfo2Rate() {
    return lfo2Rate;
}

void Model::setLfo2Rate(float rate) {
    this->lfo2Rate = rate;
    lfo2->setFrequency(rate);
}

float Model::getLfo2Amount() {
    return this->lfo2Amount;
}

void Model::setLfo2Amount(float amount) {
    this->lfo2Amount = amount;
    lfo2->setVolume(amount);
}

void Model::setModsource(int source) {
    this->modsource = source;
}

int Model::getModsource() {
    return this->modsource;
}

void Model::setMod1Target(int target) {
    this->mod1target = target;
}

int Model::getMod1Target() {
    return this->mod1target;
}

void Model::setMod2Target(int target) {
    this->mod2target = target;
}

int Model::getMod2Target() {
    return this->mod2target;
}

