//
// Created by DELL on 09/09/2024.
//

#ifndef POKEMON_H
#define POKEMON_H

#include <string>

using std::string;

class Pokemon {
private:
    string name;
    int id;
    double hitPoint;
    double attackValue;
    double defense;
    int generation;
    void sustainDamage(int value);
    static int numberOfPokemon;

public:
    Pokemon() = delete;
    Pokemon(const string name);
    Pokemon(const string name, int id, double hitPoint, double attack, double defense, int generation);
    Pokemon(const Pokemon& anotherPokemon);
    void attack(Pokemon& anotherPokemon);
    void scream();
    void displayInfo();
    //getters
    int getId() ;
    string getName() ;
    double getHitPoint() ;
    double getattack() ;
    double getdefense() ;
    int getGeneration() ;

    static int getNumberOfPokemon();

    ~Pokemon();
};


#endif //POKEMON_H
