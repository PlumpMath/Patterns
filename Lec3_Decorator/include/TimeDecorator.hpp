/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   29 Dec 2016
*/

#pragma once 


#include "ILogger.hpp"

class TimeDecorator : public ILogger {
public:
    TimeDecorator(std::shared_ptr<ILogger> logger);

    void log(const std::string &log) override;

private:
    std::shared_ptr<ILogger> mLogger;
};


