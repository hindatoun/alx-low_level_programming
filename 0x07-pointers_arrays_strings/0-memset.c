#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 *
 * @n: memory bytes
 * @b: the constant byte
 * @s: pointer
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
