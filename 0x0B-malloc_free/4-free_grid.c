#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 *	previously created by your alloc_grid function
 *
 * @grid: is a two dimensional array
 * @height: is the integer to be freed
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
