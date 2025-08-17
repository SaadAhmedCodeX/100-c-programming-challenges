// Create a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main(){
    int num, digit, sum_of_digits = 0, originalNum, number_of_digit = 0, temp;
    printf("Enter a number to check whether its an Armstrong number or not: ");
    scanf("%d",&num);
    originalNum = num;
    temp = num; // Copy num into temp to avoid modifying the original value
    while(temp != 0){  // Count the number of digits
        temp = temp / 10;
        number_of_digit++;
    }
    
    while(num != 0){
        digit = num % 10;
        int power = 1;
        for(int i = 1; i <= number_of_digit; i++){ // This loop calculates digit^number_of_digit by repeated multiplication
            power = power * digit;                 
        }
        sum_of_digits = sum_of_digits + power;
        num = num / 10;
    }
    if (sum_of_digits == originalNum){
        printf("%d is an Armstrong number!\n", originalNum);
    }
    else{
        printf("%d is not an Armstrong number!\n", originalNum);
    }
    
    return 0;
}