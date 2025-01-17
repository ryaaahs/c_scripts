#include <stdio.h>

int main(void)
{
    int x;
    int result;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    // result = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 
    // 5*(x*x*x) - (x*x) + 7*x - 6;

    // Honers Rule
    result = ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result of polynomial: %d\n", result); 

    return 0;
}