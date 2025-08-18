// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0.
// The total sum should then be displayed.
#include <stdio.h>

int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter your number: ");
        scanf("%d", &num);
        if (num != 0)
        {
            printf("To stop and calcualte the sum, enter 0\n");
        }
        sum += num;
    } while (num != 0);

    printf("The sum of all entered numbers is %d\n", sum);
    return 0;
}