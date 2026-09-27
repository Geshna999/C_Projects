#include <stdio.h>
#include <stdlib.h>
    void initializeBoard();

    char board[] = {'0','1','2','3','4','5','6','7','8','9'};


int main()
{

    int currentplayer = 1;
    int userchoice;
    char playerinput;
    int playerIndex = 0;       // ADD THIS

    do
    {
        initializeBoard();

        if (currentplayer == 1)
        {
            playerinput = 'X';
        }
        else
        {
            playerinput = 'O';
        }

        printf("Player %d (%c), enter a number: ",
               currentplayer, playerinput);

        scanf("%d", &userchoice);

        board[userchoice] = playerinput;

        playerIndex++;         // ADD THIS

        if (currentplayer == 1)
        {
            currentplayer = 2;
        }
        else
        {
            currentplayer = 1;
        }

    } while (playerIndex <= 9); // CHANGE THIS

    return 0;
}

void initializeBoard()
{
    printf("\n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
    printf("\n");
}