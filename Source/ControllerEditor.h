/*
  ==============================================================================

    ControllerEditor.h
    Created: 12 Dec 2016 9:55:23am
    Author:  pueskma

  ==============================================================================
*/

#ifndef CONTROLLEREDITOR_H_INCLUDED
#define CONTROLLEREDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControllerConfig.h"

#include <vector>

using namespace std;
//==============================================================================
/*
*/
class ControllerEditor    : public Component, public TableListBoxModel, public LabelListener {

public:
    ControllerEditor();
    ~ControllerEditor();

    void paint (Graphics&) override;
    void resized() override;
	virtual int getNumRows() override;
	virtual void paintRowBackground(Graphics &, int rowNumber, int width, int height, bool rowIsSelected) override;
	virtual void paintCell(Graphics &, int rowNumber, int columnId, int width, int height, bool rowIsSelected) override;
	virtual Component* refreshComponentForCell(int rowNumber, int columnId, bool isRowSelected, Component* existingComponentToUpdate) override;
	virtual void cellClicked(int rowNumber, int columnId, const MouseEvent&) override;
	virtual void labelTextChanged(Label* labelThatHasChanged) override;
	virtual void editorShown(Label*, TextEditor&) override;

private:

	ScopedPointer<TableListBox> controllerTable;

	vector<ControllerConfig*> configuration;
	ScopedPointer<Label> nameEditor = nullptr;
	ScopedPointer<Label> controllerEditor = nullptr;

	ScopedPointer<Component> originalNameEditor = nullptr;
	ScopedPointer<Component> originalControllerEditor = nullptr;

	int selectedColumn = 0;
	int selectedRow = 0;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControllerEditor)
};


#endif  // CONTROLLEREDITOR_H_INCLUDED
