----------------------------------------  Pokémon Battle Game  ----------------------------------------------------


-->Description

Cette application est un jeu de bataille Pokémon entre deux joueurs. Elle permet aux joueurs d'explorer, de capturer des Pokémon, et de les utiliser dans des batailles. Le jeu se termine lorsqu'un joueur remporte plus de deux victoires.

--> Fonctionnement du Jeu :

1. Lancement du Jeu
   * Le jeu commence avec le fichier attente.cpp, qui initialise le lancement de l'application.

2. Initialisation des Joueurs
   * Le fichier init.cpp initialise player1 avec un Pokéball vide.
   * Ensuite, NoDanger.cpp permet à player1 de commencer l'exploration en toute sécurité.

3. Ajout du Second Joueur
   * Lorsque Danger.cpp est appelé, il introduit player2. À partir de ce moment, les deux joueurs peuvent explorer et capturer des Pokémon pour remplir leurs Pokéballs respectifs.

4. Bataille entre Joueurs   
   * Si les joueurs se rencontrent, le fichier Battle.cpp est appelé.
   * Chaque joueur doit alors choisir 6 Pokémon pour combattre. Si un joueur sélectionne un Pokémon qui n'est pas présent dans son Pokéball, un message d'erreur est affiché.

5. Mécanique de Combat
   * La fonction attack est déclenchée pour résoudre le combat.
   * Pour déterminer le vainqueur, les HitPoints de chaque Pokémon sont comptés. Le joueur avec le plus grand nombre de HitPoints remporte la bataille.

6. Fin du Jeu
   * Le fichier EndGame.cpp totalise le nombre de victoires pour chaque joueur.
   * Si un joueur atteint plus de 2 victoires, il est déclaré gagnant du jeu.














