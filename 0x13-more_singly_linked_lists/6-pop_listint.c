#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *	and returns the head node’s data (n)
 *
 * @head: is a dereferencing of a pointer of the listint_t linked list
 *
 * Return: the head node’s data (n)
 *	if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t head_node;
	int n_data;

	if (*head == 0 || head == 0)
	{
		return (0);
	}
	else
	{
		head_node = (*head)->next;
		n_data = (*head)->n;
		free(*head);
		*head = head_node;
	}
	return (n_data);
}
