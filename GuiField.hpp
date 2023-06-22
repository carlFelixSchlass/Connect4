//
// Created by Carl Felix Schlass on 22.06.23.
//

#pragma once
#include "Field.hpp"

const int ROW = 10;
const int COLUMN = 10;

class GuiField {
public:
    void fillField();
    const void printField();
private:
    int field[ROW][COLUMN];

};



