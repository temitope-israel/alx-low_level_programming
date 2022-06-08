#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that
 * prints the last digit of a number.
 *
 * @c: Number whose last digit is to
 * be printed
 *
 * Return: 1 upon success.
 */

int print_last_digit(int c)
{
	if (c < 0) 
	{
		return 10 - (c % 10);
	} 
	else
	{
		return c % 10;
    	}

}
