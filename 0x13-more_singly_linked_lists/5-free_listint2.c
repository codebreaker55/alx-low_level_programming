#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *	and sets the head to NULL
 *
 * @head: is a dereferencing of a pointer of the listint_t list
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *free_node, *ptr;

	if (head == 0)
	{
		return;
	}
	free_node = *head;

	while (free_node != 0)
	{
		ptr = free_node;
		free_node = free_node->next;
		free(ptr);
	}
	*head = NULL;
}
