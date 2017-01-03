/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   01 Jan 2017
*/

#include "Shell.hpp"

void Shell::addCommand(std::shared_ptr<ICommand> command) {
    mCommands.push_back(command);
}

void Shell::run() {
    for (auto & command : mCommands)
        command->execute();
    mCommands.clear();
}
