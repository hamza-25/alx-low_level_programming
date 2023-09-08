#include "hash_tables.h"

/**
 * hash_table_get - function that get value from key given
 * @ht: hash table
 * @key: string to be stored
 * Return: return the char * value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
