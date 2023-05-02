#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: string to  be reversed.
 *
 * Return: Always 0;
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	char reverse = s[0];

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		reverse = s[i];
		s[i] = s[count];
		s[count] = reverse;
	}
}
