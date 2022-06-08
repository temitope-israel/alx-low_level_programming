#include "main.h"
#include <stdio.h>

/**
 * _islower - a function that
 * checks for lowercase character.
 *
 * @c: Character to be checked
 *
 * Return: 1 upon success.
 */

int _islower(int c)
{
	int x;

	x = 97;
	while (x <= 122)
	{
		if (x != c)
		{
			/**x++;*/
		/*	_putchar(x);*/
		}
		else
		{
			/*_putchar(c);*/
	/*		printf("SUCCESS! The ;etter entered is: %d. It is lowercase.", c);*/
			return (1);
		}
	}
}
