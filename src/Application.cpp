//
// Created by Carl Felix Schlass on 25.06.23.
//
#include "Game.hpp"
#include "GuiField.hpp"
#include "Application.hpp"
#include <iostream>
#include <limits>

void Application::runApplication() {
    bool running = true;
    int choice = 0;


    GuiField::clearConsole();

    while (running){
        std::cout << "\n-----------------------------------" << std::endl;
        std::cout << "Herzlich willkommen zu 4 Gewinnt!" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Menü: " << std::endl;

        std::cout << "1 : Spiel starten " << std::endl;
        std::cout << "2 : Regeln anzeigen " << std::endl;
        std::cout << "3 : Spiel beenden " << std::endl;
        std::cout << "Wählen Sie eine Option: " << std::endl;

        std::cin >> choice;

    /*
        if(!(std::cin >> choice)) 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            //choice = 69;
        }
    */

        switch (choice) {
            case 1:
                std::cout << "Das Spiel wird gestartet.\n" << std::endl;
                Game::playGame();
                break;
            case 2:
                std::cout << "Die Regeln werden angezeigt: " << std::endl;
                Game::showRules();
                break;
            case 3:
                std::cout << "Das Programm wird beendet. " << std::endl;
                running = false;
                break;
            default:
                std::cout << "Ungültige Option. Bitte wähle erneut." << std::endl;
                break;

        }
    }
}

