// Create a program that determines the greatest of the three numbers.
#include <stdio.h>

int main(){
    int first, second, third;

    printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);
    printf("Enter third number: ");
    scanf("%d",&third);

    if(first > second && first > third){
        printf("The greatest number is %d\n",first);
    }
    else if(second > first && second > third){
        printf("The greatest number is %d\n",second);
    }
    else{
        printf("The greatest number is %d\n",third);
    }
       
    return 0;
}