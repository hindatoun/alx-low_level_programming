#include "main.h"
/**
 * add -  adds two integers
 *
 * @a: input number 1
 *
 * @b: input number 2
 *
 * Return: a + b
 */
int add(int a, int b)
{
	int S;

	S = a + b;
	if (S < 0)
	{
		_putchar(-S + 48);
		return (-S);
	}
	else
	{
		_putchar(S + 48);
		return (S);
	}
	_putchar('\n');
	return (a + b);
}
