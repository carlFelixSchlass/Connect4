#include "Player.hpp"
#include "Human.hpp"
#include "Menu.hpp"
#include "HorizontalBot.hpp"
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

std::string Player::getName() {
    return m_Name;
}

Player* Player::generatePlayer() {
    countPlayer++;
    int type = Menu::generatePlayerType();
    char coin =  Menu::generateCoin();
    std::string name = Menu::generateName();


    if (type == 1){
        return new Human(name, coin);
    }
    //if (Menu::generatePlayerType() == 2){
    //    return new HorizontalBot(Menu::generateName(), Menu::generateCoin());
    //}
}