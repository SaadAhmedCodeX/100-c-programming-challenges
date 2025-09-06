// Create a program to reverse an array.
#include <stdio.h>

void input_array(int arr[], int size);
void swap(int *first, int *second);
void reverse(int arr[], int size);
void display_arr(int arr[], int size);

int main(){
    int size;
    
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    input_array(arr, size);

    printf("Original array before reversing:\n");
    display_arr(arr, size);

    printf("\nArray after reversing:\n");
    reverse(arr, size);
    display_arr(arr, size);

    return 0;
}

void input_array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

void swap(int *first, int *second){
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

void reverse(int arr[], int size){
    for (int i = 0; i < size / 2 ; i++) // Loop only till half since each iteration swaps two elements
    {
       swap(&arr[i], &arr[(size - 1)- i]); 
    }
    
}

void display_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}