#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - function that
 * creates an array of chars, and
 * initializes it with a
 * specific char.
 *
 * @size: number of bytes your need
 * to allocate.
 *
 * @c:
 *
 * Return: Returns NULL if size = 0
 * Else returns a pointer to the
 * array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{

	char *pt;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pt = (char *) malloc(sizeof(char) * size);

	if (pt == NULL)
		return (0);

	while (i < size)
	{
		*(pt + i) = c;
		i++;
	}

	*(pt + i) = '\0';

	return (pt);
}
