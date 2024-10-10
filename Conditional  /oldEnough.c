#include <stdio.h>

int main(void){
    int age = 12;
    if (age >= 18){
        printf("You are old enough to vote.\n");
    }else if (age >= 16){
        printf("You are old enough to drive.\n");
    }else if (age == 15){
        printf("You are old enough to get a drivers permit.\n");
    }else if (age >= 5){
        printf("You are old enough to go to school.\n");
    }else{
        printf("You are to young to go to school.");
    };
    return 0;
}
