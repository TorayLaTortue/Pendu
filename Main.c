#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
   char nom[10]; 
   char mot[10];
   char lettre;
   int i = 0;
   int a = 0;
   int k = 0;
   int o = 0;
   strcpy(mot, "tortue"); // mot tortue
   int longueur = strlen(mot);//longueur du mot
   char tab[longueur]; // tableau de _
   char tab2[26];//tableau de lettre utilisé*
   int victoire = 2;//2 = partie en cours 1 = win 0 = lose 
   int lettreDejaUtilisee = 0;
   int LettreTotalUtilisee = 0;

   printf("Bienvenue dans le jeu du pendu !\n");
   printf("Entrez un Nom (Max 10 charactere) : ");
   scanf("%s", nom);
   printf("Vous avez entré le nom : %s\n", nom);
   
   


   for (i = 0; i < longueur; i++)// mettre des _ pour chaque lettre
   {
      tab[i] = '_';
      printf("%c ", tab[i]);
       
   }
   i = 0;

   while (LettreTotalUtilisee < 8)
   {

      printf("\n");
      scanf(" %c", &lettre);

      while(!isalpha(lettre)) //verifier si c'est bien une lettre qui est entrée
      {
        printf("Ceci n'est pas une lettre.\n \n");
        scanf(" %c", &lettre);
      }


      o = 0;
      lettreDejaUtilisee = 0;
      for(o = 0; o < a; o++)
      {
         if (tab2[o] == lettre) //empechez de pouvoir mettre deux fois la meme lettre
         {
            lettreDejaUtilisee = 1;
            LettreTotalUtilisee = LettreTotalUtilisee ++;
         }
      }
      if (lettreDejaUtilisee == 0)//si la lettre a pas ete utiliser la rajouter a la liste
      {
         tab2[a] = lettre;
         a++;
         
      }
      
      
      i = 0;
      for (i = 0; i < longueur; i++)// montrer le mot en _
   {
      printf("%c ", tab[i]);

   }
   printf("\n Lettre deja utilisé : \n");
   k = 0;
   for (k = 0; k < a; k++)// mettre toutes les lettres utilisé
   {
      
      printf("%c , ", tab2[k]);
   }
   

   }
   
   
   printf("\n Lettre deja utilisé : \n");

}