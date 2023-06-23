#pragma once
#include <string>
#include "Field.hpp"
class Player
{

public:
//Constructs Player with setting name and coin
    Player(std::string name, char coin); 
    virtual ~Player();               
//Virtual function, which differs from player to player
    virtual void layCoin(Field& field){}

protected:
    const std::string m_Name;
    const char m_Coin;
};

