#pragma once
#include <string>
#include "Field.hpp"
class Player
{

public:
//Konstruktor Player
    Player(std::string name, char coin); 
    virtual ~Player();               
//Virtuelle Funktion, die erst in den Unteren Klassen definiert wird     
    virtual void layCoin(Field field, int coloumn){} 

protected:
    const std::string m_Name;
    const char m_Coin;
};

