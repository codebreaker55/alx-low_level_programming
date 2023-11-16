#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: is the address of the poiter to the head node
 * @str: is a pointer of the linked list node
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (head == NULL || tail == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		tail->str = strdup(str);
		if (tail->str == NULL)
		{
			free(tail);
			return (NULL);
		}
		tail->len = strlen_f(tail->str);
	}
		if (last_node != NULL)
		{
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = tail;
		}
		else
		{
			*head = tail;
		}
		return (tail);
}
