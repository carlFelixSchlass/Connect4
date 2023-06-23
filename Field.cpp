//
// Created by Carl Felix Schlass on 22.06.23.
//
#include "GuiField.hpp"
#include "Field.hpp"

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
    if (column < 0 || column >= COLUMN){
        return false;
    }

    // Checks if the field is free
    if ( field[0][column] == 'x' || field[0][column] == 'o'){
        return false;
    }
    return true;
}

bool Field::winCondition(char x){
    // check horizontal
    for(int i = 0; i < ROW; i++){

    }
    // check vertical

    // check diagonal LT -> RB

    // check diagonal RT -> LB
}



