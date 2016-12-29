/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   29 Dec 2016
*/

#pragma once 


#include "ILogger.hpp"

class SimplestLogger : public ILogger {
public:
    void log(const std::string &log) override;
};


