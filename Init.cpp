//
// Created by DELL on 12/09/2024.
//

#include "Init.h"

#include <iostream>
#include <ostream>

#include "Player.h"

void Init::handelRequest(Player*& player1,Player*& player2) {
    std::cout << "********* Hellooo !! le jeu commence !! *********" << std::endl;
    std::cout << "********* Entrer votre nom SVP !! *********" << std::endl;
    std::string nomSVP ;
    std::cin >> nomSVP;
    player1 = new Player(nomSVP);
    nbWinP1=0;

}
