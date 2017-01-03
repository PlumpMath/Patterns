/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include <cstdlib>
#include <iostream>
#include "LsCommand.hpp"

void LsCommand::execute() {
    std::cout << "RUN COMMAND: ls" << std::endl;
    system("ls");
}
