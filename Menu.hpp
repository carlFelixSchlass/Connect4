#pragma once
#include "Player.hpp"
class Menu
{

private:
    
public:
//Leitet das Spiel ein und gibt Anzahl der Spieler zurück
    static int StartMenu(); 
//Gibt einen Player zurück, dessen Art(Human/Bot) Abgefragt wurde
    static Player GeneratePlayer(); 
};
