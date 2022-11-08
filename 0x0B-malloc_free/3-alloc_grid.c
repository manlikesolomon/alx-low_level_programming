#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointed to a 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));

	if (grid == 0)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid);
				i--;
			}
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (grid);
}
