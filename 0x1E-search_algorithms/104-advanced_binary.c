#include "search_algos.h"

/**
 * adv_bin_rec_search - a function that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
*/

int adv_bin_rec_search(int *array, size_t size, int value)
{
	size_t half_s = size / 2;
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

	if (half_s && size % 2 == 0)
	{
		half_s--;
	}
	if (value == array[half_s])
	{
		if (half_s > 0)
		{
			return (adv_bin_rec_search(array, half_s + 1, value));
		}
		return ((int)half_s);
	}
	if (value < array[half_s])
	{
		return (adv_bin_rec_search(array, half_s + 1, value));
	}
	half_s++;
	return (adv_bin_rec_search(array + half_s, size - half_s, value) + half_s);
}

/**
 * advanced_binary - a function that searches for a value,
 *	in a sorted array of integers
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, or -1,
 *	if value is not present in array or if array is NULL
*/

int advanced_binary(int *array, size_t size, int value)
{
	int indx;

	indx = adv_bin_rec_search(array, size, value);

	if (indx >= 0 && array[indx] != value)
	{
		return (-1);
	}
	return (indx);
}
