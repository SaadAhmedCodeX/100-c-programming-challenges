// Create a program that determines if a number is positive, negative, or zero.
#include <stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {  
    printf("Invalid input!\n");
    return 1; // Exits the program early if input is not a valid integer
    }

    if(number == 0){
        printf("The entered number is zero\n");
    }
    else if(number > 0){
        printf("The entered number is positive\n");
    }
    else{
        printf("The entered number is negative\n");
    }

    return 0;
}