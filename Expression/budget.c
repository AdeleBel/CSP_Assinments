#include <stdio.h>

main(void){
    float income, rent, utilities, grocieries, transportantion, savings,expenses total;
    float prent, putilities, pgrocieries, ptransportantion, psavings pexpenses; 
    printf("This is a budget calculator. \n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much is your rent?: ");
    scanf("%f", &rent);
    printf("how much do your utilities cost");
    scanf("%f", &utilities");
     printf("how much do your grocieries cost");
    scanf("%f", &grocieries");
    printf("how much does your transportation cost?\n");
    scanf("%f", &transportantion);
    savings = income * .2;
    expenses = rent + utilities + grocieries + transportantion;
    total = income - savings 
    printf("you make %.2f\n", income);
    printf("Your expenses are %.2f\n", expenses);
    prent = rent/income * 100;
    putilities = utilities/income * 100;
    pgrocieries = grocieries/income * 100;
    ptransportantion = transportantion/income * 100;
    psavings = savings/income * 100;
    printf("Your rent is %d%% of your income.\n", (int) prent);
    printf("Your grocieries is %d%% of your income.\n", (int) prent);
    printf("Your transportantion is %d%% of your income.\n", (int) prent);
    printf("Your savings is %d%% of your income.\n", (int) prent);
    return 0;
}    