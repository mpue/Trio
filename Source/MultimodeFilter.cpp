//
//  MultimodePassFilter.cpp
//  Trio
//
//  Created by Matthias Pueski on 16.11.16.
//
//


#include "MultimodeFilter.h"
#include "ADSR.h"

MultimodeFilter::MultimodeFilter() {

    this->filter1 = new LowPassFilter();
    this->filter2 = new HighPassFilter();
    
    this->mode = LOWPASS;
}

MultimodeFilter::~MultimodeFilter() {
    this->filter1 = nullptr;
    this->filter2 = nullptr;
}


void MultimodeFilter::setMode(Mode mode) {
    this->mode = mode;
}

void MultimodeFilter::coefficients(float frequency, float resonance) {
    this->filter1->coefficients( frequency, resonance);
    this->filter2->coefficients( frequency, resonance);
}

void MultimodeFilter::process(float *in, float *out, int numSamples) {    
    if (this->mode == Mode::LOWPASS) {
        this->filter1->process(in, out, numSamples);
    }
    else {
        this->filter2->process(in, out, numSamples);
    }
}

void MultimodeFilter::setModulator(Modulator* mod) {
    this->filter1->setModulator(mod);
    this->filter2->setModulator(mod);
}

void MultimodeFilter::setModAmount(float amount) {
    this->filter1->setModAmount(amount);
    this->filter2->setModAmount(amount);
}