#include <stdio.h>

int main(void)
{
    int i = 1;
    /*
        (++) and (--)
        Adding or removing one from the operand
        They can be either prefix or postfix operator
        i++, ++i, i--, --i
    */

    i = 1;
    printf("i is %d", i++); // prints 1
    printf("i is %d", i); // prints 2

    i = 1;
    printf("i is %d", ++i); // prints 2
    printf("i is %d", i); // prints 2
 
    i = 1;
    printf("i is %d", i--); // prints 1
    printf("i is %d", i); // prints 0

    i = 1;
    printf("i is %d", --i); // prints 0
    printf("i is %d", i); // prints 0

    return 0;
}