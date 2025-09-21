// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char text[100];
    printf("Enter your text to convert into uppercase: ");
    fgets(text, sizeof(text), stdin);

    // for (int i = 0; text[i] != '\0'; i++)
    for (int i = 0; i < strlen(text); i++)
    {
        text[i] = toupper(text[i]);
    }
    
    printf("Upper case string: %s", text);
    return 0;
}