#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}

int fichierScore(int c, char *n){
    FILE *fichier = fopen("score.txt", "w");

    // Vérifiez si l'ouverture du fichier a reussi sinon afficher un code erreur
    if (fichier == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
        return 1; 
    }

    // Écrivez dans le fichier
    fprintf(fichier, "Score de %s : %d \n",n ,c);  // Ecrire le score
    fclose(fichier);
}





const char ImagePendue(int y) {

        switch (y) {
            case 1:
               printf(" __________\n");
               printf("|__________|\n");
            break;
         
            case 2:
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;
         
            case 3:
               printf(" __________\n");
               printf("|| /\n");
               printf("||/\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;
      
            case 4:
               printf(" __________\n");
               printf("|| /      |\n");
               printf("||/       |\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;

            case 5:
               printf(" __________\n");
               printf("|| /      |\n");
               printf("||/       |\n");
               printf("||       ( )\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;

            case 6:
               printf(" __________\n");
               printf("|| /      |\n");
               printf("||/       |\n");
               printf("||       ( )\n");
               printf("||        |\n");
               printf("||        |\n");
               printf("||        |\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;

            case 7:
               printf("__________\n");
               printf("|| /      |\n");
               printf("||/       |\n");
               printf("||       ( )\n");
               printf("||        |\n");
               printf("||       /|\\ \n");
               printf("||        |\n");
               printf("||\n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;

            case 8:
               printf(" __________\n");
               printf("|| /      |\n");
               printf("||/       |\n");
               printf("||      (+_+)\n");
               printf("||        |\n");
               printf("||       /|\\ \n");
               printf("||        |\n");
               printf("||       / \\ \n");
               printf("||\n");
               printf("||_________\n");
               printf("|__________|\n");
            break;
        }
    }
