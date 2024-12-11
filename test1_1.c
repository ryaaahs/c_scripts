#include <stdio.h>

int main(void) {
    printf("hello, world\n");
    // This returns a warning (collect2: error: ld returned 1 exit status) using -Wall -W
    // To resolve the issue, you need to return out of the function
    //return 0;
}