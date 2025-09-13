// Create a program to search an element in a 2-D array.
#include <stdio.h>

void input_2d_arr(int row, int col, int arr[row][col]);
int search(int row, int col, int arr[row][col], int element);

int main(){
    int row, col, element;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    input_2d_arr(row, col, arr);

    printf("--------------------------\n");
    printf("Enter element to search: ");
    scanf("%d", &element);

    int occ = search(row, col, arr, element);


    if (occ > 0) {
        printf("Element %d found %d time(s).\n", element, occ);
    } else {
        printf("Element %d not found.\n", element);
    }

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

int search(int row, int col, int arr[row][col], int element) {
    int occurance = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == element){
                occurance++;
            }
        }
        
    }
    return occurance;
}