// Create a program to do sum and average of all elements in a 2-array.
#include <stdio.h>

void input_2d_arr(int row, int col, int arr[row][col]);
void sum_average(int row, int col, int arr[row][col]);

int main() {
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    input_2d_arr(row, col, arr);
    sum_average(row, col, arr);

    return 0;
}

void input_2d_arr(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void sum_average(int row, int col, int arr[row][col]) {
    int sum = 0;
    float average;
    int n = row * col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }

    average = (float)sum / n;

    printf("The sum of elements of given 2D array: %d\n", sum);
    printf("The average of elements of given 2D array: %.2f\n", average);
}