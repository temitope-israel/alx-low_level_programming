#include "main.h"
#include "_putchar"
/**
 * _isupper - function that checks
 * if character passed in is
 * in uppercase.
 *
 * @c: character to be checked
 *
 * Return: Always 1.
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
		if (i == c)
			return (1);
		else
			return (0);
}
