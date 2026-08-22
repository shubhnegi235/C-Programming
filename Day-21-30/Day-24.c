#include <stdio.h>
void rec(int count);

int main(){
    rec(5);
    return 0;

}

void rec(int count){
    if(count==0){       //Base Case
        return;
    }
    printf("%d\n", count);
    rec(count-1);

}