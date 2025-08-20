// Create a program using continue to print only even numbers using continue for odd numbers.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the limit number to display even numbers up to: ");
    scanf("%d", &num);

    printf("Even numbers up to %d are:\n", num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}