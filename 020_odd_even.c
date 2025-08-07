// Create a program that determines if a number is odd or even.
#include <stdio.h>

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (number % 2 == 0)
        printf("It's an Even number\n");
    else
        printf("It's an Odd number\n");

    return 0;
}