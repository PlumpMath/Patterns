/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   01 Jan 2017
*/

#pragma once 

#include <memory>
#include <vector>

#include "ICommand.hpp"

class Shell {
public:
    void addCommand(std::shared_ptr<ICommand> command);
    void run();

private:
    std::vector<std::shared_ptr<ICommand>> mCommands;
};


