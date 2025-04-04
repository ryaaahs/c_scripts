#include <stdio.h>

int main(void)
{
	int num;
	int onum;
	int onum2;
	int onum3;
	int onum4;
	int onum5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	onum5 = num % 8;
	num /= 8;

	onum4 = num % 8;
	num /= 8;

	onum3 = num % 8;
	num /= 8;

	onum2 = num % 8;
	num /= 8;

	onum = num % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", onum, onum2, onum3, onum4, onum5);

	return 0;
}
