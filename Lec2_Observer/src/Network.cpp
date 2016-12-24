/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#include "Network.hpp"

void Network::addObserver(std::shared_ptr<IObserver> observer) {
    mObservers.push_back(observer);
}

void Network::removeObserver(std::shared_ptr<IObserver> observer) {
    mObservers.remove(observer);
}

void Network::notifyAll() {
    for(auto &observer : mObservers)
        observer->update();
}
