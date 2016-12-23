/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   23 Dec 2016
*/

#include <AudioInterface.hpp>

#include <MIDI/NoMidi.hpp>
#include <MIDI/MidiPlayer.hpp>
#include <ASQ/NoAsq.hpp>
#include <ASQ/SimplestAsq.hpp>

#include <ctime>

int main()
{

    AudioInterface audioInterface;

    audioInterface.setAsq(std::unique_ptr<IAsqable>(new NoAsq));
    audioInterface.setMidi(std::unique_ptr<IMidiPlayable>(new NoMidi));

    audioInterface.playMidi();
    audioInterface.applyAsq();

    std::cout << std::endl << "Set other Midi and Asq:" << std::endl;

    audioInterface.setAsq(std::unique_ptr<IAsqable>(new SimplestAsq));
    audioInterface.setMidi(std::unique_ptr<IMidiPlayable>(new MidiPlayer));

    audioInterface.playMidi();
    audioInterface.applyAsq();

    std::cout << std::endl << "Set other Midi and Asq:" << std::endl;

    audioInterface.setAsq(std::unique_ptr<IAsqable>(new NoAsq));
    audioInterface.setMidi(std::unique_ptr<IMidiPlayable>(new MidiPlayer));

    clock_t start = clock();
    for (size_t i = 0; i < 10000; i++)
    {
        audioInterface.playMidi();
        audioInterface.applyAsq();
    }

    std::cout << std::endl << "Virtual version: " << std::endl;
    std::cout << (clock() - start) / double(CLOCKS_PER_SEC) / 1000.0 << " ms" << std::endl;

    return 0;
}
