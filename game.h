#ifndef GAME_H
#define GAME_H

void printGameBoard(void);
void playersMove(void);
bool isWinner(void);
bool isTie(void);
int playerTurnCheck(void);
void resetGameBoard(void);
void resetPlayerTurn(void);
void scoreTracker(void);

#endif