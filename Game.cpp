//
// Created by DELL on 12/09/2024.
//

#include "Game.h"

void Game::setState(State *state) {
    this->state = state;
}
void Game::request() {
    this->state->handelRequest( player1, player2);
}
