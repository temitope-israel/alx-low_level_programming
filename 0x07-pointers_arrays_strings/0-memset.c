#include "main.h"

/**
 * _memset - function that fills
 * memory with a constant byte.
 *
 * @s: pointer to address to be filled
 *
 * @b: const for filling
 *
 * @n: n bytes of mem area to be filled
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(*s));

	return (s);

}
