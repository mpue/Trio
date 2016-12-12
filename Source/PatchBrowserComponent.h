/*
  ==============================================================================

    PatchBrowserComponent.h
    Created: 5 Dec 2016 10:05:14am
    Author:  pueskma

  ==============================================================================
*/

#ifndef PATCHBROWSERCOMPONENT_H_INCLUDED
#define PATCHBROWSERCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class PatchBrowserComponent    : public Component, public TableListBoxModel, public KeyListener, public ChangeBroadcaster
{
public:
    PatchBrowserComponent();
    ~PatchBrowserComponent();

    void paint (Graphics&) override;
    void resized() override;
    void addValue(String data);
    void update();
    int getSelectedProgram();
    
private:

	ScopedPointer<TableListBox> table;

		// Geerbt über TableListBoxModel
	virtual int getNumRows() override;
	virtual void paintRowBackground(Graphics &, int rowNumber, int width, int height, bool rowIsSelected) override;
	virtual void paintCell(Graphics &, int rowNumber, int columnId, int width, int height, bool rowIsSelected) override;
	virtual void cellClicked(int rowNumber, int columnId, const MouseEvent&) override;	
	virtual bool keyPressed(const KeyPress& key, Component* originatingComponent) override;

	int selectedColumn = 0;
	int selectedRow = 0;
    int selectedProgram = 0;
    
    ScopedPointer<StringArray> data;
    
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PatchBrowserComponent)
};


#endif  // PATCHBROWSERCOMPONENT_H_INCLUDED
