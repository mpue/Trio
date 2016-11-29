/*
  ==============================================================================

    Sequencer.h
    Created: 29 Nov 2016 8:56:51pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef SEQUENCER_H_INCLUDED
#define SEQUENCER_H_INCLUDED

#include <vector>

#include "../JuceLibraryCode/JuceHeader.h"


using namespace std;

class Sequencer {
    
public:
    Sequencer();
    ~Sequencer();

    vector<int> getOffsets();
    vector<int> getVelocities();
    vector<bool> getSteps();
    
    void setPlaying(bool playing);
    bool isPlaying();
    void tick();
    void setRaster(int raster);
    int getRaster();
    int getCurrentStep();
    void setOctave(int octave);
    int getOctave();
    void setOffset(int step, int offset);
    int getOffset();
    void setStepEnabled(int step, bool enabled);
    bool isStepEnabled(int step);
    bool isCurrentStepEnabled();
    void setNumOctaves(int octaves);
    
private:
    vector<bool> steps;
    vector<int> offsets;
    vector<int> velocities;
    bool playing;
    int octave;
    int numOctaves = 1;
    int raster;
    int currentStep = 0;
    
    JUCE_LEAK_DETECTOR(Sequencer);
};



#endif  // SEQUENCER_H_INCLUDED
