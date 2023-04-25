#include "main.h"

/**
 * main - prints 10 times the alphabet
 *
 * Description: a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
