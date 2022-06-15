#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates
 * two strings.
 *
 * @dest: pointer to destination source
 *
 * @src: pointer to string source
 *
 * Return: Returns 1 on success
 *
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
