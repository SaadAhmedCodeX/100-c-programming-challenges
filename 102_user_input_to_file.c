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
    while(1){
        printf("Enter text to be written into the file:\n");
        fgets(input, 100, stdin);
        if(strcmp(input, "exit\n") == 0) break;
        fputs(input, file);
    }

    fclose(file);
    file = NULL;

    return 0;
}