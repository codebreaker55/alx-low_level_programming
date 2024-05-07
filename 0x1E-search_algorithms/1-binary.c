#include "search_algos.h"

/**
 * recursive_search - a function that searches for a value in a sorted array,
 *	of integers using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index of the number, where value is located
*/

int recursive_search(int *array, size_t size, int value)
{
	size_t haf_s = size / 2;
	size_t n;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	printf("Searching in array");

	for (n = 0; n < size; n++)
	{
		printf("%s %d", (n == 0) ? ":" : ",", array[n]);
	}
	printf("\n");

	if (haf_s && size % 2 == 0)
	{
		haf_s--;
	}
	if (value == array[haf_s])
	{
		return ((int)haf_s);
	}
	if (value < array[haf_s])
	{
		return (recursive_search(array, haf_s, value));
	}
	haf_s++;

	return (recursive_search(array + haf_s, size - haf_s, value) + haf_s);
}

/**
 * binary_search - a function that searches for a value in a sorted array,
 *	of integers using the Binary search algorithm using "recursive_search"
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int indx;

	indx = recursive_search(array, size, value);

	if (indx >= 0 && array[indx] != value)
	{
		return (-1);
	}
	return (indx);
}
