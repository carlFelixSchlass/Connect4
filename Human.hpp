#pragma once
#include "Player.hpp"

class Human : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field field, int pos_x);
//Erstellt Human (Ruft nur Player Konstruktor auf) 
    Human(std::string name, char coin);  
    ~Human();
};


