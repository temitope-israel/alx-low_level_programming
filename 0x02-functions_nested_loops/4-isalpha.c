#include "main.h"

/**
 * _isalpha - a function that
 * checks if a character is an alphabet or not.
 *
 * @c: Character to be checked
 *
 * Return: 1 upon success.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
