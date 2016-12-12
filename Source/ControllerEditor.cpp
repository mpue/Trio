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

	controllerTable->getHeader().addColumn("#", 1, getWidth() / 16);
	controllerTable->getHeader().addColumn("Controller", 2, (getWidth() / 16) * 14);
	controllerTable->getHeader().addColumn("Value", 3, (getWidth() / 16));

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
	configuration.push_back(new ControllerConfig(5, "Mod env 1 attack", 43));
	configuration.push_back(new ControllerConfig(6, "Mod env 1 decay", 44));
	configuration.push_back(new ControllerConfig(7, "Mod env 1 sustain", 45));
	configuration.push_back(new ControllerConfig(8, "Mod env 1 release", 46));
	configuration.push_back(new ControllerConfig(9, "Mod env 2 attack", 47));
	configuration.push_back(new ControllerConfig(10, "Mod env 2 decay", 48));
	configuration.push_back(new ControllerConfig(11, "Mod env 2 sustain", 49));
	configuration.push_back(new ControllerConfig(12, "Mod env 2 release", 50));
	configuration.push_back(new ControllerConfig(13, "Mod env 3 attack", 51));
	configuration.push_back(new ControllerConfig(14, "Mod env 3 decay", 52));
	configuration.push_back(new ControllerConfig(15, "Mod env 3 sustain", 53));
	configuration.push_back(new ControllerConfig(16, "Mod env 3 release", 54));
	configuration.push_back(new ControllerConfig(17, "Amp env attack", 55));
	configuration.push_back(new ControllerConfig(18, "Amp env decay", 56));
	configuration.push_back(new ControllerConfig(19, "Amp env sustain", 57));
	configuration.push_back(new ControllerConfig(20, "Amp env release", 58));
	configuration.push_back(new ControllerConfig(21, "LFO 1 rate", 59));
	configuration.push_back(new ControllerConfig(22, "LFO 2 rate", 60));
	configuration.push_back(new ControllerConfig(23, "Osc 1 pitch", 61));
	configuration.push_back(new ControllerConfig(24, "Osc 2 pitch", 62));
	configuration.push_back(new ControllerConfig(25, "Osc 3 pitch", 63));
	configuration.push_back(new ControllerConfig(26, "Osc 1 fine", 64));
	configuration.push_back(new ControllerConfig(27, "Osc 2 fine", 65));
	configuration.push_back(new ControllerConfig(28, "Osc 3 fine", 66));
	configuration.push_back(new ControllerConfig(29, "Osc 1 volume", 67));
	configuration.push_back(new ControllerConfig(30, "Osc 2 volume", 68));
	configuration.push_back(new ControllerConfig(31, "Osc 3 volume", 69));

}

ControllerEditor::~ControllerEditor()
{
	for (std::vector<ScopedPointer<ControllerConfig>>::iterator it = configuration.begin();it != configuration.end();it++) {
        *it = nullptr;
	}

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

			nameEditor->setColour(Label::backgroundColourId, Colours::darkorange);
			nameEditor->setColour(Label::textColourId, Colours::black);
			nameEditor->setEditable(false, true, false);

			nameEditor->setText(configuration.at(rowNumber)->name, juce::NotificationType::dontSendNotification);
			return nameEditor;
		}
		else {
			return originalNameEditor;
		}

	}
	else if (columnId == 3) {
		if (isRowSelected) {

			controllerEditor = static_cast<Label*>(existingComponentToUpdate);

			if (controllerEditor == nullptr) {
				originalControllerEditor = existingComponentToUpdate;
				controllerEditor = new Label();
				controllerEditor->addListener(this);
			}
			
			controllerEditor->setColour(Label::backgroundColourId, Colours::darkorange);
			controllerEditor->setColour(Label::textColourId, Colours::black);
			controllerEditor->setEditable(false, true, false);

			controllerEditor->setText(String(configuration.at(rowNumber)->controller), juce::NotificationType::dontSendNotification);
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
	else if (selectedColumn == 3) {
		configuration.at(selectedRow)->controller = labelThatHasChanged->getText().getIntValue();
		controllerTable->updateContent();
	}
	
}

void ControllerEditor::editorShown(Label* l, TextEditor &t)
{
	t.setColour(TextEditor::textColourId, Colours::darkorange);
	t.setColour(TextEditor::backgroundColourId, Colours::black);
}
