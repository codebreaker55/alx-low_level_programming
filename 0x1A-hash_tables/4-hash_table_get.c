#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element
 *	or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int ind;

	if (ht == NULL || ht->size == 0 || ht->array == NULL
			|| key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	ind = key_index(const unsigned char *)key, ht->size;
	temp = ht->array[ind];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
