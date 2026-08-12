#include <stdio.h>
int main(){
    int Grade;
    printf("Enter your grade:");
    scanf("%d", &Grade);
    if(Grade<30){
        printf("C");
    }

    else if(Grade>=30 && Grade<70){
        printf("B");
    }

    else if(Grade>=70 && Grade<90){
        printf("A");
    }

    else if(Grade>=90 && Grade<=100){
        printf("A+");
    }
    
    else{
        printf("Invalid Grade");
    }

    return 0;
    
}