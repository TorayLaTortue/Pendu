#include <stdio.h>
#include <string.h>


int main(void)
 {
   char nom[20]; 
   char mot[20];
   int i = 0;
   strcpy(mot, "tortue"); // mot tortue
   int longueur = strlen(mot);//longueur du mot
   char tab[longueur]; // tableau de _


   printf("Entrez un Nom : ");
   scanf("%s", nom);
   printf("Vous avez entré le nom : %s\n", nom);
   
   for (i = 0; i < longueur; i++)// mettre des _ pour chaque lettre
   {
      tab[i] = '_';
      printf("%c ", tab[i]);

   }
   
   return 0;

 }