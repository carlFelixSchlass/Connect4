#pragma once
#include "Player.hpp"
#include <string>

class VerticalBot : public Player
{

public:
//Lays coin into the field with Vertical Algorithm
    void layCoin(Field& field);
//Constructs VerticalBot (Same as player constructor) 
    VerticalBot(std::string name, char coin);  
    ~VerticalBot();
};