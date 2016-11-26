//
//  PresetWindow.hpp
//  Trio
//
//  Created by Matthias Pueski on 18.11.16.
//
//

#ifndef PresetWindow_hpp
#define PresetWindow_hpp

#include "../JuceLibraryCode/JuceHeader.h"
#include "Model.h"

class PresetWindow : public Component, public Button::Listener {
    
public:
    PresetWindow(ComboBox* presetBox, Model* model);
    ~PresetWindow();
    void paint (Graphics&) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void setData(ScopedPointer<XmlElement> xml);
    void visibilityChanged() override;
private:
    ScopedPointer<Label> label;
    ScopedPointer<TextButton> closeButton;
    ScopedPointer<TextButton> cancelButton;
    ScopedPointer<TextEditor> textEditor;
    ComboBox* presetBox;
    ScopedPointer<XmlElement> xml;
    Model* model;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PresetWindow)
    
};

#endif /* PresetWindow_hpp */

