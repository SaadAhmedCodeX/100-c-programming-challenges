// Write a function that uses pointer arithmetic to copy an array of char into another.
#include <stdio.h>

void input_arr(char arr[], int size);
void copy_arr(char *arr, int size, char *new_arr);
void display_arr(char arr[], int size);

int main(){
    int size;

    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    char arr[size];  
    char new_arr[size];

    printf("Enter %d character elements:\n", size);
    input_arr(arr, size);

    printf("Original array:\n");
    display_arr(arr, size);

    printf("Copied array:\n");
    copy_arr(arr, size, new_arr);
    display_arr(new_arr, size);


    return 0;
}

void input_arr(char arr[], int size){
    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    
}

void copy_arr(char *arr, int size, char *new_arr){
     for (int i = 0; i < size; i++)
     {
        *new_arr = *arr;
        new_arr++;
        arr++;
        // *(new_arr + i) = *(arr + i);
     }
     
}

void display_arr(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %c", arr[i]);
    }
    printf("\n");
}
