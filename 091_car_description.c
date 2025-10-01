// Pass a Car structure to a function that prints out a description of the car in one complete sentence.
#include <stdio.h>

typedef struct Car {
    char company[50];
    char model[50];
    int year;
    char color[50];
} Car;

void printCarDescription(Car *c);

int main() {
    Car Tesla = {"Tesla", "Model S", 2022, "Red"};
    Car Toyota = {"Toyota", "Corolla", 2018, "White"};

    printCarDescription(&Tesla);      
    printCarDescription(&Toyota); 

    return 0;
}

void printCarDescription(Car *c){
    printf("The car is a %d %s %s in %s color.\n", c->year, c->company, c->model, c->color);
}