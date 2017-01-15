/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <iostream>
#include "Computer.hpp"

Computer::Computer() :
        cpu("None"), ram("None"), hdd("None"),
        cooler("None"), motherboard("None") { }

void Computer::printConfiguration() {
    std::cout << "<<<-----config start----->>>> "<< std::endl;
    std::cout << "cpu: " << cpu << std::endl;
    std::cout << "ram: " << ram << std::endl;
    std::cout << "hdd: " << hdd << std::endl;
    std::cout << "cooler: " << cooler << std::endl;
    std::cout << "motherboard: " << motherboard << std::endl;
    std::cout << "<<<-----config end----->>>> " << std::endl;
}
