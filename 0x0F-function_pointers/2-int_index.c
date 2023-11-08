#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: is the name of the array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to function int_index
 *
 * Return: index of the first element
 *	for which the cmp function does not return 0
 *	If no element matches, return -1
 *	If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int num = 0;

	if (array != 0 && size != 0 && cmp != 0)
	{
		while (num <= size - 1)
		{
			if (cmp(array[num]) != 0)
			{
				return (num);
			}
			num++;
		}
	}
	return (-1);
}
