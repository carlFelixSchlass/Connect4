#pragma once
#include "Player.hpp"

class Human : public Player
{

public:
    void Lay_Coin(Field field, int pos_x); //Benötigt Funktionen in Field die noch nicht existieren
    Human(std::string name, bool colour);  //Erstellt Human (Ruft nur Player Konstruktor auf)
    ~Human();
};


