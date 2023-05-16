#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid – this frees the 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * Description: this frees memory of grid
 * Return: null
 *
 */
void free_grid(int **grid, int height)
{
	int u;

	if (grid == NULL || height == 0)
		return;
	for (u = 0; u < height; u++)
		free(grid[u]);
	free(grid);
}
