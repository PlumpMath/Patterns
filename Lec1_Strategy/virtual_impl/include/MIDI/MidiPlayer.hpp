/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#pragma once 


#include "IMidiPlayable.hpp"

class MidiPlayer : public IMidiPlayable {
public:
    void playMidi() override;
};


