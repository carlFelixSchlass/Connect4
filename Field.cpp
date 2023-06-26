//
// Created by Carl Felix Schlass on 22.06.23.
//
#include "GuiField.hpp"
#include "Field.hpp"
#include "Game.hpp"

//getter
std::vector<std::vector<char>>& Field::getField() {
    return field;
}
const int Field::getRow() const {
    return ROW;
}
const int Field::getColumn() const {
    return COLUMN;
}

void Field::layCoin(int column, char coin) {
    column -= 1;

    // Check if column is a valid place to set the coin
    // Error output if not
    if (!validMove(column)) {
        std::cout << "Ungültiger Zug! Bitte wählen sie eine andere Spalte!" << std::endl;
        return;
    }

    // Set the coin in a free space
    int row = ROW -1;
    while (row >= 0 && field[row][column] != ' ' ) {
        row--; // Go up until there is a free spot
    }

    field[row][column] = coin;

    // If its human vs. human the gamefield has to be shown after every set
    //GuiField::printField(field)
}

bool Field::validMove(int column) {
    // Check if column is a valid place to set a Coin
    // Checks if column is >0 and not > than max Column of field
    if (column < 0 || column > COLUMN){
        return false;
    }

    // Checks if the field is free
    if ( field[0][column - 1] == 'x' || field[0][column - 1] == 'o'){
        return false;
    }
    return true;
}

bool Field::winCondition(char x){
    // check horizontal
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN - 4; j++){
            if (field[i][j] == x &&
                field[i][j + 1] == x &&
                field[i][j + 2] == x &&
                field[i][j + 3] == x){
                return true;
            }
        }
    }

    // check vertical
    for(int i = 0; i <= ROW - 4; i++){
        for (int j = 0; j < COLUMN; j++){
            if (field[i][j] == x &&
                field[i + 1][j] == x &&
                field[i + 2][j] == x &&
                field[i + 3][j] == x){
                return true;
            }
        }
    }

    // check diagonal LT -> RB
    for(int i = ROW-1; i >= 3; i--){
        for (int j = 0; j <= COLUMN - 4; j++){
            if (field[i][j] == x &&
                field[i - 1][j + 1] == x &&
                field[i - 2][j + 2] == x &&
                field[i - 3][j + 3] == x){
                return true;
            }
        }
    }

    // check diagonal RT -> LB
    for(int i = 0; i <= ROW - 4; i++){
        for (int j = 0; j <= COLUMN - 4; j++){
            if (field[i][j] == x &&
                field[i + 1][j + 1] == x &&
                field[i + 2][j + 2] == x &&
                field[i + 3][j + 3] == x){
                return true;
            }
        }
    }

    return false;
}


