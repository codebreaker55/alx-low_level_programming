#include "lists.h"

/**
 * *add_nodeint - function that adds a new node
 *	at the beginning of a listint_t list
 *
 * @head: is a dereferencing of a pointer
 * @n: is an integer
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg_node = (listint_t *)malloc(sizeof(listint_t));

	if (beg_node == 0 || head == 0)
	{
		return (NULL);
	}
	beg_node->n = n;
	beg_node->next = NULL;

	if (*head != NULL)
	{
		beg_node->next = *head;
	}
	*head = beg_node;
	return (beg_node);
}
