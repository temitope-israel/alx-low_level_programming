#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free up a 2d grid.
 *
 * @grid: double pointer 2d grid.
 *
 * @height: height of grid.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
