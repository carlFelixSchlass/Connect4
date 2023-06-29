#pragma once
#include "Player.hpp"

class ProBot : public Player
{

public:
//Lays coin into the field with Pro Algorithm
    void layCoin(Field& field);
    static int minimax(Field& field, std::vector<std::vector<char>>& board, int depth, bool isMaximizingPlayer, char maximizingPlayer, char minimizingPlayer, int ROWS, int COLS);
    static bool isBoardFull(const std::vector<std::vector<char>>& board, int ROWS, int COLS);
    static int evaluateBoard(const std::vector<std::vector<char>>& board, char player, int ROWS, int COLS);
    static bool boardWin(std::vector<std::vector<char>>& field, char x, int ROW, int COLUMN);
//Constructs ProBot (Same as player constructor) 
    ProBot(std::string name, char coin);  
    ~ProBot();
};