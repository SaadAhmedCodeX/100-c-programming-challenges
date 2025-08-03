// Program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
#include <stdio.h>

int main(){
    const float PI = 3.14159;
    int radius;
    printf("Enter the radius of the circle in cms: ");
    scanf("%d",&radius);

    printf("The circumference of your circle is %f cms\n", 2*PI*radius);
    return 0;
}