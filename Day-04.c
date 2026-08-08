#include <stdio.h>
#include <math.h>
int main(){
    int a=20;
    int b=3;
    int sum= a*b;
    int power=pow(a,b);
    int mod=a%b;
    int c= (int) 1.9999999;
    printf("The product of a and b is:%d\n", sum);
    printf("The power of a to the b is:%d\n", power);
    printf("The modulus of a and b is:%d\n", mod);
    printf("The truncated value of 1.9999999 is:%d\n", c);
    return 0;
}