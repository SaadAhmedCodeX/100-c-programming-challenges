// Create a program to print the Fibonacci series up to a certain number.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the maximum value for the Fibonacci series: ");
    scanf("%d", &num);
    int first = 0, second = 1, next;

    printf("Fibonaccis series till %d:\n", num);

    if (first <= num)
    {
        printf("%d", first);
    }
    if (second <= num)
    {
        printf(", %d", second);
    }
    next = first + second;
    while (next <= num)
    {
        printf(", %d", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}