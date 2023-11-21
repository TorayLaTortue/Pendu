#include <stdio.h>

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



int main() {

    FILE *fichier;
    char ligne[100];
    int i = 0;
    int tabValeur[i+1];

    fichier = fopen("score.txt", "r");

    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        int score;
        

        // Essaye de lire le score à partir de la ligne
        if (sscanf(ligne, "Score de %*s : %d", &score) == 1) {
            // Imprime la valeur du score
            printf("Score : %d\n", score);
            tabValeur[i] = score;
            printf("%d %d \n",i ,tabValeur[i]);
        }
        i++;
    }

    fclose(fichier);
}


int topScore() {
    // Déclaration et initialisation des entrées de score
int i = 0;
    
    ScoreEntry scores[] = {
        {"uwu", 15},
        {"uwu", 15},
        {"uwuuu", 15},
        {"uwu", 21},
        {"awa", 15},
        {"owo", 15},
        {"afroune", 16},
        {"gjf", 7},
        {"hfjhfj", 14},
        {"sdfgdsfg", 15}
    };

    // Calcul du nombre d'entrées
    size_t numEntries = sizeof(scores) / sizeof(scores[0]);

    // Tri des scores en utilisant la fonction qsort
    qsort(scores, numEntries, sizeof(ScoreEntry), compareScores);

    // Affichage des scores triés
    printf("10 meilleure score :\n");
    for (size_t i = 0; i < numEntries; ++i) {
        printf("Score de %s : %d\n", scores[i].nom, scores[i].score);
    }

    return 0;
}
