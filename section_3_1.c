#include <stdio.h>

int main(void)
{

    // 3.1.2
    // float x;
    
    // printf("%-8.1e", x);
    // printf("%10.6e", x);
    // printf("%-8.3f", x);
    // printf("%6.0f", x);

    // 3.1.3
    // int a, b, c;
    // float x, y;

    // printf("Enter Values: "); 
    // scanf("%d -%d -%d", &a, &b, &c);
    // scanf("%f, %f", &x, &y);

    // printf("Value of a: %d\n", a);
    // printf("Value of a: %d, Value of b: %d, Value of c: %d\n", a, b, c);
    // printf("Value of x: %.1f, Value of y: %.1f\n", x, y);

    
    // "%d" ” %d" (Not the same cause of the leading space) 
    // Both options work and are the same cause of the buffer

    // "%d-%d-%d" ”%d -%d -%d" No clue
    // Both options work and are the same cause of the buffer

    // "%f" ” %f " - Same, will catch the value into the flag
    // Not the same, due to it moving to a new line and not catching the value?

    // "%f,%f"  %f, %f" - Same, will catch the first flag, comma, then second flag with or w/o space
    // Both options work and are the same cause of the buffer

    // 3.1.4
    int i, j;
    float x;

    printf("Enter Values: "); 
    // 10.3 5 6
    scanf("%d%f%d", &i, &x, &j);

    printf("Value of i: %d, Value of x: %f, Value of j: %d\n", i, x, j);
    // 10, 5.0000, 6
    // Actual answer
    // Value of i: 10, Value of x: 0.300000, Value of j: 5
    // The reason for this is cause of the following:
    // Scanf reads 1, 0, then gets to the period, so it stores 10 into i and starts the float
    // reads 3 then gets a space, so it stores 0.3 into x and moves to int
    // reads 5 and gets a space, so it stores 5 into it and ends cause of the following space.

     // 3.1.5
    int i, j;
    float x;

    printf("Enter Values: "); 
    // 10.3 5 6
    scanf("%d%f%d", &i, &x, &j);

    printf("Value of i: %d, Value of x: %f, Value of j: %d\n", i, x, j);

    return 0;
}