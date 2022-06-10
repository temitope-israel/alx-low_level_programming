#include "main.h"

/**
 * print_numbers - function that prints numbers
 * 0 to 9 followed by a new line.
 *
 * Return: returns nothing.
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);

	_putchar('\n');
}
