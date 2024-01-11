#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 *      at the end of a dlistint_t list
 *
 * @head: is the address of a pointer to the current head
 * @n: is an integer field of the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *nod;

	if (head == NULL || new_node == NULL)
	{
		return (new_node ? free(new_node), NULL : NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		nod = *head;
		while (nod->next != NULL)
		{
			nod = nod->next;
		}
		nod->next = new_node;
		new_node->prev = nod;
	}
	return (new_node);
}
