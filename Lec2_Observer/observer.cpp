#include <AudioPlayer.hpp>
#include <Network.hpp>
#include <AudioPlugin.hpp>
#include <iostream>

/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   24 Dec 2016
*/

int main()
{
    Network network;

    auto player = std::make_shared<AudioPlayer>();
    auto plugin = std::make_shared<AudioPlugin>();
    player->addObserver(plugin);
    network.addObserver(player);

    network.notifyAll();
    std::cout << std::endl;
    network.notifyAll();

    return 0;
}