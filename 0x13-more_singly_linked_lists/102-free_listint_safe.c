#include "lists.h"

/**
 * find_listint_t_loop - a funtion to find a loop in a linked list
 *
 * @head: is a pointer to the linked list
 *
 * Return: the node address at which the loop starts
 *	if no loop return NULL
*/

listint_t *find_listint_t_loop(listint_t *head)
{
	listint_t *temp, *last;

	if (head == 0)
	{
		return (NULL);
	}
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
		{
			return (last);
		}
		for (temp = head; temp != last; temp = temp->next)
		{
			if (temp == last->next)
			{
				return (last->next);
			}
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list
 *
 * @h: is a dereferencing of a pointer of the listint_t list
 *
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node, *loop_n;
	size_t size;
	int curr_l = 1;

	if (h == 0 || *h == 0)
	{
		return (0);
	}
	loop_n = find_listint_t_loop(*h);

	for (size = 0; (curr_l || *h != loop_n) && *h != NULL; *h = next_node)
	{
		size++;
		next_node = (*h)->next;

		if (*h == loop_n && curr_l)
		{
			if (loop_n == loop_n->next)
			{
				free(*h);
				break;
			}
			size++;
			next_node = next_node->next;
			free((*h)->next);
			curr_l = 0;
		}
		free(*h);
	}

	*h = NULL;
	return (size);
}
