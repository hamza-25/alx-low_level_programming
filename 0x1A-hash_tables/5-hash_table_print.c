#include "hash_tables.h"

/**
 * hash_table_print - function that print the content of hash table
 * @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	if (!ht)
	{
		printf("{}");
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
		index++;
	}
	printf("}\n");
}
