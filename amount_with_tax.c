#include <stdio.h>

int main(void) 
{
    float amount;

    printf("Enter an amount: "); 
    scanf("%f", &amount); 

    amount = amount + (amount * 0.05);

    printf("With tax added: $%.2f\n", amount);

    return 0;
}