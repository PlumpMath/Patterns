/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#include <WinButton.hpp>
#include <WinWindow.hpp>
#include <WinCheckBox.hpp>

#include "WinGUIFactory.hpp"

std::shared_ptr<Button> WinGUIFactory::createButton() {
    return std::make_shared<WinButton>();
}

std::shared_ptr<CheckBox> WinGUIFactory::createCheckBox() {
    return std::make_shared<WinCheckBox>();
}

std::shared_ptr<Window> WinGUIFactory::createWindow() {
    return std::make_shared<WinWindow>();
}
