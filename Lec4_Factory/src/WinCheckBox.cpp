/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#include <iostream>

#include "WinCheckBox.hpp"

void WinCheckBox::setState(bool state) {
    std::cout << "WinCheckBox::setState: " <<
              std::boolalpha << state << std::endl;
}
