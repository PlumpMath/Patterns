/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   29 Dec 2016
*/

#include <iostream>
#include "SimplestLogger.hpp"

void SimplestLogger::log(const std::string &log) {
    std::clog << log << std::endl;
}

