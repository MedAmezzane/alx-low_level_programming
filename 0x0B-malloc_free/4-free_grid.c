#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the memory allocated for a 2D array of integers.
 * @grid: Pointer to the 2D array to be freed.
 * @height: The height of the grid.
 *
 * This function releases the memory occupied by the 2D array and its rows.
 *
 * Author: MedAMEZZANE
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
