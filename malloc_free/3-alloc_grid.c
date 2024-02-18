#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- allocates memory to a grid with 0's
 * @width: the width of the grid or the rows
 * @height: the height of the grid or the number of columns
 *
 * Return: NULL on fail or any number <= 0 success return grid
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int column;
	int row;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (column = 0; column < height; column++)
	{
		grid[column] = (int *)malloc(sizeof(int) * width);

		if (grid[column] == NULL)
		{
			for (row = 0; row < column; row++)
			{
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		for (row = 0; row < width; row++)
		{
			grid[column][row] = 0;
		}
	}

	return (grid);
}
