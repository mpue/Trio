/*
  ==============================================================================

    Voice.h
    Created: 4 Jun 2016 6:53:13pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef VOICE_H_INCLUDED
#define VOICE_H_INCLUDED

#include <vector>

#include "Oszillator.h"
#include "Sawtooth.h"
#include "Note.h"

using namespace std;

class Voice {
    
public:
    
    Voice();
    ~Voice();
    
    void setNote(Note* note);
    Note* getNote() const;
    
    void addOszillator(Oszillator* o);
    vector<Oszillator*> getOszillators() const;
    
    float process();
    
private:
    vector<Oszillator*> oscillators;
    Note* note;
    float midiNote[128];
    void calculateFrequencyTable();
    
};



#endif  // VOICE_H_INCLUDED
