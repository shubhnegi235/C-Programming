//Keep taking number as input from user until user enters an odd number.
#include <stdio.h>
int main(){

    int num;
    do{
        printf("Enter a num:");
        scanf("%d", &num);
        printf("You entered: %d\n", num);
        if(num % 2 != 0){
            printf("You entered an odd number. Exiting...\n");
            break;
        }
    } while(1);
    printf("Thanks");


return 0;

}