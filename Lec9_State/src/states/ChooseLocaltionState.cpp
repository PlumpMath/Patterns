/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <iostream>
#include "states/AcceptLicenceState.hpp"
#include "states/ChooseLocaltionState.hpp"
#include "states/InstallState.hpp"

ChooseLocaltionState::ChooseLocaltionState(Installer *installer)
        : mInstaller(installer) { }

void ChooseLocaltionState::chooseLocation() {
    std::cout << "Choose path" << std::endl;
    mInstaller->mState = std::make_shared<InstallState>(mInstaller);
}

void ChooseLocaltionState::acceptLicence() {
    std::cout << "Licence already accepted!" << std::endl;
}

void ChooseLocaltionState::install() {
    std::cout << "Cannot install while path not choose!" << std::endl;
}
