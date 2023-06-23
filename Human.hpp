#pragma once
#include "Player.hpp"
#include <string>

class Human : public Player
{

public:
//Lays coin into the field with Human interaction
    void layCoin(Field& field);
//Constructs Human (Same as player constructor) 
    Human(std::string name, char coin);  
    ~Human();
};