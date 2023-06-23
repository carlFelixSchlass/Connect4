//
// Created by Carl Felix Schlass on 23.06.23.
//
#include "Game.hpp"
#include "Menu.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"

#include "Field.hpp"
#include "GuiField.hpp"
#include <iostream>

void Game::playGame(){
    // Bool, if the game is won (4 in a row)
    bool won = false;

    // count of players
    int playerCount = 0;
    playerCount = Menu::startMenu();

    int ModeChoicePlayer = 0;
    std::string PlayerName_2;
    char PlayerCoin;

    Human player1("Mattes", 'x');
    Human player2("Carl", 'o');
    Field gamefield;
    int gameCount = 0;

    while (won != true) {
        GuiField::printField(gamefield);

        if(gamefield.winCondition('o') || gamefield.winCondition('x')){
            won = true;
            std::cout << "Spiel gewonnen!" << std::endl;
            break;
        }

        if (gameCount % 2 == 0){
            player1.layCoin(gamefield);
        }
        else if (gameCount % 2 != 0){
            player2.layCoin(gamefield);
        }
        gameCount++;
    }
}
