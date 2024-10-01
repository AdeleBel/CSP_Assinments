#include <stdio.h>
#include <string.h>

int main(void){
char name [20];
char sentence [400];
printf("What is your name?: \n");
scanf("%s", name);
strcat(sentence, "^^^");
strcat(sentence, name);
strcat(sentence, "^^^");
printf("%s", sentence);
return 0;
}