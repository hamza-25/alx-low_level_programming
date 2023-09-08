#include "hash_tables.h"

/**
 * hash_table_delete - function that delete hash table
 * @ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp_node = NULL;

	if (!ht)
	{
		return;
	}
	while (index < ht->size)
	{
		while (ht->array[index] != NULL)
		{
			temp_node = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
