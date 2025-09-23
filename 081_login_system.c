#include <stdio.h>
#include <string.h>

int main() {
    const char STORED_PASSWORD[] = "ChinTapakDamDam";
    char password[100];
    int attempts = 3; 

    printf("Welcome to Secure System.\n");

    do {
        printf("\nEnter your password: ");
        scanf("%s", password);  

        if (strcmp(password, STORED_PASSWORD) == 0) {
            printf("Access Granted!\n");
            break;
        } else {
            attempts--;
            printf("Access Denied!\n");

            if (attempts > 0) {
                printf("Try Again, you have %d %s left.\n", attempts, (attempts == 1) ? "try" : "tries");
            } else {
                printf("No more attempts left. Access locked.\n");
            }
        }
    } while (attempts > 0);

    return 0;
}