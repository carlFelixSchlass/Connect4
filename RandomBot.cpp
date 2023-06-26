#include "RandomBot.hpp"
#include <iostream>
#include <unistd.h>
#include <random>
#include <string>
#include <thread>


RandomBot::RandomBot(std::string name, char coin):
    Player(name, coin)
{
}

RandomBot::~RandomBot()
{

}
void RandomBot::layCoin(Field& field)
{
    int randomColumn = 0;
    std::random_device rd;
    std::mt19937 generator(rd());

    do {
        std::uniform_int_distribution<int> distribution(1, field.getColumn());
        randomColumn = distribution(generator);

    } while (!(field.validMove(randomColumn)));

    std::cout << "Der Random Bot wählt seinen Spielzug    ";

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

    field.layCoin(randomColumn, m_Coin);
}
