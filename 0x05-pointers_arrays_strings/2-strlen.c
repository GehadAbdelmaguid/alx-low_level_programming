#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string to check
 *
 * Return: int length of s string
 */

int _strlen(char *s)
{
	int lgth = 0;

	while (s[lgth])
		lgth++;
	return (lgth);
}
