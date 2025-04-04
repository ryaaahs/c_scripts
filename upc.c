#include <stdio.h>

int main(void)
{
    // Universal Product Code
    // 0 13800 15173 5

    // First digit idenifies the type of item
    // First group of digits idenifies the manufacturer
    // Second group of digits idenifies the product (including package size)
    // Lat digit is a chbeck digit to help identify an error in the preceding digits

    // Method for checking the check digit
    // Add the 1st, 3rd, 5th, 7th, 9th, 11th digit
    // Add the 2nd, 4th, 6th, 8th, 10th digit
    // Multiply the first sum by 3 and add it to the second sum
    // Subtract 1 from the total
    // Compute the remainder with a value of 10
    // Subtract the remainder from 9

    // 0 3 0 1 1 3 == 8
    // 1 8 0 5 7 == 21
    // 8 * 3 == 24
    // 24 + 21 == 45
    // 45 - 1 == 44
    // 44 % 10 == 4
    // 9 - 4 == 5 (check digit)

    // 0 51500 24128
    // 0 1 0 2 1 8 == 12
    // 5 5 0 4 2 == 16
    // 12 * 3 == 36
    // 36 + 16 == 52
    // 52 - 1 == 51
    // 51 % 10 == 1
    // 9 - 1 == 8

    // 0 31200 01005
    // 0 1 0 0 0 5 == 6
    // 3 2 0 1 0 == 6
    // 6 * 3 == 18
    // 18 + 6 == 24
    // 24 - 1 == 23
    // 23 % 10 == 3
    // 9 - 3 == 6

    int item, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, p6, first_sum, second_sum, check_digit;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &item, &m1, &m2, &m3, &m4, &m5, &p1, &p2, &p3, &p4, &p5, &p6);

    // Calculate the check digit
    first_sum = m1 + m3 + m5 + p2 + p4 + p6;
    second_sum = item + m2 + m4 + p1 + p3 + p5;
    check_digit = (3 * first_sum) + second_sum;
    check_digit = 9 - ((check_digit - 1) % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}
