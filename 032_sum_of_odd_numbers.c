// Create a program to sum all odd numbers from 1 to a specified number N.
#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i += 2)
    {
       sum = sum + i;
    }

    printf("The sum of all odd numbers from 1 to %d is %d \n", num, sum);
    
    return 0;
}