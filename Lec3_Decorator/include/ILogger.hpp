/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   29 Dec 2016
*/

#pragma once 


#include <string>

class ILogger {
public:
    virtual void log(const std::string &log) = 0;
};


