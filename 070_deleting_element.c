// Create a program to return a new array deleting a specific element.
#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void display_arr(int arr[], int size);

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int new_arr[size];
    int new_size;
    int element;

    printf("The original array is:\n");
    display_arr(arr, size);

    printf("\nEnter the element to delete: ");
    scanf("%d", &element);


    delete(arr, size, new_arr, &new_size, element);

    printf("\nArray after deleting the element: \n");
    display_arr(new_arr, new_size);

    return 0;
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != element)
        {
            new_arr[j] = arr[i];
            j++;
        }
    }
    *new_size = j;
}
void display_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
