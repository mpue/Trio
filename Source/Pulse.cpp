//
//  Pulse.cpp
//  Trio
//
//  Created by Matthias Pueski on 23.11.16.
//
//

#include "Pulse.h"

#include "math.h"
#include <iostream>

Pulse::Pulse(float sampleRate) : Oszillator(sampleRate) {
    this->volume = 1.0f;
    this->frequency = 440.0f;
    this->fine = 0.0f;
    this->step = (frequency * 2 * M_PI) / sampleRate;
    this->phase = 0;
}

float Pulse::getOutput() {
    return this->value;
}

float Pulse::process() {
    
    phase += step;
    
    this->value = (float)(sin(phase) * this->volume);
    
    if (value < 0) {
        value = 0;
    }
    else {
        value = 1;
    }

    return this->value;
}

void Pulse::setFrequency(double frequency) {
    this->frequency = frequency;
    this->step = ((frequency + (double)this->fine) * 2 * M_PI / sampleRate);
}

void Pulse::setFine(float fine) {
    this->fine = fine;
    this->step = ((frequency + (double)this->fine) * 2 * M_PI / sampleRate);
}

float Pulse::getFine() const {
    return this->fine;
}