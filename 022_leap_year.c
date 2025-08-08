// Create a program that determines if a given year is a leap year.
#include <stdio.h>

int main() {
    int year;
    do {
    printf("Enter a year between 1000 and 5000: ");
    scanf("%d", &year);

    if (year < 1000 || year > 5000) {
        printf("Invalid year. Please try again.\n");
    } 
    } while (year < 1000 || year > 5000);

    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Yes, %d is a leap year.\n", year);
    } else {
        printf("No, %d is not a leap year.\n", year);
    }

    return 0;
}
