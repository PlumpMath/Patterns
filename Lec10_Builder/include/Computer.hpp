/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#pragma once 

#include <string>

struct Computer {
    Computer();

    std::string cpu;
    std::string ram;
    std::string hdd;
    std::string cooler;
    std::string motherboard;

    void printConfiguration();
};

