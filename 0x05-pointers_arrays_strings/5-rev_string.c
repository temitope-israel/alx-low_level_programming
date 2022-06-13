#include "main.h"
/*#include <string.h>*/

/**
 * rev_string - function that reverses a
 * string.
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */


void rev_string(char *s)
{
	int i, n;

	n = strlen(s);

	for (int i = 0; i < n / 2; i++)
	{
		char ch = s[i];

		s[i] = s[n - i - 1];
		s[n - i - 1] = ch;
	}
}
