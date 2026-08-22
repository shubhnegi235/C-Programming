#include <stdio.h>

void Namaste();
void Bonjour();

int main(){
     char choice;
    printf("Enter your language:");
    scanf("%c", &choice);
    if(choice=='I'){
        Namaste();
    }
    else{
        Bonjour();
    }

}

void Namaste(){
    printf("Namaste");
}

void Bonjour(){
    printf("Bonjour");
}