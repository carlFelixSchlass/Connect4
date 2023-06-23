#pragma once
#include "Player.hpp"

class HorizontalBot : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field& field);
//Erstellt HorizontalBot (Ruft nur Player Konstruktor auf) 
    HorizontalBot(std::string name, char coin);  
    ~HorizontalBot();
};