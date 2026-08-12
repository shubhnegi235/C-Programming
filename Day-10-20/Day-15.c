/*Sum of first n natural numbers and print them in reverse order
START 
 DECLARE Sum=0, n
 Input n
 For i=1 to n
     Sum = Sum + i
 End For
 Print Sum
END*/


#include <stdio.h>
int main(){

    int sum=0;
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum: %d\n", sum);
    
    for(int i=n; i>=1; i--){
        printf("%d ", i);
    }

    return 0;
    
}