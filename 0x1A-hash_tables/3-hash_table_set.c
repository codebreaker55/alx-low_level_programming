#include "hash_tables.h"

/**
 * get_hash_node - function that creats new hash node
 *
 * @key: is the key of the node
 * @value: is the value associated with the key
 *
 * Return: on success return the new node, otherwise return NULL
*/

hash_node_t *get_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);

	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *h_node, *temp;
	char *n_val;

	if (ht == NULL || ht->size == 0 || ht->array == NULL
		|| key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	ind = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ind];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			n_val = strdup(value);
			if (n_val == NULL)
			{
				return (0);
			}
			free(temp->value);
			temp->value = n_val;
			return (1);
		}
		temp = temp->next;
	}
	h_node = get_hash_node(key, value);

	if (h_node == NULL)
	{
		return (0);
	}
	h_node->next = ht->array[ind];
	ht->array[ind] = h_node;
	return (1);
}
