#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a three-digit number: ");
	scanf("%3d", &num);

	printf("The reversal is: %d%d%d\n", num % 10, ((num % 100) - (num % 10)) / 10, (num - (num % 100)) / 100);

	return 0;
}

