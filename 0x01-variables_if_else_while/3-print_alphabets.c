#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char lc;

	char up;

	lc = 'a';
	up = 'A';
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
