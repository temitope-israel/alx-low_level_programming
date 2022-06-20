#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets
 * the length of a prefix substring.
 *
 * @s: string to be scanned.
 *
 * @accept: string with characters
 * to match.
 *
 * Return: returns number of characters
 * from *s that matched *accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
