// Write a program to change the value of an integer variable using a pointer and the * operator.
#include <stdio.h>

int main()
{
    int num = 5;
    int *ptr = &num;

    printf("Value of num is %d\n", num); // Before changing the value
    *ptr = 63;
    printf("Value of num is %d\n", num); // After changing the value 
    return 0;
}