#include <stdio.h>

int main(void) {
    // Relational and Equality Operators
    int i = 2, j = 3;
    int k = i * j == 6;
    // 6 == 6
    printf("%d\n", k); // 1

    i = 5, j = 10, k = 1;
    printf("%d\n", k > i < j); // 1
    // 1 > 5 < 10

    i = 3, j = 2, k = 1;
    printf("%d\n", i < j == j < k); // 1
    // 3 < 2 == 2 < 1

    i = 3, j = 4, k = 5;
    printf("%d\n", i % j + i < k); // 0
    // 3 + 3 < 6

    // Logical Operators
    i = 10, j = 5; 
    printf("%d\n", !i < j); // 1
    // 1 < 5 (!10 == 0)

    i = 2, j = 1;
    printf("%d\n", !!i + !j); // 1
    // !(!2) = 1 + 0 

    i = 5, j = 0, k = -5;
    printf("%d\n", i && j || k); // 1
    // 5 && 0 = 0 || -5 == 1
    // Any value not 0 is considered truthy

    i = 1, j = 2, k = 3;
    printf("%d\n", i < j || k); // 1
    // 1 < 2 == 1
    // 1 || 3 == 1

    // Short-circuit behaviour of logical expressions
i = 3, j = 4, k = 5;
    printf("%d\n", i < j || ++j < k);
    // First part is one so it skips the remaining logic
    // 3 < 4 == 1
    // ++4(5) < 5 == 0
    // == 1

    printf("%d %d %d\n", i, j, k);
    // 3 4 5

    i = 7, j = 8, k = 9;
    printf("%d\n", i - 7 && j++ < k);
    // i - 7 == 0
    // 0 && skip

    printf("%d %d %d\n", i, j, k);
    // 0 8 9

    i = 7, j = 8, k = 9;
    printf("%d\n", (i = j) || (j = k));
    // i = j -> i = 8
    // 1 || skip

    printf("%d %d %d\n", i, j, k);
    // 8 8 9

    i = 1, j = 1, k = 1;
    printf("%d\n", ++i || ++j && ++k);
    // ++i -> 2
    // 2 || skip

    printf("%d %d %d\n", i, j, k);
    // 2 1 1

    return 0; 
}