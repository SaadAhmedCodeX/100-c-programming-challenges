// Write a function that adds that takes 4,int parameters and returns the sum.
#include <stdio.h>
int add(int, int , int , int );

int main(){
    int first, second, third, fourth, result;

    printf("Enter four integers separated by spaces: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    result = add(first, second, third, fourth);
    printf("The sum of given numbers is %d\n", result);
    return 0;
}

int add(int a, int b, int c, int d){
    int sum;
    sum = a + b + c + d;
    return sum;
}
