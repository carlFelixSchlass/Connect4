#include "Generate.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"
#include <iostream>


std::string Generate::generateName()
{
    std::string PlayerName = "";
    std::cout << UNDERLINE << "Geb den Namen von Spieler " << Player::countPlayer << " ein!" << RESET << std::endl;

    std::cin >> PlayerName;

    return PlayerName;
}

char Generate::generateCoin()
{
    char PlayerCoin;
    std::cout << UNDERLINE <<"Welches Zeichen soll Spieler " << Player::countPlayer << " haben?" << RESET << std::endl;

    std::cin >> PlayerCoin;

    return PlayerCoin;
}

int Generate::generatePlayerType() {
    int playerType;
    std::cout << UNDERLINE << "Geben Sie den Typ ein, von dem der Player " << Player::countPlayer << " sein soll: " << RESET << std::endl;
    std::cout << "Modus 1: Menschlicher Spieler" << std::endl;
    std::cout << "Modus 2: Horizontaler Bot" << std::endl;
    std::cout << "Modus 3: Vertikaler Bot" << std::endl;
    std::cout << "Modus 4: Random Bot" << std::endl;
    std::cout << "Modus 5: Pro Bot" << std::endl;
    std::cin >> playerType;

    return playerType;
}
/*
 * void Generate::GeneratePlayer()
{
    int ModeChoicePlayer = 0;

    do
    {

    switch (type)
    switch (ModeChoicePlayer)
    {
    case 1:
        {
            return new Human(name, coin);
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
    } while (0<type<6);
}
 */