#pragma once
#include <string>
#include "Field.hpp"
class Player
{

public:
//Konstruktor Player
    Player(std::string name, bool colour); 
    virtual ~Player();               
//Virtuelle Funktion, die erst in den Unteren Klassen definiert wird     
    virtual void layCoin(Field field, int coloumn){} 

protected:
    const std::string m_Name;
    const bool m_Colour;
};

