#include <stdio.h>
int main(){
    char Word;
    printf("Enter a word:");
    scanf("%c", &Word);
    if(Word >= 'A' && Word <= 'Z'){
        printf("The word is in uppercase.");
    }
    else if(Word >= 'a' && Word <= 'z'){
        printf("The word is in lowercase.");
    }
    else{
        printf("The word is not an alphabet.");
    }

    return 0;

}