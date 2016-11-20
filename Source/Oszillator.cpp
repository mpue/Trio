/*
  ==============================================================================

    Oszillator.cpp
    Created: 3 Jun 2016 8:50:32pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Oszillator.h"

Oszillator::Oszillator() {
    this->pitch = 0;
}

Oszillator::Oszillator(double sampleRate) {
    this->sampleRate = sampleRate;
}

Oszillator::~Oszillator() {
    
}

void Oszillator::setPhase(double phase) {
    this->phase = phase;
}

void Oszillator::setVolume(float volume) {
    this->volume = volume;
}

void Oszillator::setFrequency(double frequency) {
    this->frequency = frequency;
}

void Oszillator::setPitch(int pitch) {
    this->pitch = pitch;
}

int Oszillator::getPitch() const {
    return this->pitch;
}

void Oszillator::setMode(OscMode mode) {
    this->mode = mode;
}