// Define a Car structure with fields for company, model, year, and color.
#include <stdio.h>

typedef struct Car
{
    char company[50];
    char model[50];
    int year;
    char color[50];
}  Car;

// typedef struct Car Car; 

int main(){
    Car cars[] = {
        {"Tesla", "Model S", 2022, "Red"},
        {"Toyota", "Corolla", 2018, "White"},
        {"Ford", "Mustang", 2020, "Blue"}
    };

    printf("\nCars Collection:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("\nCar %d:\n", i + 1);
        printf(" Company: %s\n", cars[i].company);
        printf(" Model  : %s\n", cars[i].model);
        printf(" Year   : %d\n", cars[i].year);
        printf(" Color  : %s\n", cars[i].color);
    }
    return 0;
}