/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#include <AudioInterface.hpp>


void AudioInterface::playMidi()
{
    if (mMidiBehavior != nullptr)
        mMidiBehavior->playMidi();
}

void AudioInterface::applyAsq()
{
    if (mASQBehavior != nullptr)
        mASQBehavior->applyAsq();
}

void AudioInterface::setAsq(std::unique_ptr<IAsqable> &&asq) {
    mASQBehavior = std::move(asq);
}

void AudioInterface::setMidi(std::unique_ptr<IMidiPlayable> &&midi) {
    mMidiBehavior = std::move(midi);
}
