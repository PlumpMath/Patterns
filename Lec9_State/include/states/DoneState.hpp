/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 


#include <IState.hpp>

class DoneState : public IState{
public:
    void chooseLocation() override;

    void acceptLicence() override;

    void install() override;

private:
    void printDone();
};

