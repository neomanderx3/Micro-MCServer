#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
struct Player
{
    std::string name;
    short x, y, z;
    char heading, pitch;

    explicit Player(std::string player_name, short player_x, short player_y, short player_z, char player_heading, char player_pitch)
        : name(player_name),
        x(player_x),
        y(player_y),
        z(player_z),
        heading(player_heading),
        pitch(player_pitch)
    {}
};

#endif // PLAYER_HPP
