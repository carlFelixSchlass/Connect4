//
// Created by Carl Felix Schlass on 23.06.23.
//
#include "Game.hpp"
#include "Generate.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "HorizontalBot.hpp"
#include "VerticalBot.hpp"
#include "RandomBot.hpp"
#include "ProBot.hpp"

#include "Field.hpp"
#include "GuiField.hpp"
#include <iostream>

int Game::playGame(){
    // count of players
    // Generate::startMenu();
    //int ModeChoicePlayer = 0;

    std::string playerName_1, playerName_2;
    char playerCoin_1, playerCoin_2;
    int playerType_1, playerType_2;
    /*
     * // console inputs for name, coin and type
    playerName_1 = Generate::generateName();
    playerName_2 = Generate::generateName();
    playerCoin_1 = Generate::generateCoin();
    playerCoin_2 = Generate::generateCoin();
    playerType_1 = Generate::generatePlayerType();
    playerType_2 = Generate::generatePlayerType();

     playerName_1 = "Carl";
    playerCoin_1 = 'x';
    playerType_1 = 1;

     playerCoin_2 = 'o';
    playerName_2 = "Mattes";
    playerType_2 = 1;
     */
// generate Players for the game / All types of players


    RandomBot player_1("Random", 'x');
    ProBot player_2("Pro", 'o');

    // While loop for game logic
    int gameCount = 0;
    Field gamefield;
    bool won = false;

    while (!won) {

        

        if(gamefield.winCondition(player_1.getCoin()) || gamefield.winCondition(player_2.getCoin())){
            won = true;
            Player::countPlayer = 0;

            if (gameCount % 2 == 0){
                return 1;
            }
            else if (gameCount % 2 != 0){
                return 0;
            }
            break;
        }
        if(gameCount == 34)
        {
            return 0;
        }

        if (gameCount % 2 == 0){
            player_1.layCoin(gamefield);
        }
        else if (gameCount % 2 != 0){
            player_2.layCoin(gamefield);
        }
        gameCount++;
    }
    return 0;
}

void Game::showRules() {

}

