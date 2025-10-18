// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.
#include <stdio.h>

int main(){

    FILE *source_file = fopen("101_source_file.txt", "r");
    FILE *dest_file = fopen("101_dest_file.txt", "w");

    if(source_file == NULL || dest_file == NULL){
        printf("Error while opening file.\n");
        return 1;
    }

    while(1){
        char c = fgetc(source_file);
        if (c == EOF) break;
        fputc(c, dest_file);
    }

    printf("File's contents copied successfully!\n");

    fclose(source_file);
    fclose(dest_file);

    source_file = dest_file = NULL;

    return 0;
}