#pragma once
#include "Player.hpp"
#include <string>

class Human : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field& field);
//Erstellt Human (Ruft nur Player Konstruktor auf) 
    Human(std::string name, char coin);  
    ~Human();
};