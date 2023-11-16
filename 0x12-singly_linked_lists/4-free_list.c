#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head: is a pointer to the node
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *head_node;
	list_t *head_2;

	if (head == NULL)
	{
		return;
	}
	head_node = head;

	while (head_node != NULL)
	{
		head_2 = head_node->next;
		free(head_node->str);
		free(head_node);
		head_node = head_2;
	}
}
