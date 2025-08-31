// Create a program to find the maximum and minimum element in an array.
#include <stdio.h>

int main(){
    int n, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    max = min = arr[0]; // Initializing both max and min to the first element of the array

    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("The largest element in the array is %d\n", max);
    printf("The smallest element in the array is %d\n", min);
    
    return 0;
}