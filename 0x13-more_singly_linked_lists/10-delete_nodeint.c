#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 *	index of a listint_t linked list
 *
 * @head: is a dereferencing of a pointer of the linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *pre_node;
	unsigned int len = 0;

	if (head == 0 || *head == 0)
	{
		return (-1);
	}
	curr_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}
	while (curr_node != 0)
	{
		if (len == index)
		{
			pre_node->next = curr_node->next;
			free(curr_node);
			return (1);
		}
		len++;
		pre_node = curr_node;
		curr_node = curr_node->next;
	}
	return (-1);
}
