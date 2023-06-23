#include "Human.hpp"
#include <iostream>

Human::Human(std::string name, char coin):
    Player(name, coin)
{
}

Human::~Human()
{

}
void Human::layCoin(Field& field)
{
    int f_column;
    std::cout << m_Name << ", wo wollen Sie ihren Stein setzen?" << std::endl << std::endl;
    std::cin >> f_column;
    field.setCoin(f_column, m_Coin);
}
