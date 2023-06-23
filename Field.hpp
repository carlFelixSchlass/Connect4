//
// Created by Carl Felix Schlass on 22.06.23.
//

#pragma once
#include <iostream>
#include <vector>

const int ROW = 4; // Zeile
const int COLUMN = 6; // Spalte

class Field {
public:
    Field(){
        field.resize(ROW, std::vector<char>(COLUMN, ' '));

    }

    std::vector<std::vector<char>>& getField();
    void setCoin(int row);

private:
    std::vector<std::vector<char>> field;
};



