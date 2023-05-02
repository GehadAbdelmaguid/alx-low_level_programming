#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: string to  be reversed.
 *
 * Return: Always 0;
 */

void rev_string(char *s)
{
	int length, i, h;
	char reverse;

	for (length = 0; s[length] != '\0'; length++)
	{
		i = 0;
		h = length / 2;
	}
	while (h--)
	{
		reverse = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = reverse;
		i++;
	}
}
