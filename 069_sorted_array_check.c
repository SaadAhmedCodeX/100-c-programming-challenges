// Create a program to check if the given array is sorted.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    if (n <= 1) {
        printf("The array is sorted (trivial case).\n");
        return 0;
    }

    printf("Enter %d elements\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int increasing = 1; // Assuming that the array is sorted in increasing order
    int decreasing = 1; // Assuming that the array is sorted in decreasing order

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            decreasing = 0;
        }
        else if (arr[i] < arr[i - 1])
        {
            increasing = 0;
        }
    }

    if(increasing){
        printf("The array is sorted in increasing order\n");
    }
    else if(decreasing){
        printf("The array is sorted in decreasing order\n");
    }
    else{
        printf("The array is not sorted!\n");
    }
    return 0;
}