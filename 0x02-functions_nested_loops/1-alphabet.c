#include "main.h"
/**
 * print_alphabet - print to stdout using
 * _putchar
 *
 * Return: Always 1 (True)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
