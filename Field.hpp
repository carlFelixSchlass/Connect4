//
// Created by Carl Felix Schlass on 22.06.23.
//

#pragma once
#include <iostream>
#include <vector>



class Field {
public:
    Field(){
        field.resize(ROW, std::vector<char>(COLUMN, ' '));
    }
    // getter for field
    std::vector<std::vector<char>>& getField();

    // getter for ROW & COLUMN
    const int getRow() const;
    const int getColumn() const;

    // Sets a coin in the field (already checks if valid move)
    void setCoin(int column, char coin);

    // Checks if this move is valid
    bool validMove(int column);

    // Looks for the wind condition (4 in a row)
    bool winCondition(char x);

private:
    std::vector<std::vector<char>> field;

    const int ROW = 10; // Zeile
    const int COLUMN = 10; // Spalte

};



