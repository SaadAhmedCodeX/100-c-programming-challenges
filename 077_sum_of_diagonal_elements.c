// Create a program to find the sum of two diagonal elements
#include <stdio.h>

void input_2d_arr(int row, int col, int arr[row][col]);
void sum_of_diagnoal(int row, int col, int arr[row][col]);


int main(){
    int n;

    printf("Enter size of square matrix (rows = columns): ");
    scanf("%d", &n);

    int arr[n][n];

    input_2d_arr(n, n, arr);


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

void sum_of_diagnoal(int row, int col, int arr[row][col]){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
            printf("%d", arr[i][j]);
        }
    }
}