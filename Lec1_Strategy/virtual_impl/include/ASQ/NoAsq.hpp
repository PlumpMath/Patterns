/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#pragma once 

#include "IAsqable.hpp"

class NoAsq : public IAsqable {
public:
    void applyAsq() override;
};


