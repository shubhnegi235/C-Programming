#include <stdio.h>
void calprice(float price);

int main(){
    float value=100.0;
    calprice(value);
    printf("%f\n", value);
    return 0;

}

void calprice(float value){
    value=value+(0.18*value);
    printf("%f\n", value);
}