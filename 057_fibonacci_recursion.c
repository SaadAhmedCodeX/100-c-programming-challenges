// Create a program using recursion to display the Fibonacci series upto a certain number.

int fibonacci(int);

#include <stdio.h>

int main()
{
    int num_terms;
    do
    {
        printf("Enter the number of terms for the Fibonacci series: ");
        scanf("%d", &num_terms);

        if (num_terms < 0)
        {
            printf("Invalid input. Please enter a non-negative number of terms\n");
        }

    } while (num_terms < 0);

    printf("Fibonacci Series up to %d terms:\n", num_terms);
    for (int i = 0; i < num_terms; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}