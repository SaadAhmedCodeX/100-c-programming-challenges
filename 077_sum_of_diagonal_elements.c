// Program to find the sum of diagonal elements in a square matrix
#include <stdio.h>

void input_2d_arr(int row, int col, int arr[row][col]);
void display_arr(int row, int col, int arr[row][col]);
void sum_diagonal(int row, int col, int arr[row][col], int choice);

int main()
{
    int n, choice;

    printf("Enter the size of the square matrix (rows = columns): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("\nEnter the elements of the matrix:\n");
    input_2d_arr(n, n, arr);

    printf("\nThe entered matrix is:\n");
    display_arr(n, n, arr);

    do
    {
        printf("\nChoose an option:\n");
        printf("1 - Calculate the sum of the left diagonal\n");
        printf("2 - Calculate the sum of the right diagonal\n");
        printf("3 - Calculate the sum of both diagonals\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice != 0) {
            sum_diagonal(n, n, arr, choice);
        }

    } while (choice != 0);

    return 0;
}

void input_2d_arr(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display_arr(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }
}

void sum_diagonal(int row, int col, int arr[row][col], int choice)
{
    int sum_right_diagonal = 0;
    int sum_left_diagonal = 0;
    int sum_both_diagonal = 0;

    switch (choice)
    {
    case 1: // left diagonal
        for (int i = 0; i < row; i++)
        {
            sum_left_diagonal += arr[i][i];
        }
        printf("\nThe sum of the left diagonal elements is: %d\n", sum_left_diagonal);
        break;

    case 2: // right diagonal
        for (int i = 0; i < row; i++)
        {
            sum_right_diagonal += arr[i][row - i - 1];
        }
        printf("\nThe sum of the right diagonal elements is: %d\n", sum_right_diagonal);
        break;

    case 3: // both diagonals
        for (int i = 0; i < row; i++)
        {
            sum_left_diagonal += arr[i][i];
            if (i != row - 1 - i) // avoid double counting middle element
            {
                sum_right_diagonal += arr[i][row - i - 1];
            }
        }
        sum_both_diagonal = sum_left_diagonal + sum_right_diagonal;
        printf("\nThe sum of both diagonal elements is: %d\n", sum_both_diagonal);
        break;

    default:
        printf("\nInvalid choice. Please try again.\n");
        break;
    }
}
