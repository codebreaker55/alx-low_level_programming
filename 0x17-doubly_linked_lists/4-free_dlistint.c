#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: is a pointer to the current head
 *
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nod;

	while (head !=  NULL)
	{
		nod = head;
		head = head->next;
		free(nod);
	}
}
