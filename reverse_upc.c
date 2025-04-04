#include <stdio.h>

int main(void)
{
	int num;
	int num2;
	int num3;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &num, &num2, &num3);

	printf("The reversal is: %d%d%d\n", num3, num2, num);

	return 0;
}
