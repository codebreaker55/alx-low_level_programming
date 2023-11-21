#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a new node
 *	at a given position
 *
 * @head: is a dereferencing of a pointer of the linked list
 * @n: is an integer
 * @idx: is the index of the list where the new node should be added
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ins_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *ptr;
	unsigned int len;

	if (head == 0 || ins_node == 0)
	{
		return (NULL);
	}
	ins_node->n = n;
	ins_node->next = 0;

	if (idx == 0)
	{
		ins_node->next = *head;
		*head = ins_node;
		return (ins_node);
	}
	ptr = *head;

	while (ptr != 0)
	{
		if (len == idx - 1)
		{
			ins_node->next = ptr->next;
			ptr->next = ins_node;
			return (ins_node);
		}
		len++;
		ptr = ptr->next;
	}
	free(ins_node);
	return (NULL);
}
