/*
  ==============================================================================

    Oszillator.cpp
    Created: 3 Jun 2016 8:50:32pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Oszillator.h"

Oszillator::Oszillator() {
    
}

Oszillator::Oszillator(double sampleRate) {
    this->sampleRate = sampleRate;
}

Oszillator::~Oszillator() {
    
}

void Oszillator::setPhase(float phase) {
    this->phase = phase;
}

void Oszillator::setAmplitude(float amplitude) {
    this->amplitude = amplitude;
}

void Oszillator::setFrequency(float frequency) {
    this->frequency = frequency;
}

