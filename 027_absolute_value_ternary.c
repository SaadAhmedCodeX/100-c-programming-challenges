#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("%d is the absolute value\n",(num > 0 ? num : -num));
    return 0;
}
