#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Emma");
    name("John");
    name("Tim");
    name("Samantha");
    name("Joe");
    return 0;
}