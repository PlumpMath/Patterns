/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#pragma once 

#include <list>
#include "ISubject.hpp"

class AudioPlayer : public IObserver, ISubject {
public:
    void update() override;
    
    void addObserver(std::shared_ptr<IObserver> observer) override;

    void removeObserver(std::shared_ptr<IObserver> observer) override;

    void notifyAll() override;

private:
    std::list<std::shared_ptr<IObserver>> mObservers;
};


