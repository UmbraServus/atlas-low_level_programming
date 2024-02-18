#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- frees the memory allocated from creating a grid
 * @grid: the grid to be freed
 * @height: the rows to be freed
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
