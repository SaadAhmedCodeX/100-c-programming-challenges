// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
#include <stdio.h>

int main(){
    char first_name[50] = "John";
    char last_name[50] = "Doe";
    int age = 26;

    printf("First name: %s\n",first_name);
    printf("Last name: %s\n",last_name);
    printf("Age: %d Years old\n",age);
    return 0;
}