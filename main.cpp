#include "Player.hpp"
#include <iostream>

int main()
{
    Player client = Player("Herschel");
    client.set_name("Herschel");
    client.set_position(1,2,3);
    client.set_orientation(4,5);
    std::cout << client.get_name() << client.get_x() << client.get_y() << client.get_z() << int(client.get_heading()) << int(client.get_pitch());
}
