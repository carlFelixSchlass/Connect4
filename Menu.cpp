#include "Menu.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"
#include <iostream>


std::string Menu::generateName()
{
    std::string PlayerName = "";
    std::cout << "Gib deinen Namen ein!" << std::endl;

    std::cin >> PlayerName;

    return PlayerName;
}

char Menu::generateCoin()
{
    char PlayerCoin;
    std::cout << "Welches Zeichen willst du spielen?" << std::endl;
    std::cin >> PlayerCoin;

    return PlayerCoin;
}

int Menu::generatePlayerType() {
    char playerType;
    std::cout << "Geben Sie den Typ ein, von dem der Player sein soll." << std::endl;
    std::cout << "Modus 1: Menschlicher Spieler" << std::endl;
    std::cout << "Modus 2: Horizontaler Bot" << std::endl;
    std::cout << "Modus 3: Vertikaler Bot" << std::endl;
    std::cout << "Modus 4: Random Bot" << std::endl;
    std::cout << "Modus 5: God Bot" << std::endl;
    std::cin >> playerType;

    return playerType;
}
/*
 * void Menu::GeneratePlayer()
{
    int ModeChoicePlayer = 0;

    do
    {

    std::cout << "Spieler wähle deinen Modus:" << std::endl << std::endl;
    std::cout << "Modus 1: Menschlicher Spieler" << std::endl;
    std::cout << "Modus 2: Horizontaler Bot" << std::endl;
    std::cout << "Modus 3: Vertikaler Bot" << std::endl;
    std::cout << "Modus 4: Random Bot" << std::endl;
    std::cout << "Modus 5: God Bot" << std::endl;
    std::cin >> ModeChoicePlayer;




    switch (ModeChoicePlayer)
    {
    case 1:
        {
            Human player(PlayerName, PlayerCoin);
            break;
        }
    case 2:
        {
            HorizontalBot player(PlayerName, PlayerCoin);
            //return player;
            break;
        }
    case 3:
        {
            VerticalBot player(PlayerName, PlayerCoin);
            //return player;
            break;
        }
    case 4:
        {
            RandomBot player(PlayerName, PlayerCoin);
            //return player;
            break;
        }
    case 5:
        {
            ProBot player(PlayerName, PlayerCoin);
            // return player;
            break;
        }
    default:
        break;
    }
    } while (0<ModeChoicePlayer<6);
}
 */