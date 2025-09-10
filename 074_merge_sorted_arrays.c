// Create a program to merge two sorted arrays.
#include <stdio.h>

void input_arr(int arr[], int size);
void merge_sorted_arrays(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3);
void display_arr(int arr[], int size);

int main(){
    int size1, size2;

    printf("Enter number of elements for first array: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter number of elements for second array: ");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter %d elements for first array: \n");
    input_arr(arr1, size1);
    printf("Enter %d elements for second array: \n");
    input_arr(arr2, size2);

    int size3 = size1 + size2;
    int arr3[size3];

    printf("Entered arrays:\n");
    printf("First array: ");
    display_arr(arr1, size1);
    printf("Second array: ");
    display_arr(arr2, size2);

    printf("The merged array is: ");
    merge_sorted_arrays(arr1, arr2, arr3, size1, size2, size3);
    display_arr(arr3, size3);

    return 0;
}

void input_arr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void merge_sorted_arrays(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3){
    int i = 0, j = 0, k = 0;
    while(k < size3){
        if(j == size2){
            arr3[k] = arr1[i];
            i++;
        } else if (i == size1){
            arr3[k] = arr1[j];
            j++;
        } else if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
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