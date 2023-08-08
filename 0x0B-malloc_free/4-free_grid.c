#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
