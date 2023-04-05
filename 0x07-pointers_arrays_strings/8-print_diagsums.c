#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *
 * @a: input
 * @size: input
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, i;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 = s2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
