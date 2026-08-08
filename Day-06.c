#include <stdio.h>
int main(){
    int a=35;
    int b=26;
    int c=47;
    int d=77;
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", c>d && d>a);
    printf("%d\n", c>d || d>a);
    printf("%d\n", a+=b);
    return 0;
}


