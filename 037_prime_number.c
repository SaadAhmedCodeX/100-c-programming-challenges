// Create a program to check whether a given number is prime using while.
#include <stdio.h>

int main(){
    int num, i = 2, isPrime = 1;
     do {
        printf("Enter a number to check whether it is prime or not: ");
        scanf("%d", &num);

        if (num < 2) {
            printf("Please enter a number greater than or equal to 2.\n");
        }
    } while (num < 2);
    
    while( i*i <= num){ // only checks factors up to square of the number to avoid redundant checks
        if (num % i == 0){
            isPrime = 0; // found a factor ( changine the value of isPrime changes to false)
            break; 
        }
        i++;
    }
    
    if (isPrime == 1){
        printf("%d is a prime number \n", num);
    }
    else{
        printf("%d is not a prime number\n", num);
    }
    return 0;
}