#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 *	of all the data (n) of a dlistint_t linked list
 *
 * @head: is a pointer to the current head
 *
 * Return: if the list is empty, return 0
 *	else return the sum of all the data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
