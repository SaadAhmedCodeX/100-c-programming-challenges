// Use a 2-D character array to store and display a tic-tac-toe board.
#include <stdio.h>

int main()
{
    char board[3][3] = {{'X', 'O', 'X'}, {'O', 'X', 'O'}, {'X', 'O', 'X'}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (j < 2)
            {
                printf(" %c |", board[i][j]);
            }
            else
            {
                printf(" %c ", board[i][j]);
            }
        }
        printf("\n");
        if (i < 2)
        {
            printf("-----------\n");
        }
    }

    return 0;
}