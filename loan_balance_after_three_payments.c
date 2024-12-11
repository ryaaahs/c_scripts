 #include <stdio.h>

 int main(void)
 {
    float loan_balance;
    float loan_interest_rate;
    float monthly_interest_rate;
    float monthly_payment;

    printf("Enter amount of loan: ");
    if(scanf("%f", &loan_balance) == 1) 
    {   
        printf("Enter interest rate: ");
        if(scanf("%f", &loan_interest_rate) == 1) 
        {
            printf("Enter monthly payments: ");
            if(scanf("%f", &monthly_payment) == 1) 
            {   
                loan_interest_rate = loan_interest_rate / 100.0f;
                monthly_interest_rate = loan_interest_rate / 12.0f;

                loan_balance += loan_balance * monthly_interest_rate;
                loan_balance -= monthly_payment;
                
                printf("Balance remaining after first payment: %.2f\n", loan_balance);

                loan_balance += loan_balance * monthly_interest_rate;
                loan_balance -= monthly_payment;
                
                printf("Balance remaining after second payment: %.2f\n", loan_balance);

                loan_balance += loan_balance * monthly_interest_rate;
                loan_balance -= monthly_payment;
                
                printf("Balance remaining after third payment: %.2f\n", loan_balance);
            }
            else 
            {
                printf("Cannot assign value to monthly_payment.\n");
            }
        }
        else 
        {
            printf("Cannot assign value to loan_interest.\n");
        }
    }
    else 
    {
        printf("Cannot assign value to loan_balance.\n");
    }
    return 0; 
 }