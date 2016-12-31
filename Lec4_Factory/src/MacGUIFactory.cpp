/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#include <MacButton.hpp>
#include <MacWindow.hpp>
#include <MacCheckBox.hpp>

#include "MacGUIFactory.hpp"

std::shared_ptr<Button> MacGUIFactory::createButton() {
    return std::make_shared<MacButton>();
}

std::shared_ptr<CheckBox> MacGUIFactory::createCheckBox() {
    return std::make_shared<MacCheckBox>();
}

std::shared_ptr<Window> MacGUIFactory::createWindow() {
    return std::make_shared<MacWindow>();
}
