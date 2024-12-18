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

    return 0;
}