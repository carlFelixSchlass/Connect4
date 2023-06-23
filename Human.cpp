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
    do
    {
        std::cout << std::endl << m_Name << ", wo wollen Sie ihren Stein setzen?" << std::endl
        << "Es gibt "<< field.getColumn() << " Spalten" << std::endl;
       
        std::cin >> f_column;

        if(!(field.validMove(f_column))) std::cout << "Ungültige Spalte!" << std::endl;

    } while (!(field.validMove(f_column)));

    field.layCoin(f_column, m_Coin);
    
}
