#include <stdio.h>
#include <stdbool.h>
#include "game.h"

int main(void) {
    // printGameBoard();
    // isGameOver();
    while (isGameOver() == false) {
        printGameBoard();
        playersMove();
    }

    printGameBoard();
    // if (playerTurn == 1) {
    //     printf("X Wins!");
    // } else {
    //     printf("O Wins!");
    // }


    return 0;
}