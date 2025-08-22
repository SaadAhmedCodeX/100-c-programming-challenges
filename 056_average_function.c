// Call a function get_average that takes five int numbers and returns the average.
#include <stdio.h>

float get_average(float, float, float ,float, float);

int main(){
    float first, second, third, fourth, fifth, result;
    printf("Enter the 5 numbers to find its average: ");
    scanf("%f %f %f %f %f", &first, &second, &third, &fourth, &fifth);

    result = get_average(first, second, third, fourth, fifth);
    printf("The average of the given numbers is %.2f\n", result);


    return 0;
}

float get_average(float a, float b, float c,float d, float e){
    float average = (a + b + c + d + e) / 5;
    return average;
}