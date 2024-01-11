#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *	of a dlistint_t linked list
 *
 * @head: is a pointer to the current head
 * @index: is the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
