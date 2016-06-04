/*
  ==============================================================================

    Model.cpp
    Created: 4 Jun 2016 8:56:23pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Voice.h"
#include "Model.h"
#include "Oszillator.h"

#include <vector>

using namespace std;

Model::Model(Voice* voice) {
    this->voice = voice;
}

int Model::getOsc1Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc1Pitch(int pitch) {
    this->osc1Pitch = pitch;
    voice->getOszillators().at(0)->setPitch(pitch);
}