// Create a program to input name of the person and respond with "Welcome to 100 C programming challenges"
#include <stdio.h>

int main(){
    char name[50];
    
    printf("Please enter your name: ");
    scanf("%49s",name);

    printf("Welcome %s to 100 C-programming challenges\n");
    return 0;
}