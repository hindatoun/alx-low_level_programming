#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: pointer to string
 *
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *p;

	unsigned int l, i;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	p[l] = '\0';
	return (p);
}
