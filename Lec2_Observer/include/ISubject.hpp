/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#pragma once 

#include "IObserver.hpp"
#import <memory>

class ISubject {
public:
    virtual void addObserver(std::shared_ptr<IObserver> observer) = 0;

    virtual void removeObserver(std::shared_ptr<IObserver> observer) = 0;

    virtual void notifyAll() = 0;
};


