#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//VARIABLES
   int y = 8;
   int dessin = 0;

void dessinPendu (int dessin) {
    if (y--) {
        dessin++;
        printf("\n\nERREUR : la lettre n'est pas dans le mot mystère.\n");
      
      // Affichage du dessin
        switch (dessin) {
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
}