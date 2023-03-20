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

	lc = 'a';
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
