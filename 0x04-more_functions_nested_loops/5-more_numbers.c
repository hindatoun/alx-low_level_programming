#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
