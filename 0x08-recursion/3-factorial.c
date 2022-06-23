#include "main.h"

/**
 * factorial - function that calculates
 * the factorial of a number.
 *
 * @n: number whose factorial is to be
 * calculated.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
