// Create a program that performs both reading and writing operations on a file called data.txt
#include <stdio.h>

int main(){
    FILE *file = fopen("104_data.txt", "r+");
    
    if(!file){
        printf("Error in opening file\n");
        return 1;
    }

    char buffer[100];

    fgets(buffer, 100, file);
    printf("Reading from file: %s\n", buffer);

    fseek(file, 0, SEEK_END); // Moves the write cursor to the end

    fputs("This message is written into the program\n", file);

    fclose(file);
    file = NULL;

    return 0;
}