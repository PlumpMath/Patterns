/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#include <iostream>

#include "MacCheckBox.hpp"

void MacCheckBox::setState(bool state) {
    std::cout << "MacCheckBox::setState: " <<
              std::boolalpha << state << std::endl;
}
