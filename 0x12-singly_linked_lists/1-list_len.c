#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *	in a linked list_t list
 *
 * @h: is a pointer of the linked list
 *
 * Return: the number of elements in a linked list_t list
*/

size_t list_len(const list_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		h = h->next;
	}
	return (s);
}
