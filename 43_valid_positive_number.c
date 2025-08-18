// Create a program that prompts the user to enter a positive number.
// Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include <stdio.h>

int main(){
    int num;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d",&num);
        if(num <= 0){
            printf("You entered a non-positive number!\n");
            printf("Please enter a positive number. Try again!\n");
        }
    } while (num <= 0);
    printf("You have sucessfully entered a positive number!\n");
    return 0;
}