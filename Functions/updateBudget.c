#include <stdio.h>

float income, rent, utilities, groceries, transportation, savings, expenses, spend;
float input(char type[], float var){
    printf("Monthly %s: \n", type);
    scanf("%.f", &var);
    return var;
}



void percent(char type[], int amount){
    int per = amount/income *100;

    printf("Your %s is %d%% of your income.\n", (int) "rent" , type, per);
}


int main(void){
    printf("This is a budget calculator.\n How much do you make a month?\n");
    input("income", income);
    input("rent", rent);
    input("utilities", utilities);
    input("grocieries", groceries);
    input("transpotation", transportation);

    savings = income * .2;
    expenses = rent + utilities + groceries + transportation + savings;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("You make $%.2f\n", expenses);
    printf("You make $%.2f\n", savings);
    printf("You spending money is $%.2f\n", spend);
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);

    
  return 0;
}