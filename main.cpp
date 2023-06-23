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

    for (int i = 0; i < 8; i++){
        gameField.layCoin(1, 'x');
    }

    for (int i = 0; i < 8; i++){
        gameField.layCoin(6, 'o');
    }

    GUI.printField(gameField);

    return 0;
}
