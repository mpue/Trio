/*
  ==============================================================================

    ControllerEditor.cpp
    Created: 12 Dec 2016 9:55:24am
    Author:  pueskma

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControllerEditor.h"

//==============================================================================
ControllerEditor::ControllerEditor()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

	this->controllerTable = new TableListBox();
	controllerTable->setModel(this);

	this->controllerTable->setBounds(0, 0, 910, 600);
	setBounds(0, 0, 910, 600);

	controllerTable->getHeader().addColumn("#", 1, getWidth() / 5);
	controllerTable->getHeader().addColumn("Controller", 2, (getWidth() / 5) * 3);
	controllerTable->getHeader().addColumn("Value", 3, getWidth() / 5);

	addAndMakeVisible(controllerTable);
	controllerTable->updateContent();
	controllerTable->setRowHeight(25);
	controllerTable->selectRow(0);
	controllerTable->setOpaque(false);
	controllerTable->updateContent();

	configuration.push_back(new ControllerConfig(1, "Pitch bend", 1));
	configuration.push_back(new ControllerConfig(2, "Volume",7));
	configuration.push_back(new ControllerConfig(3, "Filter cutoff", 42));
	configuration.push_back(new ControllerConfig(4, "Filter reso", 43));
	configuration.push_back(new ControllerConfig(5, "Mod env attack", 43));
	configuration.push_back(new ControllerConfig(6, "Mod env decay", 44));
	configuration.push_back(new ControllerConfig(7, "Mod env sustain", 45));
	configuration.push_back(new ControllerConfig(8, "Mod env release", 46));
	configuration.push_back(new ControllerConfig(9, "Amp env attack", 47));
	configuration.push_back(new ControllerConfig(10, "Amp env decay", 48));
	configuration.push_back(new ControllerConfig(11, "Amp env sustain", 49));
	configuration.push_back(new ControllerConfig(12, "Amp env release", 50));
	configuration.push_back(new ControllerConfig(13, "LFO 1 rate", 51));
	configuration.push_back(new ControllerConfig(14, "LFO 2 rate", 52));
}

ControllerEditor::~ControllerEditor()
{
}

void ControllerEditor::paint (Graphics& g)
{

}

void ControllerEditor::resized()
{
	this->controllerTable->setBounds(0, 0, getWidth(), getHeight());
}

int ControllerEditor::getNumRows()
{
	return configuration.size();
}

void ControllerEditor::paintRowBackground(Graphics &, int rowNumber, int width, int height, bool rowIsSelected)
{
}

void ControllerEditor::paintCell(Graphics &g, int rowNumber, int columnId, int width, int height, bool rowIsSelected)
{
	if (rowIsSelected) {
		g.setColour(Colours::darkorange);
	}
	else {
		g.setColour(Colour::fromRGBA(0x5a, 0x5a, 0x5a, 0xff));
	}

	// g.setColour(Colours::black.withAlpha(0.2f));
	g.fillRect(0, 0, width, height);

	if (rowIsSelected) {
		g.setColour(Colours::black);
	}
	else {
		g.setColour(Colours::darkorange);
	}

	g.setFont(14.0f);

	int index = (columnId - 1) + (rowNumber * 4);

	String value = "(not assigned)";

	if (rowNumber < configuration.size()) {

		if (columnId == 1) {
			value = String(configuration.at(rowNumber)->index);
		}
		else if (columnId == 2) {
			value = configuration.at(rowNumber)->name;
		}
		else if (columnId == 3) {
			value = String(configuration.at(rowNumber)->controller);
		}

	}

	g.drawText(value, 2, 0, width - 4, height, Justification::centredLeft, true);

	g.setColour(Colours::darkorange);
	g.drawLine(width, 0, width, height);
}

Component* ControllerEditor::refreshComponentForCell(int rowNumber, int columnId, bool isRowSelected, Component* existingComponentToUpdate) {

	 if (columnId == 2) {

		if (isRowSelected) {
			nameEditor = static_cast<Label*>(existingComponentToUpdate);
			
			if (nameEditor == nullptr) {
				originalNameEditor = existingComponentToUpdate;
				nameEditor = new Label();
				nameEditor->addListener(this);
			}

			nameEditor->setColour(Label::backgroundColourId, Colours::black);
			nameEditor->setColour(Label::textColourId, Colours::darkorange);
			nameEditor->setEditable(false, true, false);

			nameEditor->setText(configuration.at(rowNumber)->name, juce::NotificationType::dontSendNotification);
			return nameEditor;
		}
		else {
			return originalNameEditor;
		}

	}
	else if (columnId == 3) {
		if (isRowSelected && columnId == selectedColumn) {

			controllerEditor = static_cast<TextEditor*>(existingComponentToUpdate);

			if (controllerEditor == nullptr) {
				originalControllerEditor = existingComponentToUpdate;
				controllerEditor = new TextEditor();
			}
			
			controllerEditor->setText(String(configuration.at(rowNumber)->controller));
			return controllerEditor;
		}
		else {
			return originalControllerEditor;
		}
	}

	return existingComponentToUpdate;
}

void ControllerEditor::cellClicked(int rowNumber, int columnId, const MouseEvent &) {
	selectedColumn = columnId;
	selectedRow = rowNumber;
}

void ControllerEditor::labelTextChanged(Label * labelThatHasChanged)
{
	if (selectedColumn == 2) {
		configuration.at(selectedRow)->name = labelThatHasChanged->getText();
		controllerTable->updateContent();
	}
	
}

void ControllerEditor::editorShown(Label* l, TextEditor &t)
{
	t.setColour(TextEditor::textColourId, Colours::darkorange);
}
