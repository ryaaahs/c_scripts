#include <stdio.h>

int main(void) {
    int i, j;
    float x, y;

    i = 2;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;


    // NOTE: C compiler is not required to check the total amount of conversion specs or
    // expressions past to the function, which can cause issues!
    // Or if the conversion spec is appropriate for the expression being printed, it will produce
    // garbage output.

    // Bad examples
    // printf("%d %d\n", i);
    // printf("%d\n", i, j); 
    // printf("%f %d\n", i, x);

    // Conversions can have this format %m.pX or %-m.pX (m/p are optional int constants)
    // X is the format letter

    // m == minimum field width. Specifies the min number of characters to print (Fills with spaces)
    // "•" space character
    // p == precision depends on the conversion specifier

    // Common Converstion Specifiers
    // d - [Displays an int in decimal form (base10)] (p indicates the minimum amount of numbers to display)
    // (Adding extra zeros to the start of the number)
    // e - [Displayed fp number in exponential form] p indicates how many digits should appear after the point (p being 0 is not displayed)
    // f - [Displayed in fixed] Same as e
    // g - [Displays in either Fixed or Exponential format] p indicates the max number of significant digits

    // g is useful if the display numbers cannot be predicted
    // Small to large fixed decimal format
    // Very large or very small exponential format

    //Escape Sequences

    // Alert (bell) \a
    // Backspace \b
    // New line \n
    // H orizontaltab \t
    // \" allows you to have "" in a string, same with "\\" prints "\"

    printf("Net profit: %d%%", 10); 

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    printf("i = %.2d\n", i); //••••••••10 %10d - %-4d == 10••
    printf("i = %-4da\n", i); // If the value is 10000, it will display the value normally
}