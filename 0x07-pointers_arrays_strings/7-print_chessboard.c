#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: array
 *
 * Return: empty
 */
void print_chessboard(char (*a)[8])
{
	int e;

	int b;

	for (e = 0; e < 8; e++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[e][b]);
		}
		_putchar('\n');
	}
}
