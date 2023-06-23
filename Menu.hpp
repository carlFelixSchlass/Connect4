#pragma once
#include "Player.hpp"
class Menu
{

private:
    
public:
//Starts the Game and returns the Number of Players
    static int StartMenu(); 
//Returns a Player. Which kind of Player is decided via Interaction
    static Player GeneratePlayer(); 
};
