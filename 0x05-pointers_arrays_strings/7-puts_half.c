#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that prints
 * half of a string, followed by a new line.
 *
 * @str: string to be halved
 *
 * Return: nothing
 */


void puts_half(char *str)
{
	int i, j, n;


	j = strlen(str);

	if (j % 2 == 0)
	{
		n = j / 2;
		for (i = n ; i < j; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		n = (j - 1) / 2;
		for (i = n + 1 ; i < j; i
++)
		{
			putchar(str[i]);
		}
	}
	printf("\n");
}
