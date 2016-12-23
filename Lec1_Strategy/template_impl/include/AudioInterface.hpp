/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#pragma once 

template <class ImplMidi, class ImplAsq>
class AudioInterface {
public:
    void playMidi(/*midi signal*/) {
        mMidiImpl.playMidi();
    }
    void applyAsq(/*signal*/) {
        mAsqImpl.applyAsq();
    }

protected:
    ImplAsq mAsqImpl;
    ImplMidi mMidiImpl;
};


