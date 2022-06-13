#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function that prints string
 * to stdoutin reverse form.
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */


void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
