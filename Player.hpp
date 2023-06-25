#pragma once
#include <string>
#include "Field.hpp"
class Player
{

public:
//Constructs Player with setting name and coin
    Player(std::string name, char coin);
    Player(); 
    virtual ~Player();               
//Virtual function, which differs from player to player
    virtual void layCoin(Field& field){}

    std::string getName();

    static Player* generatePlayer();

    static int countPlayer;

protected:
    const std::string m_Name;
    const char m_Coin;
};

