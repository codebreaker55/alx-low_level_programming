#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: is the aaddress of the pointer to the head node
 * @str: is a pointer of the node
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *head_2 = malloc(sizeof(list_t));

	if (head_2 == NULL || head == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		head_2->str = strdup(str);
		if (head_2->str == NULL)
		{
			free(head_2);
			return (NULL);
		}
		head_2->len = strlen_f(head_2->str);
	}
	head_2->next = *head;
	*head = head_2;
	return (head_2);
}
