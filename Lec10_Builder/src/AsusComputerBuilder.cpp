/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include "AsusComputerBuilder.hpp"

void AsusComputerBuilder::buildMotherboard() {
    setComponent(mComputer.motherboard, "AsusTeK Motherboard");
}

void AsusComputerBuilder::buildCPU() {
    setComponent(mComputer.cpu, "Intel Core i7-6400k");
}

void AsusComputerBuilder::buildRAM() {
    setComponent(mComputer.ram, "Kingston 32GB");
}

void AsusComputerBuilder::buildHDD() {
    setComponent(mComputer.hdd, "Hitachi HDD 1TB");
}

void AsusComputerBuilder::buildCooler() {
    setComponent(mComputer.cooler, "Intel Box Cooler");
}

void AsusComputerBuilder::setComponent(std::string &str, const std::string &component) {
    if (str == "None") str = component;
    else str += " + " + component;
}
