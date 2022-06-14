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
	int i, j, half_of_str;


	j = strlen(str);
	half_of_str = j / 2;

	if (half_of_str % 2 == 0)
	{
		for (i = half_of_str ; i <= j; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		half_of_str = (j - 1) / 2;
		for (i = half_of_str ; i <= j; i
++)
		{
			putchar(str[i]);
		}
	}
	printf("\n");
}
