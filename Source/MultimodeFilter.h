//
//  MultimodeFilter.hpp
//  Trio
//
//  Created by Matthias Pueski on 01.12.16.
//
//

#ifndef MultimodeFilter_hpp
#define MultimodeFilter_hpp

#include <stdio.h>
#include "Filter.h"
#include "LowPassFilter.h"
#include "HighPassFilter.h"

#include "../JuceLibraryCode/JuceHeader.h"

class MultimodeFilter : public Filter {

public:
    enum Mode {
        HIGHPASS,
        LOWPASS
    };
    
    MultimodeFilter();
    ~MultimodeFilter();
    
    virtual void coefficients(float frequency, float resonance) override;
    virtual void process(float *in, float *out,int numSamples) override;
    virtual void setModulator(Modulator* mod) override;
    virtual void setModAmount(float amount) override;
    void setMode(Mode mode);

private:
    ScopedPointer<LowPassFilter> filter1;
    ScopedPointer<HighPassFilter> filter2;
    Mode mode;
    JUCE_LEAK_DETECTOR(MultimodeFilter);
    
};

#endif /* MultimodeFilter_hpp */