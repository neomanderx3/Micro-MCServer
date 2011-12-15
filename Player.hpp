#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED
#include <string>
class Player
{
    std::string player_name;
    short x, y, z;
    char heading, pitch;

    public:
        Player(std::string name);

        std::string get_name();
        void set_name(std::string new_name);

        short get_x();
        short get_y();
        short get_z();
        void set_position(short new_x, short new_y, short new_z);

        char get_heading();
        char get_pitch();
        void set_orientation(char new_heading, char new_pitch);
};


#endif // PLAYER_HPP_INCLUDED
