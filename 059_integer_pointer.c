// Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.
#include <stdio.h>

int main(){
    int num;
    int *ptr = &num;
    printf("Enter a value to store in pointer variable: ");
    scanf("%d", ptr); // scanf stores the input into num using its address stored in ptr

    printf("The value of num is: %d\n", *ptr); // Using pointer
    printf("The value of num is: %d\n", num);  // Using variable

    return 0;
}