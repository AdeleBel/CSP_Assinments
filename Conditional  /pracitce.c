#include <stdio.h>

int grade 88;

int main(){
    printf("What percent do you have in the class?\n");
    scanf("%d", &grade);
     if(grade >= 90){
        printf("your grade is an A\n");
    }else if(grade >= 80){
        printf("Your grade is a B\n");
     }else if(grade >= 70){
        printf("Your grade is a C\n");
     }else if(grade >= 60){
        printf("Your grade is a D\n");
     }else{ 
        printf("Your grade is a F\n");

    return 0;
}