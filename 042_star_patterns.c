/* Create a program that print patterns:
 *       *****           *
 **      ****           **
 ***     ***           ***
 ****    **           ****
 *****   *           *****     */
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\n-------------------------\n");
    printf("Right half pyramid:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n-------------------------\n");
    printf("Inverted right half pyramid:\n");
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n-------------------------\n");
    printf("Right-aligned inverted half pyramid:\n");
    for (int i = rows; i >= 1; i--)
    {
        for (int k = 0; k < rows - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}