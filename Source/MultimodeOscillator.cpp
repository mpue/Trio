//
//  MultimodeOscillator.cpp
//  Trio
//
//  Created by Matthias Pueski on 20.11.16.
//
//

#include "MultimodeOscillator.h"



MultimodeOscillator::MultimodeOscillator(float sampleRate) : Oszillator(sampleRate) {
    this->volume = 1.0f;
    this->frequency = 440.0f;
    this->fine = 0.0f;
    
    this->sine = new Sine(sampleRate);
    this->saw = new Sawtooth(sampleRate);
    this->pulse = new Pulse(sampleRate);
    this->noise = new WhiteNoise(sampleRate);
    this->mode = OscMode::SAW;
}

MultimodeOscillator::~MultimodeOscillator() {
    delete sine;
    delete saw;
    delete pulse;
    delete noise;
}

void MultimodeOscillator::setFrequency(double frequency) {
    this->saw->setFrequency(frequency);
    this->sine->setFrequency(frequency);
    this->pulse->setFrequency(frequency);
}

void MultimodeOscillator::setVolume(float volume) {
    this->saw->setVolume(volume);
    this->sine->setVolume(volume);
    this->pulse->setVolume(volume);
    this->noise->setVolume(volume);
}


float MultimodeOscillator::getOutput() {
    if (this->mode == SAW) {
        return this->saw->getOutput();
    }
    else if (this->mode == SINE) {
        return this->sine->getOutput();
    }
    else if (this->mode == PULSE) {
        return this->pulse->getOutput();
    }
    else if(this->mode == NOISE) {
        return this->noise->getOutput();
    }
    else {
        return 0;
    }
}

float MultimodeOscillator::process() {
    
    if (this->mode == SAW) {
        return this->saw->process();
    }
    else if (this->mode == SINE) {
        return this->sine->process();
    }
    else if (this->mode == PULSE) {
        return this->pulse->process();
    }
    else if(this->mode == NOISE) {
        return this->noise->process();
    }
    else {
        return 0;
    }
    
}

void MultimodeOscillator::setFine(float fine) {
    this->fine = fine;
    saw->setFine(fine);
    sine->setFine(fine);
    pulse->setFine(fine);
}

float MultimodeOscillator::getFine() const {
    return this->fine;
}