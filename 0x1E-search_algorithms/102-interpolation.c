#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value
 *	in a sorted array of integers using the Interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t posit, low, high;
	double d;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (size)
	{
		d = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		posit = (size_t)(low + d);
		printf("Value checked array[%d]", (int)posit);

		if (posit >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[posit]);
		}

		if (array[posit] == value)
		{
			return ((int)posit);
		}
		if (array[posit] < value)
			low = posit + 1;
		else
		{
			high = posit - 1;
		}
		if (low == high)
			break;
	}
	return (-1);
}
