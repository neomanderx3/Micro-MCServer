#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
struct Player
{
    std::string player_name;
    short x, y, z;
    char heading, pitch;

    explicit Player(std::string name, short my_x, short my_y, short my_z, short my_heading, char my_pitch)
      : player_name(name),
      x(my_x),
      y(my_y),
      z(my_z),
      heading(my_heading),
      pitch(my_pitch)
  {}
};

#endif // PLAYER_HPP
