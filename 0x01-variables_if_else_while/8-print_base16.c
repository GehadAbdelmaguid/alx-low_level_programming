#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
* Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0';
	char a;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
