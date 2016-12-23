/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#pragma once 

#include <iostream>
#include <memory>

#include <ASQ/IAsqable.hpp>
#include <MIDI/IMidiPlayable.hpp>

class AudioInterface {
public:
    void playMidi(/*midi signal*/);
    void applyAsq(/*signal*/);

    void setAsq(std::unique_ptr<IAsqable> &&asq);
    void setMidi(std::unique_ptr<IMidiPlayable> &&midi);

protected:
    std::unique_ptr<IAsqable> mASQBehavior;
    std::unique_ptr<IMidiPlayable> mMidiBehavior;
};


