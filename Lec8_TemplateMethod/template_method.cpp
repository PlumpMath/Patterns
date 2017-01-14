/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   14 Jan 2017
*/

#include <memory>

#include <Algorithm.hpp>
#include <ModifiedAlgorithm.hpp>

int main()
{
    std::shared_ptr<Algorithm> algorithm = std::make_shared<ModifiedAlgorithm>();

    algorithm->run();
}