#pragma once
#include <string>
class Player
{

public:
    Player(/* args */);
    virtual ~Player();
    virtual void Lay_Coin(/*Feld,*/int pos_x) = 0;

protected:
    std::string m_Name;
    bool m_Colour;
};

