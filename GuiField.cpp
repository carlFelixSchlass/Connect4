//
// Created by Carl Felix Schlass on 22.06.23.
//

#include "GuiField.hpp"
#include <iostream>

void GuiField::fillField(){
    for (int i = 0; i <= ROW; i++){
        for (int j = 0; j < COLUMN; j++){
            field[i][j] = 0;
        }
    }
}

const void GuiField::printField() {

    for (int i = 1; i < COLUMN+1; i++){
        std::cout << "| " <<  i << " ";
    }
    std::cout << "|" << std::endl;

    //Print vertkal line
    for (int i = 0; i < COLUMN; i++){
        std::cout << "____";
    }
     for (int i = 0; i <= ROW; i++){
         std::cout << std::endl << "| ";
         for (int j = 0; j < COLUMN; j++){
             std::cout << field[i][j] << " | ";
         }
     }
}