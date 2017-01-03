/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   01 Jan 2017
*/

#include <Shell.hpp>
#include <PwdCommand.hpp>
#include <LsCommand.hpp>

int main(int argc, char **argv)
{
    Shell shell;

    shell.addCommand(std::make_shared<PwdCommand>());
    shell.addCommand(std::make_shared<LsCommand>());

    shell.run();
}