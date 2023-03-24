#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: input number times
 *
 * Return: empty
 */
void print_line(int n)
{
	int i;

	if (n <= 5)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
