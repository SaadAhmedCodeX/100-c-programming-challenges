// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.

void increment(int);

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before: Value of num is %d\n", num);
    increment(num);
    printf("After: Value of num is %d\n", num);

    return 0;
}

void increment(int a)
{
    printf("In function Before: Value of num is %d\n", a);
    a++;
    printf("In function After: Value of num is %d\n", a);
}