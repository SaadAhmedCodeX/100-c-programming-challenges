// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
#include <stdio.h>

int main() {
    const double MILE_PER_KM = 0.621371;  
    long long kms;

    printf("Enter the distance in kilometers: ");
    scanf("%lld", &kms);

    double miles = kms * MILE_PER_KM;  
    
    printf("The distance in miles is %.2f\n", miles);

    return 0;
}
