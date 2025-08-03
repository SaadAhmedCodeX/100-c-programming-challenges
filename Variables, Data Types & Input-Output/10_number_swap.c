// Program to swap two numbers
#include <stdio.h>

int main(){
    int a,b,temp;

    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);

    printf("Before swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    

    temp = a;
    a = b;
    b= temp;

    printf("After swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}