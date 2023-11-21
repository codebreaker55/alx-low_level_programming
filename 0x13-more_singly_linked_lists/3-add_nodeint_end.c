#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node
 *	at the end of a listint_t list
 *
 * @head: is a dereferencing of a pointer of a listint_t list
 * @n: is an integer of the listint_t list
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *ptr;

	if (last_node == 0 || head == 0)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = 0;

	if (*head == 0)
	{
		*head = last_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != 0)
		{
			ptr = ptr->next;
		}
		ptr->next = last_node;
	}
	return (last_node);
}

