#include "hash_tables.h"

/**
 * hash_table_set - function that generate hash index
 * @ht: hash table
 * @key: string to be stored
 * @value: value to store with his key
 * Return: 1 in success and 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *current = ht;
	hash_node_t *new_node;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = strdup(value);
			if (!(ht->array[j]->value))
				return (0);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = malloc(strlen(key) + 1);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc(strlen(key) + 1);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = current->array[index];
	current->array[index] = new_node;
	return (1);
}
