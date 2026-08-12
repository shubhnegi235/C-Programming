#include <stdio.h>
void Hello();
void Bye();

int main(){
    Hello();
    Bye();
    return 0;
}

void Hello(){
    printf("HI\n");
}

void Bye(){
    printf("BYE");
}