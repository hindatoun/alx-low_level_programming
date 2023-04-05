#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return:  located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			haystack++;
			needle++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
