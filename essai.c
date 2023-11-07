#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


// VARIABLES
   char nom[10];
   char mot[10];
   int essais = 8; //compteur du nombre d'essais
   int lettresRestantes;

   char lettre;
   int i = 0;
   int a = 0;
   int k = 0;
   int o = 0;
   int c = 0;
   strcpy(mot, "tortue"); //mot tortue
   char tab2[26]; //tableau de lettre utilisé*
   int victoire = 2; //2 = partie en cours 1 = win 0 = lose 
   int lettreDejaUtilisee = 0;


// FONCTIONS
/*Voir pour utiliser plusieurs fonctions ?
  - pour vérifier un mot
  - pour lettreDejaUtilisee
  - pour vérifier si le jeu est gagné ou perdu*/


void verifCaractere (char mot)
{
   bool caractCorrect = true;
   
   for (mot = 0; mot < tab2; mot++)
   {
      if (isalnum(mot) == false)
      {
         caractCorrect = false;
         printf ("Caractère non-valide. Utilise les lettres de l'alphabet.");
      }
      
   }
}



int main(int argc, char* argv[])
 {

   char tab[longueur]; //tableau de _
   int longueur = strlen(mot); //longueur du mot

   printf("Bienvenue dans le jeu du pendu !\n");
   printf("Entrez un Nom (Max 10 caractères) : ");
   scanf("%s", nom);
   printf("Vous avez entré le Nom : %s\n\n", nom);
   printf("Règles : Trouvez le mot secret, une lettre après l'autre.\nLes caractères spéciaux, chiffres et accents ne sont pas pris en compte.\nNombre d'essais maximum : 8\nÀ vous de jouer !\n\n");
   
   while (victoire == 2)
   {
      printf ("Nombre d'essais restants : %d\n", essais);
      printf ("Trouve le mot secret :\n");

      for (i = 0; i < longueur; i++)// mettre des _ pour chaque lettre
      {
         tab[i] = '_';
         printf("%c ", tab[i]);
      }
   i = 0;
   printf("\n");
   }


 }