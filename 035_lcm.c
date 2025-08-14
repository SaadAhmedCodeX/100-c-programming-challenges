// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>

int main(){
    int first, second, max, LCM, worst_case_scenario ;

    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    max = (first > second) ? first : second;
    worst_case_scenario = first * second; // Maximum possible LCM (when numbers are coprime)

    for (; max <= worst_case_scenario ; max++) // Check numbers from the larger input up to the maximum possible LCM
    {
        if (max % first == 0 && max % second == 0)
        {
           LCM = max;
           break;
        }
        
    }
    printf("The LCM of %d and %d is %d\n", first, second, LCM);
    
    return 0;
}