#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *	at a given position
 *
 * @h: is a pointer to te head
 * @idx: is the index of the list where the new node should be added
 *	Index starts at 0
 * @n: is the integer for the new node
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
		idx--;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
