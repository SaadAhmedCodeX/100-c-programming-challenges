// Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low"
// using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).
#include <stdio.h>

int main()
{
    int marks;
    do
    {
        printf("Enter marks: ");
        scanf("%d", &marks);
        if (marks < 1 || marks > 100)
        {
            printf("Enter valid marks (between 1-100). Try again\n");
        }
    } while (marks < 0 || marks > 100);

    printf("Your marks are in this category: ");
    marks > 80 ? printf("High\n") 
               : (marks > 50) ? printf("Moderate\n")
                              : printf("Low");
    return 0;
}
