#include <stdio.h>
int main(){

    int marks[3];

    printf("Enter Physics:");
    scanf("%d", &marks[0]);

    printf("Enter Chemistry:");
    scanf("%d", &marks[1]);

    printf("Enter Mathematics:");
    scanf("%d", &marks[2]);

    printf("Physics=%d, Chemistry=%d, Mathematics=%d", marks[0],marks[1],marks[2]);
    return 0;
}