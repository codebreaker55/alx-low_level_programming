#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 *	of a listint_t linked list
 *
 * @head: is a pointer to the listint_t linked list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 *	if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int n_sum = 0;

	if (head == 0)
	{
		return (0);
	}
	while (head != 0)
	{
		n_sum = n_sum + head->n;
		head = head->next;
	}
	return (n_sum);
}
