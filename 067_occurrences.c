// Create a program to find number of occurrences of an element in an array.
#include <stdio.h>

int occurrences(int arr[], int size, int element);

int main() {
    int n, element, choice;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   do {
        printf("Enter the element to search: ");
        scanf("%d", &element);

        int count = occurrences(arr, n, element);
        printf("The number of occurrences of %d is %d\n", element, count);

        printf("Do you want to search another element? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}

int occurrences(int arr[], int size, int element) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            counter++;
        }
    }
    return counter;
}