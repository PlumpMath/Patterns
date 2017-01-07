/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   07 Jan 2017
*/

#include <iostream>

#include "Car.hpp"

void Car::driveTo(int x, int y) {
    std::cout << "Car drive to " << x << ' ' << y << std::endl;

    mEngine.start();

    mTransmission.upTransmission();
    mTransmission.upTransmission();

    mWheels.turnTo(x, y);

    mTransmission.downTransmission();
    mTransmission.downTransmission();

    mEngine.stop();
}
