#include "ProBot.hpp"
#include "Field.hpp"
#include <iostream>
#include <string>
#include <random>



ProBot::ProBot(std::string name, char coin):
    Player(name, coin)
{
}

ProBot::~ProBot()
{

}
void ProBot::layCoin(Field& field)
{
    int rows = field.getRow();
    int cols = field.getColumn();
    char player2 = 'y';
    std::vector<std::vector<char>> board = field.getField();

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(board[i][j] != ' ' && board[i][j] != m_Coin)
            {
                player2 = board[i][j];
            }
        }
    }

    int bestCol = ProBot::bestMove(field, m_Coin, player2);
;
    field.layCoin(bestCol, m_Coin);
}

int ProBot::bestMove(Field &field, char coin1, char coin2)
{
    int move = 4;
    int count = 0;
    std::vector<std::vector<char>> board = field.getField();
    Field testfield = field;

    for (int i = 0; i < field.getRow(); i++)
    {
        for(int j = 0; j < field.getColumn(); j++)
        {
            if(board[i][j] != ' ')
            {
                count++;
            }
        }
    }
    if(count == 0)
    {
        return move;
    }
    for(int j = 1; j <= field.getColumn(); j++)
    {
        if(testfield.validMove(j))
        {
            testfield.layCoin(j, coin1);
        }
        else
        {
            break;
        }
        if(testfield.winCondition(coin1))
        {
            move = j;
            return move;
        }
        testfield = field;
        testfield.layCoin(j, coin2);
        if(field.winCondition(coin2))
        {
            move = j;
            return move;
        }
        testfield = field;
    }
    
    std::random_device rd;
    std::mt19937 generator(rd());

    do {
        std::uniform_int_distribution<int> distribution(1, field.getColumn());
        move = distribution(generator);
        testfield = field;
        testfield.layCoin(move, coin1);
        testfield.layCoin(move, coin2);
        if(testfield.winCondition(coin2))
            {
                move = -1;
            }
    } while (!(field.validMove(move)));

    return move;
}
