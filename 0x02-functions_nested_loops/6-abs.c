#include "main.h"

/**
 * _abs - a function that
 * that computes the absolute value.
 * of an integer.
 * @r: Character to be checked
 *
 * Return: 1 upon success.
 */

int _abs(int r)
{

	if (r < 0)
		r *= -1;
	else if (r == 0)
		r = r;	
	return (1);
}
