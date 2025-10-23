// Develop a program that appends user input to the end of log file each time it's run.
#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("103_user_input_append.txt", "a");

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