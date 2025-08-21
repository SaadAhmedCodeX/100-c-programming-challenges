// Create a function max that takes two float arguments and returns the larger value.
#include <stdio.h>

float max(float, float);

int main()
{
    float first, second, result;
    printf("Enter the first float number (Decimal number): ");
    scanf("%f", &first);
    printf("Enter the  second float number (Decimal number): ");
    scanf("%f", &second);

    result = max(first, second);

    printf("The larger number is %.2f\n", result);
    return 0;
}

float max(float a, float b)
{
    return (a > b) ? a : b;
}