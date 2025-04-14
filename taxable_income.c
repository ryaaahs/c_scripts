#include <stdio.h>

int main(void) {

    float income;
    float tax = 0;

    printf("Enter Taxable Income: ");
    scanf("%f", &income);

    // Progressive system that checks each tax bracket and adds the amount of tax per bracket the person moves through
    
    if (income < 750) {
        tax += income * 0.01;
    }
    
    if (income >= 750 && income < 2250) {
        tax += 7.50 + ((income - 750) * 0.02); 
    } else if (income > 2250) {
        tax += 7.50 + ((2250 - 750) * 0.02); 
    }

    if (income >= 2250 && income < 3750) {
        tax += 37.50 + ((income - 2250) * 0.03); 
    } else if (income > 3750) {
        tax += 37.50 + ((3750 - 2250) * 0.03); 
    }

    if (income >= 3750 && income < 5250) {
        tax += 82.50 + ((income - 3750) * 0.04); 
    } else if (income > 5250) {
        tax += 82.50 + ((5250 - 3750) * 0.04); 
    }

    if (income >= 5250 && income < 7000) {
        tax += 142.50 + ((income - 5250) * 0.05); 
    } else if (income > 7000) {
        tax += 142.50 + ((7000 - 5250) * 0.05); 
    }

    if (income >= 7000) {
        tax += 82.50 + ((income - 7000) * 0.06); 
    }

    printf("Total Income: %f\n", income);
    printf("Total Taxes: %f\n", tax);

    return 0;
}   