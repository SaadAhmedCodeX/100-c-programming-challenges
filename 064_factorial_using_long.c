// Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
#include <stdio.h>

long factorial_long(int num);
long long factorial_longlong(int num);

int main() {
    int num = 20;  
    printf("Calculating factorial of %d\n\n", num);

    long result_long = factorial_long(num);
    long long result_longlong = factorial_longlong(num);

    printf("Using long      : %ld\n", result_long);
    printf("Using long long : %lld\n", result_longlong);

    return 0;
}

// Factorial using long
long factorial_long(int num) {
    if (num <= 1) return 1;
    return num * factorial_long(num - 1);
}

// Factorial using long long
long long factorial_longlong(int num) {
    if (num <= 1) return 1;
    return (long long)num * factorial_longlong(num - 1);
}