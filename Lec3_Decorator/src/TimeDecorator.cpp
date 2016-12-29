/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   29 Dec 2016
*/

#include <iostream>
#include <chrono>
#include "TimeDecorator.hpp"

TimeDecorator::TimeDecorator(std::shared_ptr<ILogger> logger) : mLogger (logger) { }

void TimeDecorator::log(const std::string &log) {
    auto now = std::chrono::system_clock::now();
    std::time_t ttp = std::chrono::system_clock::to_time_t(now);
    std::string time = std::ctime(&ttp);
    std::clog << time.substr(0, time.size() - 1) << ": ";
    mLogger->log(log);
}
