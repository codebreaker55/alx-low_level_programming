#include "lists.h"

/**
 * find_listint_loop - a funtion to find a loop in a linked list
 *
 * @head: is a pointer to the linked list
 *
 * Return: The address of the node where the loop starts
 *	or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
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
