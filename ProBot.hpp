#pragma once
#include "Player.hpp"

class ProBot : public Player
{

public:
//Lays coin into the field with Pro Algorithm
    void layCoin(Field& field);
//Constructs ProBot (Same as player constructor) 
    ProBot(std::string name, char coin);  
    ~ProBot();
};