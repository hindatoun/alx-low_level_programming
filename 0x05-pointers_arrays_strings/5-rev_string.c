#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string input
 *
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];

	int hind = 0;

	int i;

	while (s[hind] != '\0')
	{
		hind++;
	}
	for (i = 0; i < hind; i++)
	{
		hind--;
		rev = s[i];
		s[i] = s[hind];
		s[hind] = rev;
	}
}
