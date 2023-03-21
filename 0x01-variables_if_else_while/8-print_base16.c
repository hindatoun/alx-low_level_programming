#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	char lc;

	n = 0;
	lc = 'a';
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
