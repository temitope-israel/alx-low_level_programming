#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - a function that
 * prints numbers from 0 to 9.
 *
 *
 *
 * Return: returns nothing.
 */

void print_numbers(void)
{
	int i;


	/* For loop*/
	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
