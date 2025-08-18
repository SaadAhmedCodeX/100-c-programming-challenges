// Create a program using for loop multiplication table for a number.
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number to print its multiplication table: ");
    scanf("%d",&num);

    printf("Multiplication table of %d:\n", num);
    printf("---------------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num*i));
    }
    
    return 0;
}