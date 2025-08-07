// Create a program to calculate simple interest.
// Simple Interest = (P x T x R)/100
#include <stdio.h>

int main(){
    float p, t, r, SI;

    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest (in percentage) per annum: ");
    scanf("%f",&r);
    printf("Enter the time (number of years): ");
    scanf("%f",&t);

    SI = (p*t*r)/100;

    printf("Simple Interest = %.2f\n", SI);
    printf("The final amount to be paid for %.2f year(s)= %.2f \n",t,(SI+p));

    return 0;
}