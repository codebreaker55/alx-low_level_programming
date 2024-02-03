#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: is the hash table
 *
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *n_node;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
	{
		return;
	}
	for (n = 0; n < ht->size; n++)
	{
		while (ht->array[n] != NULL)
		{
			n_node = ht->array[n]->next;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = n_node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
