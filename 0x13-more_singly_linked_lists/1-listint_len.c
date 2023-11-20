#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 *	in a linked listint_t list
 *
 * @h: is a pointer of the linked listint_t list
 *
 * Return: the number of elements in a linked listint_t list
*/

size_t listint_len(const listint_t *h)
{
	int LEN;

	for (LEN = 0; h != NULL; LEN++)
	{
		h = h->next;
	}
	return (LEN);
}
