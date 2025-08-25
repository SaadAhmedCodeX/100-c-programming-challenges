// Create a program using recursion to check if a number is a palindrome using recursion.
#include <stdio.h>

int reverse(int, int);

int main()
{
    int num;
    printf("Enter the number to check if its Palindrome or not: ");
    scanf("%d", &num);

    int rev = reverse(num, 0);
    if (num == rev)
    {
        printf("%d is Palindrome number!\n", num);
    }
    else
    {
        printf("%d is not a Palindrome number!\n", num);
    }
    return 0;
}

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    int digit = num % 10;
    int new_num = num / 10;
    int new_rev = rev * 10 + digit;

    return reverse(new_num, new_rev);
}