/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 


class IState {
public:
    virtual void chooseLocation() = 0;

    virtual void acceptLicence() = 0;

    virtual void install() = 0;
};

