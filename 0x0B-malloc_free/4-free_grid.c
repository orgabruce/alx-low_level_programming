#include <stdlib.h>

/**
 * free_grid - function frees 2d array
 * @grid: 2d array
 * @height: height dimension of array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
