#include <stdio.h>
int main(){
    int age;
    char name[10];
    printf("Enter age:\n");
    scanf("%d", &age);
    printf("Enter name:");
    scanf("%s", name);
    printf("Age is: %d\n", age);
    printf("Name is: %s\n", name);
    return 0;
}

