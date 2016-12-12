/*
  ==============================================================================

    ModSlotConfig.h
    Created: 12 Dec 2016 6:45:21pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef MODSLOTCONFIG_H_INCLUDED
#define MODSLOTCONFIG_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class ModSlotConfig {
    
public:
	
	ModSlotConfig();
	ModSlotConfig(int sourceId, int targetId1, int targetId2);
	~ModSlotConfig();

	void setSourceId(int id);
	int getSourceId();

	void setTargetId1(int id);
	int getTargetId1();

	void setTargetId2(int id);
	int getTargetId2();

	ValueTree* getSlotConfig();

private:
	int sourceId;
	int targetId1;
	int targetId2;
    
	ScopedPointer<ValueTree> slotConfig;
};



#endif  // MODSLOTCONFIG_H_INCLUDED
