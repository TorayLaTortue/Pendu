

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
// VARIABLES
   char nom[10] = "Aucun nom"; 
   char mot[10];
   char lettre;
   char randomMot;
   int i = 0;
   int a = 0;
   int z = 0;
   int y = 8;
   int q = 0;
   int motTrouve = 0; //1 = mot trouvé
   char tab2[26]; //tableau de lettres utilisées
   int lettreDejaUtilisee = 0; //detecter si la valeur a été utilisée
   int dessin = 0;

// DEBUT DU JEU
   printf("Bienvenue dans le jeu du pendu !\n");
   printf("Entrez un nom (max 10 caractères) : ");
   scanf("%10s", nom); // Limite la saisie à 10 caractères
   printf("Vous avez entré le nom : %s\n\n", nom);
   printf("Règles : Trouvez le mot secret, une lettre après l'autre.\nLes caractères spéciaux, chiffres et accents ne sont pas pris en compte.\nNombre d'essais maximum : 8\nÀ vous de jouer !\n\n");


   srand(time(NULL)); //Choisir une valeur aléatoire par rapport à l'heure
   int nombreAleatoire = (rand() % 835);
   FILE *fichier = fopen("words.txt", "r");
   char ligne[100]; // Longueur d'une ligne
   int numeroLigne = 1; // Compteur pour le numéro de la ligne

   while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        numeroLigne++;
        if (numeroLigne == nombreAleatoire) {
            printf("Ligne: %s", ligne);
            break; // Sortir de la boucle une fois que la ligne aléatoire a été lue
         }
   }

   fclose(fichier); 
   strncpy(mot, ligne, 10);
   ligne[strcspn(ligne, "\n")] = '\0';
   mot[10] = '\0';

   int longueur = strlen(mot) - 1; // Longueur du mot
   char tab[longueur]; // tableau de _


   for (i = 0; i < longueur; i++) { // mettre des _ pour chaque lettre
      tab[i] = '_';
      printf("%c ", tab[i]);

   }
   
   return 0;

}
}