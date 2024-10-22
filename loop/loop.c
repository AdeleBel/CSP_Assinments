#include <stdio.h>
char sibs [5] [20] = {"Elsa, Adele, Ben"}; 
int i; 
int main(){
    for(i=0;i<5;i++){
        printf("%s\n", sibs[i]);
    };
return 0;
    }