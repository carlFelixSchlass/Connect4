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
    return 0;
}
