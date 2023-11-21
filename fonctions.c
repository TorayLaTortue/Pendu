#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}

int fichierScore(int c, char *n){
    FILE *fichier = fopen("score.txt", "a");

    // Vérifiez si l'ouverture du fichier a reussi sinon afficher un code erreur
    if (fichier == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
        return 1; 
    }

    // Écrivez dans le fichier
    fprintf(fichier, "Score de %s : %d \n", n, c);  // Écrire le score sur une nouvelle ligne
    fclose(fichier);
}

int scoreTrier()
{
  FILE *fichier;
    char ligne[100];//longueur max de la ligne
    fichier = fopen("score.txt", "r");
    if (fichier == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier score.txt.\n");
        return 1;  
    }
    // Parcourir le fichier ligne par ligne
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        // Vous pouvez faire ici ce que vous voulez avec chaque ligne
        // Supposons que vous cherchez la phrase spécifique "Score de uwuuu :"
        if (strstr(ligne, "Score de uwuuu :") != NULL) {
            // Vous avez trouvé la phrase, vous pouvez extraire le score
            int score;
            if (sscanf(ligne, "Score de uwuuu : %d", &score) == 1) {
                // Afficher ou stocker le score dans une variable
                printf("Score trouvé : %d\n", score);
            } else {
                fprintf(stderr, "Erreur lors de l'extraction du score.\n");
            }
        }
    }

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
