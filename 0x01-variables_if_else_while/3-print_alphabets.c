#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0
 */

int main(void)
{
	char upper;

	for (upper = 'a'; upper <= 'z'; upper++)
	{
		putchar(upper);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
