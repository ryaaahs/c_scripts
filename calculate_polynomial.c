#include <stdio.h>

int main(void)
{
    int x; 
    int polynomial;

    printf("Please provide a value for x: ");
    if(scanf("%d", &x) == 1) 
    {
        // int x_2 = x * x;
        // int x_3 = x_2 * x;
        // int x_4 = x_3 * x;
        // int x_5 = x_4 * x;

        //polynomial = 3 * x_5 + 2 * x_4 - 5 * x_3 - x_2 + 7 * x - 6;
        
        // Using Honer's Rule to evaluate the polynomials
        polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; 

        printf("Value of polynomial: %d\n", polynomial);
    }
    else 
    {
        printf("Cannot assign the value to x\n");
    }
}