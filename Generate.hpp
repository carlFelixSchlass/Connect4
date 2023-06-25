#pragma once
#include "Player.hpp"
#include <string>
class Generate
{

private:
    
public:
//Generates a Name for a Player via User Interaction
    static std::string generateName();
//Generates a Coin for a Player via User Interaction
    static char generateCoin();
// Generates a int for the type of player
    static int generatePlayerType();
};
