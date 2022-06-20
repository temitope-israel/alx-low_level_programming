#include "main.h"
#include <string.h>

/**
 * _memcpy - function copies n bytes
 * from memory area src to
 * memory area dest.
 *
 * @dest: memory of copy destination.
 *
 * @src: memory of copy source.
 *
 * @n: number of bytes to be copied.
 *
 * Return: returns dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
