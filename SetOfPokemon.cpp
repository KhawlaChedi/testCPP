//
// Created by DELL on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>

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

