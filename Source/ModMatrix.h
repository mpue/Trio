/*
  ==============================================================================

    ModMatrix.h
    Created: 10 Dec 2016 10:18:41am
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef MODMATRIX_H_INCLUDED
#define MODMATRIX_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

#include "Modulation.h"
#include <vector>
#include <map>
#include "Model.h"

using namespace std;

class ModMatrix {
  
public:
    ModMatrix(double sampleRate, Model* m);
    ~ModMatrix();
    
    void addModulation(Modulation* mod);
    vector<Modulation*> getModulations();
    
    void registerSource(String source, int id);
    void registerTarget(String target, int id);
    
    void process();
    
    map<int,String>* getSources();
    map<int,String>* getTargets();
    
    double getSampleRate();
    Model* getModel();
    
private:
    vector<Modulation*> modulations;
    
    map<int,String>* modSources;
    map<int,String>* modTargets;
    
    double sampleRate;
    Model* model;
};



#endif  // MODMATRIX_H_INCLUDED