#include <stdio.h>

int main(void) {

    int grade = 3;

    // Using if statements
    if (grade == 4)
        printf ("Excellent\n") ;
    else if (grade == 3)
        printf("Good\n");
    else if (grade == 2)
        printf("Average\n");
    else if (grade == 1)
        printf("Poor\n");
    else if (grade == 0)
        printf("Failing\n");
    else
        printf("Illegal grade\n");

    // Using a switch statment
    switch (grade) {
        case 4: printf("Excellent\n");
                break;
        case 3: printf("Good\n");
                break;
        case 2: printf("Average\n");
                break;
        case 1: printf("Poor\n");
                break;
        case 0: printf("Failing\n");
                break;
        default: printf("Illegal grade\n");
                break;
    }

    return 0;
}