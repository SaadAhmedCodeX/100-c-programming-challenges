// Develop a program that prints the multiplication table for a given number.
#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("Multiplication table of %d:\n", number);
    printf("---------------------------\n");
    int i = 1;
    while(i < 11){
        printf("%d x %d = %d\n",number, i, (number*i));
        i++;
    }
    
    return 0;
}