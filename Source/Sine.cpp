//
//  Sine.cpp
//  Trio
//
//  Created by Matthias Pueski on 20.11.16.
//
//

#include "Sine.h"
#include "math.h"
#include <iostream>

Sine::Sine(float sampleRate) : Oszillator(sampleRate) {
    this->volume = 1.0f;
    this->frequency = 440.0f;
    this->fine = 0.0f;
    this->step = (frequency * 2 * M_PI) / sampleRate;
    this->phase = 0;
}

float Sine::process() {
    
    phase += step;
    
    float value = (float)(sin(phase) * this->volume);
    return value;
}

void Sine::setFrequency(double frequency) {
    this->frequency = frequency;
    this->step = ((frequency + (double)this->fine) * 2 * M_PI / sampleRate);
    std::cout.precision(16);
    std::cout << 360.0f / this->step << std::endl;
}

void Sine::setFine(float fine) {
    this->fine = fine;
}

float Sine::getFine() const {
    return this->fine;
}