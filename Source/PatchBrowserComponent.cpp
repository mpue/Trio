/*
  ==============================================================================

    PatchBrowserComponent.cpp
    Created: 5 Dec 2016 10:05:14am
    Author:  pueskma

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "PatchBrowserComponent.h"

//==============================================================================
PatchBrowserComponent::PatchBrowserComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

    this->table = new TableListBox();
    setBounds(0, 0, 910, 600);
	table->setModel(this);
	table->getHeader().setVisible(false);
    table->setHeaderHeight(0);
	table->getHeader().addColumn("", 1, getWidth() / 4);
	table->getHeader().addColumn("", 2, getWidth() / 4);
	table->getHeader().addColumn("", 3, getWidth() / 4);
	table->getHeader().addColumn("", 4, getWidth() / 4);
	// table->getHeader().setBounds(0, 0, getWidth(), 0);
	addAndMakeVisible(table);
	table->updateContent();
    
    const Rectangle<int> rect = Rectangle<int>(0,0,910,600);
    table->setBounds(rect.reduced(40));
    table->setTopLeftPosition(table->getX(), 60);
    
	table->addKeyListener(this);
	table->setRowHeight(25);

	selectedColumn = 1;
	selectedRow = 0;

	table->selectRow(0);
    
    data = new StringArray();
    table->setOpaque(false);
    
    String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
    String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
    
    File presets = File(presetPath);
    
    if(presets.exists() && presets.isDirectory()) {
        ScopedPointer<DirectoryIterator> iter = new DirectoryIterator(presets, false);
        while(iter->next()) {
            addValue(iter->getFile().getFileNameWithoutExtension());
        }
        iter = nullptr;
    }
    
    table->updateContent();
    update();
    
}

PatchBrowserComponent::~PatchBrowserComponent()
{
	table = nullptr;
    data->clear();
    data = nullptr;
}

void PatchBrowserComponent::addValue(String value) {
    data->add(value);
}

void PatchBrowserComponent::update() {
    
    int index = (selectedColumn - 1) + (selectedRow * 4);
    
    if (index < data->size()) {
        this->selectedProgram = index;
        sendChangeMessage();
    }
    
    table->repaint();
    repaint();
}


void PatchBrowserComponent::paint (Graphics& g)
{
    // g.fillAll (Colours::black);   // clear the background
}

void PatchBrowserComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    
    const Rectangle<int> rect = getBounds().reduced(50);
	table->setBounds(rect);
	table->updateContent();
}

int PatchBrowserComponent::getNumRows()
{
	return 32;
}

void PatchBrowserComponent::paintRowBackground(Graphics &g, int rowNumber, int width, int height, bool rowIsSelected)
{
	/*
	if (rowIsSelected)
		g.fillAll(Colours::darkorange);
	else 
		g.fillAll(Colours::black);
	
     */
	// g.fillAll(Colours::transparentBlack);
}

void PatchBrowserComponent::paintCell(Graphics &g, int rowNumber, int columnId, int width, int height, bool rowIsSelected)
{

	if (rowIsSelected && columnId == selectedColumn) {
		g.setColour(Colours::darkorange);
	}
	else {
		// g.setColour(Colours::black);
        g.setColour(Colour::fromRGBA(0x5a, 0x5a,0x5a,0xff));
    }

	// g.setColour(Colours::black.withAlpha(0.2f));
	g.fillRect(0, 0, width, height);

	if (rowIsSelected && columnId == selectedColumn) {
		g.setColour(Colours::black);
	}
	else {
		g.setColour(Colours::darkorange);
	}

	g.setFont(14.0f);
    
    int index = (columnId - 1) + (rowNumber * 4);
        
    String value = "(empty)";
    
    if (index < data->size()) {
        value = data->getReference(index);
    }
    
	g.drawText(value, 2, 0, width - 4, height, Justification::centredLeft, true);
    
    g.setColour(Colours::darkorange);
    g.drawLine(width, 0, width, height);

}

void PatchBrowserComponent::cellClicked(int rowNumber, int columnId, const MouseEvent &e)
{
    selectedRow = rowNumber;
    selectedColumn = columnId;
    update();
    TableListBoxModel::cellClicked(rowNumber, columnId, e);
}

bool PatchBrowserComponent::keyPressed(const KeyPress & key, Component * originatingComponent)
{
	if (key == KeyPress::leftKey) {
		if (selectedColumn > 1) {
			selectedColumn--;
		}
        table->getViewport()->setViewPosition((selectedColumn - 1) * getWidth() / 4, table->getViewport()->getViewPositionY());
        update();
	}
	
	if (key == KeyPress::rightKey) {
		if (selectedColumn < table->getHeader().getNumColumns(false)) {
			selectedColumn++;
		}

		int colX  = table->getHeader().getColumnPosition(selectedColumn).getX();
		int viewPortWidth = table->getViewport()->getViewArea().getWidth();

		if (colX > viewPortWidth) {
			table->getViewport()->setViewPosition(table->getViewport()->getViewPositionX() + getWidth() / 4, table->getViewport()->getViewPositionY());
		}
        update();
	}

	if (key == KeyPress::downKey) {
		if (selectedRow < table->getModel()->getNumRows()) {
            selectedRow++;
		}
        update();
        return false;
	}

	if (key == KeyPress::upKey) {
		if (selectedRow > 0) {
            selectedRow--;
		}
        update();
        return false;
	}
	

	return true;
}

int PatchBrowserComponent::getSelectedProgram() {
    return this->selectedProgram;
}