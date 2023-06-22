#pragma once
#include "Player.hpp"
class Menu
{

private:
    
public:
    int StartMenu(); //Leitet das Spiel ein und gibt Anzahl der Spieler zurück
    Player GeneratePlayer(); //Gibt einen Player zurück, dessen Art(Human/Bot) Abgefragt wurde
};
