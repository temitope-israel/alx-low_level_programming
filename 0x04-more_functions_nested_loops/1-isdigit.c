#include "main.h"

/**
 * _isdigit - a function that
 * checks if the character passed in is a digit.
 *
 * @c: digit to be checked
 *
 * Return: 1 upon success.
 */

int _isdigit(int c)
{
	if (c >= '0'  && c <= '9')
		return (1);
	else
		return (0);
}
