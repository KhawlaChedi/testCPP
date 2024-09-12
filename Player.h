//
// Created by DELL on 12/09/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "Pokeball.h"
using std::string;


class Player {
private:
    string namePlayer;
    Pokeball* pokeball;
public:
    Player(string namePlayer);
    string getName();
    Pokeball* getPokeball();
};



#endif //PLAYER_H
