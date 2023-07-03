#pragma once
#include "Player.hpp"

class ProBot : public Player
{

public:
//Lays coin into the field with Pro Algorithm
    void layCoin(Field& field);
//Calculates best of and returns coloumn (does everything random except when he can win he does and when the other one can win he tries to stop him)
    static int bestMove(Field &field, char coin1, char coin2);
//Constructs ProBot (Same as player constructor) 
    ProBot(std::string name, char coin);  
    ~ProBot();
};