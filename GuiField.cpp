//
// Created by Carl Felix Schlass on 22.06.23.
//

#include "GuiField.hpp"
#include <iostream>

const void GuiField::printField() {
     for (int i = 0; i < 3; i++){
         for (int j = 0; j < 3; j++){
             std::cout << Field::gameField[][];
         }
     }
}