/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

#include <AudioInterface.hpp>

#include <MIDI/NoMidi.hpp>
#include <MIDI/MidiPlayer.hpp>
#include <ASQ/NoAsq.hpp>
#include <ASQ/SimplestAsq.hpp>

#include <iostream>

#include <ctime>

int main()
{


    AudioInterface<NoMidi, NoAsq> audioInterface;

    audioInterface.playMidi();
    audioInterface.applyAsq();

    std::cout << std::endl << "Set other Midi and Asq:" << std::endl;

    AudioInterface<MidiPlayer, SimplestAsq> audioInterface2;

    audioInterface2.playMidi();
    audioInterface2.applyAsq();

    std::cout << std::endl << "Set other Midi and Asq:" << std::endl;

    AudioInterface<MidiPlayer, NoAsq> audioInterface3;

    clock_t start = clock();
    for (size_t i = 0; i < 10000; i++) {

        audioInterface3.playMidi();
        audioInterface3.applyAsq();
    }

    std::cout << std::endl << "Template version: " << std::endl;
    std::cout << (clock() - start) / double(CLOCKS_PER_SEC) / 1000.0 << " ms" << std::endl;

    return 0;
}