//
// Created by DELL on 12/09/2024.
//

#include "Danger.h"

#include <iostream>
#include <ostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

void Danger::handelRequest(Player*& player1,Player*& player2) {
    std::cout<<"---------------------------------------"<<std::endl;

    std::cout << "******* Hoooooooo !! Danger Zooone !! ********" << std::endl;

    std::cout << "********* Hellooo Joueur num 2 *********" << std::endl;
    std::cout << "********* Entrer votre nom SVP !! *********" << std::endl;
    std::string nomSVP ;
    std::cin >> nomSVP;
    player2 = new Player(nomSVP);
    nbWinP2=0;

    // Seed the random number generator
    std::srand(std::time(0));

    for(int i =0; i < 20; ++i) {
        //nombre alea entre 1 et 721
        int randomVal1 = (std::rand() % pokedexGame->getMaxIndex()) + 1;
        player1->getPokeball()->attrapePokemon(pokedexGame,randomVal1);
        int randomVal2 = (std::rand() % pokedexGame->getMaxIndex()) + 1;
        player2->getPokeball()->attrapePokemon(pokedexGame,randomVal2);
    }
    std::cout<<"---------------------------------------"<<std::endl;
    std::cout<< "-------- Votre Pokeball actuel " << std::endl;
    player2->getPokeball()->displayList();
}
