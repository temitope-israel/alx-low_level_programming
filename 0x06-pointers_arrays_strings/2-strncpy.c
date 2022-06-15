#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string.
 *
 * @dest: pointer to destination -
 * where string is to be copied to.
 *
 * @src: pointer to source - from where
 * string is to be copied.
 *
 * @n: n of character(s) to be copied
 *
 * Return: Returns 1 on success
 */

char *_strncpy(char *dest, char *src, int n)
{

	dest = strncpy(dest, src, n);
	return (dest);

}
