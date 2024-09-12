//
// Created by DELL on 12/09/2024.
//

#include "NoDanger.h"

#include <iostream>
#include <ostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

void NoDanger::handelRequest(Player*& player1,Player*& player2) {
    std::cout << "******* Yuuppy !! Safe Zooone !! ********" << std::endl;


    // Seed the random number generator
    std::srand(std::time(0));

   ////////////pour tester   :   std::cout<<player1->getName();

    for(int i =0; i < 10; ++i) {
        //nombre alea entre 1 et 721
        int randomVal = (std::rand() % pokedexGame->getMaxIndex()) + 1;

        player1->getPokeball()->attrapePokemon(pokedexGame,randomVal);
    }
    std::cout<< "-------- Votre Pokeball actuel " << std::endl;
   player1->getPokeball()->displayList();


}
