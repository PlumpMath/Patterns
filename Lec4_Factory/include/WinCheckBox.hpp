/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#pragma once 


#include "CheckBox.hpp"

class WinCheckBox : public CheckBox {
public:
    void setState(bool state) override;
};


