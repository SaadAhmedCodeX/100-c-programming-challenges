// 29. Create a program to print the month of the year based on a number (1-12) input by the user.
#include <stdio.h>

int main(){
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("Feburary\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    
    default:
        printf("Invalid month!\n");
        printf("Please enter between (1-12)");
        break;
    }

    return 0;
}