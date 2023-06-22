#include <iostream>
#include "GuiField.hpp"

int main() {
    //std::cout << "Hello, World!aaaa" << std::endl;
    //std::cout << "Willkommen zu unserem 4-Gewinnt Spiel!";
    //std::cout << "hallo";

    GuiField GUI;

    GUI.fillField();
    GUI.printField();
    return 0;
}
