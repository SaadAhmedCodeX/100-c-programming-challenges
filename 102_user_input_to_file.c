// Write a program that takes user input and writes it to a file, ensuring each entry is on a new line.
#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("102_input_file.txt", "w");

    if(!file){
        printf("Error while opening file.\n");
        return 1;
    }

    char input[100];
    do{
        fgets(input, 100, stdin);
        fputs(input, file);
    } while(strmp(input, "exit\n") != 0);
    
    return 0;
}