// Create a program to convert Fahrenheit to Celsius
// °C = (°F - 32) x 5/9
#include <stdio.h>

int main(){
    float c,f;
    printf("Enter the value of Fahrenheit to convert: ");
    scanf("%f",&f);

    c = (f - 32) * 5/9;

    printf("%.2f Fahrenheit = %.2f Celsius \n",f,c);
    return 0;
}