#include <unistd.h>
/**
 * _putchar - write character c
 *
 * @c: the character to print
 *
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
