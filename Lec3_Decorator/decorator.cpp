/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   27 Dec 2016
*/

#include <cstdlib>

#include <SimplestLogger.hpp>
#include <TimeDecorator.hpp>

int main()
{
    auto logger_with_time = std::make_shared<TimeDecorator>(
            std::make_shared<SimplestLogger>(
            ));

    logger_with_time->log("C++ the best!");

    return EXIT_SUCCESS;
}
