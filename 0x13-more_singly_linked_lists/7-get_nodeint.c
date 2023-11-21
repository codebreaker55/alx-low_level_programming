#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 *	of a listint_t linked list
 *
 * @head: is a pointer to the listint_t linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *rtrn_node;
	unsigned int n_num = 0;

	if (head == 0)
	{
		return (NULL);
	}
	rtrn_node = head;
	while (rtrn_node != NULL && n_num < index)
	{
		rtrn_node = rtrn_node->next;
		n_num++;
	}
	return (rtrn_node);
}
