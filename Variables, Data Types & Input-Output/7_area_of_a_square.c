// Program to print the area of a square by inputting its side length
#include <stdio.h>

int main(){
    int side,area;
    printf("Enter the side of a square in cms: ");
    scanf("%d",&side);

    area = side*side;

    printf("The area of the square of length %d of side is %d\n", side, area);

    return 0;
}