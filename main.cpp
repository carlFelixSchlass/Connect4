#include <iostream>
#include "GuiField.hpp"
#include "Field.hpp"


int main() {
    //std::cout << "Hello, World!aaaa" << std::endl;
    //std::cout << "Willkommen zu unserem 4-Gewinnt Spiel!";
    //std::cout << "hallo";

    GuiField GUI;
    Field gameField;

    GUI.printField(gameField);

    for (int i = 0; i < 5; i++){
        gameField.layCoin(2, 'x');
    }

    for (int i = 0; i < 4; i++){
        gameField.layCoin(3, 'o');
    }

    for (int i = 0; i < 8; i++){
        gameField.layCoin(7, 'x');
    }

    for (int i = 0; i < 3; i++){
        gameField.layCoin(8, 'o');
    }

    for (int i = 0; i < 5; i++){
        gameField.layCoin(3, 'x');
        gameField.layCoin(4, 'x');
        gameField.layCoin(5, 'o');
    }

    for (int i = 0; i < 5; i++){
        gameField.layCoin(6, 'o');
    }

    GUI.printField(gameField);

    return 0;
}
