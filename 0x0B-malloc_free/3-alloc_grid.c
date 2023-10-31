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
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == 0)
	{
		return (NULL);
	}
	while (h < height)
	{
		ptr[h] = (int *) malloc((width) * sizeof(int));
		
		if (ptr[h] == NULL)
		{
			while (w < h)
			{
			w++;
			free(ptr[w]);
			}
			free(ptr);
			return (NULL);
		}
		h++;
	}
	return (ptr);
}
