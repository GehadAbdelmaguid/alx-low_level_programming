#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
