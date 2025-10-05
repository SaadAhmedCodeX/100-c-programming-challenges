// Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.
#include <stdio.h>
#include <stdlib.h>

typedef struct Car
{
    char company[50];
    char model[50];
    int year;
    char color[50];
} Car;

void printCarDescription(Car *c);

int main()
{
    Car *my_car = (Car *)malloc(sizeof(Car)); // Memory allocation

    if (my_car == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // non-zero for error
    }
    printf("Enter your car company: ");
    scanf("%s", my_car->company);

    printf("Enter your car model: ");
    scanf("%s", my_car->model);

    printf("Enter your car's manufacturing year: ");
    scanf("%d", &my_car->year);

    printf("Enter your car color: ");
    scanf("%s", my_car->color);

    printf("Your car details:\n");
    printCarDescription(my_car);

    free(my_car); // Memory deallocation
    my_car = NULL;
    return 0;
}

void printCarDescription(Car *c)
{
    printf("The car is a %d %s %s in %s color.\n", c->year, c->company, c->model, c->color);
}