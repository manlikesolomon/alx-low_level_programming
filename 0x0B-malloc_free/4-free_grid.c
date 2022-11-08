#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memeory allocation
 * @grid: 2d array
 * @height: number of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
