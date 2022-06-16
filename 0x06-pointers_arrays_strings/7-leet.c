

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - function that encodes
 * a string into 1337.
 *
 * @s: character to encode
 *
 * Return: Returns char
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'A' || s[i] == 'a')
			s[i] = '4';

		if (s[i] == 'E' || s[i] == 'e')
			s[i] = '3';

		if (s[i] == 'O' || s[i] == 'o')
			s[i] = '0';

		if (s[i] == 'T' || s[i] == 't')
			s[i] = '7';

		if (s[i] == 'L' || s[i] == 'l')
			s[i] = '1';
	}

	return (s);
}

