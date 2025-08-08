// Create a program that calculates grades based on marks
// A -> above 90%
// B -> above 75%
// C -> above 60%
// D -> above 30%
// F -> below 30%
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

    if (marks > 90)
    {
        printf("You got A Grade!\n");
    }
    else if (marks > 75)
    {
        printf("You got B Grade!\n");
    }
    else if (marks > 60)
    {
        printf("You got C Grade!\n");
    }
    else if (marks > 30)
    {
        printf("You got D Grade!\n");
    }
    else
    {
        printf("You got Failed! :(\n");
    }
    return 0;
}