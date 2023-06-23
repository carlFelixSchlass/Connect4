#pragma once
#include "Player.hpp"
#include <string>

class VerticalBot : public Player
{

public:
//Benötigt Funktionen in Field die noch nicht existieren
    void layCoin(Field& field);
//Erstellt VerticalBot (Ruft nur Player Konstruktor auf) 
    VerticalBot(std::string name, char coin);  
    ~VerticalBot();
};