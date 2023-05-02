#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: ptr 1
 * @b: ptr 2
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
