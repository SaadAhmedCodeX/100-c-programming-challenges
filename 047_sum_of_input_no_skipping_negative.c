// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.
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
        if (num < 0){
            continue;
        }
        sum += num;
    } while (num != 0);

    printf("The sum of all entered numbers is %d\n", sum);
    return 0;
}