#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour stocker les scores et les noms associés
typedef struct {
    char nom[20];
    int score;
} ScoreEntry;

// Fonction de comparaison pour qsort
int compareScores(const void *a, const void *b) {
    // Retourner la différence dans l'ordre inverse
    return ((ScoreEntry*)b)->score - ((ScoreEntry*)a)->score;
}

int topScore() {
    FILE *fichier;
    char ligne[30];
    int i = 0;
    ScoreEntry *tabValeur = NULL;

    fichier = fopen("score.txt", "r");

    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    // Allocation dynamique du tableau de structures ScoreEntry
    tabValeur = (ScoreEntry *)malloc(sizeof(ScoreEntry));

    if (tabValeur == NULL) {
        perror("Erreur d'allocation de mémoire");
        fclose(fichier);
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        int score;
        char nom[100];

        // Essaye de lire le score à partir de la ligne
        if (sscanf(ligne, "Score de %*s : %d", &score) == 1) {
            // Imprime la valeur du score
            
            sscanf(ligne, "Score de %[^\n]", nom);
           

            // Ajuste la taille du tableau et ajoute le score et le nom
            tabValeur = (ScoreEntry *)realloc(tabValeur, (i + 1) * sizeof(ScoreEntry));
            if (tabValeur == NULL) {
                perror("Erreur de réallocation de mémoire");
                fclose(fichier);
                return 1;
            }

            // Copie sécurisée du nom dans la structure ScoreEntry
            strncpy(tabValeur[i].nom, nom, sizeof(tabValeur[i].nom) - 1);
            tabValeur[i].nom[sizeof(tabValeur[i].nom) - 1] = '\0';  // Assurez-vous de terminer la chaîne

            tabValeur[i].score = score;
        }
        i++;
    }

    // Tri des scores en utilisant la fonction qsort
    qsort(tabValeur, i, sizeof(ScoreEntry), compareScores);

    // Affichage des scores triés
    printf("\nTop 10 :\n");
    for (int j = 0; j < 10; j++) {
        printf("Score de %s : %d\n", tabValeur[j].nom, tabValeur[j].score);
    }
    printf("%d",tabValeur[i].score);

    // Libération de la mémoire allouée dynamiquement
    free(tabValeur);

    fclose(fichier);

    return 0;
}
