// Create a program that reads integers from a file and calculates their sum.
#include <stdio.h>

int main(){
    const char filename[] = "100_numbers.txt";

    FILE *file = fopen(filename, "r");

    if(file == NULL){
        printf("File could not be opened\n");
        return 1;
    }

    int temp;
    int sum = 0;

    while(fscanf(file, "%d", &temp) == 1){
        sum += temp;
    }

    printf("The sum of all numbers from the file is %d\n", sum);

    fclose(file);
    file = NULL;

    return 0;
}