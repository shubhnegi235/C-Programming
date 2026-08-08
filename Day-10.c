#include <stdio.h>
int main(){
    char day;
    printf("Enter a day's first letter:");
    scanf("%c", &day);
    
    switch(day){
        case 'M':
            printf("Monday\n");
            break;
        case 'T':
            printf("tuesday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 't':
            printf("Thursday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'S':
            printf("Saturday\n");   
            break;
        case 's':
        printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
    
return 0;
    }
}