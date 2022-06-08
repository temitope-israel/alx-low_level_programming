#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that
 * prints the last digit of a number.
 *
 * @c: Number whose last digit is to
 * be printed
 *
 * Return: 1 upon success.
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}

}
