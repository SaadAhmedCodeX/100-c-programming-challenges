// Given an integer value, convert it to a floating-point value and print both.
#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Original number is: %d\n", number);
    printf("Float converted is : %f\n", (float)number);
    return 0;
}