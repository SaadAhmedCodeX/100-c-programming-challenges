// Write a program that calculates the factorial of a given number.
#include <stdio.h>

int main(){
    int num, fact = 1;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d \n",num, fact);
    return 0;
}