#include <stdio.h>
#include <string.h>


int main(void)
 {
   char nom[20]; 
   char mot[20];
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

   printf("Entrez un Nom : ");
   scanf("%s", nom);
   printf("Vous avez entré le nom : %s\n", nom);
   
   for (i = 0; i < longueur; i++)// mettre des _ pour chaque lettre
   {
      tab[i] = '_';
      printf("%c ", tab[i]);

   }
   i = 0;
   printf("\n");
   while (victoire == 2)
   {
      scanf(" %c", &lettre);
      for(o = 0; o < a; o++)
      {
         if (tab2[o] == lettre) 
         {
            lettreDejaUtilisee = 1;
         }
         else
         {
            lettreDejaUtilisee = 0;
         }
      }
      if (lettreDejaUtilisee = 0)
      {
         tab2[a] = lettre;
         a++;
      }
      
      

      for (i = 0; i < longueur; i++)// montrer le mot en _
   {
      printf("%c ", tab[i]);

   }
   printf("\n Lettre deja utilisé : \n");
for (k = 0; k < a; k++)// mettre toutes les lettres utilisé
   {
      
      printf("%c , ", tab2[k]);

      
       
   }
   

   }
   
   


   return 0;

 }