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


    field.layCoin(randomColumn, m_Coin);
}
