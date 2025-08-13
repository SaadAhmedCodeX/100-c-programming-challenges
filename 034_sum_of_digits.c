// Create a program that computes the sum of the digits of an integer.
#include <stdio.h>

int main(){
    int num, digit,originalNum, sum = 0;
    printf("Enter an integer to find the sum of its digits: ");
    scanf("%d",&num);
    originalNum = num;
    
    while(num != 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("The sum of the digits of %d is %d\n", originalNum, sum);
    
    return 0;
}