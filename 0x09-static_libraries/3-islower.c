#include "main.h"
/**
 * _islower - description the point
 *
 * @c: character in ASCII code
 *
 * Return: 1 lawercase character. 0 the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
