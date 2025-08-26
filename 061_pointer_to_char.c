// Declare a pointer to a char and use it to read and print a character entered by the user.
#include <stdio.h>

int main(){
    char a;
    char *ptr = &a;

    printf("Enter a character to in pointer: ");
    scanf("%c",ptr);

    printf("Value of character is %c\n", *ptr);
    printf("Value of character is %c\n", a);

    return 0;
}