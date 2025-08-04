// Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("Here are the results of the operations:\n");
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d modulo %d = %d\n", a, b, a%b);


    return 0;
}