// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
#include <stdio.h>
#include <string.h>

int main(){
    const char EXIT[] = "exit";
    char input[100];

    while(1){
        printf("Please enter text (enter 'exit' to stop): ");
        scanf("%s", input);

        if(strcmp(input, EXIT) == 0){
            break;
        }
    }

    printf("\nExited Successfully\n");
    return 0;
}