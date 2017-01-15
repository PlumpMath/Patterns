/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 

#include <memory>
#include "IState.hpp"

class Installer {
    friend class AcceptLicenceState;
    friend class ChooseLocaltionState;
    friend class InstallState;

public:
    Installer();

    void chooseLocation();

    void acceptLicence();

    void install();

private:
    std::shared_ptr<IState> mState;
};

