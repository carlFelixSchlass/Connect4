#include "Menu.hpp"
#include "Player.hpp"
#include <iostream>

int Menu::StartMenu()
{
    std::cout << "Das ist das geilste Game überhaupt" << std::endl;
    std::cout << "Wie viele Spieler wollen spielen?" << std::endl << std::endl;

    int PlayerNumber = 0;

    while(1)
    {
    std::cin >> PlayerNumber;

    if(PlayerNumber > 1)
    {
        return PlayerNumber;
    } 
    else
    {
        std::cout << "Spielerzahl ist ungültig, Versuche es nochmal" << std::endl;
    }

    }
  
}

Player Menu::GeneratePlayer()
{
    std::cout << "Spieler Eins wähle deinen Modus:" << std::endl << std::endl;
    std::cout << "Modus 1: Menschlicher Spieler" << std::endl;
    std::cout << "Modus 2: Horizontaler Bot" << std::endl;
    std::cout << "Modus 3: Vertikaler Bot" << std::endl;
    std::cout << "Modus 4: Random Bot" << std::endl;
    std::cout << "Modus 5: God Bot" << std::endl;

    int ModeChoicePlayer = 0;
    std::cin >> ModeChoicePlayer;

    switch (ModeChoicePlayer)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        break;
    }
}