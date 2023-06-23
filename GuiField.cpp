//
// Created by Carl Felix Schlass on 22.06.23.
//

#include "GuiField.hpp"
#include <iostream>

void GuiField::printField(Field& field) {
    //std::cout << BLUE << "Blauer" << GREEN "Grüner" << std::endl;

    const std::vector<std::vector<char>>& GuiField = field.getField();

    // Print out the first line where the user can see numbers of the Columns
    for (int i = 1; i < COLUMN+1; i++){
        std::cout << "| " <<  i << " ";
    }
    std::cout << "|" << std::endl;

    // Print vertical line
    for (int i = 0; i < COLUMN; i++){
        std::cout << "----";
    }
    std::cout << "\n";

    // Print Gamefield
     for (int i = 0; i <= ROW-1; i++){
         for (int j = 0; j < COLUMN; j++){
             std::cout << "| ";
             if(GuiField[i][j] == 'x'){
                 std::cout << BLUE << GuiField[i][j] << " ";
                 std::cout << RESET;
             }
             else if (GuiField[i][j] == 'o'){
                 std::cout << GREEN << GuiField[i][j] << " ";
                 std::cout << RESET;
             }
             else {
                 std::cout << "  ";
             }
         }
         std::cout << "|\n";
     }
}