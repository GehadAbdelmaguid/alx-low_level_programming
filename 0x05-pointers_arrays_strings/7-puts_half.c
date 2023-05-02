#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string reference
 *
 * Return: Always 0;
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
