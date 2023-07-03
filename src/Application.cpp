//
// Created by Carl Felix Schlass on 25.06.23.
//
#include "Game.hpp"
#include "GuiField.hpp"
#include "Application.hpp"
#include <iostream>
#include <limits>

void Application::runApplication(int n) {
    int count = 0;
    int wins = 0;
    while (count < n){
       wins += Game::playGame();
        count++;
}

    std::cout << "So viele Spiele hat der Pro Bot gewonnen: " << wins << "von so vielen spielen:" << count << std::endl;
}

