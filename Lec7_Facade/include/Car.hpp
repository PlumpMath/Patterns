/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   07 Jan 2017
*/

#pragma once 

#include "Engine.hpp"
#include "Wheels.hpp"
#include "Transmition.hpp"

class Car {
public:
    void driveTo(int x, int y);

private:
    Engine mEngine;
    Wheels mWheels;
    Transmission mTransmission;
};


