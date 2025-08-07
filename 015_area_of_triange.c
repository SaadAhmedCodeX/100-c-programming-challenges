// Create a program to calculate the Area of a triangle
#include <stdio.h>

int main(){
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Enter the height of the triangle: ");
    scanf("%f",&height);

    area = 0.5*base*height;

    printf("The area of a triangle of base %.2f and height %.2f is %.2f sq.units\n",base, height, area);
    return 0;
}