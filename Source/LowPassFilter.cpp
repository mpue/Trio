//
//  LowPassFilter.cpp
//  Trio
//
//  Created by Matthias Pueski on 16.11.16.
//
//


#include "LowPassFilter.h"
#include "ADSR.h"

LowPassFilter::LowPassFilter() {
    this->filter = new IIRFilter();
    this->modulator = 0;
}

LowPassFilter::~LowPassFilter() {
    this->filter = nullptr;
}


void LowPassFilter::coefficients(float frequency, float resonance) {

    this->frequency = frequency;
    this->resonance = resonance;
    
    /*
    if (this->modulator != 0) {
        frequency = frequency * modulator->getOutput();
    }
    
    if (frequency <= 0) {
        frequency = 0.1;
    }
     */
    
    IIRCoefficients ic  = IIRCoefficients::makeLowPass (44100, frequency, resonance);
    filter->setCoefficients(ic);
}

void LowPassFilter::process(float *in, float *out, int numSamples) {
    
    if (this->modulator != 0) {
    
        float f = frequency;
        
        if (ADSR* env = dynamic_cast<ADSR*>(this->modulator)) {
        
            if(env->getState() != ADSR::env_idle) {
                f =  this->frequency + (modulator->getOutput() * this->modAmount * (22000 - this->frequency));
            }
            else {
                env->reset();
            }
            
        }
        else {
            f =  this->frequency * (modulator->getOutput() * this->modAmount);
        }

        if (f <= 0) {
            f = 0.1;
        }
        if (f > 22000) {
            f = 22000;
        }

        IIRCoefficients ic  = IIRCoefficients::makeLowPass (44100, f, this->resonance);
        filter->setCoefficients(ic);
        
    }

    this->filter->processSamples(in,numSamples);
}

void LowPassFilter::setModulator(Modulator* mod) {
    this->modulator = mod;
}

void LowPassFilter::setModAmount(float amount) {
    this->modAmount = amount;
}