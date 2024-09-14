//
// Created by DELL on 12/09/2024.
//

#include "Battle.h"

#include <iostream>
#include <ostream>

#include "PokemonParty.h"

void Battle::handelRequest(Player*& player1,Player*& player2) {

    std::cout<<"---------------------------------------"<<std::endl;

    std::cout << "******** BooooMMM !! Fighhhhhhht !!!! *********" << std::endl;
    std::cout << "******** Choisissez 6 de vos Pokemon !!! ********"<< std::endl;

    std::cout<<"---------------------------------------"<<std::endl;

    // Joueur 1
    std::cout << "********* Joueur 1  : " << std::endl;
    std::vector<int> list1;

    // Obtenir l'ID min et max après le tri des Pokémon du joueur 1
    std::pair<int, int> minMax1 = player1->getPokeball()->getMinMaxPokemonID();
    std::cout << "Veuillez choisir des Pokemon avec des IDs entre " << minMax1.first << " et " << minMax1.second << std::endl;

    int i = 0;
    while (i < 6) {
        std::cout << "Entrez l'ID de votre Pokemon : " << std::endl;
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

    std::cout<<"---------------------------------------"<<std::endl;

    // Joueur 2
    std::cout << "********* Joueur 2  : " << std::endl;
    std::vector<int> list2;

    // Obtenir l'ID min et max après le tri des Pokémon du joueur 2
    std::pair<int, int> minMax2 = player2->getPokeball()->getMinMaxPokemonID();
    std::cout << "Veuillez choisir des Pokemon avec des IDs entre " << minMax2.first << " et " << minMax2.second << std::endl;

    int j = 0;
    while (j < 6) {
        std::cout << "Entrez l'ID de votre Pokemon : " << std::endl;
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

    std::cout<<"---------------------------------------"<<std::endl;
    std::cout << "********* Le combat commence !! *********** " << std::endl;


    for (int k = 0; k < 6; k++) {
        while (p1->getOnePokemonById(k)->getHitPoint()!=0 && p2->getOnePokemonById(k)->getHitPoint()!=0) {
            if(p1->getOnePokemonById(k)->getattack()>p2->getOnePokemonById(k)->getdefense()) {
                p1->getOnePokemonById(k)->attack(p2->getOnePokemonById(k));
            }
            else if(p2->getOnePokemonById(k)->getattack()>p1->getOnePokemonById(k)->getdefense()) {
                p2->getOnePokemonById(k)->attack(p1->getOnePokemonById(k));
            }


        }
     /*  if (p1->getOnePokemonById(k)->getHitPoint()==0 ) {
            p1->removePokemon(k);
        }
        if (p2->getOnePokemonById(k)->getHitPoint()==0) {
            p2->removePokemon(k);
        }*/

    }
    int nbHitPoints1=0;
    int nbHitPoints2=0;
    /*ici*/
    for (int l = 0; l < p1->getSizeOfArrayPokemon(); l++) {
        nbHitPoints1+=p1->getOnePokemonById(l)->getHitPoint();
    }
    for (int m = 0; m < p2->getSizeOfArrayPokemon(); m++) {
        nbHitPoints2+=p2->getOnePokemonById(m)->getHitPoint();
    }

    std::cout<<"---------------------------------------"<<std::endl;

    if (nbHitPoints1>nbHitPoints2) {
        nbWinP1++;
        std::cout<<"******* Wohoooo!! Joueur 1 gagne ce combat !! ***********"<<std::endl;
    }
    else if(nbHitPoints1<nbHitPoints2) {
        nbWinP2++;
        std::cout<<"******* Wohoooo!! Joueur 2 gagne ce combat !! ***********"<<std::endl;
    }
    else if(nbHitPoints1==nbHitPoints2) {
        std::cout<<"******* Egaliteeee !! Combat nulllllll ***********"<<std::endl;
    }
    std::cout<<"---------------------------------------"<<std::endl;
    std::cout<<"*********  Pokeball 1  apres le combat :"<<std::endl;
    player1->getPokeball()->displayList();
    std::cout<<"*********  Pokeball 2  apres le combat :"<<std::endl;
    player2->getPokeball()->displayList();



}

