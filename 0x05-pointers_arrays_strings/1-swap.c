#include "main.h"

/**
 * swap_int - function that swaps the value of two integers.
 *
 * @a: value1
 * @b: value2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
