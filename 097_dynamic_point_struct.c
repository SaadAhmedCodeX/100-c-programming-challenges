/* Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then 
properly deallocate the memory using free.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Point;

void input_point(Point*);
void output_point(Point*);

int main(){
    Point *start = (Point*) malloc(sizeof(Point));
    Point *end = (Point*) malloc(sizeof(Point));

    if(start == NULL || end == NULL){
        printf("Memory Issues!\n");
        return 1;
    }

    printf("Enter the starting points of the line: ");
    input_point(start);
    printf("Enter the ending points of the line: ");
    input_point(end);

    printf("Here is the details:\n");
    output_point(start);
    output_point(end);

    free(start);
    free(end);
    start = end = NULL;

    return 0;
}

void input_point(Point *point){
    printf("\nEnter x coordinates: ");
    scanf("%d", &point->x);
    printf("Enter y coordinates: ");
    scanf("%d", &point->y);
}

void output_point(Point *point){
    printf("Coordinates(%d, %d)\n", point->x, point->y);
}