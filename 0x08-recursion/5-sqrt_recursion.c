#include "main.h"

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 *
 * @n: int number.
 *
 * Return: If no natural square root,
 * return -1 else return natural sqr root.
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int squa);

	int squa = 1;

	return (sqrt_fun(n, squa));
}

/**
 * sqrt_fun - function to solve
 * _sqrt_recursion
 *
 * @squa: number to know if square root
 *
 * @n:  int number
 *
 * Return: square root if natural
 * square root, or -1 if none found
 */

int sqrt_fun(int n, int squa)
{
	if (n == squa * squa)
	{
		return (squa);
	}
	else if (squa < n)
	{
		return (sqrt_fun(n, ++squa));
	}
	else
	{
		return (-1);
	}
}
