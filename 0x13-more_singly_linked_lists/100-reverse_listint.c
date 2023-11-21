#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list
 *
 * @head: is a dereferencing of a pointer of the listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_node = NULL;
	listint_t *curr_node = NULL;

	if (head == 0 || *head == 0)
	{
		return (NULL);
	}
	curr_node = *head;
	*head = NULL;

	while (curr_node != NULL)
	{
		rev_node = curr_node->next;
		curr_node->next = *head;
		*head = curr_node;
		curr_node = rev_node;
	}
	return (*head);
}

