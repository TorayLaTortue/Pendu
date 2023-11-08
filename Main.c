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
   int z = 0;
   int e = 0;
   int erreur = 0;
   strcpy(mot, "tortue"); // mot tortue
   int longueur = strlen(mot);//longueur du mot
   char tab[longueur]; // tableau de _
   char tab2[26];// tableau de lettres utilisées
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
        printf("Ceci n'est pas une lettre.\n\n");
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
      
      if (lettreDejaUtilisee == 0)//si la lettre a pas ete utilisée, la rajouter a la liste
      {
         tab2[a] = lettre;
         a++;
      }
      
      i = 0;
      z = 0;
      for (i = 0; i <= longueur; i++)// montrer le mot en _
      {

         for(z = 0; z <= longueur; z++)//Remplacer les _ par les lettres trouvées
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

   printf("\n\nLettres déja utilisées :\n");
   k = 0;
   for (k = 0; k < a; k++)// mettre toutes les lettres utilisées
   { 
      printf("%c , ", tab2[k]);
   }

   extern void dessinPendu(int dessin);

   }
   
   printf("\n \n Finis ! \n");

}