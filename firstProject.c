#include <stdio.h>

int main(void){
    char name[50];
    printf("Hello, what is your name?\n");
    scanf("%s", name);
    printf("Hello %s", name);
    return 0;
}