#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 *
 * @width: the array width
 * @height: the array height
 *
 * Return: pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			grid[m][n] = 0;
		}
	}

	return (grid);
}
