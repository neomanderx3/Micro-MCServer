#include "Player.hpp"
#include <iostream>

int main()
{
    Player client = Player("Herschel", 200, 100, 50, 100, 32);
    client.player_name = "Bob";
    std::cout << client.player_name << client.x << client.y << client.z << int(client.heading) << int(client.pitch) << std::endl;
}
