#pragma once
#include <string>
#include "Field.hpp"
#define RED     "\033[31m"      /* Roter Text */
#define RESET   "\033[0m"       /* Farbe zurücksetzen */

class Player
{

public:
//Constructs Player with setting name and coin
    Player(std::string name, char coin);
    Player(); 
    virtual ~Player();               
//Virtual function, which differs from player to player
    virtual void layCoin(Field& field){}
//Getter for the Name
    std::string getName();
//Getter for the Coin
    char getCoin();
//Generates a Player with user Interaction
    static Player* generatePlayer();
//Static Int to count the Total Players
    static int countPlayer;
protected:
    const std::string m_Name;
    const char m_Coin;
};

 //    static Player* generatePlayer(std::string& playerName, char playerSymbol, int playerType);
