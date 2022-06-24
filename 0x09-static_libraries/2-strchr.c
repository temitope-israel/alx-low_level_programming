#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates
 * a character in a string.
 *
 * @s: string from where search is to
 * be done.
 *
 * @c: search character.
 *
 * Return: returns char
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
