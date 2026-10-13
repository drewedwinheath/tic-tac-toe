#include <stdio.h>
#include <stdbool.h>
#include "game.h"

int main(void) {

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
    
    return 0;
}