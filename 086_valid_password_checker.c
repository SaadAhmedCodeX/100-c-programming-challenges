// Create a program using do-while to find password checker until a valid password is entered.
#include <stdio.h>
#include <string.h>

int main(){
    const char STORED_PASSWORD[] = "ChinTapakDamDam";
    char password[100];

    do{
    printf("Enter your password: ");
    scanf("%s", password);

    if(strcmp(password, STORED_PASSWORD) == 0) {
        printf("Access Granted!\n");
    }
    else{
        printf("Access Denied!\nTry Again!\n");
    }
    } while(strcmp(password, STORED_PASSWORD) != 0);

    return 0;
}
