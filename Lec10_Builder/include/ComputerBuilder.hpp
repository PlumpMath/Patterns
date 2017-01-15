/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 


#include "Computer.hpp"

class ComputerBuilder {
public:
    virtual void buildMotherboard() = 0;
    virtual void buildCPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildHDD() = 0;
    virtual void buildCooler() = 0;
    Computer getComputer();

protected:
    Computer mComputer;
};

