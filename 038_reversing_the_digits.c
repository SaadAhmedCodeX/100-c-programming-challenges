// Create a program to reverse the digits of a number.
#include <stdio.h>

int main()
{
    int num, reversed = 0, originalNum, digit;
    
    do{
    printf("Enter the number to be reversed: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Invalid input!\n");
        printf("Please enter a145 positive number\n");
    } while (num < 0);

    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("Reverse of %d is %d \n", originalNum, reversed);

    return 0;
}