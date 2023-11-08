#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 *	on each element of an array
 *
 * @array: is the name of an array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array != 0 && size != 0 && action != 0)
	{
		while (array <= last)
		{
			action(*array++);
		}
	}
}
