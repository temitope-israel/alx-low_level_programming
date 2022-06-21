#include "main.h"
#include "_putchar.c"

/**
 * print_chessboard - function that
 * prints the chessboard.
 *
 * @a: pointer function
 *
 * Return: returns nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
