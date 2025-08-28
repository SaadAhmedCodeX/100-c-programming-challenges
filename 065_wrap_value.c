// Write a program that nitialize an unsigned int to its maximum value and an int to its maximum value.
// Add 1 to both. The unsigned int wraps to 0, while the int overflows into the negative range
#include <stdio.h>
#include <limits.h>

int main(){
    unsigned int us_integer = UINT_MAX;
    int normal_integer = INT_MAX;
    
    printf("\nMax value of unsigned int is: %u\n", us_integer);
    printf("Max value of int is: %d\n", normal_integer);

    us_integer++;
    normal_integer++;

    printf("\nAfter adding 1 to both:\n");
    printf("Unsigned int after increment: %u\n", us_integer);
    printf("Int after increment: %d\n", normal_integer);

    return 0;
}