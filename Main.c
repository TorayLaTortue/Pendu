#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   char nom[10]; 
   char mot[10];
   char lettre;
   int i = 0;
   int a = 0; // compteur essais
   int k = 0;
   int o = 0;
   int z = 0;
   int e = 0;
   strcpy(mot, "tortue"); // mot tortue
   int longueur = strlen(mot);//longueur du mot
   char tab[longueur]; // tableau de _
   char tab2[26];// tableau de lettres utilisées*
   int lettreDejaUtilisee = 0;// détecter si la valeur a été utilisée

   printf("Bienvenue dans le jeu du pendu !\n");
   printf("Entrez un nom (max 10 caractères) : ");
   scanf("%s", nom);
   printf("Vous avez entré le nom : %s\n\n", nom);
   printf("Règles : Trouvez le mot secret, une lettre après l'autre.\nLes caractères spéciaux, chiffres et accents ne sont pas pris en compte.\nNombre d'essais maximum : 8\nÀ vous de jouer !\n\n");


   for (i = 0; i < longueur; i++)// mettre des _ pour chaque lettre
   {
      tab[i] = '_';
      printf("%c ", tab[i]);
   }
   i = 0;

   while (a < 8)
   {

      printf("\n");
      scanf(" %c", &lettre);
      printf("\n");

      while(!isalpha(lettre)) //verifier si c'est bien une lettre qui est entrée
      {
        printf("Ceci n'est pas une lettre.\n \n");
        scanf(" %c", &lettre);
      }

      o = 0;
      lettreDejaUtilisee = 0;
      for(o = 0; o < a; o++)
      {
         if (tab2[o] == lettre) //empecher de pouvoir mettre deux fois la meme lettre
         {
            lettreDejaUtilisee = 1;
         }
      }
      if (lettreDejaUtilisee == 0)//si la lettre a pas ete utiliser la rajouter a la liste
      {
         tab2[a] = lettre;
         a++;
      }
      
      i = 0;
      z = 0;
      for (i = 0; i <= longueur; i++)// montrer le mot en _
   {

      for(z = 0; z <= longueur; z++)//Remplacer les _ par les lettre trouver
      {
         if (tab2[z] == mot[i])
         {
            tab[i] = tab2[z];
         }
      
      }
      printf("%c ", tab[i]);

      e = 0;
      if (tab[i] == '_')
      {
         e = 1;
      }
      

   }

   printf("\n Lettre deja utilisé : \n");
   k = 0;
   for (k = 0; k < a; k++)// mettre toutes les lettres utilisées
   { 
      printf("%c , ", tab2[k]);
   }

   switch (a)
      {
      case 1:
         printf("\n Pendu 1\n");
      break;
   
      case 2:
         printf("\n Pendu 2\n");
      break;
   
      default:
         printf("Erreur");
      break;
      }
   }
   

   switch (a) { // Affichage du dessin
      case 0:
        printf("__________\n|__________|\n");
      break;
      
      case 1:
        printf("||\n||\n||\n||\n||\n||\n||\n||\n||_________\n|__________|\n");
      break;
      
      case 2:
        printf("__________\n|| /\n||/\n||\n||\n||\n||\n||\n||\n||_________\n|__________|\n");
      break;
   
      case 3:
        printf("__________\n|| /      |\n||/       |\n||\n||\n||\n||\n||\n||\n||_________\n|__________|\n");
      break;

   default:
      break;
   }

   printf("\n \n Finis ! \n");

}