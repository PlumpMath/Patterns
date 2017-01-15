/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 

#include <IState.hpp>
#include <Installer.hpp>

class InstallState : public IState {
public:
    InstallState(Installer *installer);

    void chooseLocation() override;

    void acceptLicence() override;

    void install() override;

private:
    Installer *mInstaller;
};

