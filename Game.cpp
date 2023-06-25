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
    // count of players
    // Menu::startMenu();
    //int ModeChoicePlayer = 0;

    std::string playerName_1, playerName_2;
    char playerCoin_1, playerCoin_2;
    int playerType_1, playerType_2;
    /*
     * // console inputs for name, coin and type
    playerName_1 = Menu::generateName();
    playerName_2 = Menu::generateName();
    playerCoin_1 = Menu::generateCoin();
    playerCoin_2 = Menu::generateCoin();
    playerType_1 = Menu::generatePlayerType();
    playerType_2 = Menu::generatePlayerType();

     playerName_1 = "Carl";
    playerCoin_1 = 'x';
    playerType_1 = 1;

     playerCoin_2 = 'o';
    playerName_2 = "Mattes";
    playerType_2 = 1;
     */
// generate Players for the game / All types of players


    Player* player_1 = Player::generatePlayer();
    Player* player_2 = Player::generatePlayer();

    // While loop for game logic
    int gameCount = 0;
    Field gamefield;
    bool won = false;

    while (!won) {

        GuiField::printField(gamefield);

        if(gamefield.winCondition('o') || gamefield.winCondition('x')){
            won = true;
            if (gameCount % 2 == 0){
                std::cout << player_2->getName() << " hat das Spiel gewonnen!" << std::endl;
            }
            else if (gameCount % 2 != 0){
                std::cout << player_1->getName() << " hat das Spiel gewonnen!" << std::endl;
            }

            break;
        }

        if (gameCount % 2 == 0){
            player_1->layCoin(gamefield);
        }
        else if (gameCount % 2 != 0){
            player_2->layCoin(gamefield);
        }
        gameCount++;
    }
}

void Game::showRules() {

}

