//
//  PresetWindow.cpp
//  Trio
//
//  Created by Matthias Pueski on 18.11.16.
//
//

#include "PresetWindow.h"

PresetWindow::PresetWindow(ComboBox* presetBox, Model* model) {
    
    this->presetBox = presetBox;
    this->model = model;
    Label* label = new Label("nameLabel","Enter a name");
    label->setBounds(50,50,200, 25);
    label->setColour(Label::textColourId, Colours::white);
    addAndMakeVisible(label);
    this->textEditor = new TextEditor("name");
    textEditor->setColour(TextEditor::backgroundColourId, Colours::white);
    textEditor->setColour(TextEditor::textColourId, Colours::black);
    textEditor->setBounds(150,50,200, 25);
    addAndMakeVisible(textEditor);
    closeButton = new TextButton("Save","Save");
    closeButton->addListener(this);
    closeButton->setBounds(100, 100,100,25);
    addAndMakeVisible(closeButton);
    cancelButton = new TextButton("Cancel","Cancel");
    cancelButton->addListener(this);
    cancelButton->setBounds(300, 100,100,25);
    addAndMakeVisible(cancelButton);

}

PresetWindow::~PresetWindow() {
    
}

void PresetWindow::resized() {
    
}

void PresetWindow::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void PresetWindow::buttonClicked (Button* buttonThatWasClicked) {
    if (buttonThatWasClicked == closeButton) {
        String presetName = this->textEditor->getTextValue().toString();
        String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
        String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";
        File preset = File(presetPath + presetName+".xml");
        xml.get()->writeToFile(preset,"");
        
        int itemId = 0;
        
        for (int i = 0; i < presetBox->getNumItems();i++) {
            if (presetBox->getItemId(i) > itemId) {
                itemId = presetBox->getItemId(i);
            }
        }
        
        itemId++;
        
        this->presetBox->addItem(presetName,itemId);
        this->presetBox->setSelectedId(itemId);
        
        xml = nullptr;
        setVisible(false);
    }
    else if (buttonThatWasClicked == cancelButton) {
        setVisible(false);
    }
}

void PresetWindow::setData(ScopedPointer<juce::XmlElement> xml) {
    this->xml = xml;
}