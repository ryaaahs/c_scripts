#include <stdio.h>

int main(void) {

    // Write a single expression whose value is e ith e r-1 , 0, or + 1, depending on whether i is less
    // than, equal to, or greater than j , respectively
    // (i > j) - (i < j)

    int n = 5; 
    // Is the following if statement legal? Yes
    // What does it do when n is equal to zero
    // It will print
    if (n >= 1 <= 10)
        // n >= 1 // 5 >= 1 == 1
        // 1 <= 10 
        printf("n is between 1 and 10\n");
    
    // Does not print till the value is -9
    if (n == 1-10)
        // n == (1 - 10) -> n == -9
        printf("n is between 1 and 10\n");

    int i = -17;
    printf("%d\n", i >= 0 ? i : -i);
    // Returns the value if its greater than 0 (17)
    // If less than 0, it will return the number as positive (-17)

    /*  
        // Make this simple
        if (age >= 13)
            if (age <= 19)
                teenager = true;
            else 
                teenager = false;
        else if (age < 13)
            teenager = false;

        // Can use a ternary condition to make it a single assignment
        teenager = age >= 13 && age <= 19 ? true : false
    */

    // Are the following statements equivalent
    int score = 60;

    // This logic is the same
    if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else
        printf("F\n");

    if (score < 60)
        printf("F\n");
    else if (score < 70)
        printf("D\n");
    else if (score < 80)
        printf("C\n");
    else if (score < 90)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}