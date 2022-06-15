#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates
 * two strings.
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * @n: number of characters to be copied.
 *
 * Return: Returns 1 on success
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
