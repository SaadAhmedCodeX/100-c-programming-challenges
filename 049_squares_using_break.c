//  Write a program that continuously reads integers from the user and prints their squares.
//  Use an infinite loop and a break statement to exit when a special number (e.g., -1) is entered.
#include <stdio.h>

int main()
{
    int num;
    
    while(1){
        printf("Enter a number to find its square (-1 to exit): ");
        scanf("%d", &num);
        if (num == -1){
            printf("You successfully exited the square calculator");
            break;
        }
        printf("The square of %d is %d\n", num, (num*num));
        printf("-----------------------------------\n");

    }
    return 0;
}