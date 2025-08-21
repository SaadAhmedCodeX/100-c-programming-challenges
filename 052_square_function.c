// Define a function square that takes an int and returns its square.'
#include <stdio.h>

int square(int);

int main(){
    int num, result;
    printf("Enter a number to find its square: ");
    scanf("%d",&num);

    result = square(num);
    printf("The square of %d is %d\n", num, result);
    return 0;
}

int square(int a){
    return a*a;
}