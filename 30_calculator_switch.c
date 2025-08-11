/* Create a program to create a simple calculator that uses a switch statement to perform 
basic arithmetic operations like addition, subtraction, multiplication, and division.*/
#include <stdio.h>

int main(){
    int first, second;
    char opr;
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    printf("Now, enter the operation (+, -, *, /): ");
    scanf(" %c",&opr);

    switch (opr)
    {
    case '+':
        printf("%d + %d = %d\n", first,second,(first+second));
        break;
    case '-':
        printf("%d - %d = %d\n", first,second,(first-second));
        break;
    case '*':
        printf("%d * %d = %d\n", first,second,(first*second));
        break;
    case '/':
        if (second != 0)
        printf("%d / %d = %.2f\n", first, second, ((float)first/second));
    else
        printf("Error: Division by zero is not allowed\n");
    break;
    
    default:
        printf("Invalid operation!\n");
        printf("Please enter between (+, -, *, /) \n");
        break;
    }


    return 0;
}