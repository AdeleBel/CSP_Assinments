#include <stdio.h>

int num = 20;

int main(){
    if (num < 10){
        printf("This is a single digit number");
    }else if (num < 100){
        printf("This is a double digit number");
    }else{
        printf("This is at least a triple digit number");
    }
    return 0;
}