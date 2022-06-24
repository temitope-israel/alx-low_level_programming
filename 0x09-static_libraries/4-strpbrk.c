#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches
 * a string for any of a set of bytes.
 *
 * @s: string to be scanned.
 *
 * @accept: string containing characters
 * to match.
 *
 * Return: returns a pointer to the
 * character in *s that matches one
 * of the characters in *accept else NULL.
 */


char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
