/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 


#include "ICommand.hpp"

class PwdCommand : public ICommand {
public:
    void execute() override;
};


