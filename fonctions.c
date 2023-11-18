#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}

const char ImagePendue (int y) {

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
