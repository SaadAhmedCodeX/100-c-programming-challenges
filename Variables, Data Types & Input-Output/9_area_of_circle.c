// Program to print the area of a circle
#include <stdio.h>

int main(){
    int radius;
    float area;
    const float PI = 3.14159;

    printf("Enter the radius of a  circle: ");
    scanf("%d",&radius);

    area = PI*(radius*radius);

    printf("The area of circle of radius %d is %f\n",radius,area);

    return 0;
}