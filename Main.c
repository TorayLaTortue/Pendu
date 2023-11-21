#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.c"           

int main(void)
{
   while (1 == 1)
   {
   char nom[10] = "Aucun nom"; 
   char mot[25];
   char lettre;
   char randomMot;
   int i = 0;
   int a = 0;
   int z = 0;
   int y = 0;
   int q = 0;
   int score = 0;
   int MotTrouver = 0; //1 = mot trouve
   char tab2[26];//tableau de lettre utilisé*
   int lettreDejaUtilisee = 0;//detecter si la valeur a ete utiliser
   

   printf("Bienvenue dans le jeu du pendu !\n");
   printf("Entrez un Nom (Max 10 charactere) : ");
   scanf("%s", nom);
   while(!isalpha(nom)) //verifier si c'est bien une lettre qui est entrée
      {
        printf("Ceci n'est pas une lettre.\n \n");
        printf("Entrez un Nom (Max 10 charactere) : ");
        scanf(" %s", &nom);
      }
   printf("Vous avez entré le nom : %s\n", nom);


   srand(time(NULL)); //Choisir une valeur aléatoire par rapport a l'heure
   int nombreAleatoire = (rand() % 835);
   FILE *fichier = fopen("words.txt", "r");
   char ligne[100]; // Longueur d'une ligne
    int numeroLigne = 1; // Compteur pour le numéro de la ligne

   while(fgets(ligne, sizeof(ligne), fichier) != NULL) {
        numeroLigne++;
        if (numeroLigne == nombreAleatoire) {
            printf("Ligne: %s", ligne); //Print la solution au debut
            break; // Sortir de la boucle une fois que la ligne aléatoire a été lue
        }
   }
   fclose(fichier); 
   strncpy(mot, ligne, 100);
   ligne[strcspn(ligne, "\n")] = '\0';
   mot[10] = '\0';
   
   int longueur = strlen(mot) - 1;//longueur du mot
   char tab[longueur]; // tableau de _

   for (i = 0; i < longueur; i++){// mettre des _ pour chaque lettre

      tab[i] = '_';     
      printf("%c ", tab[i]);
   }

   while (y < 8)
   {
      MotTrouver = 1;
      printf("\n Nombre d'essaie restant : %d / 8 \n",y);

      printf("\n");
      scanf(" %c", &lettre);
      lettre = tolower(lettre);
      printf("\n");
      while(!isalpha(lettre)) //verifier si c'est bien une lettre qui est entrée
      {
        printf("Ceci n'est pas une lettre.\n \n");
        scanf(" %c", &lettre);
      }

      lettreDejaUtilisee = 0;
      for(i = 0; i < a; i++)
      {
         if (tab2[i] == lettre) //empechez de pouvoir mettre deux fois la meme lettre
         {
            lettreDejaUtilisee = 1;
         }
      }

      if (lettreDejaUtilisee == 0)//si la lettre a pas ete utiliser la rajouter a la liste
      {
         tab2[a] = lettre;
         a++;
      }
      

      

      for (i = 0; i <= longueur; i++)// montrer le mot en _
      {

      for(z = 0; z < max(longueur, a); z++)//Remplacer les _ par les lettre trouver
      {
         if (tab2[z] == mot[i])
         {
            tab[i] = tab2[z];
         }
      }

      printf("%c ", tab[i]);
      

      if (tab[i] == '_')
      {
         MotTrouver = 0;
      }
      

      }
   
   q = 0;
   for (i = 0; i < a; i++)// nombre d'essaie
   {
         if (lettre == mot[i])
         {
            q = 1;
            break;
         }
               
   }
   if (q == 0)
   {
      y++;
   }
   

   printf("\n Lettre deja utilisé : \n");
   
   for (i = 0; i < a; i++)// mettre toutes les lettres qui ont ete utilisé
   {
      printf("%c , ", tab2[i]);
   }
   
   if (MotTrouver == 1)
   {
      printf("\n \n Bravo %s vous avez reussi en %d essai \n", nom, y);
      score = longueur * 2.5 - y;
      printf("votre score est de : %d \n", score);
      fichierScore(score, nom);
      break;
   }
   
   printf("\n \n");
   ImagePendue(y);

   }
   if (MotTrouver == 0)
   {
      printf("\n \n Perdu le mot était : %s ! \n", mot);
      score = 0;
      fichierScore(score, nom);
   }

   } //redemarage du jeu 
}