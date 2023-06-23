//
// Created by Carl Felix Schlass on 22.06.23.
//

#include "GuiField.hpp"
#include <iostream>

void GuiField::printField(Field& field) {
    const std::vector<std::vector<char>>& GuiField = field.getField();

    // Print out the first line where the user can see numbers of the Columns
    for (int i = 1; i < field.getColumn()+1; i++){
        std::cout << UNDERLINE;
        std::cout << "| " <<  i << " ";
    }
    std::cout << "|" << std::endl;
    std::cout << RESET;

    // Print Gamefield
     for (int i = 0; i <= field.getRow()-1; i++){
         for (int j = 0; j < field.getColumn(); j++){
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