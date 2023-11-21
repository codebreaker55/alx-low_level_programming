#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: is a pointer of the linked list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head != 0)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
