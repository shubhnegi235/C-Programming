#include <stdio.h>
int main(){

    int num=0;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(num<=n){
        printf("%d\n", num);
        num++;
    }
    
    return 0;


}