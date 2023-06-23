#include <iostream>
#include "GuiField.hpp"
#include "Field.hpp"
#include "Menu.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "Game.hpp"


int main() {
    Game::playGame();

    Field gamefield;

    int i = 0;
    bool won = false;
    Human player1("Carl", 'x');

    return 0;
}

