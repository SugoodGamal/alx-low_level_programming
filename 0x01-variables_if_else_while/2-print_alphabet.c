#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/
int main(void)
i
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}