#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: int to extract the last digit of a num
 *
 * Return:  value of the last digit
 */

int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (i < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
