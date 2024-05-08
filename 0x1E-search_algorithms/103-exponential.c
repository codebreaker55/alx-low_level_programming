#include "search_algos.h"

/**
  * my_binary_search - a function that searches for a value in a sorted array,
  *			of integers using the binary search algorithm
  *
  * @array: is a pointer to the first element of the array to search for
  * @left: is the starting index of the "sub" array used to search
  * @right: is the ending index of the "sub"array used to search
  * @value: is the value to search for
  *
  * Return: if is not present in array or if array is NULL, return -1
  *	otherwise, return the index where the value is located
  *
  * Description: it prints the "sub" array being searched after each change
 */

int my_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}
	return (-1);
}

/**
  * exponential_search - a function that searches for a value in a sorted,
  *	array of integers using the Exponential search algorithm
  *
  * @array: is a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value: is the value to search for
  *
  * Return: the first index where value is located, otherwise if value,
  * is not present in array or if array is NULL, the function must return -1
  *
  * Description: it prints a value every time it is compared in the array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t n = 0, right;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		for (n = 1; n < size && array[n] <= value; n = n * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		}
	}
	right = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, right);
	return (my_binary_search(array, n / 2, right, value));
}
