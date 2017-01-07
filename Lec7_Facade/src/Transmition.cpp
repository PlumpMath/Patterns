/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   07 Jan 2017
*/

#include <iostream>
#include "Transmition.hpp"

void Transmission::upTransmission() {
    std::cout << "Transmission up: " << ++mCurrent << std::endl;
}

void Transmission::downTransmission() {
    std::cout << "Transmission down: " << --mCurrent << std::endl;
}
