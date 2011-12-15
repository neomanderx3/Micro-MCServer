#include "Player.hpp"

Player::Player(std::string name)
: player_name(name)
{}

void Player::set_name(std::string new_name)
{
    player_name = new_name;
}

std::string Player::get_name()
{
    return player_name;
}

void Player::set_orientation(char new_heading, char new_pitch)
{
    heading = new_heading;
    pitch = new_pitch;
}

char Player::get_heading()
{
    return heading;
}

char Player::get_pitch()
{
    return pitch;
}

void Player::set_position(short new_x, short new_y, short new_z)
{
    x = new_x;
    y = new_y;
    z = new_z;
}

short Player::get_x()
{
    return x;
}

short Player::get_y()
{
    return y;
}

short Player::get_z()
{
    return z;
}
