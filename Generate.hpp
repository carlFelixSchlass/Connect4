#pragma once
#include "Player.hpp"
#include <string>

#define UNDERLINE "\033[4m"     /* Unterstrichen */
#define RESET   "\033[0m"       /* Farbe zurücksetzen */

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
