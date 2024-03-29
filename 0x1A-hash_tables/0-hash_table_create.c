#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table,
 *	if fail return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int n = 0;

	h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
	{
		return (NULL);
	}
	h_table->size = size;
	h_table->array = malloc(size * sizeof(hash_node_t *));

	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	while (n < size)
	{
		h_table->array[n] = NULL;
		n++;
	}
	return (h_table);
}
