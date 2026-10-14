#include <stdio.h>
#include <stdbool.h>
#include "game.h"
#include <string.h>
#include <stdlib.h>

int main(void) {
    char playAgain[100];

    system("clear");
    do {
        resetGameBoard();
        while (isWinner() == false && isTie() == false) {
            printGameBoard();
            playersMove();
        }

        if (isWinner() == true) {
            printGameBoard();
            if (playerTurnCheck() == 1) {
                printf("\n'X' Wins!\n\n");
            } else {
                printf("\n'O' Wins!\n\n");
            }
        } else {
            printGameBoard();
            printf("\nTie Game!\n\n");
        }

        scoreTracker();

        do {
            printf("\nDo want to play again? (y/n): ");
            fgets(playAgain, sizeof(playAgain), stdin);
            if ((playAgain[0] != 'Y' && playAgain[0] != 'y' && playAgain[0] != 'N' && playAgain[0] != 'n') || strlen(playAgain) != 2) {
                printf("Invalid input!");
                continue;
            }
        } while ((playAgain[0] != 'Y' && playAgain[0] != 'y' && playAgain[0] != 'N' && playAgain[0] != 'n') || strlen(playAgain) != 2);


        resetPlayerTurn();
        system("clear");
    } while (playAgain[0] == 'y' || playAgain[0] == 'Y');

    printf("Have a good day, Goodbye!\n");
    return 0;
}