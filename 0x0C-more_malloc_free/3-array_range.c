#include "main.h"

/**
 * *array_range - function that creates an array of integers
 *
 * @min: is an integer
 * @max: is an integer
 *
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int str;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		str++;
		min++;
		ptr[str] = min;
	}
	return (ptr);
}
