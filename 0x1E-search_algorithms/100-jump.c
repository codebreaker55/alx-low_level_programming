#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted array,
 *	of integers using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	int indx, n, m, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	n = (int)sqrt((double)size);
	m = 0;
	prev = indx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
		{
			return (indx);
		}
		m++;
		prev = indx;
		indx = n * m;
	} while (indx < (int)size && array[indx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, indx);

	for (; prev <= indx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
	}
	return (-1);
}
