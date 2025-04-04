#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void) {

    int i = 1;
    int j = 2;
    int k = i > j ? i : j; // k = 2
    k = (i >= 0 ? i : 0) + j; // k = 3

    printf("%d\n", k);
    
    return 0; 
}