#include "Player.hpp"
#include <string>

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