// Create a program to verify if a number is a palindrome.
#include <stdio.h>

int main(){
    int num, originalNum, digit, reversed = 0;
    printf("Enter a number to verify whether it is Palindrome or not: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num = num / 10;
    }
    
    if(reversed == originalNum){
        printf("%d is a Palindrome number!\n", originalNum);
    }
    else{
        printf("%d is not a Palindrome number!\n", originalNum);
    }

    return 0;
}