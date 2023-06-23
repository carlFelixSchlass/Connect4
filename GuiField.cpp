//
// Created by Carl Felix Schlass on 22.06.23.
//

#include "GuiField.hpp"
#include <iostream>
/*
 * void GuiField::fillField(){
    for (int i = 0; i <= ROW; i++){
        for (int j = 0; j < COLUMN; j++){
            field[i][j] = 0;
        }
    }
}
 */

void GuiField::printField(Field& field) {
    const std::vector<std::vector<char>>& GuiField = field.getField();

    // Print out the first line where the user can see numbers of the Columns
    for (int i = 1; i < COLUMN+1; i++){
        std::cout << "| " <<  i << " ";
    }
    std::cout << "|" << std::endl;

    // Print vertical line
    for (int i = 0; i < COLUMN; i++){
        std::cout << "____";
    }
    std::cout << "\n";

    // Print Gamefield
     for (int i = 0; i <= ROW; i++){
         for (int j = 0; j < COLUMN; j++){
             std::cout << "| "<< GuiField[i][j] << " ";
         }
         std::cout << "|\n";
     }
}