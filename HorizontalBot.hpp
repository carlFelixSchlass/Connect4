#pragma once
#include "Player.hpp"

class HorizontalBot : public Player
{
private:
    //const int horizontalColumn;

public:
//Lays coin into the field with Horizontal Algorithm
    void layCoin(Field& field);
//Constructs HorizontalBot (Same as player constructor) 
    HorizontalBot(std::string name, char coin);  
    ~HorizontalBot();
};