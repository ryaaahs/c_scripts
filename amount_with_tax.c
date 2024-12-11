#include <stdio.h>

int main(void)
{
    float money;

    printf("Enter an amount: ");
    if (scanf("%f", &money) == 1) 
    {
        money = money + (money * 0.05);
        printf("With Tax added: $%.2f\n", money);
    }
    else
    {
        printf("Cannot assign value to money\n");
    }

    return 0;
}