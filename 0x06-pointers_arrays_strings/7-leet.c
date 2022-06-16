

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
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
				s[i] = y[j];
		}
	}

	return (s);
}

