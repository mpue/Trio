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
	ModSlotConfig(int sourceId, int targetId1, int targetId2, float amount1, float amount2);
	~ModSlotConfig();

	void setSourceId(int id);
	int getSourceId();

	void setTargetId1(int id);
	int getTargetId1();

	void setTargetId2(int id);
	int getTargetId2();

	void setAmount1(float amount);
	float getAmount1();

	void setAmount2(float amount);
	float getAmount2();

	bool isSlotEnabled();
	void setEnabled(bool enabled);

	ValueTree* getSlotConfig();

private:
	int sourceId;
	int targetId1;
	int targetId2;
    
	float amount1 = 0;
	float amount2 = 0;

	bool enabled;

	ValueTree* slotConfig;
};



#endif  // MODSLOTCONFIG_H_INCLUDED
