#include <stdio.h>

int main(void){
  float income, rent, untilities, grocceries, transportation, savings, expenses, spend;
  float prent, putilities, pgrocceries, ptransportion, psavings, pexpenses;
  printf("This is a budget calculator.\n How much do you make a month?\n");
  scanf("%f", &income);
  printf("How much does your utilities cost?\n");
  scanf("%f", &untilities);
  printf("How much does your groceries cost?\n");
  scanf("%f", &grocceries);  
  printf("How much does your transportation cost?\n");
  scanf("%f", &transportation);
savings = income * .2;
expenses = rent + untilities + grocceries + transportation + savings;
 spend = income - expenses - savings;
 printf("You make $%.2f\n", income);
  printf("You make $%.2f\n", expenses);
   printf("You make $%.2f\n", savings);
    printf("You spending money is $%.2f\n", spend);
    prent = rent/income * 100;
    putilities = untilities/income * 100;
    pgrocceries = grocceries/income * 100;
    ptransportion =transportation/income * 100;
    psavings = savings/income * 100;
    pexpenses = expenses/income * 100;
    printf("Your rent is %d%% of your income.\n", (int) prent);
        printf("Your utilities is %d%% of your income.\n", (int) putilities);
          printf("Your groceries is %d%% of your income.\n", (int) pgrocceries);
          printf("Your transportation is %d%% of your income. \n", (int)ptransportion);
       printf("Your savings are %d%% of your income. \n", (int)psavings);
       printf("Your expenses are %d%% of your income. \n",(int)pexpenses);
  return 0;
}