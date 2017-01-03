/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include <cstdlib>
#include <iostream>
#include "PwdCommand.hpp"

void PwdCommand::execute() {
    std::cout << "RUN COMMAND: pwd" << std::endl;
    system("pwd");
}
