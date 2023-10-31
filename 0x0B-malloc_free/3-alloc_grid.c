#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 *	to a 2 dimensional array of integers
 *
 * @width: is an innteger
 * @height: is an integer
 *
 * Return: NULL on failure or if width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int h = 0, w = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == 0)
	{
		return (NULL);
	}
	while (h < height)
	{
		grid[h] = (int *) malloc((width) * sizeof(int));

		if (grid[h] == NULL)
		{
			while (w < h)
			{
			free(grid[w]);
			w++;
			}
			free(grid);
			return (NULL);
		}
		h++;
	}
	return (grid);
}
