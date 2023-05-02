#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string reference
 *
 * Return: Always 0;
 */

void puts2(char *str)
{
	int lon = 0;
	int i = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		lon++;
	}
	i = lon - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
