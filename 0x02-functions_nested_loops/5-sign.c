#include "main.h"

/**
 * print_sign - a function that
 * prints the sign of a number.
 *
 * @n: Character to be checked
 *
 * Return: 1 upon success.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
