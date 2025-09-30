/* Create a program where you need to store and process data for a Book with attributes like title, author, and price,
 demonstrating why a structure is more suitable than separate variables.*/
#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book library[3];  

    for (int i = 0; i < 3; i++) {
        printf("\nBook %d details:\n", i + 1);
        printf(" Title : ");
        scanf(" %[^\n]", library[i].title);
        printf(" Author: ");
        scanf(" %[^\n]", library[i].author);
        printf(" Price : ");
        scanf("%f", &library[i].price);
    }

    printf("\nLibrary Collection:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf(" Title : %s\n", library[i].title);
        printf(" Author: %s\n", library[i].author);
        printf(" Price : %.2f\n", library[i].price);
    }

    return 0;
}