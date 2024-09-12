//
// Created by DELL on 12/09/2024.
//

#include "Battle.h"

#include <iostream>
#include <ostream>

#include "PokemonParty.h"

void Battle::handelRequest(Player*& player1,Player*& player2) {
    std::cout << "******** BooooMMM !! Fighhhhhhht !!!! *********" << std::endl;
    std::cout << "******** Choisissez 6 de vos Pokemon !!! ********"<< std::endl;
    // Joueur 1
    std::cout << "********* Joueur 1  : " << std::endl;
    std::vector<int> list1;

    // Obtenir l'ID min et max après le tri des Pokémon du joueur 1
    std::pair<int, int> minMax1 = player1->getPokeball()->getMinMaxPokemonID();
    std::cout << "Veuillez choisir des Pokemon avec des IDs entre " << minMax1.first << " et " << minMax1.second << std::endl;

    int i = 0;
    while (i < 6) {
        std::cout << "Entrez l'ID de votre Pokémon : " << std::endl;
        int id1;
        std::cin >> id1;

        // Vérifier si l'ID est dans la plage valide et appartient au joueur 1
        if (id1 >= minMax1.first && id1 <= minMax1.second && player1->getPokeball()->hasPokemonWithID(id1)) {
            list1.push_back(id1);  // Ajouter l'ID à la liste
            i++;
        } else {
            std::cout << "****** L'ID n'est pas valide ou vous ne possedez pas ce Pokemon !!!! ******" << std::endl;
        }
    }

    PokemonParty *p1= new PokemonParty(list1.at(0), list1.at(1), list1.at(2), list1.at(3), list1.at(4), list1.at(5),player1->getPokeball());

    // Joueur 2
    std::cout << "********* Joueur 2  : " << std::endl;
    std::vector<int> list2;

    // Obtenir l'ID min et max après le tri des Pokémon du joueur 2
    std::pair<int, int> minMax2 = player2->getPokeball()->getMinMaxPokemonID();
    std::cout << "Veuillez choisir des Pokemon avec des IDs entre " << minMax2.first << " et " << minMax2.second << std::endl;

    int j = 0;
    while (j < 6) {
        std::cout << "Entrez l'ID de votre Pokémon : " << std::endl;
        int id2;
        std::cin >> id2;

        // Vérifier si l'ID est dans la plage valide et appartient au joueur 2
        if (id2 >= minMax2.first && id2 <= minMax2.second && player2->getPokeball()->hasPokemonWithID(id2)) {
            list2.push_back(id2);  // Ajouter l'ID à la liste
            j++;
        } else {
            std::cout << "****** L'ID n'est pas valide ou vous ne possedez pas ce Pokemon !!!! ******" << std::endl;
        }
    }
    PokemonParty *p2= new PokemonParty(list2.at(0), list2.at(1), list2.at(2), list2.at(3), list2.at(4), list2.at(5),player2->getPokeball());

    std::cout << "********* Le combat commence !! *********** " << std::endl;

    for (int k = 0; k < p1->getSizeOfArrayPokemon(); k++) {
        while (p1->getOnePokemonById(k)->getHitPoint()!=0 && p2->getOnePokemonById(k)->getHitPoint()!=0) {
            p1->getOnePokemonById(k)->attack(p2->getOnePokemonById(k));
        }
        if (p1->getOnePokemonById(k)->getHitPoint()==0) {
            p1->removePokemon(k);
        }
        if (p2->getOnePokemonById(k)->getHitPoint()==0) {
            p2->removePokemon(k);
        }

    }
    if (p1->getSizeOfArrayPokemon()>p2->getSizeOfArrayPokemon()) {
        nbWinP1++;
        std::cout<<"******* Wohoooo!! Joueur 1 gagne la partie !! ***********"<<std::endl;
    }
    else if(p1->getSizeOfArrayPokemon()<p2->getSizeOfArrayPokemon()) {
        nbWinP2++;
        std::cout<<"******* Wohoooo!! Joueur 2 gagne la partie !! ***********"<<std::endl;
    }
    else if(p1->getSizeOfArrayPokemon()==p2->getSizeOfArrayPokemon()) {
        std::cout<<"******* Egaliteeee !! ***********"<<std::endl;
    }




}

