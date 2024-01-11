#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: is the address of the head
 *
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
