// Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.
#include <stdio.h>
#include <string.h>

void is_palindrome(char str[]);

int main(){
    char string[100];
    char originalString[100];

    printf("Enter the string to check if its palindrome or not: ");
    scanf("%s", string);

    is_palindrome(string);

    return 0;
}


void is_palindrome(char str[]) {
    char reversed[100];
    int length = strlen(str);

    // Build reversed string
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // null terminate

    if (strcmp(str, reversed) == 0) {
        printf("The given string is Palindrome!\n");
    } else {
        printf("The given string is not Palindrome!\n");
    }
}