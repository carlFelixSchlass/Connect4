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

    for (int i = 0; i < 20; i++){
        gameField.setCoin(1, 'x');
    }

    GUI.printField(gameField);

    return 0;
}
