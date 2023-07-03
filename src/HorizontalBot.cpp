#include "HorizontalBot.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <random>

HorizontalBot::HorizontalBot(std::string name, char coin):
    Player(name, coin)
{
}

HorizontalBot::~HorizontalBot()
{

}
void HorizontalBot::layCoin(Field& field)
{
    int horizontalColumn = counter;
    counter++;

    std::cout << "Der Horizontal Bot wählt seinen Spielzug    ";

    for (int j = 0; j < 2; j++)
    {
        std::cout.flush();
        std::cout << "\b\b\b   \b\b\b";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout.flush();
        for (int i = 0; i < 3; i++)
        {
            std::cout << ".";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            std::cout.flush();
        }
    }

    field.layCoin(horizontalColumn, m_Coin);
}


