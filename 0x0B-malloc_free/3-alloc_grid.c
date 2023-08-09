#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D array of integers with the specified width and
 *				height.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array, or NULL if memory
 *			allocation fails or width/height are non-positive.
 */
int **alloc_grid(int width, int height)
{
	int **grid, row, col;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == NULL)
		return (NULL);
	else
	{
		for (row = 0; row < height; row++)
		{
			grid[row] = malloc(sizeof(**grid) * width);
			if (grid[row] == NULL)
			{
				/* Free everything if malloc fails */
				while (row--)
					free(grid[row]);
				free(grid);
				return (NULL);
			}

			for (col = 0; col < width; col++)
				grid[row][col] = 0;
		}
	}

	return (grid);
}
