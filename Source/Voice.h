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
#include "Modulator.h"
#include "Note.h"
#include "ADSR.h"

#include "../JuceLibraryCode/JuceHeader.h"

using namespace std;

class Voice {
    
public:
        
    Voice(float sampleRate);
    ~Voice();
    
    void setNote(Note* note);
    Note* getNote() const;
    
    void addOszillator(Oszillator* o);
    vector<Oszillator*> getOszillators() const;
    
    float process();
    
    void setNoteNumber(int number);
    int getNoteNumber() const;
    void setPitch(int number);
    int getPitch() const;
    void updateOscillator(int index);
    
    void setPlaying(bool playing);
    bool isPlaying() const;
    void setPending(bool pending);
    bool isPending() const;

    void setModulator(Modulator* modulator);
    
    ADSR* getAmpEnvelope();

    float getSampleRate();
    
private:
    vector<Oszillator*> oscillators;
    Note* note;
    float sampleRate;
    int noteNumber;
    int pitch;
    int velocity;
    double midiNote[128];
    void calculateFrequencyTable();
    bool playing;
    ADSR* ampEnvelope;
    Modulator* modulator;

    
};



#endif  // VOICE_H_INCLUDED
