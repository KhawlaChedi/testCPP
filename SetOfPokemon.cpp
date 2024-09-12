//
// Created by DELL on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>
#include <utility>  // Pour std::pair
#include <algorithm>

void SetOfPokemon::displayList() {
    std::cout << "*********************************"<< std::endl;
    for(Pokemon * pokemon : arrayOfPokemon){
        pokemon->displayInfo();
    }
}

SetOfPokemon::SetOfPokemon(){
}

int SetOfPokemon::findPokemonById(int id) {
    for(int i = 0; i < arrayOfPokemon.size(); i++) {
        if (arrayOfPokemon.at(i)->getId() == id) {
            return i;
        }

    }
    return -1;

}

int SetOfPokemon::findPokemonByName(string name) {
    for(int i = 0; i < arrayOfPokemon.size(); i++) {
        if (arrayOfPokemon.at(i)->getName() == name) {
            return i;
        }

    }
    return -1;

}

int SetOfPokemon::getSizeOfArrayPokemon() {
    return arrayOfPokemon.size();
}

bool SetOfPokemon::hasPokemonWithID(int id) {
    for (Pokemon *p : arrayOfPokemon) {
        if (p->getId() == id) {
            return true;
        }
    }
    return false;
}
std::pair<int, int> SetOfPokemon::getMinMaxPokemonID() {
    if (this->arrayOfPokemon.empty()) {
        throw std::runtime_error("Aucun Pokémon dans le Pokedex !");
    }

    // Trier les Pokémon par ID
    std::sort(this->arrayOfPokemon.begin(), this->arrayOfPokemon.end(), [](Pokemon* a, Pokemon* b) {
        return a->getId() < b->getId();
    });

    // ID minimum et maximum
    int minID = this->arrayOfPokemon.front()->getId();
    int maxID = this->arrayOfPokemon.back()->getId();

    return {minID, maxID};
}



