#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all sigle digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)

{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf('\n');

	return (0);
}
