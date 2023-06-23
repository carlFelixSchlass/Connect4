#pragma once
#include "Player.hpp"

class RandomBot : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field& field);
//Erstellt HorizontalBot (Ruft nur Player Konstruktor auf) 
    RandomBot(std::string name, char coin);  
    ~RandomBot();
};