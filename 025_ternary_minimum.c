// Create a program to find the minimum of two numbers using ternary operator.
#include <stdio.h>

int main(){
    int first, second;
    printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);

    int min = first < second ? first : second; 
    printf("Minimum of the two is %d\n", min);
    return 0;
}
