#include <stdio.h> 

int main(void) {
    float loan;
    float rate;
    float payment;
    float balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    rate = rate / 12;

    balance = loan + (loan * (rate / 100)) - payment;
    printf("Balance remaining after first payment: %f\n", balance);

    balance = balance + (balance * (rate / 100)) - payment;
    printf("Balance remaining after second payment: %f\n", balance);

    balance = balance + (balance * (rate / 100)) - payment;
    printf("Balance remaining after third payment: %f\n", balance);

    return 0; 
}