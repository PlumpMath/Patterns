/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#pragma once 


#include "GUIFactory.hpp"

class MacGUIFactory : public GUIFactory {
public:
    std::shared_ptr<Button> createButton() override;

    std::shared_ptr<CheckBox> createCheckBox() override;

    std::shared_ptr<Window> createWindow() override;
};


