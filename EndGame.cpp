//
// Created by DELL on 12/09/2024.
//

#include "EndGame.h"

#include <iostream>
#include <ostream>

void EndGame::handelRequest(Player*& player1,Player*& player2) {
    std::cout << "****** Fin de jeu !!  ******" << std::endl;
    if(nbWinP1>2) {
        std::cout << "******  !! Joueur 1 gagnant !! ******" << std::endl;

    }
    else{
        std::cout << "******  !! Joueur 1 perdant !! ******" << std::endl;
    }
    if(nbWinP2>2) {
        std::cout << "******  !! Joueur 2 gagnant !! ******" << std::endl;

    }
    else{
        std::cout << "******  !! Joueur 2 perdant !! ******" << std::endl;
    }
}
