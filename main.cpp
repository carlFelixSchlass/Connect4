#include <iostream>
#include "GuiField.hpp"
#include "Field.hpp"


int main() {
    //std::cout << "Hello, World!aaaa" << std::endl;
    //std::cout << "Willkommen zu unserem 4-Gewinnt Spiel!";
    //std::cout << "hallo";

    GuiField GUI;
    Field gameField;

    for (int i = 0; i < 8; i++) {
        gameField.layCoin(5 - i, 'i');
        gameField.layCoin(6 - i, 'i');
        gameField.layCoin(7 - i, 'i');
        gameField.layCoin(8 - i, 'i');
    }
    for (int i = 0; i < 4; i++){
        gameField.layCoin(5-i, 'i');
        gameField.layCoin(6-i, 'i');
        gameField.layCoin(7-i, 'i');
        gameField.layCoin(8-i, 'i');
    }

        gameField.layCoin(2, 'o');
        gameField.layCoin(3, 'o');
        gameField.layCoin(4, 'o');
        gameField.layCoin(5, 'o');




    GUI.printField(gameField);



    if (gameField.winCondition('x')){
        std::cout << "Der Spieler mit dem Zeichen 'x' hat gewonnen!" << std::endl;
    }
    else if (gameField.winCondition('o')){
        std::cout << "Der Spieler mit dem Zeichen '0' hat gewonnen!" << std::endl;
    }

}
