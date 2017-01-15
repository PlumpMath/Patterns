/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include "Installer.hpp"
#include "states/AcceptLicenceState.hpp"

Installer::Installer() : mState(new AcceptLicenceState(this)) {
}

void Installer::chooseLocation() {
    mState->chooseLocation();
}

void Installer::acceptLicence() {
    mState->acceptLicence();
}

void Installer::install() {
    mState->install();
}
