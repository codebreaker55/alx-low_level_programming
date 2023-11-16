#include "lists.h"

/**
 * strlen_f - a function that returns the length of string
 *
 * @stg: is the string to be checked
 *
 * Return: the length of the string
*/

int strlen_f(char *stg)
{
	int n = 0;

	if (stg == NULL)
	{
		return (0);
	}
	while (*stg++)
	{
		n++;
	}
	return (n);
}

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: is a pointer to the first node
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", strlen_f(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
