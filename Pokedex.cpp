//
// Created by DELL on 09/09/2024.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "Pokedex.h"

Pokedex* Pokedex::instance = nullptr;

Pokedex::Pokedex(string fileName):SetOfPokemon() {
    std::ifstream file(fileName);
    if(!file.is_open()){
        std::cerr<<"File "<<fileName<<" not found "<<std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
       // std::cout << line << std::endl;
        std::stringstream inputstringstream(line);
        std::string cell;
        std::vector<std::string> lineData;

        while(std::getline(inputstringstream,cell,',')){
            lineData.push_back(cell);
        }
        int id = std::stoi(lineData.at(0));
        double attackValue = std::stod(lineData.at(6));
        double hitPoint = std::stod(lineData.at(5));
        double defenseValue = std::stod(lineData.at(7));
        int generation = std::stoi(lineData.at(11));

        arrayOfPokemon.push_back(new Pokemon(lineData.at(1),id,hitPoint,attackValue,defenseValue,generation));
    }


}
Pokedex* Pokedex::getInstance(const std::string& filename) {
    if (instance == nullptr) {
        instance = new Pokedex(filename);
    }
    return instance;
}

Pokemon* Pokedex::getOnePokemonByName(string name) {
    int indiceToFind = findPokemonByName(name);
    if (indiceToFind != -1) {
        return new Pokemon(*(this->arrayOfPokemon.at(indiceToFind)));
    }


    return nullptr;
}
Pokemon* Pokedex::getOnePokemonById(int id) {
    int indiceToFind = findPokemonById(id);
    if (indiceToFind != -1) {
        return new Pokemon(*(this->arrayOfPokemon.at(indiceToFind)));
    }
    return nullptr;
}

int Pokedex::getMaxIndex() {
    int maxIndex = 0;
    for (int i = 0; i < arrayOfPokemon.size(); i++) {
        if(arrayOfPokemon.at(i)->getId()>maxIndex) {
            maxIndex = arrayOfPokemon.at(i)->getId();
        }
    }
    return maxIndex;
}





Pokedex::~Pokedex(){

}
