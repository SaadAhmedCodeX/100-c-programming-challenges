// Create a program using for to display if a number is prime or not.
#include <stdio.h>

int main()
{
    int num, isPrime = 1;
    do
    {
        printf("Enter a number to check whether it is prime or not: ");
        scanf("%d", &num);

        if (num < 2)
        {
            printf("Please enter a number greater than or equal to 2.\n");
        }
    } while (num < 2);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

if (isPrime == 1)
{
    printf("%d is a prime number \n", num);
}
else
{
    printf("%d is not a prime number\n", num);
}
return 0;
}