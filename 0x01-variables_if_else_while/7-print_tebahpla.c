#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all alphabet in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
