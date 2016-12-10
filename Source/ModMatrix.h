/*
  ==============================================================================

    ModMatrix.h
    Created: 10 Dec 2016 10:18:41am
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef MODMATRIX_H_INCLUDED
#define MODMATRIX_H_INCLUDED

#include "Modulation.h"
#include <vector>

using namespace std;

class ModMatrix {
  
public:
    ModMatrix();
    ~ModMatrix();
    
    void addModulation(Modulation* mod);
    vector<Modulation*> getModulations();
    
    void process();
    
private:
    vector<Modulation*> modulations;
    
    
};



#endif  // MODMATRIX_H_INCLUDED
