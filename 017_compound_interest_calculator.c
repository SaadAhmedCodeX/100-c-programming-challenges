// Create a program to calculate Compound interest.
// Compound Interest = P(1 + R / 100) power t
#include <stdio.h>
#include <math.h>

int main(){
    float p, t, r, A, CI;

    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest (in percentage) per annum: ");
    scanf("%f",&r);
    printf("Enter the time (number of years): ");
    scanf("%f",&t);

    A = p * pow((1+r/100), t);
    CI = A - p;

    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount after %.2f year(s) = %.2f\n", t, A);

    return 0;
}