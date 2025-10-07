/* Use calloc to allocate an array for a set of char characters representing a sentence, 
ensuring all the memory is initialized to zero. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *sentence = (char*) calloc(100, sizeof(char));

    if(sentence == NULL){
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Ensuring all elements are initiaized.\n");
    for (int i = 0; i < 100; i++)
    {
        printf(" %c", sentence[i]);
    }

    printf("\nEnter a text: ");
    fgets(sentence, 100, stdin);

    printf("\nEntered text: %s",sentence );

    free(sentence);
    sentence = NULL;

    return 0;
}