//
// Created by Carl Felix Schlass on 22.06.23.
//

#pragma once
#include <iostream>
#include <vector>

const int ROW = 8; // Zeile
const int COLUMN = 8; // Spalte
const char coin1 = 'x';
const char coin2 = 'o';

class Field {
public:
    Field(){
        field.resize(ROW, std::vector<char>(COLUMN, ' '));
    }
    // get Method with return of current gameField
    std::vector<std::vector<char>>& getField();

    // Sets a coin in the field
    // Parameters are the column where its set and the type of coin
    void setCoin(int column, char coin);

    // Checks if this move is valid
    // Used in setCoin to check the input
    bool validMove(int column);

    bool winCondition(char x);

private:
    std::vector<std::vector<char>> field;

};



