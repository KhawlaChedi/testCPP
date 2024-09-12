//
// Created by DELL on 12/09/2024.
//

#include "Player.h"
Player::Player(string namePlayer) {
    this->namePlayer = namePlayer;
    pokeball= new Pokeball();
}
string Player::getName() {
    return namePlayer;
}

Pokeball* Player::getPokeball() {
    return pokeball;
}

