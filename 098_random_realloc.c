/* Create an array using calloc and fill it with random numbers, then use realloc to shrink 
the array size by half and print the remaining numbers. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // For generating random numbers

int main(){
    int *arr = (int*) calloc(10, sizeof(int));
    
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1; 
    }

    srand(time(NULL)); // Generates random number based on current time
    
    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 100; // Random number with range 0-99
    }
    
    printf("Random numbers: ");

    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    int *shrinked = (int*) realloc(arr, 5 * sizeof(int));
    
    if(shrinked == NULL){
        printf("Memory allocation failed!\n");
        free(arr);
        arr == NULL;
        return 1; 
    }
    
    arr = shrinked;

      printf("\nRandom numbers after shrinking: ");

    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}