#include <stdio.h>

int main(void) {
    int dollar_amount;
    int twenty_bills;
    int ten_bills;
    int five_bills;
    int one_bills;

    printf("Enter a dollar amount: ");

    if(scanf("%d", &dollar_amount) == 1)
    {
        twenty_bills = dollar_amount / 20;
        dollar_amount = dollar_amount - twenty_bills * 20;

        ten_bills = dollar_amount / 10;
        dollar_amount = dollar_amount - ten_bills * 10;

        five_bills = dollar_amount / 5;
        dollar_amount = dollar_amount - five_bills * 5;

        one_bills = dollar_amount / 1;
        dollar_amount = dollar_amount - one_bills * 1;

        printf("$20 bills: %d\n", twenty_bills);
        printf("$10 bills: %d\n", ten_bills);
        printf("$5 bills: %d\n", five_bills);
        printf("$1 bills: %d\n", one_bills);
    }
    else 
    {
        printf("Cannot assign value to dollar_amount.\n");
    }

    return 0;
}