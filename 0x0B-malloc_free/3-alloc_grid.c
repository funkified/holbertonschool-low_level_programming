#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on failure
 * if width or height is 0 or negative return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w = 0;
	int h = 0;

	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		free(grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (w = h; w >= 0; w--)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
	}

	while (h < height)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
		h++;
	}

	return (grid);
	free(grid);
}
