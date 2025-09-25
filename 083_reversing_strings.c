// Write a function that takes a string and reverses it in place.
#include <stdio.h>
#include <string.h>

void swap(char *first, char *second);
void reverse_str(char str[]);

int main(){
    char text[100];

    printf("Please enter your text to reverse: ");
    fgets(text, sizeof(text), stdin);

    printf("Original String:\n");
    puts(text);
    reverse_str(text);
    printf("String after reversal:");
    puts(text);

}


void swap(char *first, char *second){
    char temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

void reverse_str(char str[]){
    int length = strlen(str);
    for (int i = 0; i < length / 2 ; i++)
    {
       swap(&str[i], &str[(length - 1)- i]); 
    }
    
}
