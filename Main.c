#include <stdio.h>

int main(void)
 {
   char nom[20]; 
   char mot[20];
   strcpy(mot, "tortue");



   printf("Entrez un Nom : ");
   scanf("%s", nom);
   printf("Vous avez entré le nom : %s\n", nom);
   return 0;
    
 }