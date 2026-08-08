//Write a program to claculate the area of a square of given sides.
#include <stdio.h>
int main(){
    int side;
    printf("Enter a side of square:");
    scanf("%d", &side);
    int area=side*side;
    printf("Area of square is: %d\n", area);
    return 0;
}