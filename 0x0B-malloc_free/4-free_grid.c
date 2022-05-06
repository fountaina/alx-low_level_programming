#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2D grid previously created
 * @grid: the grid
 * @height: the height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
