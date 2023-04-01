#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, e;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (e = 0; src[e] != '\0'; e++)
		{
			dest[i] = src[e];
			i++;
		}
	}
	dest[i] = '\0';
	return (desst);
}
