#include "main.h"

/**
 * _puts -  a function that prints a string, to stdout
 * @str: ptr to a string to print
 *
 * Return: Always 0;
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
