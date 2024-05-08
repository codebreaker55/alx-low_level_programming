#include "search_algos.h"
#include <math.h>

/**
 * jump_list - a function that searches for a value in a sorted list of
 *	integers using the Jump search algorithm
 *
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 *
 * Return: a pointer to the first node where value is located,
 * If value is not present in head or if head is NULL, return NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t indx, x, y;
	listint_t *prev;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}
	y = (size_t)sqrt((double)size);
	indx = 0;
	x = 0;

	do {
		prev = list;
		x++;
		indx = x * y;

		while (list->next && list->index < indx)
		{
			list = list->next;
		}
		if (list->next == NULL && indx != list->index)
		{
			indx = list->index;
		}
		printf("Value checked at index [%d] = [%d]\n", (int)indx, list->n);

	} while (indx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
	}
	return (NULL);
}
