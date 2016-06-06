/*
  ==============================================================================

    WhiteNoise.cpp
    Created: 3 Jun 2016 9:05:33pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "WhiteNoise.h"

WhiteNoise::WhiteNoise(double sampleRate) : Oszillator(sampleRate) {
    this->amplitude = 1.0f;
    random = new Random();
    this->fine = 0.0f;
}

WhiteNoise::~WhiteNoise() {
    random = nullptr;
}

float WhiteNoise::process() {
    return (random->nextFloat() * 0.25f - 0.125f) * amplitude;
}

void WhiteNoise::setFine(float fine) {
    this->fine = fine;
}

float WhiteNoise::getFine() const {
    return this->fine;
}