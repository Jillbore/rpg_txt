#ifndef ROOM_HPP
#define ROOM_HPP
#include <string>

class Room
{
    public:
        
    //std::string type;   // type of room: rocky, wooden, metallic, cave... 
    int x, y;           // defines where the room is
    int north, east, south, west; // defines directions player can move (1 or 0)
             
             
    //Room(std::string type, int x, int y, int north, int east, int south, int west)
    Room(int x, int y, int north, int east, int south, int west)
    {
        //this->type = type;
        this->x = x;
        this->y = y;
        this->north = north;
        this->east = east;
        this->south = south;
        this->west = west;
    }      
             
};

#endif /* ROOM_HPP */
             
             
