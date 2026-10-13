#include <stdio.h>
#include "game.h"

char gamePieces[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int playerTurn = 0;

void printGameBoard(void) {
    printf(" %c | %c | %c \n", gamePieces[0], gamePieces[1], gamePieces[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", gamePieces[3], gamePieces[4], gamePieces[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", gamePieces[6], gamePieces[7], gamePieces[8]);
}

void playersMove(void) {
    int playerSelection;

    printf("Select a square to place your piece in: ");
    scanf("%i", &playerSelection);
    playerSelection--;
    
    if (gamePieces[playerSelection] != 'X' && gamePieces[playerSelection] != 'O') {
        if (playerTurn == 0) {
            gamePieces[playerSelection] = 'X';
            playerTurn = 1;
        } else {
            gamePieces[playerSelection] = 'O';
            playerTurn = 0;
        }
    } else {
        printf("Square is already taken!\n");
    }
}