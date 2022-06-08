#include "main.h"
#include "_putchar.c"
/**
 * main - check the code
 *
 * Return
 */

void print_alphabet(void)
{
	int _putchar(char c);
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
int main (void)
{
	print_alphabet();
	return (0);
}
