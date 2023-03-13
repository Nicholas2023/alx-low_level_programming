#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description: Frees a 2D grid
 * @grid: grid to be freed
 * @height: Height of the grid
 *
 * Return: Void
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
