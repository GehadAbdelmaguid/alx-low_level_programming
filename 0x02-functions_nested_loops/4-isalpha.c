#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: On Success 1.
 * on error, 0 is returned
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
