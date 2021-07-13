#include "holberton.h"

/**
 * free_grid - free memmory of grid
 * @grid: pointer to grid
 * @height: height of grid
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int width;

	for (width = 0; width < height; width++)
	{
		free(grid[width]);
	}
	free(grid);
}
