// Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>

int main(){
    char name[50];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("The entered name is: ");
    puts(name);

    return 0;
}