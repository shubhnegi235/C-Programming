#include <stdio.h>
int main(){
    int num1;
    printf("Enter a num1;");
    scanf("%d", &num1);

    if(num1>9 && num1<100){
        printf("%d is a two digit number\n", num1);
    }
    else{
        printf("%d is not a two digit number\n", num1);
    }
    
    

    return 0;


}