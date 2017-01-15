/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <iostream>
#include <states/DoneState.hpp>
#include "states/InstallState.hpp"

InstallState::InstallState(Installer *installer)
        : mInstaller(installer) { }

void InstallState::chooseLocation() {
    std::cout << "Path already choose!" << std::endl;
}

void InstallState::acceptLicence() {
    std::cout << "Licence already accepted!" << std::endl;
}

void InstallState::install() {
    std::cout << "Installed" << std::endl;
    mInstaller->mState = std::make_shared<DoneState>();
}
