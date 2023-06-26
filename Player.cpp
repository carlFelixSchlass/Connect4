#include "Player.hpp"
#include "Human.hpp"
#include "Generate.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"
#include <string>
int Player::countPlayer = 0;

Player::Player(std::string name, char coin)
:m_Name(name), m_Coin(coin)
{
}

Player::Player()
:m_Name(""), m_Coin(' ')
{
}

Player::~Player()
{
}

std::string Player::getName() 
{
    return m_Name;
}

char Player::getCoin()
{
    return m_Coin;
}
//Player* Player::generatePlayer(std::string &playerName, char playerSymbol, int playerType) {

Player* Player::generatePlayer() {
    Player::countPlayer++;
    int type;

    do {
        type = Generate::generatePlayerType();
        if (type > 0 && type < 6) {
            break;
        } else {
            std::cout << RED << "Falsche Eingabe!" << RESET << std::endl;
        }
    } while (!(type > 0 && type < 6));

    char coin = Generate::generateCoin();
    std::string name = Generate::generateName();




    switch (type) {

        case 1: {
            return new Human(name, coin);
        }
        case 2: {
            return new HorizontalBot(name, coin);
        }
        case 3: {
            return new VerticalBot(name, coin);
        }
        case 4: {
            return new RandomBot(name, coin);
        }
        case 5: {
            return new ProBot(name, coin);
        }
    }
    return new Player(name, coin);

}


/*
 * do
    {

    type = Generate::generatePlayerType();
    switch (type)
    {
    case 1:
        {
            type = 0;
            return new Human(name, coin);
            break;
        }
    case 2:
        {
            type = 0;
            return new HorizontalBot(name, coin);
            break;
        }
    case 3:
        {
            type = 0;
            return new VerticalBot(name, coin);
            break;
        }
    case 4:
        {
            type = 0;
            return new RandomBot(name, coin);
            break;
        }
    case 5:
        {
            type = 0;
            return new ProBot(name, coin);
            break;
        }
    default:
        std::cout << std::endl << "Deine Auswahl ist keine der Möglichen, versuche es erneut" << std::endl;
        break;
    }

    } while (type > 0 && type < 6);
 */