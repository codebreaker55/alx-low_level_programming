#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *	in a linked dlistint_t list
 *
 * @h is the address of the head
 *
 * Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t ele_num = 0;

	while (h != NULL)
	{
		h = h->next;
		ele_num++;
	}
	return (ele_num);
}
