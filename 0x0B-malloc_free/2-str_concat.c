#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: pointer one
 * @s2: pointer two
 *
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, size, i, j;

	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	size = l1 + l2;
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
