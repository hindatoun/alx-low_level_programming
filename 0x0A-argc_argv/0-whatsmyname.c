#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line
 *
 * @argc: count of argument
 * @argv: array of pointers to the string
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	return (0);
}
