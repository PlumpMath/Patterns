/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 


#include "ComputerBuilder.hpp"

class AsusComputerBuilder : public ComputerBuilder {
public:
    void buildMotherboard() override;

    void buildCPU() override;

    void buildRAM() override;

    void buildHDD() override;

    void buildCooler() override;

private:
    void setComponent(std::string &str, const std::string &component);
};

