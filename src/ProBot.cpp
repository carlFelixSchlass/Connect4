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
    field.layCoin(bestCol, m_Coin);
}

int ProBot::bestMove(Field &field, char coin1, char coin2)
{
    int move = 4;
    int count = 0;
    std::vector<std::vector<char>> board = field.getField();
    Field testfield;
    testfield = field;
    
    //Looks if board is empty and returns 4 if so
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
    //Looks for a possible Winner and either wins or prevents the other person from winning
    for(int j = 1; j <= field.getColumn(); j++)
    {
        if(field.validMove(j))
        {
            testfield.layCoin(j, coin1);
            if(testfield.winCondition(coin1))
            {
                move = j;
                return move;
            }
            testfield = field;
            testfield.layCoin(j, coin2);
            if(testfield.winCondition(coin2))
            {
                move = j;
                return move;
            }
            testfield = field;
         }
    }

    //Looks for two enemy coins next to each other to prevent three in a row with no borders
    for (int i = 0; i < field.getRow() ; i++)
    {
        for(int j = 1; j < field.getColumn()-2; j++)
        {
            if(board[i][j] == coin2 && board[i][j+1] == coin2)
            {
                if(field.validMove(j))      //logical j-1 but in the field functions it will be substrated by 1 
                {
                    move = j;
                    testfield = field;
                    if(testfield.validMove(move))
                    {
                        testfield.layCoin(move, coin1);
                        if(testfield.validMove(move))
                        {
                            testfield.layCoin(move, coin2);         //checks if this move would lead to a possibility for the other to win
                            if((testfield.winCondition(coin2)))
                            {
                                move = -1;
                            }
                        }
                    }
                    if(field.validMove(move))
                    {
                        return move;
                    }
                }
            }
        }
    }


    std::random_device rd;
    std::mt19937 generator(rd());
    int counter;

    //Makes a random valid move which doesnt make the other person win in the next turn
    do {
        std::uniform_int_distribution<int> distribution(1, field.getColumn());
        move = distribution(generator);
        
        testfield = field;
        if(testfield.validMove(move) && counter <= 100)
        {
            testfield.layCoin(move, coin1);
            if(testfield.validMove(move))
            {
                testfield.layCoin(move, coin2);
                if((testfield.winCondition(coin2)))
                {
                    move = -1;
                }
            }
        }
        counter++;
    } while (!(field.validMove(move)));

    return move;
}
