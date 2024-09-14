#include <iostream>

#include "Pokemon.h"

#include <vector>

#include "Battle.h"
#include "Danger.h"
#include "EndGame.h"
#include "Game.h"
#include "Init.h"
#include "NoDanger.h"
#include "Pokedex.h"

int main() {



   /* std::cout << "******* Pokemon test *******" << std::endl;
    Pokemon mew("Mew",5,100,30,70,3);
    Pokemon mew2("Mew2",10,100,100,50,3);

    mew.displayInfo();
    mew2.displayInfo();

    mew.attack(mew2);
    mew2.attack(mew);
    mew2.attack(mew);
    mew2.attack(mew);
    mew2.attack(mew);

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;   */



    /*vector<Pokemon*> pokeke;
      for (int i=0;i<10;i++){
          char * name;
          sprintf(name,"Bullbizarre#%d",i);
          pokedex.push_back(new Pokemon(name));
      }

      for(Pokemon * pp :pokedex){
          pp->scream();
      }

      //pokedex[15]->scream();
      pokedex.at(15)->scream();
*/

    /// // Création d'un Pokedex à partir du fichier CSV

   /* Pokedex *pokedex=Pokedex::getInstance("../ressources/pokedex.csv");
    std::cout << "********** Test get by id et get by name *********"<<std::endl;
    Pokemon *pok1=pokedex->getOnePokemonByName("Mewtwo");
    pok1->displayInfo();
    Pokemon *pok2=pokedex->getOnePokemonById(700);
    pok2->displayInfo();*/


    /////////////test de pokedex autrement
    /// std::cout << "******* Pokemon test *******" << std::endl;
/*
   Pokedex *pokedexInstance = Pokedex::getInstance("../ressources/pokedex.csv");
   Pokedex *pokedexInstanceNumber2 = Pokedex::getInstance("../ressources/pokedex.csv");

   std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    Pokemon* testGet = Pokedex::getInstance("../ressources/pokedex.csv")->getOnePokemonById(15);

    testGet->displayInfo();

    testGet = Pokedex::getInstance("../ressources/pokedex.csv")->getOnePokemonByName("Mewtwo");
    testGet->displayInfo();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl; */



    /////////////////////////Main Final du jeu//////////////////
    Game *game=new Game();
    game->setState(new Init());
    game->request();
    game->setState(new NoDanger());
    game->request();
    game->setState(new Danger());
    game->request();
    game->setState(new Battle());
    game->request();
    game->setState(new Battle());
    game->request();
    game->setState(new Battle());
    game->request();
    game->setState(new EndGame());
    game->request();




    return 0;
}
