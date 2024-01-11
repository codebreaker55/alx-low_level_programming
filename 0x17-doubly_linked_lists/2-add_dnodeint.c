#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 *	at the beginning of a dlistint_t list
 *
 * @head: is the address of a pointer to the current head
 * @n: is an integer field of the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	{
		return (new_node ? free(new_node), NULL : NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
