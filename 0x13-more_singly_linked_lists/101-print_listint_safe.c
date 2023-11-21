#include "lists.h"

/**
 * _re - function that reallocates memory for array of pointers
 *	to nodes in a linked list
 *
 * @old: is the old list that will get append
 * @size: is the size of the new list
 * @new: is the new nnode to be added to the new list
 *
 * Return: a pointer to the new list
*/

const listint_t **_re(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t len = 0;

	new_list = malloc(size * sizeof(listint_t *));

	if (!new_list)
	{
		free(old);
		exit(98);
	}
	while (len < size - 1)
	{
		new_list[len] = old[len];
		len++;
	}
	new_list[len] = new;
	free(old);
	return (new_list);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * @head: is a pointer to the node of the listint_t linked list
 *
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **link_list = NULL;
	size_t len, N = 0;

	while (head != NULL)
	{
		for (len = 0; len < N; len++)
		{
			if (head == link_list[len])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(link_list);
				return (N);
			}
		}
		N++;
		link_list = _re(link_list, N, head);

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(link_list);
	return (N);
}
