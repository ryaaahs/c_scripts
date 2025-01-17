#include <stdio.h>

int main(void)
{
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;
    int input;
    int remainder;

    printf("Enter a dollar amount: ");
    scanf("%d", &input);

    if (input >= 20) {
        remainder = input % 20;
        twenty = (input - remainder) / 20;

        input = remainder;
    }

    if (input >= 10) {
        remainder = input % 10;
        ten = (input - remainder) / 10;

        input = remainder;
    }

    if (input >= 5) {
        remainder = input % 5;
        five = (input - remainder) / 5;

        input = remainder;
    }

    if (input >= 1) {
        remainder = input % 1;
        one = (input - remainder) / 1;
    }

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}