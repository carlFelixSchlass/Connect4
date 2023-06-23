#pragma once
#include "Player.hpp"

class ProBot : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field& field);
//Erstellt HorizontalBot (Ruft nur Player Konstruktor auf) 
    ProBot(std::string name, char coin);  
    ~ProBot();
};