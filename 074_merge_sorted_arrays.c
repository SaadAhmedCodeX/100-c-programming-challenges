// Create a program to merge two sorted arrays.
#include <stdio.h>
#include <stdlib.h> 

void input_arr(int arr[], int size);
void merge_sorted_arrays(int arr1[], int arr2[], int arr3[], int size1, int size2);
void display_arr(int arr[], int size);

int main()
{
    int size1, size2;

    printf("Enter number of elements for first array: ");
    scanf("%d", &size1);

    printf("Enter number of elements for second array: ");
    scanf("%d", &size2);

    int *arr1 = malloc(size1 * sizeof(int));
    int *arr2 = malloc(size2 * sizeof(int));
    int *arr3 = malloc((size1 + size2) * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || arr3 == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // This program works properly only if both the arrays entered are already sorted

    printf("Enter %d elements for first array(sorted array):\n", size1);
    input_arr(arr1, size1);

    printf("Enter %d elements for second array(sorted array):\n", size2);
    input_arr(arr2, size2);

    printf("Entered arrays:\n");
    printf("First array: ");
    display_arr(arr1, size1);
    printf("Second array: ");
    display_arr(arr2, size2);

    merge_sorted_arrays(arr1, arr2, arr3, size1, size2);

    printf("The merged array is: ");
    display_arr(arr3, size1 + size2);

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}

void input_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void merge_sorted_arrays(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < size2)
    {
        arr3[k++] = arr2[j++];
    }
}

void display_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
