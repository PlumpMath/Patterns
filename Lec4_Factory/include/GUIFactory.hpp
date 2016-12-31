/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#pragma once

#include <memory>

#include "Button.hpp"
#include "Window.hpp"
#include "CheckBox.hpp"

class GUIFactory {
public:
    virtual std::shared_ptr<Button> createButton() = 0;
    virtual std::shared_ptr<CheckBox> createCheckBox() = 0;
    virtual std::shared_ptr<Window> createWindow() = 0;
};


