#include <stdio.h>
#include <stdbool.h>
#include "game.h"

int main(void) {
    char playAgain = 'y';

    do {
        resetGameBoard();
        while (isWinner() == false && isTie() == false) {
            printGameBoard();
            playersMove();
        }

        if (isWinner() == true) {
            printGameBoard();
            if (playerTurnCheck() == 1) {
                printf("'X' Wins!\n");
            } else {
                printf("'O' Wins!\n");
            }
        } else {
            printGameBoard();
            printf("Tie Game!\n");
        }

        printf("\nDo want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Have a good day, Goodbye!\n");
    return 0;
}