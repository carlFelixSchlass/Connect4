#pragma once
#include "Player.hpp"
#include <string>
class Menu
{

private:
    
public:
//Starts the Game and returns the Number of Players
    static void startMenu(); 
//Generates a Name for a Player via User Interaction
    static std::string generateName();
//Generates a Coin for a Player via User Interaction
    static char generateCoin();
};
