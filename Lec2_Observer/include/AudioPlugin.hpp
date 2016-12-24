/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#pragma once 


#include "IObserver.hpp"

class AudioPlugin : public IObserver {
public:
    void update() override;
};


