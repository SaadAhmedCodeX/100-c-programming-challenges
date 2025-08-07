// Create a program to calculate product of two floating points numbers.
#include <stdio.h>

int main(){
    float first, second, product;

    printf("Enter first floating number: ");
    scanf("%f",&first);
    printf("Enter second floating number: ");
    scanf("%f",&second);

    product = first * second;
    printf("The product of the two floating point number is %.2f\n", product);
    return 0;
}