#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <fonctions.h>

int main(void) {
// VARIABLES
   char nom[11] = "Aucun nom"; // [11] pour intégrer le \0
   char mot[11];
   char lettre;
   char randomMot;
   int i = 0;
   int a = 0;
   int z = 0;
   int vie = 8; // nombre d'essais
   int q = 0;
   int motTrouve = 0; //1 = mot trouvé
   char tab2[26]; //tableau de lettres utilisées
   int lettreDejaUtilisee = 0; //detecter si la valeur a été utilisée
   int dessin = 0;

// DEBUT DU JEU
   printf("Bienvenue dans le jeu du pendu !\n");

   do // Tentative de limiter le nombre de caractères du nom à 10 max
   {
      printf("Entrez un Nom (Max 10 charactere) : ");
      scanf("%10s", nom);
      
      if (strlen(nom) > 10) {
         printf("Erreur. Merci de rentrer un nom  long de 10 caractères ou moins.");
      }
   } while (strlen(nom) <= 10);

   printf("Vous avez entré le nom : %s\n", nom);
   printf("Règles : Trouvez le mot secret, une lettre après l'autre.\nAttention : Les caractères spéciaux, chiffres et accents ne sont pas pris en compte.\nNombre d'erreurs autorisées : 7\n\nÀ vous de jouer !\n\n");

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

   i = 0;

   while (vie > 0) {
      motTrouve = 1;
      printf("\n Nombre d'essais restants : %d \n", vie);
      printf("\n");
      scanf(" %c", &lettre);
      printf("\n");

      while(!isalpha(lettre)) { // verifier si c'est bien une lettre qui est entrée
        printf("Ceci n'est pas une lettre.\n \n");
        scanf(" %c", &lettre);
      }

      i = 0;
      lettreDejaUtilisee = 0;
   
      for(i = 0; i < a; i++) {
         if (tab2[i] == lettre) { //empecher de pouvoir mettre deux fois la meme lettre
            lettreDejaUtilisee = 1;
         }
      }

      if (lettreDejaUtilisee == 0) {//si la lettre n'a pas ete utilisée la rajouter a la liste
         tab2[a] = lettre;
         a++;
      }
      
      i = 0;
      z = 0;

      for (i = 0; i < longueur; i++) {// montrer le mot en _
         for(z = 0; z <= longueur; z++) {//Remplacer les _ par les lettre trouver
            if (tab2[z] == mot[i]) {
            tab[i] = tab2[z];
            }
         }

         printf("%c ", tab[i]);
      
         if (tab[i] == '_') {
         motTrouve = 0;
         }
      }
   
   i = 0;
   q = 0;

   for (i = 0; i < longueur; i++) { // nombre d'essais
      if (lettre == mot[i]) {
         q = 1;
         break;
      }
   }

   if (q == 0) {
      vie--;
      dessin++;
      printf("\n\nERREUR : la lettre n'est pas dans le mot mystère.\n");

      void dessinPendu (int dessin);
   }

   printf("\n Lettre deja utilisé : \n");

   i = 0;
   
   for (i = 0; i < a; i++) { // mettre toutes les lettres utilisées
      printf("%c , ", tab2[i]);
   }
   
   if (motTrouve == 1) {
      printf("\n\n Bravo %s vous avez reussi en %d essai(s)\n", nom, a);
      break;
   }

   }
   
   if (motTrouve == 0) {
      printf("\n \n PERDU ! Le mot était : %s.\n", mot);
   }

   return 0;
}