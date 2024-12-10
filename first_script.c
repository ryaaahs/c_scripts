/* 	
	Name: first_script.c
	Purpose: Prints a pun
	Author: R Maahs 
*/

#include <stdio.h>

int main() 
{
	// DECLARATIONS
	// STATEMENTS// for float values, we use $f
	// To for it display only so many 

	// type name
	// int height;
	// float profit;

	// Vairables declarations can be combined using the same type
	int height, length, width, volume;
	float profit , loss;
	// We can assign values variables on declarations, initializating them in the process
	int height_two = 10;
	// Each variable will needs its own initializer if you are chaining declarations
	int height_three, length_two, width_two = 5;
	// Width will be the only variable assigned with a value.

	// An assignment of a constant value
	height = 10;
	length = 12;
	width = 10;

	// f stands for forrmated (Use of a formatted string)
	// scanf
	// printf

	// Scan a value into an int (Looks for a int value on input)
	// scanf("%d", &i); 

	// Scan a value into an float (Looks for a float value)
	// scanf("%f", &x);

	// Right side of the assignment is considered an expression
	volume = height * length * width;

	// %d is a placeholder for the integer value that will be filled in by the height variable
	printf("Height: %d\n", height);

	// "f" for float
	// Not including the f can cause a warning with the compiler
	profit = 428.433344124f;

	// for float values, we use $f
	// To for it display only so digets after the decimal point use this %.pf (p being the total amount of digits to display)
	printf("Profit: $%.2f\n", profit);

	// There is no limit to the total amount of variables you can use
	printf("Height: %d, Length: %d\n", height, length);

	// printf("Height: %d\n", height);
	// tokens
	// 1 printf (identifier)
	// 2 (punctuation)
	// 3 "Height: %d\n" (string literal)
	// 4 , (punctuation)
	// 5 height (identifier)
	// 6 ) (punctuation)
	// 7 ; (punctuation)

	//Mixing types is possible, but is not safe 
	
	//  Using two kinda of statements
	//  This is a function call
	//  Semicolon tells the compiler that the statement is over
	//  We are prinitng a strting literal
	printf("To C, or not to C: that is the question. \n");
	printf("To C, or not to C: ");
	printf("that is the question. \n");
	
	// Single line comments
	/* Multi line comments */
	
	// exit(0) and return 0 are the same thing
	// Program will still terminate without the return statement
	return 0;
}
