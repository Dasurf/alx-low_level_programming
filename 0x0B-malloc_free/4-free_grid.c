#include <stdlib.h>

/**
 * free_grid -  A function that frees up a 2d array grid
 *
 * @grid: A double pointer 2d grid
 * @height: The height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
