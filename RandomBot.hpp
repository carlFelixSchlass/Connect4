#pragma once
#include "Player.hpp"

class RandomBot : public Player
{

public:
//Lays coin into the field with Random Algorithm
    void layCoin(Field& field);
//Constructs RandomBot (Same as player constructor) 
    RandomBot(std::string name, char coin);  
    ~RandomBot();
};