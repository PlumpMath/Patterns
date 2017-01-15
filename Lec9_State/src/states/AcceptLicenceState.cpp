/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <iostream>
#include "states/AcceptLicenceState.hpp"
#include "states/ChooseLocaltionState.hpp"

AcceptLicenceState::AcceptLicenceState(Installer *installer)
        : mInstaller(installer) { }

void AcceptLicenceState::chooseLocation() {
    std::cout << "Cannot choose while licence not accepted!" << std::endl;
}

void AcceptLicenceState::acceptLicence() {
    std::cout << "Licence accept" << std::endl;
    mInstaller->mState = std::make_shared<ChooseLocaltionState>(mInstaller);
}

void AcceptLicenceState::install() {
    std::cout << "Cannot install while path not choose!" << std::endl;
}
