#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, spent, expenses;

float input(char type[], float var){
    printf("monthly %s:\n", type);
    scanf("%f", &var);
    return var;
}

void percent(char type[], int ammount){
    int per = ammount/income * 100;

    printf("your %s is %d%% of your income.\n", type, per);
}
    
int main(void){
    
    printf("this is a budget calculator.\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);
    
    savings = income *.2;
    expenses = rent + utilities + groceries + transportation;
    spent = income - expenses - savings;
    
    printf("you make %.2f\n", income);
    printf("your expenses are $%.2f\n", expenses);
    printf("your savings are $%.2f\n", savings);
    printf("your spending money is $%.2f\n", spent);

    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings); 
    percent("expenses", expenses);
    percent("spending", spent);   
    return 0;
}