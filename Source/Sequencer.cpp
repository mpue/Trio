/*
  ==============================================================================

    Sequencer.cpp
    Created: 29 Nov 2016 8:56:51pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Sequencer.h"

Sequencer::Sequencer() {
    
    
    for (int i = 0; i < 16;i++) {
        offsets.push_back(0);
        velocities.push_back(100);
        steps.push_back(true);
    }
    
    this->raster = 32;
    this->octave = 0;
    this->currentStep = 0;
    this->playing = false;
    
}

Sequencer::~Sequencer() {
    
}

vector<int> Sequencer::getVelocities() {
    return this->velocities;
}

vector<bool> Sequencer::getSteps() {
    return this->steps;
}

int Sequencer::getStepConfig() {
    
    int config = 0;
    
    for (int i = 0; i< steps.size();i++) {
        
        if (steps.at(i)) {
            config |= 1 << i;
        }
    }
    
    return config;
}

void Sequencer::setStepConfig(int config) {
    for (int i = 0; i< steps.size();i++) {
        
        steps.at(i) = false;
        if ((config >> i) & 1){
            steps.at(i) = true;
        }
    }
}

void Sequencer::setEnabled(bool enabled) {
    this->enabled = enabled;
}

bool Sequencer::isEnabled() {
    return this->enabled;
}

void Sequencer::setPlaying(bool playing) {
    this->playing = playing;
    if (playing) startTimer(1000 / raster);
    else stopTimer();
}

bool Sequencer::isPlaying() {
    return this->playing;
}

float Sequencer::process() {
    tick();
    return (1.0f / 127.0f) * this->offsets.at(currentStep);
}

float Sequencer::getOutput() {
    return (1.0f / 127.0f) * this->offsets.at(currentStep);
}

void Sequencer::tick() {
    if (currentStep < 15) {
        this->currentStep++;
    }
    else {
        this->currentStep = 0;
   
        if (octave < numOctaves) {
            octave++;
        }
        else {
            octave = 0;
        }
        
    }
    // sendChangeMessage();

}

void Sequencer::setRaster(int raster) {
    this->raster = raster;
}

int Sequencer::getRaster() {
    return this->raster;
}
    
int Sequencer::getCurrentStep() {
    return this->currentStep;
}

int Sequencer::getOffsetAt(int step){
    return this->offsets.at(step);
}


int Sequencer::getOffset() {
    return this->offsets.at(currentStep);
}

void Sequencer::setOffset(int step, int offset) {
    this->offsets.at(step) = offset;
}


int Sequencer::getVelocityAt(int step){
    return this->velocities.at(step);
}


int Sequencer::getVelocity() {
    return this->velocities.at(currentStep);
}

void Sequencer::setVelocity(int step, int velocity) {
    this->velocities.at(step) = velocity;
}

void Sequencer::setStepEnabled(int step, bool enabled) {
    this->steps.at(step) = enabled;
}

bool Sequencer::isCurrentStepEnabled() {
    return this->steps.at(currentStep);
}

bool Sequencer::isStepEnabled(int step) {
    return this->steps.at(step);
}

void Sequencer::setOctave(int octave) {
    this->octave = octave;
}

void Sequencer::setNumOctaves(int octaves) {
    this->numOctaves = octaves;
}

int Sequencer::getNumOctaves() {
    return this->numOctaves;
}

int Sequencer::getOctave() {
    return this->octave;
    
}

bool Sequencer::isModulator() {
    return this->modulator;
}

void Sequencer::setModulator(bool modulator) {
    this->modulator = modulator;
}

void Sequencer::timerCallback() {
    tick();
}

void Sequencer::update() {
    if (playing) {
        stopTimer();
        startTimer(1000 / raster);
    }
    
}