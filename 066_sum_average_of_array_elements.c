// Create a program to find the sum and average of all elements in an array.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;
    printf("The sum of all the elements in the array is %d\n", sum);
    printf("The average of all the elements in the array is %.2f\n", average);

    return 0;
}
