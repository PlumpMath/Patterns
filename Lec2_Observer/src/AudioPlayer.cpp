/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#include <iostream>
#include "AudioPlayer.hpp"

void AudioPlayer::update() {
    notifyAll();
    std::cout << "AudioPlayer play" << std::endl;
}

void AudioPlayer::addObserver(std::shared_ptr<IObserver> observer) {
    mObservers.push_back(observer);
}

void AudioPlayer::removeObserver(std::shared_ptr<IObserver> observer) {
    mObservers.remove(observer);
}

void AudioPlayer::notifyAll() {
    for(auto &observer : mObservers)
        observer->update();
}
