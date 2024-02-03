#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table
 *
 * @ht: is the hash table
 *
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *t_node;
	char flag;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");

	for (n = 0; n < ht->size; n++)
	{
		t_node = ht->array[n];
		while (t_node != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", t_node->key, t_node->value);
			flag = 1;
			t_node = t_node->next;
		}
	}
	printf("}\n");
}
