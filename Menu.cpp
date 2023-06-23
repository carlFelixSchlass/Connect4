#include "Menu.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"
#include <iostream>

int Menu::startMenu()
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

void Menu::GeneratePlayer(Player& playe_r)
{
    int ModeChoicePlayer = 0;
    std::string PlayerName;
    char PlayerCoin;

    do
    {

    std::cout << "Spieler wähle deinen Modus:" << std::endl << std::endl;
    std::cout << "Modus 1: Menschlicher Spieler" << std::endl;
    std::cout << "Modus 2: Horizontaler Bot" << std::endl;
    std::cout << "Modus 3: Vertikaler Bot" << std::endl;
    std::cout << "Modus 4: Random Bot" << std::endl;
    std::cout << "Modus 5: God Bot" << std::endl;
    std::cin >> ModeChoicePlayer;


    std::cout << "Gib deinen Namen ein!" << std::endl;
    std::cin >> PlayerName;

    std::cout << "Welches Zeichen willst du spielen?" << std::endl;
    std::cin >> PlayerCoin;

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