//
// Created by Carl Felix Schlass on 22.06.23.
//

#pragma once
#include "Field.hpp"
#include "Player.hpp"
#include <cstdlib>


#define BLUE    "\033[34m"      /* Blauer Text */
#define GREEN   "\033[32m"      /* Grüner Text */
#define RESET   "\033[0m"       /* Farbe zurücksetzen */
#define BLACK   "\033[30m"      /* Schwarzer Text */
#define UNDERLINE "\033[4m"     /* Unterstrichen */

class GuiField {
public:
    static void printField(Field& field);

    static void printPokal(Player player);

    static void clearConsole();

private:

};