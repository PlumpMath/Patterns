/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <iostream>
#include "states/DoneState.hpp"

void DoneState::chooseLocation() {
    printDone();
}

void DoneState::acceptLicence() {
    printDone();
}

void DoneState::install() {
    printDone();
}

void DoneState::printDone() {
    std::cout << "The software success installed!" << std::endl;
}
