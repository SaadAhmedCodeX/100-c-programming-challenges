// Create a program to find the Highest Common Factor (HCF) of two numbers.
#include <stdio.h>

int main(){
    int first, second, min,worst_case_scenario, HCF;

    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    min = (first > second) ? second : first;
    worst_case_scenario = 1; // Smallest possible HCF for two positive integers
    
    for (; min >= worst_case_scenario; min--)
    {
        if (first % min == 0 && second % min == 0)
        {
           HCF = min;
           break;
        }
        
    }
    printf("The HCF of %d and %d is %d\n", first, second, HCF);
    
    return 0;
}