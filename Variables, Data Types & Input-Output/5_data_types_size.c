//Program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
#include <stdio.h>

int main(){
    int _int;
    float _float;
    char _char;
    double _double;

    printf("The size of int is %d bytes\n",sizeof(_int));
    printf("The size of float is %d bytes\n",sizeof(_float));
    printf("The size of char is %d bytes\n",sizeof(_char));
    printf("The size of double is %d bytes\n",sizeof(_double));
    
    return 0;
}