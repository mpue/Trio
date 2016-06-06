/*
  ==============================================================================

    Sawtooth.cpp
    Created: 3 Jun 2016 9:02:07pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Sawtooth.h"

#include <iostream>

using namespace std;

Sawtooth::Sawtooth(float sampleRate) : Oszillator(sampleRate) {
    this->amplitude = 1.0f;
    this->phase = 0.0f;
    this->frequency = 440.0f;
    this->phaseIncrement = (360.0f / sampleRate) * frequency;
    this->currentValue = 0;
    this->stepSize = 1.0f / (sampleRate / frequency);
    this->fine = 0.0f;
    
    cout << "phaseIncrement : " << phaseIncrement << endl;
    cout << "stepSize : " << stepSize << endl;
}

float Sawtooth::process() {
    
    if (phase < 360.0f) {
        phase += phaseIncrement;
        currentValue += stepSize;
    }
    else {
        phase = 0;
        currentValue = 0;
    }
    
    return (currentValue - 0.5f) * amplitude;
}

void Sawtooth::setFrequency(float frequency) {
    
    cout << "Frequency : "  << frequency << endl;
    cout << "Fine : " << fine << endl;
    
    this->phase = 0.0f;
    this->frequency = frequency;
    this->phaseIncrement = (360.0f / sampleRate) * (frequency + this->fine);
    this->currentValue = 0;
    this->stepSize = 1.0f / (sampleRate / (frequency + this->fine));
    
}

void Sawtooth::setFine(float fine) {
    this->fine = fine;
}

float Sawtooth::getFine() const {
    return this->fine;
}