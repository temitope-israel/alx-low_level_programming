#include "main.h"

/**
 * print_alphabet_x10 - A function that
 * prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 1 (Success)
 *
 */


void print_alphabet_x10(void)
{

	char c;
	char counter;

	counter = 0;
	while (counter <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		counter++;
	}

}
