#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * puts2 - function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line.
 *
 * @str: parameter
 *
 * Return: nothing
 */


void puts2(char *str)
{
	int i, j;

	j = strlen(str);


	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
			printf("%d", i);
	}
	printf("\n");
}
