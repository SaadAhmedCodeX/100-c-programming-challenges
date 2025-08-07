// Create a program to calculate Perimeter of a rectangle (or any quadrilateral)
#include <stdio.h>

int main(){
    int a, b, c, d, perimeter;
    printf("Enter the length of first side of a rectange: ");
    scanf("%d",&a);
    printf("Enter the length of second side of a rectange: ");
    scanf("%d",&b);
    printf("Enter the length of third side of a rectange: ");
    scanf("%d",&c);
    printf("Enter the length of fourth side of a rectange: ");
    scanf("%d",&d);

    perimeter = (a+b+c+d);
    printf("The Perimeter of your shape is  %d\n", perimeter);


    return 0;
}