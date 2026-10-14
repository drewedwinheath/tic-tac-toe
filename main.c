#include <stdio.h>
#include <stdbool.h>
#include "game.h"
#include <string.h>

int main(void) {
    char playAgain[100];

    do {
        resetGameBoard();
        while (isWinner() == false && isTie() == false) {
            printGameBoard();
            playersMove();
        }

        if (isWinner() == true) {
            printGameBoard();
            if (playerTurnCheck() == 1) {
                printf("'X' Wins!\n\n");
            } else {
                printf("'O' Wins!\n\n");
            }
        } else {
            printGameBoard();
            printf("Tie Game!\n\n");
        }

        scoreTracker();

        do {
            printf("\nDo want to play again? (y/n): ");
            fgets(playAgain, sizeof(playAgain), stdin);
            if (playAgain[0] != 'Y' && playAgain[0] != 'y' && playAgain[0] != 'N' && playAgain[0] != 'n' || strlen(playAgain) != 2) {
                printf("Invalid input!");
                continue;
            }
        } while (playAgain[0] != 'Y' && playAgain[0] != 'y' && playAgain[0] != 'N' && playAgain[0] != 'n' || strlen(playAgain) != 2);


        resetPlayerTurn();
    } while (playAgain[0] == 'y' || playAgain[0] == 'Y');

    printf("Have a good day, Goodbye!\n");
    return 0;
}