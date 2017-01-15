/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <memory>
#include <ComputerBuilder.hpp>
#include <AsusComputerBuilder.hpp>

int main()
{
    std::shared_ptr<ComputerBuilder> builder(new AsusComputerBuilder);

    builder->buildMotherboard();
    builder->buildCPU();
    builder->buildRAM();
    builder->buildHDD();

    builder->getComputer().printConfiguration();

    builder->buildHDD();
    builder->buildCooler();

    builder->getComputer().printConfiguration();

    return 0;
}